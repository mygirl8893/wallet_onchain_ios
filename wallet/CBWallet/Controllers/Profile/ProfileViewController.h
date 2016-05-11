//
//  ProfileViewController.h
//  wallet
//
//  Created by Zin (noteon.com) on 16/2/24.
//  Copyright © 2016年 Bitmain. All rights reserved.
//

#import "BaseListViewController.h"

@class ProfileViewController, CBWAccount, CBWAccountStore;

@protocol ProfileViewControllerDelegate <NSObject>

@optional
- (void)profileViewController:(nonnull ProfileViewController *)viewController didSelectAccount:(nonnull CBWAccount *)account;

@end

/// Switch wallet, manage recipient contacts, settings
@interface ProfileViewController : BaseListViewController

@property (nonatomic, strong, nonnull) CBWAccountStore *accountStore;
@property (nonatomic, weak, nullable) id<ProfileViewControllerDelegate> delegate;

- (nonnull instancetype)initWithAccountStore:(nonnull CBWAccountStore *)store;

@end
