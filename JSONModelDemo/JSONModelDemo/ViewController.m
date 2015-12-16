//
//  ViewController.m
//  JSONModelDemo
//
//  Created by kingly on 15/12/10.
//  Copyright © 2015年 kingly. All rights reserved.
//

#import "ViewController.h"

#import "JSONModelLib.h"

#import "CountryModel.h"
#import "ProductModel.h"
#import "OrderModel.h"

#import "WordListModel.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
//    NSString *qw = @"{"Lists":[{"contextType":"1","word":"jsonModel","phoneticSymbol":"aa","syllable":"","paraphrase":"","sentence":"","audiofile":"","picturefile":"","audioTextInfo":[{"textIndex":"1","textbeg":"2","textend":"10","texttime":"0"},{"textIndex":"1","textbeg":"2","textend":"10","texttime":"0"}]}]}";
    
    
   

    NSString* json = @"{\"id\":\"10\", \"country\":\"Germany\", \"dialCode\": 49, \"isInEurope\":true}";
    NSError* err = nil;
    CountryModel* country = [[CountryModel alloc] initWithString:json error:&err];
    
    NSLog(@"id :: %d",country.id);
    NSLog(@"country :: %@",country.country);
    NSLog(@"dialCode :: %@",country.dialCode);
    NSLog(@"isInEurope :: %d",country.isInEurope);
    
    
    NSString *proJson = @"{\"id\": \"123\",\"name\": \"Product name\",\"price\": 12.95}";
    
    NSError* err01 = nil;
    ProductModel* product = [[ProductModel alloc] initWithString:proJson error:&err01];
    
    NSLog(@"id :: %d",product.id);
    NSLog(@"name :: %@",product.name);
    NSLog(@"price :: %f",product.price);
    
//    [self setOrderModel];

    [self setOrderModels];
    
    
    [self setWord];
    
    
    
}

-(void) setOrderModel{
//    NSString* json =@"{\"order_id\": 104,\"total_price\": 13.45,\"product\":{\"id\": \"123\",\"name\": \"Product name\",\"price\": 12.95}}";
//    NSError* err = nil;
//    OrderModel* order = [[OrderModel alloc] initWithString:json error:&err];
//    
//    NSLog(@"id :: %d",order.order_id);
//    NSLog(@"total_price :: %f",order.total_price);
//    NSLog(@"product name :: %@",order.product.name);
//
    


}

-(void) setOrderModels{

    NSString* json =@"{\"order_id\": 104,\"total_price\": 13.45,\"products\": [{\"id\": \"123\",\"name\": \"Product name 01 \",\"price\": 12.95},{\"id\": \"123\",\"name\": \"Product name 02\",\"price\": 12.95}]}";
    NSError* err = nil;
    OrderModel* order = [[OrderModel alloc] initWithString:json error:&err];
    
    NSLog(@"id :: %d",order.order_id);
    NSLog(@"total_price :: %f",order.total_price);
  
    ProductModel* product = [order.products  firstObject];

    NSLog(@"product name :: %@",product.name);
    
    //convert to dictionary
    NSDictionary* orderDic = [order toDictionary];
    
    NSLog(@"orderDic::%@",orderDic);
    
    
    //convert to text
    NSString* string = [order toJSONString];
    
    NSLog(@"string::%@",string);
    
    //convert to data
    NSData *d = [order toJSONData];
    NSString *text = [[NSString alloc] initWithData:d encoding:NSUTF8StringEncoding];
    NSLog(@" 测试 d: %@", text);

    

}

-(void)setWord{
    
    NSString *json = @"{\"Lists\":[{\"contextType\":\"1\",\"word\":\"jsonModel\",\"phoneticSymbol\":\"aa\",\"syllable\":\"\",\"paraphrase\":\"\",\"sentence\":\"\",\"audiofile\":\"\",\"picturefile\":\"\",\"audioTextInfo\":[{\"textIndex\":\"1\",\"textbeg\":\"2\",\"textend\":\"10\",\"texttime\":\"0\"}]}]}";
    
    NSError* err = nil;
    WordListModel *audioTextInfo = [[WordListModel alloc] initWithString:json error:&err];
    
    WordModel *wordModel = [audioTextInfo.Lists  firstObject];
    
    NSLog(@"wordModel::%@",wordModel.word);
    
     NSString* string = [audioTextInfo toJSONString];
    
    NSLog(@"string::%@",string);

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
