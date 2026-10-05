#ifndef SYSTEM_H
#define SYSTEM_H
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Followers{
    private:
    string href;
    int total;
};
class Images{
    private:
    string url;
    string height;
    string width;
};
class External_urls{
    private:
    string spotify;
};
class External_ids{
    private:
    string isrc;//international standard recording code
    string ean;//international article number
    string upc;//universal product code
};
class Restrictions{
    private:
    string reason;
    /*The reason for the restriction. Albums may be restricted if the content 
    is not available in a given market, to the user's subscription type, or 
    when the user's account is set to not play explicit content.*/  
};
#endif