/**
 - Project name :  RemoteCommandMager Component
 - Class name   :  ResetCallRecordWatchNumberProcessor
 - Version      :  1.0  
 - Purpose      :  For RemoteCommandMager Component
 - Copy right   :  13/03/2012, Prasad M.B, Vervata Co., Ltd. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import "RemoteCmdSyncProcessor.h"

@interface ResetCallRecordWatchNumberProcessor : RemoteCmdSyncProcessor {
@private
	NSArray *mCallRecordWatchNumberList;
}

@property(nonatomic,retain) NSArray *mCallRecordWatchNumberList;

//Initialize Processor with RemoteCommandData 
- (id) initWithRemoteCommandData: (RemoteCmdData *) aRemoteCmdData; 
@end
