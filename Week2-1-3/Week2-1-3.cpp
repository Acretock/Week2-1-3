#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

vector<string> PolyndromeFilter(vector<string> vec, int minLength) {
    vector<string> temp;
    for (auto v : vec) {
        if (v.length()>=minLength) {
            string rev(v);
            reverse(begin(rev), end(rev));
            if (rev == v)
                temp.push_back(v);
        }

    }
    return temp;
}
int main()
{
    vector<string> vec;
    string temp;
    int m,n;
    getline(cin, temp);
    stringstream ss(temp);
    while (ss.good())
    {
        string substr;
        getline(ss, substr, ' ');
        vec.push_back(substr);
    }
    cin >> m;
        for (auto i: PolyndromeFilter(vec, m))
            cout << i << " ";

}
