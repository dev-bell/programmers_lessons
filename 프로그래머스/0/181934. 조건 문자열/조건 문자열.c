#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compareValues(char ineq, char eq, int n, int m){ 
    if(eq == '='){
        if(ineq == '>'){
            return n >= m ? 1 : 0;
        }else{
            return n <= m ? 1 : 0;
        }
    }else{
        if(ineq == '>'){
            return n > m ? 1 : 0;
        }else{
            return n < m ? 1 : 0;
        }
    }
    
    return 0;
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* ineq, const char* eq, int n, int m) {
    int answer = compareValues(*ineq, *eq, n, m);
    
    return answer;
}