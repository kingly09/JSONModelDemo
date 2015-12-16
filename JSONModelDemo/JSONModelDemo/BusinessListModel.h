//
//  BusinessListModel.h
//  JSONModelDemo
//
//  Created by kingly on 15/12/16.
//  Copyright © 2015年 kingly. All rights reserved.
//

#import "JSONModel.h"
#import "BusinessInfoModel.h"

@interface BusinessListModel : JSONModel

@property (strong, nonatomic) NSArray<BusinessInfoModel>* businessInfoList;

@end
