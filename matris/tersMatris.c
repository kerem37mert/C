#include <stdio.h>
#include <math.h>

int main()
{
    float matris[3][3];
    float determinant;
    float minor[3][3];
    float cof[3][3];
    float ek[3][3];
    float ters[3][3];

    //Matris Oluşturma
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Matrisin %d. satir %d. sutun elaminini giriniz\n",i+1,j+1);
            scanf("%f",&matris[i][j]);
        }
    }

    printf("Olusturulan matris:\n");

    for(int i=0; i<3; i++)
    {
        printf("[");
        for(int j=0; j<3; j++)
        {
            printf(" %f ",matris[i][j]);
        }
        printf("]\n");
    }

    //determinant
    determinant = (1 * matris[0][0] * ((matris[1][1] * matris[2][2]) - (matris[2][1] * matris[1][2]))) + (-1 * matris[0][1] * ((matris[1][0] * matris[2][2]) - (matris[2][2,0] * matris[1][2]))) + (1 * matris[0][2] * ((matris[1][0] * matris[2][1]) - (matris[2][0] * matris[1][1])));
    printf("Determinant: %f\n",determinant);

    if(determinant != 0)
    {
        //Minör Matris
        for(int i=0; i<3; i++)
        {
            int a, b;

            if(i == 0)
            {
                a = 1;
                b = 2;
            }
            else if(i == 1)
            {
                a = 0;
                b = 2;
            }
            else if(i == 2)
            {
                a = 0;
                b = 1;
            }

            for(int j=0; j<3; j++)
            {
                int c,d;

                if(j == 0)
                {
                    c = 1;
                    d = 2;
                }
                else if(j == 1)
                {
                    c = 0;
                    d = 2;
                }
                else if(j == 2)
                {
                    c = 0;
                    d = 1;
                }
                    minor[i][j] = (matris[a][c] * matris[b][d]) - (matris[b][c] * matris[a][d]);
            }
        }

        printf("\nMinor matris:\n");

        for(int i=0; i<3; i++)
        {
            printf("[");

            for(int j = 0; j<3; j++)
            {
                printf(" %f ",minor[i][j]);
            }
            printf("]\n");
        }

        //Kofaktör Matris
        for(int i= 0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cof[i][j] = pow(-1,i+j) * minor[i][j];

            }
        }

        printf("\nKofaktor matris:\n");

        for(int i=0; i<3; i++)
        {
            printf("[");

            for(int j = 0; j<3; j++)
            {
                printf(" %f ",cof[i][j]);
            }
            printf("]\n");
        }

        //EK Matris
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                ek[j][i] = cof[i][j];
            }
        }

        printf("\nEk matris:\n");

        for(int i=0; i<3; i++)
        {
            printf("[");

            for(int j = 0; j<3; j++)
            {
                printf(" %f ",ek[i][j]);
            }
            printf("]\n");
        }

        //Ters Matris
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                ters[i][j] = (1 / determinant) * ek[i][j];
            }
        }

        printf("\nTers matris:\n");

        for(int i=0; i<3; i++)
        {
            printf("[");

            for(int j = 0; j<3; j++)
            {
                printf(" %f ",ters[i][j]);
            }
            printf("]\n");
        }
    }
    else
    {
        printf("Matrisin determinanti 0 oldugu icin matris tersi yoktur");
    }

    return 0;
}
