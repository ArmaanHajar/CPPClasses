#include <iostream>
#include <cstring>
#include "Media.h"
#include "Music.h"

using namespace std;

void help();
void addElement();
void searchElement();
void deleteElement();

int main() {
  char input[7];
  bool running = true;

  // main code, running will stay true unti luser says "QUIT"
  while (running == true) {
    cout << "---------------------------------------------------------" << endl;
    cout << "What Would You Like To Do? (ADD/SEARCH/DELETE/QUIT/HELP)" << endl;

    cin >> input;

    if (strcmp(input, "ADD") == 0) { // adds media element
      addElement();
    }
    else if (strcmp(input, "SEARCH") == 0) { // searches through all media elements
      searchElement();
    }
    else if (strcmp(input, "DELETE") == 0) { // deletes a selected media element
      deleteElement();
    }
    else if (strcmp(input, "QUIT") == 0) { // ends program
      cout << "Thank You!" << endl;
      running = false;
    }
    else if (strcmp(input, "HELP") == 0) { // prints what each input does
      help();
    }
    else { // if user doesn't typ add, print, delete, or quit
      cout << "Not Sure What You're Trying To Do" << endl;
    }
  }  
  return 0;
}

void help() {
  cout << "Type \"ADD\" To Enter A New Media Element" << endl;
  cout << "Type \"SEARCH\" To Print Out A Media Element" << endl;
  cout << "Type \"DELETE\" To Delete A Media Element" << endl;
  cout << "Type \"QUIT\" To End Program" << endl;
}

void addElement() {
  cout << "You are attempting to add an element" << endl;
}

void searchElement() {
  cout << "You are attempting to search an element" << endl;
}

void deleteElement() {
  cout << "You are attempting to delete an element" << endl;
}
