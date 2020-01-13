#include <iostream>
using namespace std;

int solution(vector<int> &A) {
    unsigned int i,j;
    bool flag = false;
    vector<int>B; // temporary element carrier, element that we can not find yet
    
    for(i = 0; i < A.size(); i++){
        flag = false;
        for(j = 0; j < B.size(); j++){
            if(B[j] == A[i]){
                flag = true; // if element in A find in B
                B.erase(B.begin()+j); // erases element at j because we find it in A
                break;
            }
            else
                flag = false;
        }
        if(!flag){ // if element in A can not be find in B, then add it to B to find later
            B.push_back(A[i]);
        }
    }
    return *B.begin();
}