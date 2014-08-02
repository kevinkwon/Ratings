//
//  Player.h
//  Ratings
//
//  Created by hdk on 2014. 8. 2..
//  Copyright (c) 2014년 Kevin Kwon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *game;
@property (nonatomic, assign) NSInteger rating;

@end
