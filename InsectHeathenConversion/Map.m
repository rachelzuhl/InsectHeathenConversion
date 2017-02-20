//
//  Map.m
//  InsectHeathenConversion
//
//  Created by Rachel Zuhl2 on 1/17/17.
//  Copyright (c) 2017 Rachel Zuhl2. All rights reserved.
//

#import "Map.h"
#import "Grid.h"

@implementation Map

-(id) init{
    self = [super init];
    int r;
    int c;

    for (r = 0; r < MAX_ROW; r++){
        for (c = 0; c < MAX_COLUMN; c++){
            universe[r][c] = [[Grid alloc] init: (r) C: (c)];
        }
    }
    
    return self;
}

@end
