#include <iostream>
#include <cstring>
#include "Music.h"

using namespace std;

void Music::setArtist(char* artistTemp) {
  strncpy(artist, artistTemp, 79);
}

void Music::setDuration(float durationTemp) {
  duration = durationTemp;
}

void Music::setPublisher(char* publisherTemp) {
  strncpy(publisher, publisherTemp, 79);
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
