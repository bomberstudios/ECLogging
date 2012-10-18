// --------------------------------------------------------------------------
//! @author Sam Deane
//! @date 18/11/2010
//
//  Copyright 2012 Sam Deane, Elegant Chaos. All rights reserved.
//  This source code is distributed under the terms of Elegant Chaos's 
//  liberal license: http://www.elegantchaos.com/license/liberal
// --------------------------------------------------------------------------

#import "ECDebugMenu.h"

@class ECLogManager;

@interface ECLoggingMenu : ECDebugMenu
{
    ECLogManager* mLogManager;
}

// --------------------------------------------------------------------------
// Public Properties
// --------------------------------------------------------------------------

// --------------------------------------------------------------------------
// Public Methods
// --------------------------------------------------------------------------

- (IBAction) channelSelected: (id) sender;

@end
