#include <iostream>
#include <string>
using namespace std;

int number_of_words(string s)
{
  size_t pos1=0, pos2 = 0;
  int wc = 0;
  cout << s << endl;
  while( (pos2 = s.find_first_of(" \n\t", pos1)) != string::npos)
  {
    if ( pos2 == pos1 ) 
    {
       ;  
    }
    else
    {
       wc++;
    }
    pos1 = pos2 + 1 ;
  }
  return wc;
}

int main()
{
  string s = "One two     three\n four\tfive ";
  cout << number_of_words(s) <<endl;
  return 0;
}

/*
One two     three
 four   five
5

*/