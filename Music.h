#include <iostream>
#include "Media.h"

using namespace std;

class Music:public Media{
 public:
  void setArtist(char*);
  void setDuration(unsigned long);
  void setPublisher(char*);
  char* getArtist();
  unsigned long getDuration();
  char* getPublisher();

  char artist[80];
  unsigned long duration;
  char publisher[80];
};
