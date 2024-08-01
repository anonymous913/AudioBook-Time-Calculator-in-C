#include <stdio.h>
int main()
{
    int a1, a2, a3;
    float a4;
    printf("\n\nThis Program is Created By\n\n-----------------------------------------------------\n\nMd. Mahfuzur Rahman\n\n-----------------------------------------------------\n\nProgram Name: \nAudioBook Time Calculator { (Hour + Minute) / Playback Speed }\n\nEnter 1st Part Lenght Below\n\n---------------------------\n\n");
    printf("Enter Value For Hours: ");
    scanf("%d", &a1);
    printf("Enter Value For Minutes: ");
    scanf("%d", &a2);
    printf("Enter Value of Playback Speed: ");
    scanf("%f", &a4);
    a3 = (a1 * 60 + a2);
    a4 = (a3 / a4);
    printf("\nActual Duration of AudioBook { A(%d*60) min + B(%d) min }  = Total Time is: %d min", a1, a2, a3);
    printf("\nPlayback Speed Duration of AudioBook: %f min\n\n", a4);

    int b1, b2, b3;
    float b4;

    printf("\nEnter 2nd Part Length Below\n\n---------------------------\n\n");
    printf("Enter Value For Hours: ");
    scanf("%d", &b1);
    printf("Enter Value For Minutes: ");
    scanf("%d", &b2);
    printf("Enter Value of Playback Speed: ");
    scanf("%f", &b4);
    b3 = (b1 * 60 + b2);
    b4 = (b3 / b4);
    printf("\nActual Duration of AudioBook { A(%d*60) min + B(%d) min }  = Total Time is: %d min", b1, b2, b3);
    printf("\nPlayback Speed Duration of AudioBook: %f min\n\n", b4);

    int c1, c2, c3;
    float c4;

    printf("\nEnter 3rd Part Length Below\n\n---------------------------\n\n");
    printf("Enter Value For Hours: ");
    scanf("%d", &c1);
    printf("Enter Value For Minutes: ");
    scanf("%d", &c2);
    printf("Enter Value of Playback Speed: ");
    scanf("%f", &c4);
    c3 = (c1 * 60 + c2);
    c4 = (c3 / c4);
    printf("\nActual Duration of AudioBook { A(%d*60) min + B(%d) min }  = Total Time is: %d min", c1, c2, c3);
    printf("\nPlayback Speed Duration of AudioBook: %f min\n\n", c4);

    int d1, d2, d3;
    float d4;

    printf("\nEnter 4th Part Length Below\n\n---------------------------\n\n");
    printf("Enter Value For Hours: ");
    scanf("%d", &d1);
    printf("Enter Value For Minutes: ");
    scanf("%d", &d2);
    printf("Enter Value of Playback Speed: ");
    scanf("%f", &d4);
    d3 = (d1 * 60 + d2);
    d4 = (d3 / d4);
    printf("\nActual Duration of AudioBook { A(%d*60) min + B(%d) min }  = Total Time is: %d min", d1, d2, d3);
    printf("\nPlayback Speed Duration of AudioBook: %f min\n\n", d4);

    int e1, e2, e3;
    float e4;

    printf("\nEnter 5th Part Length Below\n\n---------------------------\n\n");
    printf("Enter Value For Hours: ");
    scanf("%d", &e1);
    printf("Enter Value For Minutes: ");
    scanf("%d", &e2);
    printf("Enter Value of Playback Speed: ");
    scanf("%f", &e4);
    e3 = (e1 * 60 + e2);
    e4 = (e3 / e4);
    printf("\nActual Duration of AudioBook { A(%d*60) min + B(%d) min }  = Total Time is: %d min", e1, e2, e3);
    printf("\nPlayback Speed Duration of AudioBook: %f min\n\n", e4);

    printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n\t\t\t\tCongratulations! Results Are Calculated. The Playback Speed is Your Given Value Here.\n");
    printf("\n----------------------------------------------------------------------------------------------------------------------------\n");

    printf("\nActual Duration of 1st Part AudioBook { Hour to (%d*60) min + Given (%d) min }  = Total Time is: %d min", a1, a2, a3);
    printf("\n1st Part Calculated Time Based on Your Given Value is: %f min\n\n", a4);

    printf("\nActual Duration of 2nd Part AudioBook { Hour to (%d*60) min + Given (%d) min }  = Total Time is: %d min", b1, b2, b3);
    printf("\n2nd Part Calculated Time Based on Your Given Value is: %f min\n\n", b4);

    printf("\nActual Duration of 3rd Part AudioBook { Hour to (%d*60) min + Given (%d) min }  = Total Time is: %d min", c1, c2, c3);
    printf("\n3rd Part Calculated Time Based on Your Given Value is: %f min\n\n", c4);

    printf("\nActual Duration of 4th Part AudioBook { Hour to (%d*60) min + Given (%d) min }  = Total Time is: %d min", d1, d2, d3);
    printf("\n4th Part Calculated Time Based on Your Given Value is: %f min\n\n", d4);

    printf("\nActual Duration of 5th Part AudioBook { Hour to (%d*60) min + Given (%d) min }  = Total Time is: %d min", e1, e2, e3);
    printf("\n5th Part Calculated Time Based on Your Given Value is: %f min\n\n", e4);

    printf("Jajakallah Khair For Using This Program.");
    return 0;
}