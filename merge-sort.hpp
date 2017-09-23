//
//  merge-sort.hpp
//  merge
//
//  Created by Rumeysa Bulut on 22.09.2017.
//  Copyright © 2017 Rumeysa Bulut. All rights reserved.
//

#ifndef MERGESORT_HPP
#define MERGESORT_HPP

class MergeSort {
private:
    int size;
    int* array;
    //int array[8];
    
public:
    MergeSort();
    MergeSort( int array_size );
    ~MergeSort();
    int getSize();
    void printElements();
    void setElements();
    void mergeSort(unsigned int p, unsigned int r);
    void merge(unsigned int p,unsigned int q,unsigned int r);
};

#endif

 /* merge_sort_hpp */
