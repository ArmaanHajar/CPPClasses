/*
 * Author: Armaan Hajar
 * Program: A list creator where you can add, search, and delete media elements. These media elements include music, movies, and videogames
 * Date: 11/22/2022
 */

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

  // main code (mainly calls other functions), running will stay true until user says "QUIT"
  while (running == true) {
    cout << "---------------------------------------------------------" << endl;
    cout << "What Would You Like To Do? (ADD/SEARCH/DELETE/QUIT/HELP)" << endl;

    cin.get(input, 7);
    cin.get();

    if (input[0] == 'A' || input[0] == 'a') { // adds media element
      addElement(mediaElements);
    }
    else if (input[0] == 'S' || input[0] == 's') { // searches a media element
      searchElement(mediaElements);
    }
    else if (input[0] == 'D' || input[0] == 'd') { // deletes a selected media element
      deleteElement(mediaElements);
    }
    else if (input[0] == 'Q' || input[0] == 'q') { // ends program
      cout << "Thank You!" << endl;
      running = false;
    }
    else if (input[0] == 'H' || input[0] == 'h') { // prints what each input does
      help();
    }
    else { // if user doesn't type add, print, delete, or quit
      cout << "Not Sure What You're Trying To Do" << endl;
    }
  }  
  return 0;
}

void help() { // help code
  cout << "Type \"ADD\" To Enter A New Media Element" << endl;
  cout << "Type \"SEARCH\" To Print Out A Media Element" << endl;
  cout << "Type \"DELETE\" To Delete A Media Element" << endl;
  cout << "Type \"QUIT\" To End Program" << endl;
}

void addElement(vector<Media*> &mediaElements) { // adds element to vector
  char mediaType[15];
  cout << "What Media Element Would You Like To Add? (Music, Movie, Video Game)" << endl;
  cin.get(mediaType, 15);
  cin.get();
  
  if (mediaType[1] == 'u') { // adds music
    Music* music = new Music();

    // adds title
    char title[80];
    cout << "Enter Music Title:" << endl;
    cin.get(title, 80);
    cin.get();
    music->setTitle(title);

    // adds year
    int year;
    cout << "Enter Year Released:" << endl;
    cin >> year;
    cin.ignore(1, '\n');
    music->setYear(year);

    // adds artist
    char artist[80];
    cout << "Enter Artist Name:" << endl;
    cin.get(artist, 80);
    cin.get();
    music->setArtist(artist);

    // adds duration
    int duration;
    cout << "Enter Music Duration (in seconds):" << endl;
    cin >> duration;
    cin.ignore(1, '\n');
    music->setDuration(duration);

    // adds publisher
    char publisher[80];
    cout << "Enter Publisher Name:" << endl;
    cin.get(publisher, 80);
    cin.ignore(1, '\n');
    music->setPublisher(publisher);

    mediaElements.push_back(music);
  }
  else if (mediaType[1] == 'o') { // adds movie
    Movies* movie = new Movies();

    // adds title
    char title[80];
    cout << "Enter Movie Title:" << endl;
    cin.get(title, 80);
    cin.get();
    movie->setTitle(title);


    // adds year
    int year;
    cout << "Enter Year Released:" << endl;
    cin >> year;
    cin.ignore(1, '\n');
    movie->setYear(year);

    // adds director
    char director[80];
    cout << "Enter Director Name:" << endl;
    cin.get(director, 80);
    cin.get();
    movie->setDirector(director);

    // adds duration
    int duration;
    cout << "Enter Movie Duration (in minutes):" << endl;
    cin >> duration;
    cin.ignore(1, '\n');
    movie->setDuration(duration);

    // adds rating
    int rating;
    cout << "Enter Rating (Whole Number 0-10):" << endl;
    cin >> rating;
    cin.ignore(1, '\n');
    if ((rating >= 0) && (rating <= 10)) {
      movie->setRating(rating);
    }
    mediaElements.push_back(movie);
  }
  else if (mediaType[1] == 'i') { // adds video game
    Videogames* vg = new Videogames();

    // adds title
    char title[80];
    cout << "Enter Video Game Title:" << endl;
    cin.get(title, 80);
    cin.get();
    vg->setTitle(title);

    // adds year
    int year;
    cout << "Enter Year Released:" << endl;
    cin >> year;
    cin.ignore(1, '\n');
    vg->setYear(year);

    // adds publisher
    char publisher[80];
    cout << "Enter Publisher Name:" << endl;
    cin.get(publisher, 80);
    cin.get();
    vg->setPublisher(publisher);

    // adds rating
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
  
  if (mediaType[1] == 'u') { // searches for music
    cout << "What Is The Title Of The Song You'd Like To Search?" << endl;

    cin.get(elementTitle, 80);
    cin.get();

    // goes through mediaElements vector looking for inputted title
    for (int i = 0; i < mediaElements.size(); i++) {
      if (strcmp((mediaElements.at(i)->title), elementTitle) == 0) { // if finds song
	      cout << "---------------------------------------------------------" << endl;  
        mediaElements.at(i)->print();
      }
      else if (strcmp((mediaElements.at(i)->title), elementTitle) != 0) { // if cant find song
	cout << "This Song Was Never Inputted!" << endl;
      }
    }  
  }
  
  else if (mediaType[1] == 'o') { // searches for movies
    cout << "What Is The Title Of The Movie You'd Like To Search?" << endl;

    cin.get(elementTitle, 80);
    cin.get();

    // goes through mediaElements vector looking for inputted title
    for (int i = 0; i < mediaElements.size(); i++) {
      if (strcmp((mediaElements.at(i)->title), elementTitle) == 0) { // if finds movie
      	cout << "---------------------------------------------------------" << endl;
        mediaElements.at(i)->print();
      }
      else if (strcmp((mediaElements.at(i)->title), elementTitle) != 0) { // if cant find movie
      	cout << "This Movie Was Never Inputted!" << endl;
      }
    }
  }

  else if (mediaType[1] == 'i') { // searches for video games
    cout << "What Is The Title Of The Video Game You'd Like To Search?" << endl;

    cin.get(elementTitle, 80);
    cin.get();
    
    // goes through mediaElements vector looking for inputted title
    for (int i = 0; i < mediaElements.size(); i++) {
      if (strcmp((mediaElements.at(i)->title), elementTitle) == 0) { // if finds video game
        cout << "---------------------------------------------------------" << endl;
      	mediaElements.at(i)->print();
      }
      else if (strcmp((mediaElements.at(i)->title), elementTitle) != 0) { // if cant find video game
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
  
  if (mediaType[1] == 'u') { // deletes music
    cout << "What Is The Title Of The Song You'd Like To Delete?" << endl;

    cin.get(elementTitle, 80);
    cin.get();

    // goes through mediaElements vector looking for inputted title
    for (int i = 0; i < mediaElements.size(); i++) {
      if (strcmp((mediaElements.at(i)->title), elementTitle) == 0) { // if finds music
        delete &(mediaElements.at(i));
	mediaElements.pop_back();
        cout << elementTitle << " Has Been Deleted" << endl;
      }
      else { // if cant find music
	      cout << "This Song Was Never Inputted!" << endl;
      }
    }  
  }
  
  else if (mediaType[1] == 'o') { // deletes movie
    cout << "What Is The Title Of The Movie You'd Like To Delete?" << endl;

    cin.get(elementTitle, 80);
    cin.get();

    // goes through mediaElements vector looking for inputted title
    for (int i = 0; i < mediaElements.size(); i++) {
      if (strcmp((mediaElements.at(i)->title), elementTitle) == 0) { // if finds movie
        delete &(mediaElements.at(i));
	mediaElements.pop_back();
        cout << elementTitle << " Has Been Deleted" << endl;
      }
      else { // if cant find movie
	      cout << "This Movie Was Never Inputted!" << endl;
      }
    }
  }

  else if (mediaType[1] == 'i') { // video game
    cout << "What Is The Title Of The Video Game You'd Like To Delete?" << endl;

    cin.get(elementTitle, 80);
    cin.get();

    // goes through mediaElements vector looking for inputted title
    for (int i = 0; i < mediaElements.size(); i++) {
      if (strcmp((mediaElements.at(i)->title), elementTitle) == 0) { // if finds video game
	delete &(mediaElements.at(i));
	mediaElements.pop_back();
        cout << elementTitle << " Has Been Deleted" << endl;
      }
      else { // if cant find video game
	      cout << "This Video Game Was Never Inputted!" << endl;
      }
    }
  }
}
