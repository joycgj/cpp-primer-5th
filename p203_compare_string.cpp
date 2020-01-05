#include <iostream>

using namespace std;

bool isShorter(string &s1, const string &s2) {
    return s1.size() < s2.size();
}

int main() {
    string s1 = "hello";
    string s2 = "how are you";
    bool b = isShorter(s1, s2);
    cout << b << endl;
    return 0;
}
