#import "PNServiceData.h"
#import "PNResult.h"


/**
 @brief  Class which allow to get access to client state for channel group processed result.
 
 @author Sergey Mamontov
 @since 4.0
 @copyright © 2009-2015 PubNub, Inc.
 */
@interface PNChannelGroupClientStateData : PNServiceData


///------------------------------------------------
/// @name Information
///------------------------------------------------

/**
 @brief  Multi channel client state information.
 
 @since 4.0
 */
@property (nonatomic, readonly, strong) id channels;

#pragma mark -


@end


/**
 @brief  Class which is used to provide access to request processing results.
 
 @author Sergey Mamontov
 @since 4.0
 @copyright © 2009-2015 PubNub, Inc.
 */
@interface PNChannelGroupClientStateResult : PNResult


///------------------------------------------------
/// @name Information
///------------------------------------------------

/**
 @brief  Stores reference on client state for channel group request processing information.
 
 @since 4.0
 */
@property (nonatomic, readonly, strong) PNChannelGroupClientStateData *data;

#pragma mark -


@end
