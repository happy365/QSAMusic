//
//  QSMusicGeDanTopCollectionViewCell.h
//  QSMusicDemo_OC
//
//  Created by 陈少文 on 16/8/2.
//  Copyright © 2016年 qqqssa. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QSMusicGeDanTopCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UIImageView *imgV;
@property (weak, nonatomic) IBOutlet UILabel *num;
@property (weak, nonatomic) IBOutlet UILabel *title;

- (void)updateWithData:(NSDictionary *)data;

@end