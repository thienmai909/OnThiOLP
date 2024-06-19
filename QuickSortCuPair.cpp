#include <iostream>
#include <vector>
#include <utility>
#include <functional>
#include <algorithm>
using namespace std;

vector<pair<int, int>> vect;
int n;

void QuickSort(int l, int r){
    int i = l;
    int j = r;
    pair<int, int> mid = vect[(l+r)/2];
    while(i <= j){
        while((vect[i].first < mid.first) || ((vect[i].first == mid.first) && (vect[i].second > mid.second))) i++;
        while((mid.first < vect[j].first) || ((mid.first == vect[j].first) && (mid.second > vect[j].second))) j--;
        if (i <= j){
            pair<int, int> tmp = vect[i];
            vect[i] = vect[j];
            vect[j] = tmp;
            i++;
            j--;
        }
    }
    if (i < r) QuickSort(i,r);
    if (l < j) QuickSort(l,j);
}

int main(){
    cin >> n;
    vect.resize(n);
    for (int i = 0; i < vect.size(); i++){
        cin >> vect[i].first;    
    }
    for (int i = 0; i < vect.size(); i++){
        cin >> vect[i].second;    
    }

    // QuickSort(0, vect.size()-1);

    sort(vect.begin(), vect.end(), greater<pair<int, int>>());

    for (auto i : vect){
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}