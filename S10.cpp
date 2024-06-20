#include <iostream>
#include <string>
using namespace std;

string reverse(string text)
{
    long long n = text.size();
    string tmp = "";
    for (int i = n - 1; i >= 0; i--)
    {
        tmp += text[i];
    }
    return tmp;
}

int main()
{
    long long n;
    cin >> n;
    string text, s1, s2;
    cin >> text;

    for (size_t i = 0; i < n; i++)
    {
        s1 += text[i];
    }
    long long size_text = text.size();
    for (size_t i = n; i < size_text; i++)
    {
        s2 += text[i];
    }

    s1 = reverse(s1);
    s2 = reverse(s2);
    s1 += s2;

    cout << s1 << endl;

    return 0;
}