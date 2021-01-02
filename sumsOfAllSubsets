// Taken from GeeksforGeeks, more information at: https://www.geeksforgeeks.org/print-sums-subsets-given-set/
// You may rightly ask why are you posting this if this is already in GeeksforGeeks and I won't have any reasonable answer to that.
// My only argument would be I want to gather what I learn in one place to not forget and also I heard that trying to explain what you learn
// basically can help you learn better. I also want to try this. And if by any chance someone see these and learn something, it would make me happy.

// Anyway, this algorithm find all subsets of an array. It is pretty self explanatory but it is hard to figure out by yourself, at least it was for me.
// For example for {5, 4, 3} it will first print 5+4+3, and then 5+4, then 5+3...
// Output will be: 12 9 8 5 7 4 3 0

#include <iostream>
#include <vector>

using namespace std; 

void subsetSums(vector <int> arr, int l, int r, 
                int sum=0) 
{ 
    if (l > r) { 
        cout << sum << " "; 
        return; 
    } 
  
    // Subset including arr[l] 
    subsetSums(arr, l+1, r, sum+arr[l]); 
  
    // Subset excluding arr[l] 
    subsetSums(arr, l+1, r, sum); 
} 

int main() 
{ 
    vector <int> arr = {5, 4, 3}; 
    int n = arr.size();
  
    subsetSums(arr, 0, n-1); 
    return 0; 
}
