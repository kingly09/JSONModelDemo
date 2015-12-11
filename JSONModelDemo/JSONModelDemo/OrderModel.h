//
//  OrderModel.h
//  JSONModelDemo
//
//  Created by kingly on 15/12/10.
//  Copyright © 2015年 kingly. All rights reserved.
//

#import "JSONModel.h"
#import "ProductModel.h"

@interface OrderModel : JSONModel
@property (assign, nonatomic) int order_id;
@property (assign, nonatomic) float total_price;
//@property (strong, nonatomic) ProductModel* product;
@property (strong, nonatomic) NSArray<ProductModel>* products;

@end