int solution(int X, int Y, int D) {
    Y = Y - X;
    if(Y%D == 0)
        return Y/D;
    return (Y/D)+1;
    /*
    going with chars was very unsatisfied. so i dont try that way
    do{
        temp = Y % 10;
        arr[i] = (char)temp;
        Y /= 10;
    }while(Y>0);
    
    */
    
}