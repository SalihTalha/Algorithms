#include <iostream>
using namespace std;

int solution(int N) {
    int max = 0;
    int result = 0;
    while(N!= 0){
        if(N % 2 == 1)
            break;
        else{
            N = N / 2;
        }
    }
    while(N!= 0){
        if(N % 2 == 0){
            max++;
            N = N / 2;
        }
        else if(max > result){
            result = max;
            max = 0;
            N = N / 2;
        }
        else{
            max = 0;
            N = N / 2;
        }
    }
    return result; // Buradaki result ile önceki result farklı çünkü burada cevap result'a yazılıyor önceki kodda max'a yazılıyor.
    
}


int main(){
    cout << solution(805306373);
    return 0;
}