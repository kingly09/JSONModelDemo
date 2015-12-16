//
//  QuestionModel.h
//  JSONModelDemo
//
//  Created by kingly on 15/12/16.
//  Copyright © 2015年 kingly. All rights reserved.
//

#import "JSONModel.h"
#import "SmallQuestionModel.h"
@protocol QuestionModel
@end

@interface QuestionModel : JSONModel
@property (assign, nonatomic) int bigIndex; //大题索引
@property (strong, nonatomic) NSString* title;//题干内容
@property (assign, nonatomic) int fraction; //分值
@property (strong, nonatomic) NSString* bigQuesiont; //大问题
@property (assign, nonatomic) int playNum; //播放次数
@property (assign, nonatomic) int lookTime; //看题时间
@property (assign, nonatomic) int readinessTime;  //准备时间
@property (strong, nonatomic) NSString* titleAudio;   //题干音频
@property (strong, nonatomic) NSString* questionAudio; //大题音频
@property (strong, nonatomic) NSString* picturefile; //图片
@property (strong, nonatomic) NSArray<SmallQuestionModel>* smallInfo;

@end
