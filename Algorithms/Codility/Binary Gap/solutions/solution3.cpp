int solution(int N) {
    
    int max = 0;
    int temp = 0;
    
    while(N!=0){
        if(N%2 == 0){
            N = N/2;
        }else
            break;
    }
    N = N / 2;
    
    while(N != 0){
        if(N%2 == 0){
            temp++;
            N = N / 2;
        }else{
            if(temp > max)
                max = temp;
            temp = 0;
            N = N / 2;
        }
    }
    
    return max;
}