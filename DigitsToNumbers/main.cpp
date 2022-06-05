#include <iostream>
#include <string>
#include <vector>
using namespace std;

string StringChallenge(string str) {
    int number = 0;
    vector<int> numbers;
    vector<bool> signs;
    // true for + , false for -
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'z') {
            number = number * 10 + 0;
            i += 3;
        }
        else if (str[i] == 'o') { //1
            number = number * 10 + 1;
            i += 2;
        }
        else if (str[i] == 't') { //2 or 3
            if (str[i + 1] == 'w') {  //2
                number = number * 10 + 2;
                i += 2;

            }
            else if (str[i + 1] == 'h') { // 3
                number = number * 10 + 3;
                i += 4;
            }
        }
        else if (str[i] == 'f') { //4 or 5
            if (str[i + 1] == 'o') {  //4
                number = number * 10 + 4;
                i += 3;
            }
            else if (str[i + 1] == 'i') { // 5
                number = number * 10 + 5;
                i += 3;
            }
        }
        else if (str[i] == 's') {//6 or 7
            if (str[i + 1] == 'i') {  //6
                number = number * 10 + 6;
                i += 2;
            }
            else if (str[i + 1] == 'e') { // 7
                number = number * 10 + 7;
                i += 4;
            }
        }
        else if (str[i] == 'e') {
            number = number * 10 + 8;
            i += 4;
        }
        else if (str[i] == 'n') {
            number = number * 10 + 9;
            i += 3;

        }
        else if (str[i] == 'm') { //-
            numbers.push_back(number);
            number = 0;
            signs.push_back(false);
            i += 4;

        }
        else if (str[i] == 'p') { //+
            numbers.push_back(number);
            number = 0;
            signs.push_back(true);
            i += 3;
        }
    }
    numbers.push_back(number);
    number = numbers[0];
    for (int i = 1; i < numbers.size(); i++) {
        if (signs[i - 1]) {
            number += numbers[i];
        }
        else {
            number -= numbers[i];
        }
    }

    //cout << number;
    string ans = "";
    string  stringNumber;

    if (number == 0)
        return "zero";
    else if (number < 0) {
        ans += "negative";
        stringNumber = to_string(-1 * number);
    }
    else {
        stringNumber = to_string(-1 * number);
    }

    for (int i = 0; i < stringNumber.length();i++) {
        if (stringNumber[i] == '0')
            ans += "zero";
        else if (stringNumber[i] == '1')
            ans += "one";
        else if (stringNumber[i] == '2')
            ans += "two";
        else if (stringNumber[i] == '3')
            ans += "three";
        else if (stringNumber[i] == '4')
            ans += "four";
        else if (stringNumber[i] == '5')
            ans += "five";
        else if (stringNumber[i] == '6')
            ans += "six";
        else if (stringNumber[i] == '7')
            ans += "seven";
        else if (stringNumber[i] == '8')
            ans += "eight";
        else if (stringNumber[i] == '9')
            ans += "nine";
    }
    return ans;

    // code goes here
    // return str;

}

int main(void) {

    // keep this function call here
    string s;
    cin >> s;

    cout<<StringChallenge(s);
    return 0;

}