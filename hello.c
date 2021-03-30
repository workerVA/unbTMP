/*
 * hello.c
 */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int g;
 
int f(int i) {
  g = i;
  return i;
}


int tmpFunc(int i1,int i2)
{
  return 5;
}
struct buffers
{
    unsigned char buff1[50];
    unsigned char *buff2;
} globalBuff1,*globalBuff2;

unsigned char * globalBuff;
  
char tmpFunction1(char * buf)
{
  buf[1]=buf[1] + buf[2] + buf[3];
  return buf[1];
}
char tmpFunction2(char * buf)
{
  globalBuff = buf;
  return buf[2];
}
char tmpFunction3(char * buf)
{
  globalBuff = buf;
  return buf[2];
}
char tmpFunction4(char * buf)
{
  buf[2]=buf[1] + buf[2] + buf[3];
  return buf[2];
}

void workFunction_0(char *s) {
  int intA,intB,intC;
  char buf[80];
  intA = tmpFunction1(buf) + tmpFunction2(buf);
  intA = tmpFunction1(buf);
  intA += tmpFunction2(buf);
  buf[intA] = intA++;
  intA++;
  buf[intA] = intA;
  int i,j;
  i = ++i + 2;       // undefined behavior until C++11
  i = i++ + 2;       // undefined behavior until C++17
  tmpFunc(i = -2, i = -2); // undefined behavior until C++17
  tmpFunc(++i, ++i);       // undefined behavior until C++17,
                   // unspecified after C++17
i = ++i + i++;     // undefined behavior
//cout << i << i++; // undefined behavior until C++17
buf[i] = i++;       // undefined behavior until C++17
n = ++i + i;      // undefined behavior
  buf[i]=++i;
buf[i++] = i;
j = i + buf[++i];
i = 6 + i++ + 2000;
j = i++ + ++i;
i = ++i + ++i;
  
  int x = f(1) + f(2);
}
