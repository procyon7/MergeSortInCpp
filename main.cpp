//
//  main.cpp
//  merge
//
//  Created by Rumeysa Bulut on 22.09.2017.
//  Copyright © 2017 Rumeysa Bulut. All rights reserved.
//

#include <iostream>
#include "merge-sort.hpp"
using namespace std;
int main(int argc, char const *argv[]) {
    int size;
    cout<< "Enter array size: "<<endl;
    cin>>size;
    MergeSort mergeArr(size);
    mergeArr.mergeSort(0, mergeArr.getSize()-1);
    
    cout<<"Array is sorted using merge sort algorithm."<<endl;
    mergeArr.printElements();
    return 0;
}

