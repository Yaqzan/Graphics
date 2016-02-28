#include <stdio.h>
#include <X11/Xlib.h>
#include <stdlib.h>
#include "matrix.h"


int main(void)
{
    
    double THETA = 35; // The viewing angle
    #define ASPECT 1.0 // Aspect Ratio
    #define N 5.0 // Distance from camera to near plane
    
    
    // The height and width of the near plane
    float h = N*tan(M_PI/180.0*THETA/2.0) ;
    float w = h* ASPECT;
    
    float c; // x coordinate of image pixel
    float r; // y coordinate of image pixel
        
    
    
    
    
    
    
    int height=500, width=500;
    
    for(i=0;i< height;i++){
        for(j=0; j<width;j++){
            dmatrix_t ray;
            dmat_alloc(&ray,4,1) ;
        }
    }
    
    
    
    
    return 0;
}

