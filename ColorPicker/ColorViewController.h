//
//  ColorViewController.h
//  ColorPicker
//
//  Created by Mango on 14-2-5.
//  Copyright (c) 2014年 Mango. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ColorScrollView;

@interface ColorViewController : UIViewController<UINavigationControllerDelegate,UIImagePickerControllerDelegate,UIScrollViewDelegate>



- (id)initWithImage: (UIImage *)image;
@end