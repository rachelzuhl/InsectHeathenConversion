//
//  Beetle.h
//  InsectHeathenConversion
//
//  Created by Rachel Zuhl2 on 1/16/17.
//  Copyright (c) 2017 Rachel Zuhl2. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Beetle : NSObject


//Character Traits
@property (nonatomic) int pheromones;

@property (nonatomic) int sexDrive;

@property (nonatomic) int persuasiveness;

@property (nonatomic) int charisma;

@property (nonatomic) int logic;

@property (nonatomic) int sanity;

@property (nonatomic) int eccentricity;

@property (nonatomic) int goodness;

@property (nonatomic) int maniaSpells;

@property (nonatomic) int strength;

@property (nonatomic) int endurance;



@property (nonatomic) int row;
@property (nonatomic) int column;
@property (nonatomic) int direction;
// 0 = up, 1 = left, 2 = down, 3 = right

@property (nonatomic) int destRow;
@property (nonatomic) int destColumn;



@end
