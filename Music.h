#include <iostream>

using namespace std;

class Music:public Media{
 public:
  void setArtist();
  void setDuration();
  void setPublisher();
  char* getArtist();
  float getDuration();
  char* getPublisher();

  char artist[80];
  float duration[80];
  char publisher[80];
};
