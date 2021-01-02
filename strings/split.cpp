#include <string>
#include <iostream>
#include <map>
#include <sstream>

typedef std::map<std::string, int> map_str_int;

void jsplit(std::string &s, map_str_int &m){
  std::string token;
  std::istringstream str(s);
  while(getline(str, token, ' ')){
    std::cout << token <<std::endl;
    if ( m.find(token) != m.end()){
        m[token]++;
    }
    else{
        m[token] = 1;
    }
  }
}
int main(){
  map_str_int m;    
  std::string s;
  std::cout << "Enter a string : " ;
  getline(std::cin, s);
  jsplit(s, m);
  for(auto x : m){
    std::cout << x.first << " : " << x.second << std::endl;  
  }
}

/*
    Enter a string : this is is the the hello world world                                                                                           
    this                                                                                                                                            
    is                                                                                                                                              
    is                                                                                                                                              
    the                                                                                                                                             
    the                                                                                                                                             
    hello                                                                                                                                           
    world                                                                                                                                           
    world                                                                                                                                           
    hello : 1                                                                                                                                       
    is : 2                                                                                                                                          
    the : 2                                                                                                                                         
    this : 1                                                                                                                                        
    world : 2 
*/
