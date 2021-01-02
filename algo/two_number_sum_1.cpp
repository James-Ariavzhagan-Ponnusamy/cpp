#include <string>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

void PrintPair(std::set<int> &s, int target)
{
  std::vector<int> v(s.begin(), s.end());
  int l = 0;
  int r = v.size();
  int res;
  if ( r > 0) r--;
  
  while(l < r )
  {
    res = v[l] + v[r] ;
      std::cout << "Res " << res << std::endl;
      std::cout << "Target " << target << std::endl;

    if (res == target){
      std::cout << "Matched " << std::endl;
      std::cout << l << std::endl << r << std::endl;
      std::cout << v[l] << std::endl << v[r] << std::endl;
      return;
    }
    else if ( res < target ){
        l++;
    }
    else if ( res > target){
        r--;
    }
  }
  
  //for(auto x : v){
    //std::cout << x << std::endl;
  //}
}
int main(){
  std::vector<int> v;
  int target = 18 ;//9;
  v.push_back(2);
  v.push_back(7);
  v.push_back(11);
  v.push_back(15);
  
  std::set<int> s;
  s.insert(v.begin(), v.end());
  //for(auto x:s){
  //      std::cout << x << std::endl;
  //}
  PrintPair(s, target);
}

/*
    Res 17                                                                                                                                        
    Target 18                                                                                                                                     
    Res 22                                                                                                                                        
    Target 18                                                                                                                                     
    Res 18                                                                                                                                        
    Target 18                                                                                                                                     
    Matched                                                                                                                                       
    1                                                                                                                                             
    2                                                                                                                                             
    7                                                                                                                                             
    11
*/
