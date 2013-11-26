//
//  Customer.h
//  Kiba
//
//  Created by 1jendryc on 21.11.13.
//  Copyright (c) 2013 KiBa App. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Adress.h"
#import "CreditRating.h"


@interface Customer : NSObject

@property NSString* vName;
@property NSString* nName;
@property int idIntern;
@property NSString* pass;

// Perso Ident Einloggkennung!
@property NSString* ident;
@property Adress* adress;
@property NSMapTable* accounts;
@property CreditRating* cRating;
@property Boolean verificated;




@end