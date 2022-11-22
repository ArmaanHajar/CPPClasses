#include <iostream>
#include <cstring>
#include <vector>

#include "Media.h"
#include "Music.h"
#include "Movies.h"
#include "Videogames.h"

using namespace std;

void help();
void addElement(vector<Media*> &mediaElements);
void searchElement(vector<Media*> &mediaElements);
void deleteElement(vector<Media*> &mediaElements);

int main() {
  vector<Media*> mediaElements;
  char input[7];
  bool running = true;

  // main code, running will stay true unti luser says "QUIT"
  while (running == true) {
    cout << "---------------------------------------------------------" << endl;
    cout << "What Would You Like To Do? (ADD/SEARCH/DELETE/QUIT/HELP)" << endl;

    cin.get(input, 7);
    cin.get();

    if (strcmp(input, "ADD") == 0) { // adds media element
      addElement(mediaElements);
    }
    else if (strcmp(input, "SEARCH") == 0) { // searches through all media elements
      searchElement(mediaElements);
    }
    else if (strcmp(input, "DELETE") == 0) { // deletes a selected media element
      deleteElement(mediaElements);
    }
    else if (strcmp(input, "QUIT") == 0) { // ends program
      cout << "Thank You!" << endl;
      running = false;
    }
    else if (strcmp(input, "HELP") == 0) { // prints what each input does
      help();
    }
    else { // if user doesn't type add, print, delete, or quit
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

void addElement(vector<Media*> &mediaElements) {
  char mediaType[15];
  cout << "What Media Element Would You Like To Add? (Music, Movie, Video Game)" << endl;
  cin.get(mediaType, 15);
  cin.get();
  
  if (mediaType[1] == 'u') { // music
    Music* music = new Music();

    char title[80];
    cout << "Enter Music Title:" << endl;
    cin.get(title, 80);
    cin.get();
    music->setTitle(title);
    
    int year;
    cout << "Enter Year Released:" << endl;
    cin >> year;
    cin.ignore(1, '\n');
    music->setYear(year);

    char artist[80];
    cout << "Enter Artist Name:" << endl;
    cin.get(artist, 80);
    cin.get();
    music->setArtist(artist);

    int duration;
    cout << "Enter Music Duration (in seconds):" << endl;
    cin >> duration;
    cin.ignore(1, '\n');
    music->setDuration(duration);

    char publisher[80];
    cout << "Enter Publisher Name:" << endl;
    cin.get(publisher, 80);
    cin.ignore(1, '\n');
    music->setPublisher(publisher);

    mediaElements.push_back(music);
  }
  else if (mediaType[1] == 'o') { // movie
    Movies* movie = new Movies();

    char title[80];
    cout << "Enter Movie Title:" << endl;
    cin.get(title, 80);
    cin.get();
    movie->setTitle(title);
      
    int year;
    cout << "Enter Year Released:" << endl;
    cin >> year;
    cin.ignore(1, '\n');
    movie->setYear(year);

    char director[80];
    cout << "Enter Director Name:" << endl;
    cin.get(director, 80);
    cin.get();
    movie->setDirector(director);

    int duration;
    cout << "Enter Music Duration (in minutes):" << endl;
    cin >> duration;
    cin.ignore(1, '\n');
    movie->setDuration(duration);

    int rating;
    cout << "Enter Rating (Whole Number 0-10):" << endl;
    cin >> rating;
    cin.ignore(1, '\n');
    if ((rating >= 0) && (rating <= 10)) {
      movie->setRating(rating);
    }

    mediaElements.push_back(movie);
  }
  else if (mediaType[1] == 'i') { // video game
    Videogames* vg = new Videogames();

    char title[80];
    cout << "Enter Video Game Title:" << endl;
    cin.get(title, 80);
    cin.get();
    vg->setTitle(title);
      
    int year;
    cout << "Enter Year Released:" << endl;
    cin >> year;
    cin.ignore(1, '\n');
    vg->setYear(year);

    char publisher[80];
    cout << "Enter Publisher Name:" << endl;
    cin.get(publisher, 80);
    cin.get();
    vg->setPublisher(publisher);

    int rating;
    cout << "Enter Rating (Whole Number 0-10):" << endl;
    cin >> rating;
    cin.ignore(1, '\n');
    if ((rating >= 0) && (rating <= 10)) {
      vg->setRating(rating);
    }

    mediaElements.push_back(vg);
  }
  else {
    cout << "Not Sure What Media Element You're Trying To Input, Try Again" << endl;
  }
}

void searchElement(vector<Media*> &mediaElements) {
  char mediaType[15];
  char elementTitle[80];

  cout << "What Media Type Are You Trying To Search? (Music, Movie, Video Game)" << endl;
  
  cin.get(mediaType, 15);
  cin.get();
  
  if (mediaType[1] == 'u') { // music
    cout << "What Is The Title Of The Song You'd Like To Search?" << endl;

    cin.get(elementTitle, 80);
    cin.get();

    for (int i = 0; i < mediaElements.size(); i++) {
      if (strcmp((mediaElements.at(i)->title), elementTitle) == 0) {
	mediaElements.at(i)->print();
      }
      else {
	cout << "This Song Was Never Inputted!" << endl;
      }
    }  
  }
  
  else if (mediaType[1] == 'o') { // movie
    cout << "What Is The Title Of The Movie You'd Like To Search?" << endl;

    cin.get(elementTitle, 80);
    cin.get();

    for (int i = 0; i < mediaElements.size(); i++) {
      if (strcmp((mediaElements.at(i)->title), elementTitle) == 0) {
	mediaElements.at(i)->print();
      }
      else {
	cout << "This Movie Was Never Inputted!" << endl;
      }
    }
  }

  else if (mediaType[1] == 'i') { // video game
    cout << "What Is The Title Of The Video Game You'd Like To Search?" << endl;

    cin.get(elementTitle, 80);
    cin.get();

    for (int i = 0; i < mediaElements.size(); i++) {
      if (strcmp((mediaElements.at(i)->title), elementTitle) == 0) {
	mediaElements.at(i)->print();
      }
      else {
	cout << "This Video Game Was Never Inputted!" << endl;
      }
    }
  }
}

void deleteElement(vector<Media*> &mediaElements) {
  char mediaType[15];
  char elementTitle[80];

  cout << "What Media Type Are You Trying To Delete? (Music, Movie, Video Game)" << endl;
  
  cin.get(mediaType, 15);
  cin.get();
  
  if (mediaType[1] == 'u') { // music
    cout << "What Is The Title Of The Song You'd Like To Delete?" << endl;

    cin.get(elementTitle, 80);
    cin.get();

    for (int i = 0; i < mediaElements.size(); i++) {
      if (strcmp((mediaElements.at(i)->title), elementTitle) == 0) {
	mediaElements.pop_back();
	cout << elementTitle << " Has Been Deleted" << endl;
      }
      else {
	cout << "This Song Was Never Inputted!" << endl;
      }
    }  
  }
  
  else if (mediaType[1] == 'o') { // movie
    cout << "What Is The Title Of The Movie You'd Like To Delete?" << endl;

    cin.get(elementTitle, 80);
    cin.get();

    for (int i = 0; i < mediaElements.size(); i++) {
      if (strcmp((mediaElements.at(i)->title), elementTitle) == 0) {
	mediaElements.pop_back();
	cout << elementTitle << " Has Been Deleted" << endl;
      }
      else {
	cout << "This Movie Was Never Inputted!" << endl;
      }
    }
  }

  else if (mediaType[1] == 'i') { // video game
    cout << "What Is The Title Of The Video Game You'd Like To Delete?" << endl;

    cin.get(elementTitle, 80);
    cin.get();

    for (int i = 0; i < mediaElements.size(); i++) {
      if (strcmp((mediaElements.at(i)->title), elementTitle) == 0) {
	mediaElements.pop_back();
	cout << elementTitle << " Has Been Deleted" << endl;
      }
      else {
	cout << "This Video Game Was Never Inputted!" << endl;
      }
    }
  }
}
