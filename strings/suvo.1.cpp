#include <iostream>
#include <string>

void parseString(std::string str, std::string suvo, std::string suvojit, int &s, int &sj)
{
  size_t pos1=0, pos2=0;

  s = sj = 0;
  while((pos2=str.find(suvojit, pos1)) != std::string::npos)
  {  
    //std::cout << str.substr(pos2) << std::endl;
    pos1 = pos2+suvojit.length() ;
    sj++;
  }
  pos1=pos2=0;
  while((pos2=str.find(suvo, pos1)) != std::string::npos)
  {  
    //std::cout << str.substr(pos2) << std::endl;
    pos1 = pos2+suvo.length() ;
    s++;
  }
  s = s - sj;
}

int main()
{
  std::string str = "SUVOJITSUVOSUVOJITUCSUVOJITSUVOVXSUVOJITSUVOGMSUVODMMVDSUVOJIT";
  int s,sj;
  std::string suvo="SUVO";
  std::string suvojit="SUVOJIT";
  parseString(str, suvo, suvojit, s, sj);
  std::cout <<suvo << "    : "<<s<<std::endl;
  std::cout <<suvojit << " : "<<sj<<std::endl;
  return 0;
}