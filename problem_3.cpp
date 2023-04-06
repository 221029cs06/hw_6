//
//  main.cpp
//  problem_3
//
//  Created by Asilbek Alimov on 06/04/23.
//

#include <iostream>
using namespace std;
  
long decimalToOctal(long n);
int main() {
    long decimal;
    cin >> decimal;
    cout << decimalToOctal(decimal);
      
    return 0;
}
  

long decimalToOctal(long n) {
    int remainder;
    long octal = 0, i = 1;
   
    while(n != 0) {
        remainder = n%8;
        n = n/8;
        octal = octal + (remainder*i);
        i = i*10;
    }
    return octal;
}
