//
//  AudioModel.h
//  JSONModelDemo
//
//  Created by kingly on 15/12/15.
//  Copyright © 2015年 kingly. All rights reserved.
//

#import "JSONModel.h"

@protocol AudioModel
@end

@interface AudioModel : JSONModel

@property (assign, nonatomic) int textIndex;
@property (assign, nonatomic) int textbeg;
@property (assign, nonatomic) int textend;
@property (strong, nonatomic) NSString* texttime;


@end
