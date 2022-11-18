#include <iostream>
#include <cstring>
#include "Movies.h"

using namespace std;

void Movies::setDirector(char* directorTemp) {
  strncpy(director, directorTemp, 79);
}

void Movies::setDuration(int durationTemp) {
  duration = durationTemp;
}

void Movies::setRating(int ratingTemp) {
  rating = ratingTemp;
}

char* Movies::getDirector() {
  return director;
}

int Movies::getDuration() {
  return duration;
}

int Movies::getRating() {
  return rating;
}
