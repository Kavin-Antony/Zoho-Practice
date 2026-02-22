#include <string>
#include "Book.h"
#include <vector>
#include "User.h"

using namespace std;

User::User(string name, string userId){
    this->name = name;
    this->userId = userId;
}

string User:: getUserId(){
    return userId;
}

User::~User(){}