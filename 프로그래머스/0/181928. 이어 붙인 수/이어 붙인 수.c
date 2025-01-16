#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int calculateDigit(int digit_num, int list_num) {
    int result = 0;
    int multiplier = 1;
    
    for (int i = 0; i < digit_num; i++) {
        multiplier *= 10;
    }
    
    result = list_num * multiplier;
    
    return result;
}

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int odd_num = 0;
    int even_num = 0;
    int odd_digit_num = 0;
    int even_digit_num = 0;
    int answer = 0;
    
    for (int i = 0; i < num_list_len; i++) {
        if (num_list[i] % 2 == 0) {
            even_digit_num++;
        } else {
            odd_digit_num++;
        }
    }
    
    for (int i = 0; i < num_list_len; i++) {
        if (num_list[i] % 2 == 0) {
            even_digit_num--;
            even_num += calculateDigit(even_digit_num, num_list[i]);
        } else {
            odd_digit_num--;
            odd_num += calculateDigit(odd_digit_num, num_list[i]);
        }
    }
    
    answer = even_num + odd_num;
    
    return answer;
}