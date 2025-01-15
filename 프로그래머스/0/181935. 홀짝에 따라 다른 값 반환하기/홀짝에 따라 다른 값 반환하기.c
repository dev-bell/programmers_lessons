#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    if(n%2 == 0){
        for(int i=1; i<=n; i++){
            if(i%2 == 0){
                int square = i * i;
                answer += square;
            }            
        }
    }else{
        for(int i=1; i<=n; i++){
            if(i%2 == 1){
                answer += i;
            }
        }
    }
    
    return answer;
}