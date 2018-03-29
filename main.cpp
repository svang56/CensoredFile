//Author:Sunny Vang
#include <iostream>
#include <fstream>
#include <vector>


using namespace std;

int main()
{
  ifstream in("example.txt");
  char first = ' ', last = ' ', current;
  vector<char> lettersonly;
  char input;

  while(!(in.eof()))
  {
  in>>input;
    if(input >= 'A' && input <= 'z')
    {

    lettersonly.push_back(input);
    }
    }

    in.close();
  //Read from the file opened by in, and the first letter (either upper or
  //lower case) should be assigned to first and the last letter (again in
  //either case) from the file to the variable last



  //Then, finally, this displays the censored version:
  cout<<lettersonly[0]<<"**"<<lettersonly[lettersonly.size() -1]<<endl;

  return 0;
}
