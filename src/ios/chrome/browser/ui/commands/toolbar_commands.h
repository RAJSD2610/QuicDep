// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef IOS_CHROME_BROWSER_UI_COMMANDS_TOOLBAR_COMMANDS_H_
#define IOS_CHROME_BROWSER_UI_COMMANDS_TOOLBAR_COMMANDS_H_

// Protocol that describes the commands that trigger Toolbar UI changes.
@protocol ToolbarCommands
// Contracts the Toolbar to its regular form.
- (void)contractToolbar;
@end

#endif  // IOS_CHROME_BROWSER_UI_COMMANDS_TOOLBAR_COMMANDS_H_
