#include <stdio.h>


// Wrong Question
int main()
{
    int a_prize, b_prize, c_prize, a_age, b_age, c_age;
    printf("Enter ages in order\n");
    scanf("%d%d%d", &a_age, &b_age, &c_age);
    printf("Enter prizes of of each respectively\n");
    scanf("%d%d%d", &a_prize, &b_prize, &c_prize);
    if(a_age > b_age && a_age > c_age)
    {
        if(a_prize > b_prize && a_prize > c_prize)
        {
            printf("fair");
        }
        else
        {
            printf("unfair");
        }
    }
    else if()
}