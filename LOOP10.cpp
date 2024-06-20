#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string line;
    getline(cin, line);

    istringstream iss(line);
    long long n;
    bool is = false;

    while (iss >> n)
    {
        if (n == 2004)
        {
            is = true;
            break;
        }
    }

    if (is)
    {
        cout << 2004 << endl;
    }
    else
        cout << -1;
    return 0;
}