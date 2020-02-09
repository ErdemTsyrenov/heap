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
    
    void insert(int item);
    int extract_min();
    
    vector<int> get_data() const;
    vector<pair<int, int>> get_swaps() const;
private:
    void sift_down(int index);
    void sift_up(int index);
    vector<int> data;
    vector<pair<int,int>> swaps;
    
};

