#include <iostream>
using namespace std;

int solution(int N) {
    int max = 0;
    int result[32];
    int j, i = 0;
    while(N!= 0){
        if(N%2 == 1)
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
        else {
            result[i] = max;
            max = 0;
            i++;
            N = N / 2;
        }
    }
    max = result[0];
    for(j = 0; j < i; j++){
        if(max < result[j])
            max = result[j];
    }
    return max;
    
}


int main(){
    cout << solution(1610612737);
    return 0;
}