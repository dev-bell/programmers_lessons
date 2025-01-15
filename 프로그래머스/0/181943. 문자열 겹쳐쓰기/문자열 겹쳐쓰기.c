#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* overwrite_string, int s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int str_len = strlen(my_string);
    int over_str_len = strlen(overwrite_string);
    int str_size = (str_len + 1) * sizeof(char);    
    char* answer = (char*)malloc(str_size);
    
    for(int i=0; i<str_len; i++){
        answer[i] = my_string[i];
    }
    
    answer[str_len] = '\0';
    
    for(int i=0; i<over_str_len; i++){
        if(i+s < str_len){
            answer[i+s] = overwrite_string[i];
        }        
    }
    
    return answer;
}