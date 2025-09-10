#include <iostream>
#include <string>
using namespace std;

int findPattern(const string& text, const string& pattern) {
    if (pattern.empty()) return 0;
    
    int n = text.length();
    int m = pattern.length();
    
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }
        if (j == m) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    string text = "Tahreema Saleem BSCS";
    string pattern = "Tahreema";
    
    int result = findPattern(text, pattern);
    
    cout << "Text: " << text << endl;
    cout << "Pattern: " << pattern << endl;
    
    if (result != -1) {
        cout << "Pattern found at index: " << result << endl;
    } else {
        cout << "Pattern not found" << endl;
    }
    
    return 0;
}