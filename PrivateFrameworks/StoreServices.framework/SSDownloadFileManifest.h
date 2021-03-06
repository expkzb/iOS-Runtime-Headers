/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSXPCConnection;

@interface SSDownloadFileManifest : NSObject {
    SSXPCConnection *_connection;
    int _manifestType;
}

@property(readonly) int manifestType;

- (void)_removeItemsWithAssetPaths:(id)arg1 completionBlock:(id)arg2;
- (void)dealloc;
- (void)getPathsForFilesWithClass:(int)arg1 completionBlock:(id)arg2;
- (id)init;
- (id)initWithManifestType:(int)arg1;
- (int)manifestType;
- (void)rebuildManifestWithCompletionBlock:(id)arg1;
- (void)removeItemWithAssetPath:(id)arg1 completionBlock:(id)arg2;
- (void)removeItemsWithAssetPaths:(id)arg1 completionBlock:(id)arg2;

@end
