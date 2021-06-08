/*
 * @Date: 2021-06-08 08:48:00
 * @LastEditors: chenqiaoqiao
 * @LastEditTime: 2021-06-08 13:48:47
 * @FilePath: /spice-gtk/home/cqq/test/pixman-test/rect.c
 */
#include <stdlib.h>
#include <stdio.h>
#include "rect.h"
#include "pixman.h"

void test_residue_region()
{
    pixman_region32_t r1;
    pixman_region32_t r2;

    pixman_box32_t *rects;

    int n_rects;

    //init two rect
    pixman_region32_init_rect(&r1, 0, 0, 200, 200);
    pixman_region32_init_rect(&r2, 180, 20, 200, 200);
    
    //Intersecting part
    pixman_region32_intersect(&r2, &r2, &r1);

    //subtract intersecting part
    pixman_region32_subtract(&r1, &r1, &r2);
    
    //decomposition
    rects = pixman_region32_rectangles(&r1, &n_rects);

    for(int i = 0; i < n_rects; i++) {
        printf("RECT[%d]:x1=%d, y1=%d, x2=%d, y2=%d\n", i,
               rects[i].x1, rects[i].y1, rects[i].x2, rects[i].y2);
    }
    pixman_region32_fini (&r1);
    pixman_region32_fini (&r2);
}