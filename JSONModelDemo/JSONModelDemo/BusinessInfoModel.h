//
//  BusinessInfoModel.h
//  JSONModelDemo
//
//  Created by kingly on 15/12/16.
//  Copyright © 2015年 kingly. All rights reserved.
//

#import "JSONModel.h"
#import "BusinessContextModel.h"


@protocol BusinessInfoModel
@end

@interface BusinessInfoModel : JSONModel

@property (assign, nonatomic) int index;
@property (assign, nonatomic) int type;
@property (strong, nonatomic) NSString* nameType;
@property (strong, nonatomic) NSString* showName;
@property (strong, nonatomic) NSString* fileID;
@property (strong, nonatomic) NSString* fPath;
@property (strong, nonatomic) NSArray<BusinessContextModel>* context;
@end
