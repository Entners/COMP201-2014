#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
    string token;
    vector<int> stack;
    int left, right;
    cout << "Enter a postfix expression: ";
    while (cin >> token) {
        if (token == "+") {
            right = stack.back();
            stack.pop_back();
            left = stack.back();
            stack.pop_back();
            stack.push_back(left + right);
        } else if (token == "-") {
            right = stack.back();
            stack.pop_back();
            left = stack.back();
            stack.pop_back();
            stack.push_back(left - right);
        } else if (token == "/") {
            right = stack.back();
            stack.pop_back();
            left = stack.back();
            stack.pop_back();
            stack.push_back(left / right);
        } else if (token == "%") {
            right = stack.back();
            stack.pop_back();
            left = stack.back();
            stack.pop_back();
            stack.push_back(left % right);
        } else if (token == "*") {
            right = stack.back();
            stack.pop_back();
            left = stack.back();
            stack.pop_back();
            stack.push_back(left * right);
        } else if (token == ".") {
            break;
        } else {
            stack.push_back(stoi(token));
        }
    }
    for (int i = 0; i < stack.size(); i++) {
        cout << stack[i] << endl;
    }
    return 0;
}
