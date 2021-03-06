//
//  GPGridViewItem.h
//  GPLib
//
//  Created by Dalton Cherry on 4/11/12.
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
#import <CoreData/CoreData.h>

@interface GPGridViewItem : NSObject

@property(nonatomic,copy)NSString* text;
@property(nonatomic,copy)NSString* infoText;
@property(nonatomic,retain)UIImage* image;
@property(nonatomic,retain)NSString* imageURL;
@property(nonatomic,copy)NSString* navURL;
@property(nonatomic,retain)UIFont* font;
@property(nonatomic,retain)UIColor* color;
@property(nonatomic,assign)BOOL isSelected;
@property(nonatomic,assign)BOOL drawDropShadow;
@property(nonatomic,assign)BOOL isLoading;
@property(nonatomic,retain)UIImage* backgroundImage;
@property(nonatomic,assign)NSInteger rowHeight;
@property(nonatomic,assign)NSInteger columnCount; //just testing this
@property(nonatomic,assign)NSInteger rowCount; //just testing this
@property(nonatomic,assign)CGRect frame; //just testing this
//for things that are not going to be displayed but are needed in the tablecell
@property(nonatomic,retain)NSDictionary* properties;

+(GPGridViewItem*)itemWithImage:(UIImage*)image text:(NSString*)text;
+(GPGridViewItem*)itemWithImage:(UIImage*)image text:(NSString*)text url:(NSString*)url;
+(GPGridViewItem*)itemWithImage:(UIImage*)image text:(NSString*)text url:(NSString*)url properties:(NSDictionary*)props;

+(GPGridViewItem*)itemWithImageURL:(NSString*)imageURL text:(NSString*)text;
+(GPGridViewItem*)itemWithImageURL:(NSString*)imageURL text:(NSString*)text url:(NSString *)url;
+(GPGridViewItem*)itemWithImageURL:(NSString*)imageURL text:(NSString*)text url:(NSString*)url properties:(NSDictionary*)props;

-(void)saveItemToDisk:(NSManagedObject*)object ctx:(NSManagedObjectContext*)ctx;
+(GPGridViewItem*)restoreItemFromDisk:(NSManagedObject*)object;

@end
