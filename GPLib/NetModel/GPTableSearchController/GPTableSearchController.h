//
//  GPTableSearchController.h
//  GPLib
//
//  Created by Dalton Cherry on 4/24/12.
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
//  does the default search controller for UITableView. This is network aware, like its parent class.
//  I strongly recommend that you do not use paging in your model with this class. That defaults the whole
//  purpose of a indexed list and will be annoying to manage. 

#import "GPTableViewController.h"

@interface GPTableSearchController : GPTableViewController<UISearchDisplayDelegate,UISearchBarDelegate>
{
    BOOL isSearching;
    NSMutableArray* searchItems;
    NSMutableArray* searchSections;
    GPModel* searchModel;
    UISearchDisplayController* searchController;
    BOOL hideSectionTitles;
    NSString* searchText;
    BOOL didMove;
}
-(NSString*)searchURL:(NSString*)searchString;
-(BOOL)isNetworkSearch;
-(BOOL)isAutoSearch;
-(GPModel*)searchModel:(NSString*)url;
-(BOOL)truncateIndex;
-(BOOL)showSearchWhenEmpty;
-(NSString*)countString:(NSInteger)count;
-(void)filterLocalItems:(NSString*)text;
-(void)addSortItem:(id)object;
-(void)clearEmptySections;
-(BOOL)numberIndex;
-(BOOL)dimissSearchOnSelect;
-(BOOL)isSearching;
-(void)runSearch:(NSString*)searchString;
-(BOOL)hideSearchBarOnLoad;

//ignore these, used to fix scopebar
-(void)scopeBarHide:(UISearchBar*)searchBar;
-(void)scopeBarFix:(UISearchBar*)searchBar;

@end
