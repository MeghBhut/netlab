#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a = -1;
    vector<int> v = {1, 2};
    cout << (size_t)a << "\n";
    if (a < v.size()) cout << "less\n"; else cout << "NOT less\n";
    return 0;
}