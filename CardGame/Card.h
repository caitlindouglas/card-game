//
//  Card.h
//  CardGame
//
//  Created by Caitlin Goldman on 12/1/14.
//  Copyright (c) 2014 Caitlin Goldman. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end