#include <iostream>
#include <cstring>
#include "Movies.h"

using namespace std;

void Movies::setDirector(char* directorTemp) {
  strncpy(director, directorTemp, 79);
}

void Movies::setDuration(unsigned long durationTemp) {
  duration = durationTemp;
}

void Movies::setRating(int ratingTemp) {
  rating = ratingTemp;
}

char* Movies::getDirector() {
  return director;
}

unsigned long Movies::getDuration() {
  return duration;
}

int Movies::getRating() {
  return rating;
}