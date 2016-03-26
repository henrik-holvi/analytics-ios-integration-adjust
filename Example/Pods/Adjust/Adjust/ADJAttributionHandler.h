//
//  ADJAttributionHandler.h
//  adjust
//
//  Created by Pedro Filipe on 29/10/14.
//  Copyright (c) 2014 adjust GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ADJActivityHandler.h"
#import "ADJActivityPackage.h"

@protocol ADJAttributionHandler

- (id)initWithActivityHandler:(id<ADJActivityHandler>) activityHandler
       withAttributionPackage:(ADJActivityPackage *) attributionPackage
                 startPaused:(BOOL)startPaused
hasAttributionChangedDelegate:(BOOL)hasAttributionChangedDelegate;

- (void)checkSessionResponse:(ADJSessionResponseData *)sessionResponseData;

- (void)checkAttributionResponse:(ADJAttributionResponseData *)attributionResponseData;

- (void)getAttribution;

- (void)pauseSending;

- (void)resumeSending;

@end

@interface ADJAttributionHandler : NSObject <ADJAttributionHandler>

+ (id<ADJAttributionHandler>)handlerWithActivityHandler:(id<ADJActivityHandler>)activityHandler
                                 withAttributionPackage:(ADJActivityPackage *) attributionPackage
                                            startPaused:(BOOL)startPaused
                          hasAttributionChangedDelegate:(BOOL)hasAttributionChangedDelegate;

@end