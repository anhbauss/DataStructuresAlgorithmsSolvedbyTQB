#ifndef RECOMMENDATION_H
#define RECOMMENDATION_H

#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct input_int{
    int min;
    int max;
    int target;
};
struct input_db
{
    double min;
    double max;
    double target;
};
struct rcm_data{
    int limit;//target size of the list of rcm tracks
    string market;
    string seed_artists;
    string seed_genres;
    string seed_tracks;
    input_db acousticness;
    input_db danceability;
    input_int duration_ms;
    input_db energy;
    input_db instrumentalness;
    input_int key;
    input_db liveness;
    input_db loudness;
    input_db mode;
    input_int popularity;
    input_db spechiness;
    input_int tempo;
    input_int time_signature;
    input_db valence;
};
struct 
struct rcm_response{
    
};
#endif