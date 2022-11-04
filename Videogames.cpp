#include <iostream>
#include <cstring>
#include "Videogames.h"

using namespace std;

void Videogames::setPublisher(char* publisherTemp) {
  publisher = publisherTemp;
}

void Videogames::getRating(int ratingTemp) {
  rating = ratingTemp;
}

char* Videogames::getPublisher() {
  return publisher;
}

int Videogames::getRating() {
  return rating;
}
