//
//  DrawExtras.h
//  GPLib
//
//  Created by Dalton Cherry on 3/27/12.
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

#import <Foundation/Foundation.h>

@interface GPDrawExtras : NSObject

+(UIImage*)drawBorderAroundImage:(UIImage*)image color:(UIColor*)color width:(CGFloat)borderWidth;
+(UIImage*)drawBorderAroundImage:(UIImage*)image color:(UIColor*)color width:(CGFloat)borderWidth rounding:(CGFloat)radius;
+(UIImage*)drawBorderAroundImage:(UIImage*)image color:(UIColor*)color width:(CGFloat)borderWidth rounding:(CGFloat)radius outside:(BOOL)outside;

+(void)drawLinearGradient:(CGContextRef)ctx start:(UIColor*)startColor end:(UIColor*)endColor rect:(CGRect)frame endLoc:(CGFloat)end;
+(void)drawRadialGradient:(CGContextRef)ctx start:(UIColor*)startColor end:(UIColor*)endColor point:(CGPoint)point radius:(CGFloat)radius endLoc:(CGFloat)end;
+(void)drawGloss:(CGContextRef)ctx rect:(CGRect)frame;

+(void)drawRoundRect:(CGContextRef)ctx width:(int)width height:(int)height rounding:(CGFloat)radius stroke:(CGFloat)strokeWidth;
+(void)drawRoundRect:(CGContextRef)ctx width:(int)width height:(int)height rounding:(CGFloat)radius stroke:(CGFloat)strokeWidth mode:(CGPathDrawingMode)mode;
+(void)drawRoundRect:(CGContextRef)ctx width:(int)width height:(int)height rounding:(CGFloat)radius stroke:(CGFloat)strokeWidth mode:(CGPathDrawingMode)mode corners:(UIRectCorner)corners;

+(void)drawInsetShadow:(CGContextRef)ctx rect:(CGRect)frame rounding:(CGFloat)radius color:(UIColor*)color;

+(void)roundCorners:(UIView*)view corner:(UIRectCorner)round rounding:(float)rounding;
@end
