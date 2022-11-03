#include <iostream>
#include <cstring>
#include "Music.h"

using namespace std;

void Music::setArtist(char* artistTemp) {
  artist = artistTemp;
}

void Music::setDuration(float durationTemp) {
  duration = durationTemp;
}

void Music::setPublisher(char* publisherTemp) {
  publisher = publisherTemp;
}

char* Music::getArtist() {
  return artist;
}

float Music::getDuration() {
  return duration;
}

char* Music::getPublisher() {
  return publisher;
}
