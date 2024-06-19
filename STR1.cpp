#include <iostream>
#include <string>

using namespace std;

int main() {
    string n;
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n.length(); i++) {
    	char tmp = n[i];
    	int tmp2 = tmp - '0';
        sum += tmp2;
    }

    cout << sum << endl;

    return 0;
}

