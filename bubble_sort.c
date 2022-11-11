#include<stdio.h>
int main()
{
    int N=11, i, j, temp;
    int ara[11]= {12, 7, 9, 1, 3, 73,11, 15, 62, 19, 4};
    int sorted_ara[11];

    for(i=0; i<N; i++)
    {
        printf("%d ",ara[i]);
    }
    printf("\n");



    for(j=0; j<N; j++)
    {


        for(i=0; i<N-1; i++)        //compare ara[i] and ara[i+1}
        {
            if(ara[i]>ara[i+1])
            {
                temp = ara[i];
                ara[i] = ara[i+1];      //for swapping
                ara[i+1] = temp;
            }
        }


        for(i=0; i<N; i++)
        {
            printf(" %d ",ara[i]);
        }
        printf("\n");
    }

    return 0;
}
