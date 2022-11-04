#include <iostream>
#include <cstring>
#include "Music.h"

using namespace std;

void Music::setArtist(char* artistTemp) {
  strncpy(artist, artistTemp, 79);
}

void Music::setDuration(unsigned long durationTemp) {
  duration = durationTemp;
}

void Music::setPublisher(char* publisherTemp) {
  strncpy(publisher, publisherTemp, 79);
}

char* Music::getArtist() {
  return artist;
}

unsigned long Music::getDuration() {
  return duration;
}

char* Music::getPublisher() {
  return publisher;
}
