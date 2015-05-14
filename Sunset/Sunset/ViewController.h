//
//  ViewController.h
//  Sunset
//
//  Created by Chase McCoy on 5/12/15.
//  Copyright (c) 2015 Chase McCoy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import "KosherCocoa.h"
#import "BackgroundLayer.h"

@interface ViewController : UIViewController <CLLocationManagerDelegate> {
  IBOutlet UILabel *latLabel;
  IBOutlet UILabel *longLabel;
  IBOutlet UILabel *timeLabel;
  IBOutlet UILabel *timeUntil;
  __weak IBOutlet UIButton *roundedButton;
  NSDate *sunrise;
  NSDate *sunset;
  NSUserDefaults *myDefaults;
  CLLocationManager *locationManager;
  CLLocation* location;
  CALayer* orangeGradientLayer;
  CALayer* blueGradientLayer;
}

- (IBAction)getLocation:(id)sender;
- (void)getTimeOfSunset;
- (void)getTimeUntilSunset;
- (void)setupGradients;
- (CAGradientLayer*) blueGradient;
- (CAGradientLayer*) orangeGradient;
- (void)locationManager:(CLLocationManager *)manager
     didUpdateLocations:(NSArray *)locations;
-(void)locationManager:(CLLocationManager *)manager didFailWithError:(NSError *)error;

@end

