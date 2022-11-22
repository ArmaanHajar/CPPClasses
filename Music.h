/*
 * Author: Armaan Hajar
 * Description: Defines setters, getters, and variables for the music class
 * Date: 11/22/2022
 */

#include <iostream>
#include "Media.h"

using namespace std;

class Music:public Media{
 public:
  void setArtist(char*);
  void setDuration(int);
  void setPublisher(char*);
  char* getArtist();
  int getDuration();
  char* getPublisher();

  char artist[80];
  int duration;
  char publisher[80];
  void print();
};
