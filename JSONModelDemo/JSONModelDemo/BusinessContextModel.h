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

@property (assign, nonatomic) int fileType;
@property (assign, nonatomic) int showIndex;


@end
