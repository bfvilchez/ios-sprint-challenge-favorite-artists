//
//  ArtistsTableViewController.h
//  FavoriteArtists(iOS12)
//
//  Created by brian vilchez on 2/21/20.
//  Copyright © 2020 brian vilchez. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BFVArtistController;
NS_ASSUME_NONNULL_BEGIN

@interface ArtistsTableViewController : UITableViewController
@property(nonatomic) BFVArtistController *artistController;
@end

NS_ASSUME_NONNULL_END
