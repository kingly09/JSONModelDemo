//
//  WordModel.h
//  JSONModelDemo
//
//  Created by kingly on 15/12/15.
//  Copyright © 2015年 kingly. All rights reserved.

//单词

#import "JSONModel.h"
#import "AudioModel.h"

@protocol WordModel
@end

@interface WordModel : JSONModel

@property (strong, nonatomic) NSString* contextType; //1为单词， 2为文章， 3为句子，当不为1时，只sentence , index, audiofile, picturefile字段内容
@property (strong, nonatomic) NSString* word;   //单词
@property (strong, nonatomic) NSString* phoneticSymbol; //音标
@property (strong, nonatomic) NSString* syllable; //音节
@property (strong, nonatomic) NSString* paraphrase; //释义
@property (assign, nonatomic) int index;        //索引号
@property (strong, nonatomic) NSString* sentence; //句子 （富文本表示）
@property (strong, nonatomic) NSString* audiofile; //音频文件
@property (strong, nonatomic) NSString* picturefile; //图片
@property (strong, nonatomic) NSArray<AudioModel>* audioTextInfo;

@end
