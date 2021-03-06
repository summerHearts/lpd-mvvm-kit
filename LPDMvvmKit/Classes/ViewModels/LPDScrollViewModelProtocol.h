//
//  LPDScrollViewModelProtocol.h
//  LPDMvvmKit
//
//  Created by foxsofter on 15/12/13.
//  Copyright © 2015年 eleme. All rights reserved.
//

#import "LPDViewModelProtocol.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol LPDScrollViewModelProtocol <LPDViewModelProtocol>

@required

/**
 *  @brief  下拉刷新当前页面上的数据
 */
@property (nonatomic, assign, getter=isLoading) BOOL loading;

/**
 *  @brief  下拉刷新的信号，需由子类赋值
 *
 *  @return  loading RACSignal
 */
@property (nullable, nonatomic, strong) RACSignal *loadingSignal;

/**
 *  @brief  列表中上滑加载更多数据
 */
@property (nonatomic, assign, getter=isLoadingMore) BOOL loadingMore;

/**
 *  @brief  上滑加载的信号，需由子类赋值，当设为nil时表示没有更多数据需要加载了
 *
 *  @return loadingMore RACSignal
 */
@property (nullable, nonatomic, strong) RACSignal *loadingMoreSignal;

@end

NS_ASSUME_NONNULL_END
