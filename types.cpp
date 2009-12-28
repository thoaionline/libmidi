#include "types.h"

#include <math.h>

#include <iostream>
using namespace std;

int char2num(char c)
{
  int res=(int)c;
  if(res<0) res+=256;
  return res;
}

char num2char(int i)
{
  if(i>=128)
    return (char)(i-256);
  else
    return (char)i;
}

dword char2dword(char array[])
{
  dword result=0;
  for(int i=0;i<4;i++) //Double Word has 4 bytes
    {
      result+=char2num(array[i])*pow(256,3-i);
    }

  return result;
}

word char2word(char array[])
{
  word result=0;
  for(int i=0;i<2;i++) //Word has 2 bytes
    {
      result+=char2num(array[i])*pow(256,1-i);
    }

  return result;
}