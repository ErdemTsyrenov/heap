//
//  heap.h
//  Heap
//
//  Created by Эрдэм Цыренов on 09.02.2020.
//  Copyright © 2020 Эрдэм Цыренов. All rights reserved.
//
#pragma once
#include <vector>
#include <cmath>
#include <utility>
#include <algorithm>
using namespace std;

class Min_Heap{
public:
    Min_Heap();
    
    Min_Heap(vector<int> a);
    

    
    void push(int item);
    
    vector<int> get_data();
    vector<pair<int, int>> get_swaps();
private:
    void sift_down(int index);
    vector<int> data;
    vector<pair<int,int>> swaps;
    
};

