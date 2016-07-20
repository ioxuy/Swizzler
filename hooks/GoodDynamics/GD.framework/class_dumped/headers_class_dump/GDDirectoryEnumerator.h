//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDirectoryEnumerator.h"

#import "NSFastEnumeration.h"

@class NSArray, NSString;

@interface GDDirectoryEnumerator : NSDirectoryEnumerator <NSFastEnumeration>
{
    NSDirectoryEnumerator *enumerator;
    NSArray *keys;
    BOOL skipHiddenFiles;
    BOOL stringMode;
    NSString *enumeratorPath;
}

@property(retain, nonatomic) NSString *enumeratorPath; // @synthesize enumeratorPath;
- (void)enableStringModeWithPath:(id)arg1;
- (id)initWithDirectoryEnumerator:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned int)arg3;
- (void)skipDescendents;
- (void)skipDescendants;
- (unsigned int)level;
- (id)fileAttributes;
- (id)directoryAttributes;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)nextObject;
- (id)allObjects;

@end

