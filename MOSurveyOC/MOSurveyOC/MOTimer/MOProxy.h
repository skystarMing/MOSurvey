//
//  MOProxy.h
//  MOSurveyOC
//
//  Created by 莫小言 on 2021/1/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MOProxy : NSProxy

@property (nonatomic, weak) id target;

@end

NS_ASSUME_NONNULL_END
