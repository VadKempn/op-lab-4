//
// Created by user on 13.10.2022.
//

#include <stdio.h>

char *vars[2] = {"No", "Yes"};
int lab4 () {
    int num2, num1, bit, answer;
    scanf("%d", &num1);
    answer = num1 >= 21 & num1 <= 45;
    printf("Answer-%s\n", vars[answer]);
    scanf("%d", &num2);
    bit=num2 >> 16;
    bit = bit & 1;
    printf("\nYour bit-%d", bit);
    return 0;
}

