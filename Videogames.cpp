#include <iostream>
#include <cstring>
#include "Videogames.h"

using namespace std;

void Videogames::setPublisher(char* publisherTemp) {
  strncpy(publisher, publisherTemp, 79);
}

void Videogames::setRating(int ratingTemp) {
  rating = ratingTemp;
}

char* Videogames::getPublisher() {
  return publisher;
}

int Videogames::getRating() {
  return rating;
}

void Videogames::print() {
  cout << "Title: " << title << endl;
  cout << "Publisher: " << publisher << endl;
  cout << "Year: " << year << endl;
  cout << "Rating: " << rating << endl;
}