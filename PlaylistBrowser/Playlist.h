//
//  Playlist.h
//  PlaylistBrowser
//
//  Created by Michael Valdez on 1/14/15.
//  Copyright (c) 2015 Michael Valdez. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface Playlist : NSObject

@property (strong, nonatomic) NSString *playlistTitle;
@property (strong, nonatomic) NSString *playlistDescription;
@property (strong, nonatomic) UIImage *playlistIcon;
@property (strong, nonatomic) UIImage *playlistLargeIcon;
@property (strong, nonatomic) NSArray *playlistArtists;
@property (strong, nonatomic) UIColor *backgroundColor;


- (instancetype)initWithIndex:(NSUInteger)index;

@end
