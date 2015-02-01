//
//  BlogPost.m
//  BlogReader
//
//  Created by Peter Dorsaneo on 1/3/15.
//  Copyright (c) 2015 Peter Dorsaneo. All rights reserved.
//

#import "BlogPost.h"

@implementation BlogPost

//@synthesize someTitle = title;

//-(void) setSomeTitle:(NSString *)_title {
//    title = _title;
//    
//}
    //return instance indicated by asterisk
//-(NSString *)someTitle {
//    return title;
//}

-(id)initWithTitle:(NSString *)title {
    self = [super init];
    if (self) {
        [self setTitle:title];
        self.author = nil;
        self.thumbnail = nil;
        // or
        
    }
    return self;
}

+(id)blogPostWithTitle:(NSString *)title {
    return [[self alloc]initWithTitle:title];
}


-(NSURL *)thumbnailURL {
    return [NSURL URLWithString:self.thumbnail];
}


-(NSString *)formattedDate {
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc]init];
    [dateFormatter setDateFormat:@"yyyy-MM-dd HH:mm:ss"];
    
    NSDate *tempDate = [dateFormatter dateFromString:self.date];
    
    [dateFormatter setDateFormat:@"EE MMM, dd"];
    
    return [dateFormatter stringFromDate:tempDate];
}

@end
