//
//  MusicLibrary.h
//  PlaylistBrowser
//
//  Created by Michael Valdez on 1/13/15.
//  Copyright (c) 2015 Michael Valdez. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const kTitle;
extern NSString *const kDescription;
extern NSString *const kIcon;
extern NSString *const kLargeIcon;
extern NSString *const kBackgroundColor;
extern NSString *const kArtists;

@interface MusicLibrary : NSObject

@property (strong, nonatomic) NSArray *library;


@end
