/*
Merge K sorted arrays
Given k different arrays, which are sorted individually (in ascending order). You need to merge all the given arrays such 
that output array should be sorted (in ascending order).
Hint : Use Heaps.
Input Format:
The first line of input contains an integer, that denotes value of k.
The following lines of input represent k sorted arrays. Each sorted array uses two lines of input. The first line contains
 an integer, that denotes the size of the array. The following line contains elements of the array.
Output Format:
The first and only line of output contains space separated elements of the merged and sorted array, as described in the 
task.
Constraints:
0 <= k <= 1000
0 <= n1, n2 <= 10000
Time Limit: 1 second
Sample Input 1:
4
3
1 5 9
2
45 90
5
2 6 78 100 234
1
0
Sample Output 1:
0 1 2 5 6 9 45 78 90 100 234
*/

#include <iostream>
#include <vector>
using namespace std;

#include<bits/stdc++.h>

class Triplet{
    public:
    int element;
    int row;
    int index;
    Triplet(int data1,int data2,int data3){
        element=data1;
        row=data2;
        index=data3;
    }
};
//in case of priority queue we need to make comp class
//and the comparing function will be opposite to what we require
class comp{
    public:
    bool operator()(Triplet &a,Triplet &b){
        return a.element>b.element;
    }
};
vector<int> mergeKSortedArrays(vector<vector<int>*> input) {
    // Write your code here
    priority_queue<Triplet,vector<Triplet>,comp>pq;
    vector<int>sol;
    for(int i=0;i<input.size();i++){
        Triplet temp(input[i]->at(0),i,0);
        pq.push(temp);
    }
    while(!pq.empty()){
        Triplet a=pq.top();
        pq.pop();
        sol.push_back(a.element);
        if(a.index+1<input[a.row]->size()){
            Triplet temp(input[a.row]->at(a.index+1),a.row,a.index+1);
            pq.push(temp);
        }
    }
    return sol;
}

int main() {
    int k;
    cin >> k;

    vector<vector<int> *> input;

    for (int j = 1; j <= k; j++) {
        int size;
        cin >> size;
        vector<int> *current = new vector<int>;

        for (int i = 0; i < size; i++) {
            int a;
            cin >> a;
            current->push_back(a);
        }

        input.push_back(current);
    }

    vector<int> output = mergeKSortedArrays(input);

    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }

    return 0;
}