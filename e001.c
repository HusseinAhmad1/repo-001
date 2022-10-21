#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()

{

    int betyg;

        printf("Hur manga poang fick du?");
        scanf("%d", betyg);
    if (betyg < 25)
    {
    printf("Du har fatt betyget F!");
    }
        if (betyg >= 25 && betyg <= 29)
        {
            printf("Du har fatt betyget E!");
        }
            if (betyg >= 30 && betyg <= 34)
            {
                printf("Du har fatt betyget D!");
            }
                if (betyg >= 35 && betyg <= 39)
                {
                    printf("Du har fatt betyget B!");
                }
                    if (betyg >= 45 && betyg <= 50)
                    {
                        printf("Du har fatt betyget A!");
                    }
                        else if (betyg > 51)
                        {
                            printf("Du har skrivit ett for hogt poang!");
                        }
    return 0;
}




















