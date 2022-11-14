#include <iostream>
#include "Media.h"

using namespace std;

class Movies:public Media{
public:
  void setDirector(char*);
  void setDuration(unsigned long);
  void setRating(int);
  char* getDirector();
  unsigned long getDuration();
  int getRating();

  char director[80];
  unsigned long duration;
  int rating;
};
