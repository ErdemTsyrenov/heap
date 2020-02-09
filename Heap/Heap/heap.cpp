//
//  heap.cpp
//  Heap
//
//  Created by Эрдэм Цыренов on 09.02.2020.
//  Copyright © 2020 Эрдэм Цыренов. All rights reserved.
//

#include "heap.h"

Min_Heap::Min_Heap(vector<int> a){
    size_t n = a.size();
    data = a;
    for (int i = floor((n-2)/2); i >= 0; i--){
        sift_down(i);
    }
}

Min_Heap::Min_Heap(){}

vector<int> Min_Heap::get_data(){
    return data;
}

vector<pair<int, int>> Min_Heap::get_swaps(){
    return swaps;
}

void Min_Heap::sift_down(int index){
    size_t n = data.size();
    while(true){
        int firstChildIndex = 2*index + 1;
        int secondChildIndex = 2*index + 2;
        
        if (firstChildIndex >= n){
            break;
        }
        else if (secondChildIndex < n){
            int swapingIndex;
            if (data[firstChildIndex] < data[index] || data[secondChildIndex] < data[index]){
                if (data[firstChildIndex] < data[secondChildIndex]){
                    swapingIndex = firstChildIndex;
                } else{
                    swapingIndex = secondChildIndex;
                }
                swap(data[swapingIndex], data[index]);
                swaps.push_back({index, swapingIndex});
                index = swapingIndex;
                
            } else{
                break;
            }
        } else if(firstChildIndex < n){
            if (data[firstChildIndex] < data[index]){
                swap(data[firstChildIndex], data[index]);
                swaps.push_back({index,firstChildIndex});
                index = firstChildIndex;
            } else{
                break;
            }
        }
    }
    return;
}
    //                   2
    //       3                    5
    //  4       6              7
