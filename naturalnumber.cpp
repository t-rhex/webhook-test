//This is just a comment
// Just another comment 

#include <iostream>

using namespace std;

int main (){
   
  int i,n , sum=0;
  
  
  cout << " Enter the number you want to find the natural number of: " << endl;
  cin >> n; 
 
   for ( i = 1 ; i <= n ; i++ ) {
    
    cout << " The 10 natural numbers are " << i << "" << endl;
    sum = sum + i;  
  }
    
      cout << " The sum of the " << n << "number is " << sum << endl;
     
}
