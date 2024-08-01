#include <stdio.h>
int main()
{
    int a, b, c;
    float d;
    printf("\n\nThis Program is Created By\n\n-----------------------------------------------------\n\nMd. Mahfuzur Rahman\n\n-----------------------------------------------------\n\nProgram Name: \nAudioBook Time Calculator { (Hour + Minute) / Playback Speed }\n\nEnter Two Value Below\n\n---------------------------\n\n");
    printf("Enter Value For Hours: ");
    scanf("%d", &a);
    printf("Enter Value For Minutes: ");
    scanf("%d", &b);
    c = (a * 60 + b);
    d = (c / 1.70);
    printf("\nActual Length of AudioBook { A(%d*60) min + B(%d) min }  = Total Time is: %d min", a, b, c);
    printf("\nOn The Playback Speed of 1.70x Calculated Time is: %f min\n\n", d);
    printf("Jajakallah Khair For Using This Program.");
    return 0;
}