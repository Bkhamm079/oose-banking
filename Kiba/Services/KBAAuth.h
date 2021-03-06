//
//  KBAAuth.h
//  Kiba
//
//  Created by Schaarschmidt, Kevin Michael on 10.12.13.
//  Copyright (c) 2013 KiBa App. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Customer.h"


@interface KBAAuth : NSObject

@property (readonly, nonatomic) Customer *identity;

- (void) logout;
- (BOOL) login:(NSString*) name withPassword:(NSString*) password;
- (BOOL) isLoggedIn;

@end
