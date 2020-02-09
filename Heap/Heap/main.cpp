//
//  main.cpp
//  Heap
//
//  Created by Эрдэм Цыренов on 09.02.2020.
//  Copyright © 2020 Эрдэм Цыренов. All rights reserved.
//

#include <iostream>
#include <vector>
#include "heap.h"
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    Min_Heap heap(array);

    vector<pair<int, int>> swaps = heap.get_swaps();
    
    cout << swaps.size();
    for (auto item : swaps){
        cout << item.first << " " << item.second << endl;
    }

    return 0;
}
