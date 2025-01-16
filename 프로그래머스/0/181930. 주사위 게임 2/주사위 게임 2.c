#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int calculationSquare(int square, int a, int b, int c){
    int num1 = a;
    int num2 = b;
    int num3 = c;
    
    for(int i=1; i<square; i++){
        num1 *= a;
        num2 *= b;
        num3 *= c;
    }
    
    return num1 + num2 + num3;
}

int solution(int a, int b, int c) {
    int answer = 0;
    
    if(a == b && b == c){
        answer = calculationSquare(1, a, b, c) 
                 * calculationSquare(2, a, b, c)
                 * calculationSquare(3, a, b, c);
    }else if(a == b && a != c){
        answer = calculationSquare(1, a, b, c) 
                 * calculationSquare(2, a, b, c);        
    }else if(a == c && a != b){
        answer = calculationSquare(1, a, b, c) 
                 * calculationSquare(2, a, b, c);  
    }else if(b == c && b != a){
        answer = calculationSquare(1, a, b, c) 
                 * calculationSquare(2, a, b, c);
    }else{
        answer = calculationSquare(1, a, b, c);
    }
    
    return answer;
}