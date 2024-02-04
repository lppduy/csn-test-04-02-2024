#include <iostream>
#include <stack>
#include <string>
#include <vector>

bool isBalanced(const std::string& s) {
    std::stack<char> st;

    for (char bracket : s) {
        if (bracket == '(' || bracket == '{' || bracket == '[') {
            st.push(bracket);
        } else {
            if (st.empty()) {
                return false;  // No matching opening bracket
            }

            char top = st.top();
            st.pop();

            if ((bracket == ')' && top != '(') ||
                (bracket == '}' && top != '{') ||
                (bracket == ']' && top != '[')) {
                return false;  // Mismatched brackets
            }
        }
    }

    return st.empty();  // Stack should be empty for a balanced string
}

int main() {
    int N;
    std::cin >> N;
    std::cin.ignore();  // Consume newline after N

    std::vector<std::string> results;

    for (int i = 0; i < N; ++i) {
        std::string s;
        std::getline(std::cin, s);
        results.push_back(isBalanced(s) ? "true" : "false");
    }

    for (const auto& result : results) {
        std::cout << result << std::endl;
    }

    return 0;
}
