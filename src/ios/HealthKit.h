#import <Cordova/CDV.h>
#import <HealthKit/HealthKit.h>

@interface HealthKit :CDVPlugin

@property (nonatomic) HKHealthStore *healthStore;

- (void) available:(CDVInvokedUrlCommand*)command;
- (void) requestAuthorization:(CDVInvokedUrlCommand*)command;

- (void) readDateOfBirth:(CDVInvokedUrlCommand*)command;
- (void) readGender:(CDVInvokedUrlCommand*)command;

- (void) saveValue:(CDVInvokedUrlCommand*)command;
- (void) readValue:(CDVInvokedUrlCommand*)command;

@end
