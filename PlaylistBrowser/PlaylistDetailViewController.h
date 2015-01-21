//
//  PlaylistDetailViewController.h
//  PlaylistBrowser
//
//  Created by Michael Valdez on 1/12/15.
//  Copyright (c) 2015 Michael Valdez. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Playlist;

@interface PlaylistDetailViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *buttonPressLabel;
@property (strong, nonatomic) Playlist *playlist;

@end
