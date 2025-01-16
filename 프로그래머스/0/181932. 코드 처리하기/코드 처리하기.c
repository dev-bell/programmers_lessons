#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* code) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int mode = 0;
    int index_num = 0;
    int code_len = strlen(code);
    int str_size = (code_len + 1) * sizeof(char);
    char* answer = (char*)malloc(str_size);
    
    for(int i=0; i<code_len; i++){
        if(mode == 0){
            if(code[i] == '1')
                mode = 1;
            else
                if(i%2 == 0) answer[index_num++] = code[i];
        }else{
            if(code[i] == '1')
                mode = 0;
            else
                if(i%2 == 1) answer[index_num++] = code[i];
        }
    }
    
    answer[index_num] = '\0';
    
    if(index_num == 0) strcpy(answer, "EMPTY");
    
    return answer;
}