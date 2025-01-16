#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int multiply_num = 1;
    int sum_num = 0;
    int square_num = 0;
    int answer = 0;
    
    for(int i=0; i<num_list_len; i++){
        multiply_num *= num_list[i];
        sum_num += num_list[i];
    }
    
    square_num = sum_num * sum_num;
    
    answer = multiply_num < square_num ? 1 : 0;
    
    return answer;
}