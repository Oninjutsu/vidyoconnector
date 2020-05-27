//
//	VidyoNetworkInterface_Objc.h
//	VidyoClient
//
//	This file is auto generated, do not edit this file
//	Copyright (c) 2016 Vidyo, Inc. All rights reserved.
//

typedef NS_ENUM(NSInteger, VCNetworkInterfaceFamily){
	VCNetworkInterfaceFamilyUnspecified,
	VCNetworkInterfaceFamilyIPV4,
	VCNetworkInterfaceFamilyIPV6
};
typedef NS_ENUM(NSInteger, VCNetworkInterfaceState){
	VCNetworkInterfaceStateUnknown,
	VCNetworkInterfaceStateUp,
	VCNetworkInterfaceStateDown
};
typedef NS_ENUM(NSInteger, VCNetworkInterfaceTransportType){
	VCNetworkInterfaceTransportTypeSignaling,
	VCNetworkInterfaceTransportTypeMedia,
	VCNetworkInterfaceTransportTypeData
};
typedef NS_ENUM(NSInteger, VCNetworkInterfaceType){
	VCNetworkInterfaceTypeWired,
	VCNetworkInterfaceTypeWiFi,
	VCNetworkInterfaceTypeWwan,
	VCNetworkInterfaceTypeLoopback,
	VCNetworkInterfaceTypeTunneled,
	VCNetworkInterfaceTypeOther,
	VCNetworkInterfaceTypeNotApplicable
};
@interface VCNetworkInterface : NSObject
{
	void* objPtr;
}

	@property NSMutableString* address;
	@property VCNetworkInterfaceFamily family;
	@property NSMutableString* name;
	@property VCNetworkInterfaceState state;
	@property VCNetworkInterfaceType type;
	-(void) dealloc;
	-(NSString*) getAddress;
	-(VCNetworkInterfaceFamily) getFamily;
	-(NSString*) getName;
	-(VCNetworkInterfaceState) getState;
	-(VCNetworkInterfaceType) getType;
	-(id) initWithObject:(void*)rPtr;
	-(void*)getObjectPtr;
@end
