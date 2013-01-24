//
//  CaptureViewController.h
//  CellScopeLoa
//
//  Created by Matthew Bakalar on 11/4/12.
//  Copyright (c) 2012 Matthew Bakalar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <dispatch/dispatch.h>
#import <AVFoundation/AVFoundation.h>
#import "RTPCamera.h"
#import "MovieProgressDelegate.h"
#import "LoaProgram.h"

@interface CaptureViewController : UIViewController <AVCaptureFileOutputRecordingDelegate,MovieProgressDelegate>

@property (strong, nonatomic) LoaProgram* program;
@property (strong, nonatomic) NSManagedObjectContext* managedObjectContext;

@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *busyIndicator;
@property (weak, nonatomic) IBOutlet UIProgressView *progressBar;
@property (strong, nonatomic) NSArray *instructionText;
@property (nonatomic) NSInteger instructIdx;
@property (weak, nonatomic) IBOutlet UITextView *instructions;
@property (strong, nonatomic) IBOutlet UIView *pLayer;

@property (nonatomic, strong) RTPCamera *camera;
@property (nonatomic) NSInteger isRecording;

@property (nonatomic, strong) AVCaptureSession *session;
@property (nonatomic, strong) AVCaptureDevice *device;
@property (nonatomic, strong) AVCaptureDeviceInput *input;
@property (nonatomic, strong) AVCaptureMovieFileOutput *output;
@property (nonatomic, strong) AVCaptureVideoDataOutput *videoPreviewOutput;
@property (nonatomic, strong) AVCaptureVideoDataOutput *videoHDOutput;
@property (weak, nonatomic) IBOutlet UILabel *fieldcounter;

- (IBAction)onCapture:(id)sender;
- (void)checkStatus;

@end
