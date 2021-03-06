/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <Foundation/NSObject.h>
#import "UIKit-Structs.h"
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface UISectionRowData : NSObject <NSCopying> {
@private
	BOOL _valid;
	float _headerHeight;
	float _footerHeight;
	float _headerOffset;
	float _footerOffset;
	int _numRows;
	int _arrayLength;
	float* _rowHeights;
	float* _rowOffsets;
	float _sectionHeight;
	BOOL _sectionOffsetValid;
	float _sectionOffset;
}
-(void)dealloc;
-(void)invalidate;
-(void)invalidateSectionOffset;
-(float)_headerOrFooterSizeForTable:(id)table title:(id)title isHeader:(BOOL)header;
-(void)addOffset:(float)offset fromRow:(int)row;
-(void)setHeight:(float)height forRow:(int)row;
-(float)_defaultSectionHeaderHeightForSection:(int)section tableView:(id)view tableViewRowData:(id)data;
-(float)_defaultSectionFooterHeightForSection:(int)section tableView:(id)view tableViewRowData:(id)data;
-(void)refreshWithSection:(int)section tableView:(id)view tableViewRowData:(id)data;
-(void)insertRowAtIndex:(int)index inSection:(int)section rowHeight:(float)height tableViewRowData:(id)data;
-(void)deleteRowAtIndex:(int)index;
-(int)sectionLocationForRow:(int)row;
-(int)sectionLocationForReorderedRow:(int)reorderedRow;
-(id)copyWithZone:(NSZone*)zone;
@end

