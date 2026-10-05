#ifndef TRACK_H
#define TRACK_H
 #include <iostream>
 #include "Artists.h"
 #include "Album.h"
 #include<vector>
 #include<string>
 using namespace std;
class Track{
private:
    Album album;
    vector<Artists> artists;
    vector<string> available_markets;//a list of the countries in which the track can be played
    int disc_number;//the disc number
    int duration_ms;//the track length in miliseconds
    bool is_explicit;//whether or not the track has explicit lyrics
    External_ids ids;//Known external IDss for the track
    External_urls urls;//Known external URLs for the track
    string href;// A link to the Web API endpoint providing full details of the track.
    string id;//Spotify ID for the trakcs
    bool is_playable;
    Restrictions restric;
    string name;
    int track_number;// the number of the track
    string type;
    int popularity;/*The popularity of the track. The value will be between 0 and 100, with 100 being the most popular.
The popularity of a track is a value between 0 and 100, with 100 being the most popular.*/
    string preview_url; //link to a 30 secs preview of the track. Can be null
    bool is_local;//whether or not the track is from a local file
};
#endif