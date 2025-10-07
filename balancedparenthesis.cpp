#include <iostream>
#include <stack>
using namespace std;
int main() {
    string s; cin >> s;
    stack<char> st;
    bool valid = true;
    for (char c : s) {
        if (c=='(') st.push(c);
        else if (c==')') {
            if (st.empty()) valid = false;
            else st.pop();
        }
    }
    cout << (valid && st.empty() ? "Balanced" : "Not Balanced");
}
