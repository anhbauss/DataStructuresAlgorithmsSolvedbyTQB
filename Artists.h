#ifndef ARTISTS_H
#define ARTISTS_H
 #include <iostream>
 #include "System.h"
 #include<vector>
 #include<string>
 using namespace std;
 class Artists{
 private:
    External_urls urls;
    Followers followers;
    vector<string> genres;
    string href; //A link to the Web API endpoint providing full details of the artist. 
    string ids;//the spotify id of artist
    Images im;
    string name;
    int popularity;
    string type;//the object type such as: artist// singer/guitarist/musician
    string uri;
 public:
    Artists GetArtists(string ids);
    vector<Artists> GetServeralArtists(string ids);

};

 #endif