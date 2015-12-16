//
//  AnswerModel.h
//  JSONModelDemo
//
//  Created by kingly on 15/12/16.
//  Copyright © 2015年 kingly. All rights reserved.
//

#import "JSONModel.h"

@protocol AnswerModel
@end

@interface AnswerModel : JSONModel

@property (assign, nonatomic) int index;        //索引号
@property (strong, nonatomic) NSString* question; //问题
@property (strong, nonatomic) NSString* audio; //音频文件
@property (strong, nonatomic) NSString* fraction; //分值
@property (strong, nonatomic) NSString* answer;   //答案

@end
