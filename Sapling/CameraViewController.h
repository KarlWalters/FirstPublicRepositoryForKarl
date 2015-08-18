//
//  CameraViewController.h
//  Sapling
//
//  Created by Karl Walters on 8/17/15.
//  Copyright (c) 2015 Karl Walters. All rights reserved.
//

//#import <UIKit/UIKit.h>

//@interface CameraViewController : UIViewController

//@end


// Frameworks
#import <CoreVideo/CoreVideo.h>
#import <CoreMedia/CoreMedia.h>
#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>

@interface CameraViewController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate>

// Camera
@property (weak, nonatomic) IBOutlet UIImageView* cameraImageView;
@property (strong, nonatomic) AVCaptureDevice* device;
@property (strong, nonatomic) AVCaptureSession* captureSession;
@property (strong, nonatomic) AVCaptureVideoPreviewLayer* previewLayer;
@property (strong, nonatomic) UIImage* cameraImage;

@end