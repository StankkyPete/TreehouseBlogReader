//
//  BlogPost.h
//  BlogReader
//
//  Created by Peter Dorsaneo on 1/3/15.
//  Copyright (c) 2015 Peter Dorsaneo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject

@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *author;
@property (strong,nonatomic) NSString *thumbnail;
@property (strong,nonatomic) NSString *date;
@property (strong,nonatomic) NSURL *url;

//-(void) setTitle:(NSString *)title;

//return instance indicated by asterisk
//-(NSString *)title;

//@property (nonatomic) int views;

//@property (nonatomic, getter=isUnread) BOOL read;

//designated initializer
-(id)initWithTitle:(NSString *)title;

+(id)blogPostWithTitle:(NSString *)title;

-(NSURL *)thumbnailURL;

-(NSString *)formattedDate;
@end
