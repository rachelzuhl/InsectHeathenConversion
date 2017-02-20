//
//  Grid.h
//  InsectHeathenConversion
//
//  Created by Rachel Zuhl2 on 1/17/17.
//  Copyright (c) 2017 Rachel Zuhl2. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Grid : NSObject

typedef enum{
    EMPTY,
    BEETLE,
    ROCK,
    
} Object;

-(id) init: (int) row C: (int) column;

@property (nonatomic) int contained;

@end
