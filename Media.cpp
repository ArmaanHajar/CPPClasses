#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

void Media::setMediaType(int typetemp) {
  mediaType = typetemp;
}

void Media::setTitle(char* titletemp) {
  strncpy(title, titletemp, 79);
}

void Media::setYear(int yeartemp) {
  year = yeartemp;
}

int Media::getMediaType() {
  return mediaType;
}

char* Media::getTitle() {
  return title;
}

int Media::getYear() {
  return year;
}
