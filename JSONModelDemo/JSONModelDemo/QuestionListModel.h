//
//  QuestionListModel.h
//  JSONModelDemo
//
//  Created by kingly on 15/12/16.
//  Copyright © 2015年 kingly. All rights reserved.
//

#import "JSONModel.h"
#import "QuestionModel.h"

@interface QuestionListModel : JSONModel

@property (strong, nonatomic) NSArray<QuestionModel> *bigQuestionInfo;

@end
