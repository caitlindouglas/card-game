//
//  Deck.h
//  CardGame
//
//  Created by Caitlin Goldman on 12/1/14.
//  Copyright (c) 2014 Caitlin Goldman. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;
- (Card *)drawRandomCard;

@end