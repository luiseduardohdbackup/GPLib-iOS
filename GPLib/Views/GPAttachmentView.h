//
//  GPAttachmentView.h
//  GPLib
//
//  Created by Dalton Cherry on 5/30/12.
//  Copyright (c) 2012 Basement Crew/180 Dev Designs. All rights reserved.
//
/*
 http://github.com/daltoniam/GPLib-iOS
 
 Permission is hereby granted, free of charge, to any person
 obtaining a copy of this software and associated documentation
 files (the "Software"), to deal in the Software without
 restriction, including without limitation the rights to use,
 copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the
 Software is furnished to do so, subject to the following
 conditions:
 
 The above copyright notice and this permission notice shall be
 included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 OTHER DEALINGS IN THE SOFTWARE.
 */
//

#import "GPImageView.h"

@class GPAttachmentView;
@protocol GPAttachmentViewDelegate <NSObject>

@optional

//notify that the image is done loading
-(void)didTapView:(GPAttachmentView*)view index:(int)index;
-(void)didRemoveView:(GPAttachmentView*)view index:(int)index;

@end

@interface GPAttachmentView : UIView<UIScrollViewDelegate,GPImageViewDelegate>
{
    UIScrollView* scrollView;
    NSMutableArray* attachmentViews;
    UIPageControl* pageControl;
}

@property(nonatomic,assign)BOOL isSideScroll; //paging to side to side instead of up and down
@property(nonatomic,assign)id<GPAttachmentViewDelegate>delegate;

-(void)addAttachment:(UIImage*)image remove:(BOOL)canRemove;
-(void)addAttachment:(NSString*)imgURL title:(NSString*)title remove:(BOOL)canRemove;
-(void)removeAllItems;
-(UIView*)viewAtIndex:(int)index;

@end