#include<bits/stdc++.h>
using namespace std;
struct Node {
    long long a;
    long long b;
};

long long n;
Node a[100005];

void QuickSort(int l, int r) {
    int i = l;
    int j = r;
    Node mid = a[(l+r)/2];
    while (i <= j) {
        while((a[i].a < mid.a) || ((a[i].a == mid.a) && (a[i].b > mid.b))) i++;
        while((mid.a < a[j].a) || ((mid.a == a[j].a) && (mid.b > a[j].b))) j--;
        if (i <= j) {
            Node tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
    }
    if (i < r) QuickSort(i,r);
    if (l < j) QuickSort(l,j);
}

bool cmp(Node& a, Node& b) {
    if (a.a != b.a) return (a.a > b.a);
    if (a.a == b.a) return (a.b < b.b);
}

int main() {

//      sap xep tang dan
//      n = 6
//      {3,2} {1,6} {3,1} {4,100} {-1,100} {-1,200}


//      {4,100}  {3,2} {3,1} {1,6} {-1,200} {-1,100}
//
    cin >> n;
    for (int i = 1 ; i <= n; i++)
        cin >> a[i].a;
    for (int i = 1; i <= n; i++)
       cin >> a[i].b;

    QuickSort(1, n);

    //sort(a+1,a+1+n,cmp);


    for (int i = 1; i <= n; i++)
        cout << a[i].a << " " << a[i].b << endl;

}
