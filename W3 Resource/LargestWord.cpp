#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    cin>>str;
    string largestWord;
    string currentWord;
    int maxLength = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            currentWord += str[i];
        } else {
            if (currentWord.length() > maxLength) {
                maxLength = currentWord.length();
                largestWord = currentWord;
            }
            currentWord = "";
        }
    }
    if (currentWord.length() > maxLength) {
        largestWord = currentWord;
    }
    cout << "The largest word is: " << largestWord <<endl;
    return 0;
}