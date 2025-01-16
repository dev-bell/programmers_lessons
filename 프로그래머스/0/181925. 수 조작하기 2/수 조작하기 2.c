#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numLog_len은 배열 numLog의 길이입니다.
char* solution(int numLog[], size_t numLog_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int str_size = (numLog_len + 1) * sizeof(char);
    char* answer = (char*)malloc(str_size);
    
    for(int i=1; i<numLog_len; i++){
        int num = num = numLog[i] - numLog[i-1];
        
        switch(num){
            case 1: answer[i-1] = 'w'; break;
            case -1: answer[i-1] = 's'; break;
            case 10: answer[i-1] = 'd'; break;
            case -10: answer[i-1] = 'a'; break;
            default: break;
        }
    }
    
    answer[numLog_len-1] = '\0';
    
    return answer;
}