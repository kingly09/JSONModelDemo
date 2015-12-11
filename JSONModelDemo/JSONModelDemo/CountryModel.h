//
//  CountryModel.h
//  JSONModelDemo
//
//  Created by kingly on 15/12/10.
//  Copyright © 2015年 kingly. All rights reserved.
//

#import "JSONModel.h"

@interface CountryModel : JSONModel

@property (assign, nonatomic) int id;
@property (strong, nonatomic) NSString* country;
@property (strong, nonatomic) NSString* dialCode;
@property (assign, nonatomic) BOOL isInEurope;

@end