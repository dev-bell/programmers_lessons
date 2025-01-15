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

int compareNumbers(int first_num, int second_num){
    return first_num > second_num ? first_num:second_num;
}

int solution(int a, int b) {
    int digit_count = countDigits(b);
    int first_num = (a * calculatePower(digit_count)) + b;
    int second_num = 2 * a * b;
    int answer = compareNumbers(first_num, second_num);
    
    return answer;
}