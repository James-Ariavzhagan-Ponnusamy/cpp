#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdio>

//g++ rev_lstr.cpp -std=c++17
//https://www.geeksforgeeks.org/first-substring-whose-reverse-is-a-word-in-the-string/?ref=rp


static std::string check_string(std::string s1, std::string s2) {
    int n = 0;
    int i = 0;

    n = s1.length();
    if (n < s2.length()) n = s2.length();

    std::cout << "check compare : [" << s1 << "]:[" << s2 << "]" << std::endl;

    for (i = 0; i < n; i++) {
        //std::printf("%c-%c\n", s1[i], s2[i]);
        if (s1[i] != s2[i]) {
            if (i == 0 || i == 1) return std::string("");

            std::cout << i << " String match found [" << s1.substr(0, i) << "]" << std::endl;
            std::exit(0);
        }
    }
    return std::string("");
}

static std::string compare(std::string s1, std::string s2) {
    std::cout << s1 << ":" << s2 << std::endl;

    for (int i = 0; i < s2.length(); i++) {
        check_string(s1, s2.substr(i));
    }
    return std::string("");
}

int main() {
    std::string str1;
    std::string str2;

    //std::cout << "Enter a string : " ;
    //getline(std::cin, str1);
    str1 = "abdfaabdfh";
    str1 = "acbdfghybdf";
    str1 = "aabaabaab";
    str1 = "mango is sweet when nam en tastes it";
    str1 = "mango is sweet when si en tastes it";
    std::cout << "The string entered is : [" << str1 << "]" << std::endl;

    str2 = str1;
    std::reverse(str2.begin(), str2.end());
    //str2 = std::string("ma") + str2 ;
    for (int i = 0; i < str1.length(); i++) {
        compare(str1.substr(i), str2);
    }
    return 0;
}