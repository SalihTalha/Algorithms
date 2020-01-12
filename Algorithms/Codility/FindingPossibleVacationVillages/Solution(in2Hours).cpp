// you can use includes, for example:
// #include <algorithm>
#include <iostream>
#include <algorithm>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

class Node{
    public:
    unsigned int no; // number of village 
    vector<unsigned int> links; // roads to other villages
    
    Node(int a){
        this->no = a;
    }
};
vector<Node*>Villages;

bool goToNodeIfPossible(unsigned int start,unsigned int end){
    unsigned int i,j;
    //something wrong with this algortihm. I need to call this func inside but i cant find where to call
    //in this limited time. If i can find, i will be publishing it in my github, github.com/SalihTalha
    //önce start'ın bir fazlasını arayıp onunla tekrar fonksiyon çalıştırılacak, bulamazsa start'ın 2 fazlası için fonksiyon çalıştırılacak, end hiç değişmeyecek
    for(i = start; i <= end; i++){
        for(j = 0; j < Villages[start]->links.size(); j++){
            if(Villages[start]->links[j] > i+1)
                return false;
            else if(Villages[start]->links[j] == i+1){
                break;
            }
        }
    }
    cout << start << end;
    return true;
}

int solution(vector<int> &T) {
    unsigned int i,j;
    unsigned int size = T.size();
    unsigned int vacations = 0;
    
    for(i = 0; i < size; i++){
        Villages.push_back(new Node(i));
        Villages[i]->links.push_back(i);
    }
    
    for(i = 0; i < size; i++){
        Villages[i]->links.push_back(T[i]);
        Villages[T[i]]->links.push_back(i);
    }
    
    for(i = 0; i < Villages.size(); i++){
        sort(Villages[i]->links.begin(), Villages[i]->links.end());
    }
    
    for(j = 0; j < size; j++){
        for(i = 0; i < Villages[j]->links.size(); i++){
            if(goToNodeIfPossible(j, Villages[j]->links[i])){ 
                vacations += 1;
            }
        }
    }
    return vacations;
}