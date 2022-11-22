/*
 * Author: Armaan Hajar
 * Descriptions: Setters and getters for Media
 * Date : 11/22/2022
 */

#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

void Media::setTitle(char* titletemp) {
  strncpy(title, titletemp, 79);
}

void Media::setYear(int yeartemp) {
  year = yeartemp;
}

char* Media::getTitle() {
  return title;
}

int Media::getYear() {
  return year;
}

void Media::print() { // prints out the inputs for the media type (Media is empty because it is the parent class)
  
}
