//
// Created by benya on 5/15/2024.
//

#ifndef IN_CLASS_PROJECT_ASSETS_ASSETS_H
#define IN_CLASS_PROJECT_ASSETS_ASSETS_H

#include <iostream>
#include <string>
#include <cstring>

using std::string;


class Assets {
public:
    Assets(); //default constructor always declare constructor first
    Assets(const string& name); //customer constructor
    Assets(const Assets& other);
    ~Assets();

    const Assets& operator=(const Assets& rhs);
    void AddTag(const string& tag);
    string ToString() const;
private:
    string _name;
    int _numberOfTags;
    string* _tags;

};


#endif //IN_CLASS_PROJECT_ASSETS_ASSETS_H
