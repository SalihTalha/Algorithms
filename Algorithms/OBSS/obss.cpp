// you can use includes, for example:
// #include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

string solution(int U, int L, vector<int> &C) {
    int i = 0;
    int sumC = 0;
    int sumM = U+L;
    int size = C.size();
    char* answer = (char*) malloc(sizeof(char)*size*2+1);
    answer[size] = ',';
    
    // Controlling if it is possible
    for(i = 0; i < size; i++){
        sumC += C[i];
    }
    if (sumM != sumC){
        return "IMPOSSIBLE";
    }
    
    //RUNTIME = 2n
    
    for(i = 0; i < size; i++){
        if(C[i] == 2){
            answer[i] = '1';
            answer[i+size] = '1';
            U--;
            L--;
        }
        else if(C[i] == 0){
            answer[i] = '0';
            answer[i+size] = '0';
            U--;
            L--;
        }
        else{
            if(U>L){
                answer[i] = '1';
                answer[i+size] = '0';
                U--;
            }
            else {
                answer[i+size] = '0';
                answer[i] = '1';
                L--;
            }
        }
    }
    string ans = string(&answer[0],size);
    free(answer);
    return ans;
}
