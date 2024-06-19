#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

int partition(vector<int> &a, int l, int r){
    int pivot = a[r];
    int i = l - 1;
    for (int j = l; j < r; j++){
        if (a[j] <= pivot){
            ++i;
            swap(a[j], a[i]);
        }
    }
    ++i;
    swap(a[i], a[r]);
    return i;
}

int partition2(vector<int> &a, int l, int r){
    int pivot = a[l];
    int i = l-1;
    int j = r+1;
    while (true){
        do{
            ++i;
        } while(a[i] < pivot);
        do{
            --j;
        } while(a[j] > pivot);
        if (i < j){
            swap(a[i], a[j]);
        } else return j;
    }   
}


void QuickSort(vector<int> &a, int l, int r){
    if (l >= r) return;
    int p = partition2(a, l, r);
    QuickSort(a, l, p-1);
    QuickSort(a, p+1, r);
}

void BulleSort(vector<int> &a){
    for (int i = 0; i < a.size(); i++){
        for (int j = 0; j < a.size()-1; j++){
            if (a[j] > a[j+1]) swap(a[j], a[j+1]);
        }
    }
}

int main(){
    vector<int> a;
    int n;
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    // QuickSort(a, 0, n-1);
    // BulleSort(a);
    sort(a.begin(), a.end());
    for (auto i : a){
        cout << i << " ";
    }
    return 0;
}