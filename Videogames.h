#include <iostream>
#include "Media.h"

using namespace std;

class Videogames:public Media {
 public:
  void setPublisher();
  void setRating();
  char* getPublisher();
  int getRating();

  char publisher[80];
  int rating;
};
