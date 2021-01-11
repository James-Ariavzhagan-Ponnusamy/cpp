#include <iostream>
#include <string>

void print(std::string s, int index){
  if ( index == s.length()){
    std::cout << s << std::endl;
    return;
  }
  if ( s[index] == '?')
  {
    s[index] = '0';
    print(s, index+1);

    s[index] = '1';
    print(s, index+1);

  }
  else
   print(s, index+1);
}

int main(){
  //std::string s = "1??"; //"1??0?101";
  std::string s = "1??0?101";
  std::cout << s.length() << ":" << s.size() << std::endl;
  print(s, 0);
  return 0;
}

/*
  3:3
100
101
110
111
*/
/*
8:8
10000101
10001101
10100101
10101101
11000101
11001101
11100101
11101101
*/