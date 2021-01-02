#include <string>
#include <iostream>
#include <algorithm>
//Reversing a string

void ReplaceStringInPlace(std::string& subject) {
    size_t pos1 = 0;
    size_t pos2 = 0;
    std::string s ; 
    while ((pos2 = subject.find(" ", pos1)) != std::string::npos) {
         std::reverse(subject.begin()+pos1, subject.begin()+pos2);
         //s = subject.substr(pos1, pos2-pos1);
         //std::cout << s << std::endl;
         pos1 = pos2 + 1 ;
    }
    //s = subject.substr(pos1);
    std::reverse(subject.begin()+pos1, subject.end());
    //std::cout << s << std::endl;
    
}

int main()
{
  std::string s;
  //std::cout <<"Enter a string : ";
  //std::cin>>s;
  s = "This is geeksforgeeks";
  ReplaceStringInPlace(s);
  std::cout << s;
}
