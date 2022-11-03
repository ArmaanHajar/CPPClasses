#include <iostream>

using namespace std;

class Media{
 public:
  void setMediaType();
  void setTitle();
  void setYear();
  int getMediaType();
  char getTitle();
  int getYear();

  int mediaType;
  char title[80];
  int year;
};
