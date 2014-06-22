/**
 * Copyright Maarten Billemont (http://www.lhunath.com, lhunath@lyndir.com)
 *
 * See the enclosed file LICENSE for license information (LGPLv3). If you did
 * not receive this file, see http://www.gnu.org/licenses/lgpl-3.0.txt
 *
 * @author   Maarten Billemont <lhunath@lyndir.com>
 * @license  http://www.gnu.org/licenses/lgpl-3.0.txt
 */

//
//  MPPasswordWindowController.h
//  MPPasswordWindowController
//
//  Created by lhunath on 2014-06-18.
//  Copyright, lhunath (Maarten Billemont) 2014. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MPPasswordWindowController : NSWindowController<NSTextFieldDelegate, NSCollectionViewDelegate>

@property(nonatomic, weak) IBOutlet NSImageView *blurView;
@property(nonatomic, weak) IBOutlet NSTextField *userLabel;
@property(nonatomic, weak) IBOutlet NSSearchField *siteField;

@end
