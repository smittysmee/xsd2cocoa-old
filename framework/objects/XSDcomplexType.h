/*
 XSDcomplexType.h
 The interface definition of properties and methods for the XSDcomplexType object.
 Generated by SudzC.com
 */


#import "XSSchemaNode.h"
#import "XSType.h"

@class XSDexplicitGroup;

@interface XSDcomplexType : XSSchemaNode < XSType >

@property (readonly, nonatomic) NSString* name;
@property (readonly, nonatomic) NSNumber* mixed;
@property (readonly, nonatomic) NSString* baseType;
@property (readonly, nonatomic) XSDexplicitGroup* sequenceOrChoice;
@property (readonly, nonatomic) NSArray* attributes;
@property (readonly, nonatomic) NSArray* globalElements;

- (NSDictionary*) substitutionDict;
- (NSArray*) elements;
- (NSArray*) simpleTypesInUse;
- (NSArray*) complexTypesInUse;
- (NSString*) readSimpleContent;
- (BOOL) hasSimpleBaseClass;
- (BOOL) hasComplexBaseClass;

- (NSString*) baseClassName;
- (NSString*) baseClassFileName;

@end
