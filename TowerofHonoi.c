#include<stdio.h>
int Tower (int disk, char BEG, char AUX, char END);
int main()
{
    int n;
    char a = 'A', b = 'B', c = 'C';
    printf("Enter thr number of disk: ");
    scanf("%d", &n);
    if(n<=0)
    {
        printf("You have no disk.");
    }
    else
    {
        Tower(n, a, b, c);
        return 0;
    }
    int Tower (int disk, char BEG, char AUX, char END);
    {
        if(disk<2)
        {
            printf("Move disk from %c to %c\n", BEG, END);
            return 0;
        }
        else
        {
            Tower(disk-1, BEG, END, AUX);
            printf("Move disk from %c to %c\n", BEG, END);
            Tower(disk-1, AUX, BEG, END);
        }
    }
    
}