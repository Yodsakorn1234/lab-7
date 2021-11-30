#include<iostream>

using namespace std;

int adiff(int a, int b)
  {
  a = a%360;
  b = b%360;
  //cout << a << " " << b << endl;
  if (a < 0){
    a = 360 + a;
  }
  if (b < 0)
  {
    b = 360 + b;
  }
  //cout << a << " " << b << endl;

  int min,max;
  if (a < b)
  {
    min = a;
    max = b;
  }
  else{
    min = b;
    max = a;
  }
  //cout << min << " " << max << endl;
  
  if (min+180 == max)
  {
    return 180;
  }
  else if (min+180 < max)
  {
    return abs(360+min-max);
  }
  else
  {
    return abs(max-min);
  }
}
