//
//  UIButtonTag.h
//  3dCharacter
//
//  Created by Vasya on 12/13/13.
//  Copyright (c) 2013 1. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ModelSettings.h"

@interface UIButtonTag : UIButton
{
    @private ModelSettings* _tagSettings;
}

@property (atomic, retain ) ModelSettings* tagSettings;

@end
