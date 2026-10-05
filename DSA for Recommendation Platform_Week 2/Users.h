#ifndef USERS_H
#define USERS_H
#include<string>
#include<vector>
#include "System.h"
using namespace std;

class Users{
    private:
    string account_id;
    string country;
    string display_name;
    string email;
    External_urls url;
    Followers followers;
    string href;
    string id;
    Images im;
    string product;//subscription level "premium"/"free"
    string type;
    string uri;
};

#endif