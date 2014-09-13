//
//  TVHStatusInputs.h
//  TvhClient
//
//  Created by zipleen on 09/12/13.
//  Copyright (c) 2013 Luis Fernandes.
//
//  This Source Code Form is subject to the terms of the Mozilla Public
//  License, v. 2.0. If a copy of the MPL was not distributed with this
//  file, You can obtain one at http://mozilla.org/MPL/2.0/.
//

@class TVHServer;

@interface TVHStatusInput : NSObject
@property (strong, nonatomic) NSString *uuid;
@property (strong, nonatomic) NSString *input;
@property NSInteger ber;
@property NSInteger bps;
@property (strong, nonatomic) NSString *stream;
@property NSInteger subs;
@property NSInteger unc;
@property NSInteger weight;
@property float snr;
@property NSInteger signal;

// 4.0
@property NSInteger signal_scale;
@property NSInteger snr_scale;
@property NSInteger te;
@property NSInteger cc;
@property NSInteger ec_bit;
@property NSInteger tc_bit;
@property NSInteger ec_block;
@property NSInteger tc_block;

- (id)initWithTvhServer:(TVHServer*)tvhServer;
- (void)updateValuesFromDictionary:(NSDictionary*) values;

@end
