char* MakeNSStringCopy (NSString* ns)
{
    if (ns == nil)
        return NULL;
    
    const char* string = [ns UTF8String];
    
    char* res = (char*)malloc(strlen(string) + 1);
    strcpy(res, string);
    return res;
}

NSString* _GetSharedFolderPath( NSString* groupIdentifier )
{
    NSURL *containerURL = [[NSFileManager defaultManager] containerURLForSecurityApplicationGroupIdentifier:groupIdentifier];
    if( containerURL != nil )
    {
        //NSLog( @"Path to share content is %@", [containerURL path] );
    }
    else
    {
        NSLog( @"Fail to call NSFileManager sharing" );
    }
    
    return [containerURL path];
}

const char* _GetSharedFolderPathCharArray( const char* groupIdentifier ){
    NSString *str = [NSString stringWithFormat:@"%s", groupIdentifier];
    NSLog( @"Getting container path for group %@", str );
    NSString* baseurl = _GetSharedFolderPath( str );
    NSLog( @"Base URL is %@", baseurl );
    return MakeNSStringCopy( baseurl );
}