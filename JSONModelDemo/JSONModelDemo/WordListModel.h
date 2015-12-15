//
//  WordListModel.h
//  JSONModelDemo
//
//  Created by kingly on 15/12/15.
//  Copyright © 2015年 kingly. All rights reserved.
//

#import "JSONModel.h"
#import "WordModel.h"

@interface WordListModel : JSONModel

@property (strong, nonatomic) NSArray<WordModel>* Lists;


@end
