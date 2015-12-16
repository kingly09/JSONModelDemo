//
//  BusinessListModel.h
//  JSONModelDemo
//
//  Created by kingly on 15/12/16.
//  Copyright © 2015年 kingly. All rights reserved.
//索引文件格式定义

#import "JSONModel.h"
#import "BusinessInfoModel.h"

@interface BusinessListModel : JSONModel

@property (strong, nonatomic) NSArray<BusinessInfoModel>* businessInfoList;

@end
