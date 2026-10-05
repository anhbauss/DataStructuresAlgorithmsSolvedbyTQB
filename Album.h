#ifndef ALBUM_H
#define ALBUM_H
#include<iostream>
#include<string>
#include<vector>
#include "System.h"
#include "Artists.h"
#include "Track.h"
class Album{
    private:
    string album_type;
    int total_tracks;
    vector<string> available_markets;
    External_urls urls;
    string href;
    string id;
    Images image;
    string name;
    string release_date;
    Restrictions restrict;
    string type;
    string uri;
    vector<Artists> ArtistsList;
    vector<Track> TracksLists;
    struct copyrights{
        string text;
        string type;//The type of copyright: C = the copyright, P = the sound recording (performance) copyright.
    };
    External_ids ids;
    vector<string> genres;
    string label;
    int popularity;
};
#endif