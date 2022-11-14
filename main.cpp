#include <iostream>
#include <cstring>
#include <vector>

#include "Media.h"
#include "Music.h"
#include "Movies.h"
#include "Videogames.h"

using namespace std;

void help();
void addElement();
void searchElement();
void deleteElement();

int main() {
  vector<Media*> mediaElements;
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
  int mediaType;
  cout << "What Media Element Would You Like To Add? (1: Music, 2: Movie, 3: Video Game)" << endl;
  cin >> mediaType;

  if (mediaType == 1) { // music
    Music* music = new Music();

    char title[80];
    cout << "Enter Music Title:" << endl;
    cin.get(title, 80);
    cin.get();
    music->setTitle(title);
      

    int year;
    cout << "Enter Year Released:" << endl;
    cin >> year;
    music->setYear(year);

    char artist[80];
    cout << "Enter Artist Name:" << endl;
    cin.get(artist, 80);
    cin.get();
    music->setArtist(artist);

    unsigned long duration;
    cout << "Enter Music Duration:" << endl;
    cin >> duration;
    music->setDuration(duration);

    char publisher[80];
    cout << "Enter Publisher Name:" << endl;
    cin.get(publisher, 80);
    cin.get();
    music->setPublisher(publisher);
      
    done = true;
  }

  else if (mediaType == 2) { // movie
    Movies* movie = new Movies();

      char title[80];
      cout << "Enter Movie Title:" << endl;
      cin.get(title, 80);
      cin.get();
      movie->setTitle(title);
      
      int year;
      cout << "Enter Year Released:" << endl;
      cin >> year;
      movie->setYear(year);

      char director[80];
      cout << "Enter Director Name:" << endl;
      cin.get(director, 80);
      cin.get();
      movie->setDirector(director);

      unsigned long duration;
      cout << "Enter Music Duration:" << endl;
      cin >> duration;
      movie->setDuration(duration);

      int rating;
      cout << "Enter Rating (Whole Number 0-10):" << endl;
      cin >> rating;
      if ((rating >= 0) && (rating <= 10)) {
	movie->setRating(rating);
      }
	
      done = true;
    }
    else if (mediaType == 3) { // video game
      Videogames* vg = new Videogames();

      char title[80];
      cout << "Enter Video Game Title:" << endl;
      cin.get(title, 80);
      cin.get();
      vg->setTitle(title);
      
      int year;
      cout << "Enter Year Released:" << endl;
      cin >> year;
      vg->setYear(year);

      char publisher[80];
      cout << "Enter Publisher Name:" << endl;
      cin.get(publisher, 80);
      cin.get();
      vg->setPublisher(publisher);

      int rating;
      cout << "Enter Rating (Whole Number 0-10):" << endl;
      cin >> rating;
      if ((rating >= 0) && (rating <= 10)) {
	vg->setRating(rating);
      }
	
      done = true;
    }
    else {
      cout << "Not Sure What Media Element You're Trying To Input, Try Again" << endl;
    }
  }
}

void searchElement() {
  cout << "You are attempting to search an element" << endl;
}

void deleteElement() {
  cout << "You are attempting to delete an element" << endl;
}
