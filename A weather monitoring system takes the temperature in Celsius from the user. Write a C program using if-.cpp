#include <stdio.h>

int main()
{
    float temp;
    
    printf("Enter Temperature in Celsius:\n");
    scanf("%f", &temp);

    if (temp < 15)
    {
        printf("Cold");
    }    
	 else
	 if (temp >= 15 && temp <= 30)
    {
        printf("Normal");
    }
    else 
    {
        printf("HOT");
    }
    
    return 0;
}

