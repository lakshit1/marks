#include <stdio.h>
#include <conio.h>

void main() {
    float m1, m2, m3, total, avg;
    printf("Enter marks of three subjects to find average marks \n");
    scanf("%f %f %f", &m1, &m2, &m3);
    total = m1 + m2 + m3;
    avg = total / 3;
    printf("Average marks = %f", avg);
}