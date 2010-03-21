//
//  BFPreviewBriefView.h
//  Briefs
//
//  Created by Rob Rhyne on 3/19/10.
//  Copyright Digital Arch Design, 2009-2010. See LICENSE file for details.
//


#import "BFSceneView.h"

@class BFPreviewBriefViewController;

@interface BFPreviewBriefView : UIView 
{
    IBOutlet BFPreviewBriefViewController   *delegate;
    IBOutlet UILabel                        *titleLabel;
    IBOutlet UIImageView                    *sceneView;
}

@property (nonatomic, retain) IBOutlet UILabel      *titleLabel;
@property (nonatomic, retain) IBOutlet UIImageView  *sceneView;

- (IBAction)shouldShowBriefInfo;
- (IBAction)shouldLaunchBrief;

@end
