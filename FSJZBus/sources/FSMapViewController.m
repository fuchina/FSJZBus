//
//  FSMapViewController.m
//  FSAccount
//
//  Created by FudonFuchina on 2019/4/13.
//

#import "FSMapViewController.h"
#import <FSLocation.h>
#import <MAMapKit/MAMapKit.h>
#import <AMapFoundationKit/AMapFoundationKit.h>
#import "FSAnotation.h"
#import <FSUIKit.h>

@interface FSMapViewController ()

@end

@implementation FSMapViewController{
    MAMapView   *_mapView;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    [self mapDesignViews];
}

- (void)dealloc{
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

- (void)mapDesignViews{
    self.title = @"地图";
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(handleLocation:) name:FSLocation.FSLocationHasUpdatedNotification object:nil];
    
    [AMapServices sharedServices].enableHTTPS = YES;
    AMapServices.sharedServices.apiKey = @"bd4c0ac421f6ebb7e019580d793b9f13";
    MAMapView *mapView = [[MAMapView alloc] initWithFrame:CGRectMake(0, 64, self.view.frame.size.width, self.view.frame.size.height - 64)];
    [self.view addSubview:mapView];
    _mapView = mapView;
}

- (void)handleLocation:(NSNotification *)notification{
    FSLocationResult *result = notification.object;
    if (result.error) {
        [FSUIKit showAlertWithMessage:result.error.localizedDescription controller:self];
        return;
    }
    
    CLLocation *loc = result.lastLocation;
    CLLocationCoordinate2D coor = loc.coordinate;

    id<MAAnnotation> annotation = (id<MAAnnotation>)[[FSAnotation alloc] init];
    annotation.coordinate = coor;
    annotation.title = @"位置";
    annotation.subtitle = @"当前位置";
    [_mapView addAnnotation:annotation];

    CLLocationCoordinate2D gcj02 = AMapCoordinateConvert(coor,AMapCoordinateTypeGPS);
    id<MAAnnotation> annotationGCJ = (id<MAAnnotation>)[[FSAnotation alloc] init];
    annotationGCJ.coordinate = gcj02;
    annotationGCJ.title = @"位置2";
    annotationGCJ.subtitle = @"当前位置2";
    [_mapView addAnnotation:annotationGCJ];
    _mapView.centerCoordinate = gcj02;

    CGFloat distance = distanceBetweenCoordinates(coor, gcj02);
    self.title = [[NSString alloc] initWithFormat:@"地图（两点距离%.2f米）",distance];

    _mapView.zoomLevel = 16;
}

- (void)zoomlevel:(MAMapView *)mapView{
    NSLog(@"%f",mapView.zoomLevel);
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [self zoomlevel:mapView];
    });
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
