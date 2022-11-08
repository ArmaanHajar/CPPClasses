#ifndef MEDIA
#define MEDIA
#include <iostream>

using namespace std;

class Media{
 public:
  void setTitle();
  void setYear();
  char* getTitle();
  int getYear();

  char title[80];
  int year;
};

#endif
