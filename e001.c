#include <stdio.h>
#include <stdlib.h>

int main()

{

    int betyg;

    printf("Hur manga poang fick du?\n");
    scanf("%d", &betyg);
    if (betyg < 25)
    {
        printf("Du har fatt betyget F!\n");
    }
    if (betyg >= 25 && betyg <= 29)
    {
        printf("Du har fatt betyget E!\n");
    }
    if (betyg >= 30 && betyg <= 34)
    {
        printf("Du har fatt betyget D!\n");
    }
    if (betyg >= 35 && betyg <= 39)
    {
        printf("Du har fatt betyget B!\n");
    }
    if (betyg >= 45 && betyg <= 50)
    {
        printf("Du har fatt betyget A!\n");
    }
    else if (betyg > 51)
    {
        printf("Du har skrivit ett for hogt poang!\n");
    }
    return 0;
}
