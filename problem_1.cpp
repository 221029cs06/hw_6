//
//  main.cpp
//  problem_1
//
//  Created by Asilbek Alimov on 06/04/23.
//

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2, 4, 5, 6, 7, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int smallest = arr[0];

   
    for (int i=0; i < n; i++){
      if(arr[i] < smallest)
        smallest = arr[i];
    }

    int sec_smallest = INT_MAX;

    
    for (int i=0; i < n; i++){
       if(arr[i] != smallest && arr[i] < sec_smallest)
         sec_smallest = arr[i];
    }

    cout<<sec_smallest;
}

