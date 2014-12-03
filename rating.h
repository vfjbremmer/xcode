//
//  rating.h
//  passer-rating
//
//  Created by Victor Bremmer on 02/12/14.
//  Copyright (c) 2014 Victor Bremmer. All rights reserved.
//

#ifndef passer_rating_rating_h
#define passer_rating_rating_h

/** Calculate the NFL/CFL rating from a passer's performance
 
 The statistic may validly be computed from the record of any span of time:
 A quarter, a game, a season, a career.
 
 @param comps   Passes completed in the span
 @param atts    Number of attempts to make a pass
 @param yds     Total yards gained from passes
 @param tds     Touchdowns resulting from passes
 @param ints    Interceptions resulting from passes
 
 @return    A float representing the calculated passer rating
 
 @bug       The calculation is incorrect.
 
 */

float passer_rating(int comps, int atts, int yds, int tds, int ints);

#endif
    