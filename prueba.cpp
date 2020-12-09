#include <cmath>
#include <vector>
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
/* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   int n;
   scanf("%d", &n);
   int arr[n];
   for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
   } 
	    
   for (int j = n-1; j > -1; j--){
        cout<<arr[j]<<" ";        
   }
   return 0;
}
