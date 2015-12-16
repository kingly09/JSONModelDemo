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

@property (assign, nonatomic) int index;  //索引号
@property (assign, nonatomic) int type;   //业务类型 1-500为业务编号，600-900为其他类型，1为时文，2为单词跟读，3为课文跟读，4为模考，5为同步训练，6为微技能训练。600为索引文件
@property (strong, nonatomic) NSString* nameType;//业务名称
@property (strong, nonatomic) NSString* showName;//显示文字
@property (strong, nonatomic) NSString* fileID;  //为36位GUID_4为业务编号
@property (strong, nonatomic) NSString* fPath;   //文件路径
@property (strong, nonatomic) NSArray<BusinessContextModel>* context;

@end
