#import "UnityAppController.h"


extern NSString *  deepLink;

@interface UnityAppControllerSub : UnityAppController {}

@end


@implementation UnityAppControllerSub

NSString *deepLink = @"none";

- (void) openURLAfterDelay:(NSURL*) url {
    UnitySendMessage("Main Camera", "OnOpenURLComplete", [[url absoluteString] UTF8String]);
}

- (BOOL)application:(UIApplication*)application openURL:(NSURL*)url sourceApplication:(NSString*)sourceApplication annotation:(id)annotation
{
    
    //[self performSelector:@selector(openURLAfterDelay:) withObject:url afterDelay:2];
    deepLink = url.absoluteString;
    
    return [super application:application openURL:url sourceApplication:sourceApplication annotation:annotation];
}


char* MakeNSStringCp (NSString* ns)
{
    if (ns == nil)
        return NULL;
    
    const char* string = [ns UTF8String];
    
    char* res = (char*)malloc(strlen(string) + 1);
    strcpy(res, string);
    return res;
}



const char* _GetDeepLink( ){
    return MakeNSStringCp( deepLink );
}



@end
IMPL_APP_CONTROLLER_SUBCLASS(UnityAppControllerSub);
