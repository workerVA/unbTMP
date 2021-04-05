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
unsigned char * globalBuffN;
unsigned char globalBuffArr[10]
  
char tmpFunction1(char * buf)
{
  buf[1]=buf[1] + buf[2] + buf[3];
  return buf[1];
}

char tmpFunction2(char * buf)
{
  buf[2]=buf[1] + buf[2] + buf[3];
  return buf[2];
}
char tmpFunction3(char * buf)
{
  globalBuff = buf+1;
  return buf[2];
}
char tmpFunction4(char * buf)
{
  globalBuff = buf;
  return buf[2];
}
char tmpFunction3_1(char * buf)
{
  globalBuffArr[1] = 1;
  return buf[2];
}
char tmpFunction4_1(char * buf)
{
  globalBuffArr[1] = 0;
  return buf[2];
}
char tmpFunction5(char * buf)
{
  buf=globalBuff;
  return buf[1];
}

char tmpFunction6(char * buf)
{
  buf=globalBuffN;
  return buf[2];
}
char tmpFunction7(char * buf)
{
  memcpy(buf,globalBuff,2);
  return buf[1];
}

char tmpFunction8(char * buf)
{
  memcpy(buf,globalBuffN,2);
  return buf[2];
}
char tmpFunction7_1(char * buf)
{
  memcpy(globalBuffArr,buf+1,2);
  return buf[1];
}

char tmpFunction8_1(char * buf)
{
  memcpy(globalBuffArr,buf,2);
  return buf[2];
}
void workFunction_0(char *s) {
  int intA,intB,intC;
  char buf[80];
  intA = tmpFunction1(buf) + tmpFunction2(buf);
   intA = tmpFunction6(buf) + tmpFunction5(buf);
  intA = tmpFunction1(buf);
  intA += tmpFunction2(buf);
  buf[intA] = intA++;
  intA++;
  buf[intA] = intA;
  int i,j,n;
  i = ++i + 2;       // undefined behavior until C++11
  i = i++ + 2;       // undefined behavior until C++17
  tmpFunc(i = -2, i = -2); // undefined behavior until C++17
  tmpFunc(i = 2, i++-2);
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
 tmpFunc(tmpFunction3(buf),tmpFunction4(buf));
 tmpFunc(tmpFunction3_1(buf),tmpFunction4_1(buf));
 for(i=0;buf[i]<10;i++);
 i = tmpFunction7(buf) + tmpFunction8(buf);
 i = tmpFunction7_1(buf) + tmpFunction8_1(buf);
}
