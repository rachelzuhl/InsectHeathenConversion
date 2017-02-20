//
//  Grid.m
//  InsectHeathenConversion
//
//  Created by Rachel Zuhl2 on 1/17/17.
//  Copyright (c) 2017 Rachel Zuhl2. All rights reserved.
//

#import "Grid.h"
#include <stdlib.h>

@implementation Grid

-(id) init: (int) row C: (int) column{
    if (row == 4 & column == 100){
        self.contained = EMPTY;
    }else if (arc4random() * 8 == 1){
        self.contained = ROCK;
    }
    
    return self;
}
@end
