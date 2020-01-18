#include <numeric>

int solution(vector<int> &A) {
    int size = A.size(); /* I should have make it unsigned too but i don't know why i don't did it. At first i though it is going to work
				but at the return part, when it does the calculations, if it finds it bigger than int, it gives error. I
				didn't saw it while writing the code.

				What is the efficient way to write this code: https://asawicki.info/news_1691_efficient_way_of_using_stdvector
			*/
    size += 1;
    unsigned int sum;

    sum = accumulate(A.begin(),A.end(),0); // to sum up all the elements in the array
    return (size*(size+1) / 2) - sum; // returns [ (sum of all elements 1 to N+1) - (sum of array) ]
}