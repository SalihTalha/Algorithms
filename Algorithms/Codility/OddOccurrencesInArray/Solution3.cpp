#include <algorithm>

int solution(vector<int> &A) {
    int i = 0;
    sort(A.begin(),A.end());
    while(A[i] == A[i+1]){
        i+=2;
    }
    return A[i];
}