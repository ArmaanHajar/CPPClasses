/*
 * Author: Armaan Hajar
 * Description: Defines setters, getters, and variables for movie class
 * Date: 11/22/2022
 */

#include <iostream>
#include "Media.h"

using namespace std;

class Movies:public Media{
public:
  void setDirector(char*);
  void setDuration(int);
  void setRating(int);
  char* getDirector();
  int getDuration();
  int getRating();

  char director[80];
  int duration;
  int rating;
  void print();
};
