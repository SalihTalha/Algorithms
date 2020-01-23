#include <algorithm>
int solution(vector<int> &A) {
    int i;
    int size = A.size();
    
    sort(A.begin(),A.end());
    if(A[size-1] > size){
        return 0;
    }
    
    for(i = 1; i < size; i++){
        if(A[i-1] != i){
            return 0;
        }
    }
    return 1;
}