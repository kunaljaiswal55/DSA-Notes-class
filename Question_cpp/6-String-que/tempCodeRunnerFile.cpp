//solution 2
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string s;
//     cin >> s;
//     string word = "";
//     for (int i = 0; i < s.length(); i++) {
//         if (isupper(s[i]) && !word.empty()) {
//             cout << word << endl;
//             word = "";
//         }
//         word += s[i];
//     }
//     if (!word.empty()) {
//         cout << word << endl;
//     }
//     return 0;
// }