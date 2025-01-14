#include <stdio.h>
#define LEN_INPUT 10

int main(void) {
    char s1[LEN_INPUT];   
    scanf("%s", s1);    
    
    int str_len = strlen(s1);
    
    for(int i=0; i<str_len; i++){
        if(s1[i]>=65 && s1[i]<=90){
            s1[i] += 32;
        }else{
            s1[i] -= 32;
        }
    }
    
    printf("%s", s1);

    return 0;
}
