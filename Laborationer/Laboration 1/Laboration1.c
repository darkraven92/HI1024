#include <stdio.h>
int main()
{
    int v,vt = -25;

    printf("Lunar decent challenge!\n");
    printf("You will pilot a lunar decent the last 250m.\n");
    printf("Each turn represent 1-second decent time\n");
    printf("Set the throttle for each turn (0-100)\n");
    printf("Time\tHeight\tVelocity\tThrottle\n");

    for (int f = 0; f <= 100; ++f){
                v = vt+(0.1*f-1.5);


    }
    printf(v);

    return 0;
}













