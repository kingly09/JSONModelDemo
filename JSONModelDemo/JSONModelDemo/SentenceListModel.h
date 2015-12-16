//
//  SentenceListModel.h
//  JSONModelDemo
//
//  Created by kingly on 15/12/16.
//  Copyright © 2015年 kingly. All rights reserved.
//

#import "JSONModel.h"
#import "SentenceModel.h"

@interface SentenceListModel : JSONModel
@property (strong, nonatomic) NSArray<SentenceModel>* Lists;

@end
