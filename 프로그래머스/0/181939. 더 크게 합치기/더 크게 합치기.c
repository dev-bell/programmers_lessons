#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int countDigits(int num){
    int count = 0;
    
    while(num != 0){
        num /= 10;
        count++;
    }
    
    return count;
}

int calculatePower(int count){
    int result = 1;
    
    for(int i=0; i<count; i++){
        result *= 10;
    }
    
    return result;
}

int compareNumbers(int a_number, int b_number){
    return a_number > b_number ? a_number : b_number;
}

int solution(int a, int b) {
    int a_digit = countDigits(a);
    int b_digit = countDigits(b);
    int a_num = (a * calculatePower(b_digit)) + b;
    int b_num = (b * calculatePower(a_digit)) + a;
    int answer = compareNumbers(a_num, b_num);    
    
    return answer;
}