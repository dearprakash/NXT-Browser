//
//  NXTBrowserAppDelegate.h
//  NXT Browser
//
//  Copyright Matt Rajca 2010. All rights reserved.
//

#import "BrowserWindowController.h"

@interface NXTBrowserAppDelegate : NSObject < NSApplicationDelegate, MRDeviceDelegate > {
  @private
	NSMutableArray *_browsers;
}

@end
