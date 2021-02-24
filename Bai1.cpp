#include <iostream>
#include <cmath>
using namespace std;

string isPrime(int n){
      if(n<2) return "no";
      for(int i = 2;i <= sqrt(n);i++){
        if(n%i==0) return "no";
      }
      return "yes";
}

int main()
{
    int n;
    cin >> n;
    cout << isPrime(n);
    return 0;
}

