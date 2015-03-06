//
//  SCCaptureCameraController.h
//  SCCaptureCameraDemo
//
//  Created by Aevitx on 14-1-16.
//  Copyright (c) 2014年 Aevitx. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SCCaptureSessionManager.h"

@protocol SCCaptureCameraControllerDelegate;

@interface SCCaptureCameraController : UIViewController

@property (nonatomic, assign) CGRect previewRect;
@property (nonatomic, assign) BOOL isStatusBarHiddenBeforeShowCamera;
@property (nonatomic, copy)NSString *albumName;

@property (nonatomic, weak) id <SCCaptureCameraControllerDelegate> delegate;

@end

@protocol SCCaptureCameraControllerDelegate <NSObject>
@optional

- (void)didTakePicture:(SCCaptureCameraController *)captureCameraController image:(UIImage*)image;

@end
