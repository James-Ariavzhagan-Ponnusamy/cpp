#include <iostream>
#include <string>


static bool IsPalin(std::string str) {
    int i, j;
    int n = 0;
    n = str.length();
    for (i = 0, j = n - 1; i <= j; i++, j--) {
        if (str[i] != str[j]) {
            return false;
        }
    }
    return true;
}
void long_palin_substr(std::string str) {
    int i, j;
    int n;
    int l = 0;
    std::string palin;
    std::string sub1;
    n = str.length();
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            sub1 = str.substr(i, j + 1);
            //if (sub1.length() == 4)
            //    std::cout << sub1 << std::endl;
            if (IsPalin(sub1)) {
                if (sub1.length() > l) {
                    l = sub1.length();
                    palin = sub1;
                }
            }
        }
    }
    std::cout << "The palin substring is     : " << palin << std::endl;
    std::cout << "The palin substring len is : " << palin.length() << std::endl;
}
int main_longest_palin()
{
    std::string str;

    str = "forgeeksskeegfor";
    long_palin_substr(str);
    str = "Geeks";
    long_palin_substr(str);
    return 0;
}

/*

    The palin substring is     : geeksskeeg
    The palin substring len is : 10
    The palin substring is     : ee
    The palin substring len is : 2

*/