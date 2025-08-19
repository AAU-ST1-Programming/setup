#include <stdio.h>

int main()
{
    // definer variablerne
    int a, b, c;

    // print en besked ud
    printf("input a: ");
    // få et brugerinput og send heltallet til a
    scanf("%i", &a);
    // print en besked ud
    printf("input b: ");
    // få et brugerinput og send heltallet til b
    scanf("%i", &b);
    // beregn gennemsnittet
    c = (a + b) / 2;
    // print ligningen ud
    printf("(%i+%i)/2=%i\n", a, b, c);

    return 0;
}
