//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GDFetchRequestLog : NSObject
{
}

+ (id)sql:(id)arg1 managedObjectContext:(id)arg2;
+ (void)log:(id)arg1;
+ (void)logFetchRequest:(id)arg1 level:(int)arg2;
+ (void)logPropertyToFetch:(id)arg1 level:(int)arg2;
+ (void)logPredicate:(id)arg1 level:(int)arg2;
+ (void)logExpression:(id)arg1 level:(int)arg2;
+ (id)getIndentationForLevel:(int)arg1;
+ (id)valueForComparisonPredicateModifier:(unsigned int)arg1;
+ (id)valueForPredicateOperatorType:(unsigned int)arg1;
+ (id)valueForCompoundPredicateType:(unsigned int)arg1;
+ (id)valueForExpressionType:(unsigned int)arg1;

@end

