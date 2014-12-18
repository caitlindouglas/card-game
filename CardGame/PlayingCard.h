//
//  PlayingCard.h
//  CardGame
//
//  Created by Caitlin Goldman on 12/1/14.
//  Copyright (c) 2014 Caitlin Goldman. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end