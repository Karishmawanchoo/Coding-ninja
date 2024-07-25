//reverse the string
#include <iostream>
#include <string>
using namespace std;

string reverseString(string str) {
    int left = 0;
    int right = str.size() - 1;
    while (left < right) {
        swap(str[left], str[right]);
        left++;
        right--;
    }
    
    return str;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); 
    while (T--) {
        string str;
        getline(cin, str);
        string reversedStr = reverseString(str);
        cout << reversedStr << endl;
    }

    return 0;
}
