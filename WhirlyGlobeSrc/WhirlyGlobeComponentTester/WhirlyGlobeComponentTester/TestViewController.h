/*
 *  TestViewController.h
 *  WhirlyGlobeComponentTester
 *
 *  Created by Steve Gifford on 7/23/12.
 *  Copyright 2011-2012 mousebird consulting
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 */

#import <UIKit/UIKit.h>
#import "WhirlyGlobeComponent.h"
#import "ConfigViewController.h"

// The various base layers we know about
typedef enum {BlueMarbleSingleResLocal,GeographyClassMBTilesLocal,StamenWatercolorRemote,OpenStreetmapRemote,MapBoxTilesSat1,MapBoxTilesTerrain1,MapBoxTilesRegular1,MaxBaseLayers} BaseLayer;

/** The Test View Controller brings up the WhirlyGlobe Component
    and allows the user to test various functionality.
 */
@interface TestViewController : UIViewController <WhirlyGlobeViewControllerDelegate,UIPopoverControllerDelegate>
{
    WhirlyGlobeViewController *globeViewC;
    UIPopoverController *popControl;
}

// Fire it up with a particular base layer
- (id)initWithBaseLayer:(BaseLayer)baseLayer;

@end
