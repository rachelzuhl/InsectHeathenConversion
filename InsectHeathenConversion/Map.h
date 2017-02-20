//
//  Map.h
//  InsectHeathenConversion
//
//  Created by Rachel Zuhl2 on 1/17/17.
//  Copyright (c) 2017 Rachel Zuhl2. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Grid.h"

@interface Map : NSObject{

#define MAX_ROW   200
#define MAX_COLUMN   200

Grid * universe[MAX_ROW][MAX_COLUMN];
}

-(id) init;

@end
