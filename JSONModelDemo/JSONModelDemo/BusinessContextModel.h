//
//  BusinessContextModel.h
//  JSONModelDemo
//
//  Created by kingly on 15/12/16.
//  Copyright © 2015年 kingly. All rights reserved.
//

#import "JSONModel.h"
@protocol BusinessContextModel
@end

@interface BusinessContextModel : JSONModel

@property (assign, nonatomic) int fileType; //1 为文本，2为图片，3为音频文件
@property (assign, nonatomic) int showIndex;


@end
