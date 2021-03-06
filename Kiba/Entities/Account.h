//
//  Account.h
//  Kiba
//
//  Created by Marco F. Jendryczko on 21.11.13.
//  Copyright (c) 2013 KiBa App. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Customer.h"

@interface Account : NSObject

@property NSNumber *balance;
@property NSNumber *overDraft;
@property NSNumber *accountNr;
@property NSString *description;
@property Customer *owner;


- (id)initWithBalance:(NSNumber *)newBalance
            overDraft:(NSNumber *)newOverDraft
            accountNr:(NSNumber *)newAccountNr
                 name:(NSString *)name
                owner:(Customer *)newOwner;

@end
