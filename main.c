#include <xc.h>
#include "config.h"
#include "delay.h"
#include "disp7seg.h"

void main(void) 
{
    char num = 0;
    int nScan = 0;
    
    disp7seg_init();
    
    while( 1 )
    {
        disp7seg( num );
        
        if( ++nScan > 200 )
        {
            nScan = 0;
            num = ((++num) % 100);
        }
        delay(5);
    }
    return;
}
