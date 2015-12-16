//
//  UnitIDModel.h
//  JSONModelDemo
//
//  Created by kingly on 15/12/16.
//  Copyright © 2015年 kingly. All rights reserved.

//单元包索引文件格式定义

#import "JSONModel.h"
@protocol UnitIDModel
@end

@interface UnitIDModel : JSONModel

@property (strong, nonatomic) NSString* fileID;  //文件后缀为icw; 例如: guid_textbook.icw;


@end
