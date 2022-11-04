#include <iostream>
#include "Media.h"

using namespace std;

class Movies:public Media{
public:
  void setDirector();
  void setDuration();
  void setRating();
  char* getDirector();
  unsigned long getDuration();
  int getRating();

  char director[80];
  unsigned long duration;
  int rating;
};
