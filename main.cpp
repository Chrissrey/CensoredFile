//Author:Christopher Rey Almaraz
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream in("example.txt");
  char first = ' ', last = ' ', current;

  in>>current;
  if(current >= 65 && current <90 || current >=97 && current <=122)
  {
    first=current;
  }
  while(in>>current)
  {
    if(current>=65 && current<=90 || current >=97 && current <=122)
    {
        last=current;
    }

  }
  in.close();
  //Read from the file opened by in, and the first letter (either upper or
  //lower case) should be assigned to first and the last letter (again in
  //either case) from the file to the variable last



  //Then, finally, this displays the censored version:
  cout<<first<<"**"<<last<<endl;

  return 0;
}
