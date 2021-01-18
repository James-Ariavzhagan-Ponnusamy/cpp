#include <string>
#include <iostream>
#include <algorithm>

void InplaceReplace(std::string &s)
{
  size_t pos1=0,pos2=0;
  while((pos2 = s.find(" ", pos1)) != std::string::npos)
  {
    std::reverse(s.begin()+pos1, s.begin()+pos2);
    pos1 = pos2 + 1 ;
  }
  std::reverse(s.begin()+pos1, s.end());
}
//sihT si skeegrofskeeg

int main()
{
  std::string s = "This is geeksforgeeks";
  InplaceReplace(s);
  std::cout << s << std::endl;
} 

//sihT si skeegrofskeeg