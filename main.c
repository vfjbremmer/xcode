//
//  main.c
//  passer-rating
//
//  Created by Victor Bremmer on 02/12/14.
//  Copyright (c) 2014 Victor Bremmer. All rights reserved.
//

#include <stdio.h>
#include "rating.h"  

int main(int argc, const char * argv[])
{
    int nArgs;
    do  {
        int comps, atts, yards, TDs, INTs;
        printf("comps, atts, yards, TDs, INTs: ");
        nArgs = scanf("%d %d %d %d %d",
                      &comps, &atts, &yards, &TDs, &INTs);
        if (nArgs == 5) {
            float rating = passer_rating(comps, atts, yards, TDs, INTs);
            printf("Rating = %.2f\n", rating);
        }
    } while (nArgs == 5);

    return 0;
}
