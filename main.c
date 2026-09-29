#include <stdio.h>

int main (int argc, char *argv[]) {
    int sec;
    int hours, minutes, seconds;

    printf("input the second : ");
    scanf("%d", &sec);

    hours = sec / 3600;            
    minutes = (sec % 3600) / 60;   
    seconds = sec % 60;            

    printf("The time for %d second is %d : %d : %d\n", sec, hours, minutes, seconds);

    return 0;
}