//
//  WordModel.h
//  JSONModelDemo
//
//  Created by kingly on 15/12/15.
//  Copyright © 2015年 kingly. All rights reserved.
//

#import "JSONModel.h"
#import "AudioModel.h"

@protocol WordModel
@end

@interface WordModel : JSONModel

@property (strong, nonatomic) NSString* contextType;
@property (strong, nonatomic) NSString* word;
@property (strong, nonatomic) NSString* phoneticSymbol;
@property (strong, nonatomic) NSString* syllable;
@property (strong, nonatomic) NSString* paraphrase;
@property (strong, nonatomic) NSString* sentence;
@property (strong, nonatomic) NSString* audiofile;
@property (strong, nonatomic) NSString* picturefile;
@property (strong, nonatomic) NSArray<AudioModel>* audioTextInfo;

@end
