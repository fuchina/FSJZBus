//
//  FSImagePicker.h
//  FSImage
//
//  Created by fudon on 2016/10/14.
//  Copyright © 2016年 Fudongdong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FSIPModel.h"
#import "FuSoft.h"

#define Key_CameraRoll      @"cameraRoll"

@interface FSImagePicker : NSObject

@property (nonatomic,strong) NSDictionary<NSString *,PHAssetCollection *>               *allThumbnails;
@property (nonatomic,strong) NSArray<FSIPModel*>                                        *allModels;
@property (nonatomic,strong) NSArray<FSIPModel*>                                        *selectedImages;

// 是否为原图
@property (nonatomic,assign) BOOL isOriginal;

// 请求资源
- (void)requestAllResources;

// 获取所选择的图片的大小
- (NSInteger)sizeOfSelectedImages;

// 获取所有图片的Model集合
- (NSDictionary<NSString *,PHAssetCollection *> *)allAssetCollection;

// 稍微清晰的图片，但不是原图
+ (void)thumbnailsImageForModel:(FSIPModel *)model completion:(void(^)(UIImage *bImage))completion;

- (NSArray *)enumerateAssetsInAssetCollection:(PHAssetCollection *)assetCollection original:(BOOL)original;

// 图片大小
- (NSInteger)sizeForImageWithAsset:(PHAsset *)asset;
+ (NSInteger)sizeForAsset:(PHAsset *)asset;

- (NSArray *)selectedAssetsWithModels;

- (NSArray *)selectedImagesWithModels;

+ (UIImage *)theNewestImageFromAlbum;
- (UIImage *)theNewestImageFromAlbum;// 获取相册中最新的那张图片，eg.在屏幕截图时调用获取

@end
