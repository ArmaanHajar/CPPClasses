#ifndef MEDIA
#define MEDIA
#include <iostream>

using namespace std;

class Media{
 public:
  void setTitle(char*);
  void setYear(int);
  char* getTitle();
  int getYear();

  char title[80];
  int year;
};

#endif
