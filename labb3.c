#include<stdio.h>
#include<math.h>
#define n 5
void calc (int a [n][n]);
void sort (int a[n][n]);
void main(void) {
    int a[n][n];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf ("Enter an element [%d][%d] of the massive: " ,i+1,j+1);
            scanf ("%d", &a[i][j]);
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0;j<n;j++)
        {
            printf ("%d\t", a[i][j]);
        }
        printf ("\n");
    }
    sort (a);
    printf ("\n new matrix \n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf ("%d\t", a[i][j]);
        }
        printf ("\n");
    }
    calc (a);
}


void calc (int a [n][n])
{
    int i,j;
    double F= 1.0,k = 1;
    for (i=0; i< (n-1);i++)
    {
        double f = 0.0;
        for (j=i+1;j<n;j++)
        {
                f+=a[i][j];

        }
        k*=f;
        printf ("f %d =%lf\n", i+1,f);
    }
    printf("%lf\n",k);
    F=pow(k,0.25);
    printf ("F=%lf\n",F);
}
void sort (int a[n][n])
{
    int i,j,k,x;
    for(j=0;j<n;j++)
    {
        for(i=1;i<n;i++)
        {
            x=a[i][j];
            k=i-1;
            while (a[k][j]>x&&k>=0)
            {
                a[k+1][j]=a[k][j];
                k--;
            }
            a[k+1][j]=x;
        }
    }
}
