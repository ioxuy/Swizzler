//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDFetchSQLDescriptor.h"

@class NSArray;

@interface GDFetchOrderByDescriptor : GDFetchSQLDescriptor
{
    NSArray *_sortDescriptors;
}

+ (id)descriptorWithSqlDescriptor:(id)arg1 sortDescriptors:(id)arg2;
- (BOOL)build:(id *)arg1;
- (id)trueKeypath:(id)arg1;
- (void)dealloc;
- (id)initWithSqlDescriptor:(id)arg1 sortDescriptors:(id)arg2;

@end

