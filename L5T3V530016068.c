/*
=============================================
 Name: L5T3V530016068.c
 Author: Yan Yusen
 Version:1.0
 Copyright: Your copyright notice
 Description: none
 ============================================= */
#include <stdio.h>//include main function
int main() //int main function
{
    int a, b, c;//int abc;
    printf("Please input the 3 lengths of edges: ");//printf("Input an integer n:");
    scanf("%d %d %d", &a, &b, &c);//scanf ("%d", &n);
    if ( a > 0 && b > 0 && c > 0 )//if ( n % 3 == 0 && n % 8 == 0 )
    {
        if ( a + b > c && a + c > b && b + c > a )//if ( a + b > c && a + c > b && b + c > a )
        {
            printf("%d, %d, %d can form a triangle!\n", a, b, c);//printf("%d, %d, %d can form a triangle!\n", a, b, c);
        }
        else//else
        {
            printf("%d, %d, %d cannot form a triangle!\n", a, b, c);//printf("%d, %d, %d cannot form a triangle!\n", a, b, c);
        }
    }
    
    else//else
    {
        printf("Warning!\n");//printf
    }
    
    return 0;//return 0
} 