//
//  MLContactCell.h
//  Monal
//
//  Created by Anurodh Pokharel on 6/28/15.
//  Copyright (c) 2015 Monal.im. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MLContactCell : NSTableCellView

@property (nonatomic, weak) IBOutlet NSImageView *icon;
@property (nonatomic, weak) IBOutlet NSTextField *name;
@property (nonatomic, weak) IBOutlet NSTextField *status;


@end