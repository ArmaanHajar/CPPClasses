/*
 * Author: Armaan Hajar
 * Description: Defines setters, getters, and variables for video games class
 * Date: 11/22/2022
 */

#include <iostream>
#include "Media.h"

using namespace std;

class Videogames:public Media{
 public:
  void setPublisher(char*);
  void setRating(int);
  char* getPublisher();
  int getRating();

  char publisher[80];
  int rating;
  void print();
};
