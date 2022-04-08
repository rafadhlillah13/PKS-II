#include <iostream>
using namespace std;

int main (){
    int n,i;
    cout << "inputkan bilangan = ";
    cin >> n;

    for (i=0 ; i<=n; i++){
      if (i %2 == 1 ) //ganjil
      continue; // karena continue maka yang ganjil akan di skip
      cout << i << ",";
      
    }
     return 0;
}
