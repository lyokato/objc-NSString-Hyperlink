#import "NSStringExtractedComponent.h"

@implementation NSStringExtractedComponent

@synthesize type   = _type;
@synthesize string = _string;

- (id)initWithType:(NSStringExtractedComponentType)type
            string:(NSString *)string
{
    if (self = [super init]) {
        _type   = type;
        _string = [string retain];
    }
    return self;
}

+ (id)componentWithType:(NSStringExtractedComponentType)type
                 string:(NSString *)string
{
    return [[[[self class] alloc] initWithType:type
                                       string:string] autorelease];
}

- (void)dealloc {
    [_string release], _string = nil;
    [super dealloc];
}

@end
