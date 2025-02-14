#include <iostream>
  using std::cout;
  using std::endl;
   
  int main()
 {
  int total = 0; 

  
  for ( int numero = 2; numero <= 20; numero += 2 )
   total += numero; 

  cout << "La suma es " << total << endl; 
 return 0; 
 }