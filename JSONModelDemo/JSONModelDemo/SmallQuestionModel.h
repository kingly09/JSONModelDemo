//
//  SmallQuestionModel.h
//  JSONModelDemo
//
//  Created by kingly on 15/12/16.
//  Copyright © 2015年 kingly. All rights reserved.
//

#import "JSONModel.h"
#import "AnswerModel.h"

@protocol SmallQuestionModel
@end

@interface SmallQuestionModel : JSONModel

@property (assign, nonatomic) int number;        //小题个数
@property (assign, nonatomic) int playNum; //小题播放次数
@property (assign, nonatomic) int lookTime; //看题时间
@property (assign, nonatomic) int readinessTime;  //准备时间
@property (assign, nonatomic) int answerTime;   //回答时间
@property (strong, nonatomic) NSArray<AnswerModel>* smallLists;

@end
