//
//  KBAMessageDaoDummy.m
//  Kiba
//
//  Created by Schaarschmidt, Kevin Michael on 16.01.14.
//  Copyright (c) 2014 KiBa App. All rights reserved.
//

#import "KBAMessageDaoDummy.h"
#import "Message.h"

@implementation KBAMessageDaoDummy

-(NSMutableArray *) messagesForCustomer:(Customer *)customer
{
    Message *msg1, *msg2, *msg3;
    NSString *content1= @"Sehr geehrter Herr Mustermann, Sie können die von Ihnen gewünschten Sorten nun jederzeit in der Kiba Filiale am Informatikum abholen";
    NSString *content2= @"Sehr geehrter Herr Mustermann, gerne trifft sich Ihr Berater Herr Müller am 30.1. um 14:15 in der KiBa-Filiale Binderstraße mit Ihnen.";
    NSString *content3= @"Sehr geehrter Herr Mustermann, im Zuge der Anpassung des europäischen Leitzins können wir Ihnen nun verbesserte Konditionen anbieten. Im Finanzierungsrechner können Sie jetzt mit den entsprechend angepassten Zinsen eigene Finanzerungen planen.";
    
    
    msg1 = [[Message alloc] initWithDescription:@"Ihre Sortenanfrage" content:content1 date:[NSDate new] msgId:@1];
    msg2 = [[Message alloc] initWithDescription:@"Ihre Terminanfrage" content:content2 date:[NSDate new] msgId:@2];
    msg3 = [[Message alloc] initWithDescription:@"Ihr verbesserter Zins" content:content3 date:[NSDate new] msgId:@3];
    
    return [NSMutableArray arrayWithArray:@[msg1, msg2, msg3]];
}

@end
