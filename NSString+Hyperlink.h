#import <Foundation/Foundation.h>
#import "NSStringExtractedComponent.h"

@interface NSString (Hyperlink)
- (NSString *)decruftForHyperlink;
- (NSArray *)componentsSplittedByHyperlink;
- (NSArray *)componentsSplittedByHyperlinkWithTrimming:(BOOL)withTrimming;
- (NSArray *)hyperlinks;
@end
