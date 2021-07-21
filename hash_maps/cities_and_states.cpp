#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>
#include <sstream>
using namespace std;



vector<string> SplitString(string line)
{
      
    vector<string> tokens;
      
    stringstream check1(line);
      
    string intermediate;
      
    while(getline(check1, intermediate, ' '))
    {
      tokens.push_back(intermediate);
    }
    return tokens;
}

int main_old() 
{
  int result = 0;
  unordered_map<string, string> map;
  string str;
  ifstream file;
  file.open("/home/linlin/data.txt");
  if(file.is_open())
  {
    getline(file, str);
    
  }
  else
  {
    cout << "file is not opening" << endl;
  }

  int num = stoi(str);

  for(int i = 0; i < num; i++)
  {
    getline(file, str);
    vector<string> tokens = SplitString(str);
    string city, state;
    city = tokens[0];
    city = city.substr(0, 2);
    state = tokens[1];
    if(map.find(state + city) != map.end())
    {
      result++;
    }
    map[city + state] = state;
  }
  file.close();
  cout << result << endl;
  return 0;
}


int main() 
{
  int result = 0;
  unordered_map<string, string> map;
  string str;
  int num;
  ifstream read ("citystate.in");
  read >> num;


  for(int i = 0; i < num; i++)
  {
    string city, state;
    read >> city >> state;
    city = city.substr(0, 2);
    if(map.find(state + city) != map.end())
    {
      result++;
    }
    map[city + state] = state;
  }
  read.close();
  ofstream("citystate.out") << result << endl;
  return 0;
}