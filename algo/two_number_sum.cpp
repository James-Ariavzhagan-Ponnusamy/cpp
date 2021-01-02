#include <string>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

void PrintPair(std::vector<int> &v, int target)
{
  std::set<int> s;
  int bal;
  s.insert(v.begin(), v.end());
  for(auto x : v){
    bal = target-x;
    if (s.find(bal) != s.end())
    {
      std::cout << bal << std::endl << x << std::endl;    
      return;
    }
  }
    
}
int main()
{
  std::vector<int> v;
  int target = 18 ;//9;
  v.push_back(2);
  v.push_back(7);
  v.push_back(11);
  v.push_back(15);
  
  PrintPair(v, target);
}

//11 7
