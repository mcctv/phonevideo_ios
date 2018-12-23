//
//  VideoRecoder.h
//  GSHomeVideoPhone
//
//  Created by mcctv on 14-5-27.
//  Copyright (c) 2014年 mcctv. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#include <iostream>
using namespace std;


typedef void (*VIDEO_RECODER_CB)(void *p, int w, int h, char* data );

@interface VideoRecoder : NSObject
<AVCaptureVideoDataOutputSampleBufferDelegate>
{
    
    AVCaptureSession *m_session;
    AVCaptureDevice  *m_device;
    AVCaptureVideoDataOutput *m_output;
    UIView           *m_preview;
    
    void             *m_pUser;
    VIDEO_RECODER_CB  m_cb;
    
}

- (void)captureOutput:(AVCaptureOutput *)captureOutput
didOutputSampleBuffer:(CMSampleBufferRef)sampleBuffer
       fromConnection:(AVCaptureConnection *)connection;

-(int)startVideoCapture:(UIView*)preview  callback:(VIDEO_RECODER_CB)cb userdata:(void*)puser;

-(int)stopVideoCapture;

@end
