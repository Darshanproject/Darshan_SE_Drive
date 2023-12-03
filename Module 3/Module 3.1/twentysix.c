#include<stdio.h>
void main() {
    const int secondsInMinute = 60;
    const int minutesInHour = 60;
    int minutes;
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);
    int seconds = minutes * secondsInMinute;
    int hours = minutes / minutesInHour;
    printf("%d minutes is equal to %d seconds or %d hours.\n", minutes, seconds, hours);
}

