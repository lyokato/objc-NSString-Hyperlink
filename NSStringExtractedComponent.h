#import <Foundation/Foundation.h>

typedef enum {
  NSStringExtractedComponentTypeNormal,
  NSStringExtractedComponentTypeHyperlink
} NSStringExtractedComponentType;

@interface NSStringExtractedComponent : NSObject
{
    NSStringExtractedComponentType _type;
    NSString *_string;
}

@property (nonatomic, readonly) NSStringExtractedComponentType type;
@property (nonatomic, readonly) NSString *string;

- (id)initWithType:(NSStringExtractedComponentType)type
            string:(NSString *)string;

+ (id)componentWithType:(NSStringExtractedComponentType)type
                 string:(NSString *)string;

@end
