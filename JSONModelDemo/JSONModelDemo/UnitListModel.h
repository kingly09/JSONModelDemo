//
//  UnitListModel.h
//  JSONModelDemo
//
//  Created by kingly on 15/12/16.
//  Copyright © 2015年 kingly. All rights reserved.
//

#import "JSONModel.h"
#import "UnitIDModel.h"

@interface UnitListModel : JSONModel

@property (strong, nonatomic) NSArray<UnitIDModel>* unitInfoList;

@end
