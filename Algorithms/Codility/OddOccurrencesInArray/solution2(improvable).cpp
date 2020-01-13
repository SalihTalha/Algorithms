#include <iostream>
#include <ctime>
#include <vector>
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
        }
        if(!flag){ // if element in A can not be find in B, then add it to B to find later
            B.push_back(A[i]);
        }
    } // This algorithm take O(n^2) so we need to find something faster, maybe O(log(n))
    return *B.begin();
}

int main(){
    vector <int> A;
    vector <int> B;
    int j;
    int iter = 100000;
    srand((int)time(0));
    for(int i = 0; i < iter; i++){
        j = rand()%100000;
        A.push_back(j);
        A.push_back(j);
    } // since A has elements like ordered ( 1,1,16,16,24,24,47,47 ...) this will take O(n) even if algorithm is O(n^2) so we have to give it randomly
    for(int h =iter ; h > 0; h--){
        j = rand()%h;
        B.push_back(A[j]);
        A.erase(A.begin()+j);
    } // for giving elements B randomly 

    B.push_back(15);

    cout << solution(B);
    return 0;
}