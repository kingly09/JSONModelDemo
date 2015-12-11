//
//  ProductModel.h
//  JSONModelDemo
//
//  Created by kingly on 15/12/10.
//  Copyright © 2015年 kingly. All rights reserved.
//

#import "JSONModel.h"

@protocol ProductModel
@end

@interface ProductModel : JSONModel
@property (assign, nonatomic) int id;
@property (strong, nonatomic) NSString* name;
@property (assign, nonatomic) float price;

@end
