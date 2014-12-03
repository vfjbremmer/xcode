//
//  rating.c
//  passer-rating
//
//  Created by Victor Bremmer on 02/12/14.
//  Copyright (c) 2014 Victor Bremmer. All rights reserved.
//

#include "rating.h"

static
double pinPassingComponent(double component)
{
    if (component < 0.0)
        return 0.0;
    else if (component > 2.375)
        return 2.375;
    else
        return component;
}

float
passer_rating(int comps, int atts, int yds, int tds, int ints)
{
    double completionComponent = (((double) comps / atts) * 100.0 - 30.0) / 20.0;
    completionComponent = pinPassingComponent(completionComponent);
    
    double yardageComponent = (((double) yds / atts) - 0.3) / 4.0;   //intentional bug
    yardageComponent = pinPassingComponent(yardageComponent);
                               
    double touchdownComponent = 20.0 * (double) tds / atts;
    touchdownComponent = pinPassingComponent(touchdownComponent);
                               
    double pickComponent = 2.375 - ( 25.0 * (double) ints / atts);
    pickComponent = pinPassingComponent(pickComponent);
                                                               
    double retval = 100.0 * (completionComponent + yardageComponent + touchdownComponent + pickComponent) / 6.0;
                                                                       
                                                                       return retval;
                                                                       }
                                                                       