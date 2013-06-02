//
//  RPAppDelegate.h
//  Radio Paradise
//
//  Created by Giacomo Tufano on 04/04/13.
//  ©2013 Giacomo Tufano.
//  Licensed under MIT license. See LICENSE file or http://www.opensource.org/licenses/mit-license.php
//

#import <Cocoa/Cocoa.h>

#import "PiwikTracker.h"
#import "PTTimerDispatchStrategy.h"

// global notifications
#define kMainUIBusy     @"Action Pending On Main UI"
#define kMainUIReady    @"Main UI pending"

@interface RPAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (nonatomic, strong) PiwikTracker *tracker;
@property (nonatomic, strong) PTTimerDispatchStrategy *timerStrategy;

@end
