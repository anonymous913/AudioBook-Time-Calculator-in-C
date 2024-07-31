#include <stdio.h>
int main()
{
    int a, b, c;
    float d;
    printf("\n\nThis Program is Created By\n\n-----------------------------------------------------\n\nMd. Mahfuzur Rahman\n\nProgram Name: \nAudioBook Time Calculator { (Hour + Minute) / Playback Speed }\n\n-----------------------------------------------------\n\nEnter Two Value Below\n\n---------------------------\n\n");
    printf("Enter Value For Hours: ");
    scanf("%d", &a);
    printf("Enter Value For Minutes: ");
    scanf("%d", &b);
    printf("Enter Value of Playback Speed: ");
    scanf("%f", &d);
    c = (a * 60 + b);
    d = (c / d);
    printf("\nActual Length of AudioBook { A(%d*60) min + B(%d) min }  = Total Time is: %d min", a, b, c);
    printf("\nCalculated Time Based on Your Playback Speed Value =  is: %f min\n\n", d);
    printf("Jajakallah Khair For Using This Program.");
    return 0;
}