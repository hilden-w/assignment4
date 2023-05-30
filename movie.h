#ifndef MOVIE_H
#define MOVIE_H

#include <string>

using namespace std;

class Movie {
private:
    int id;
    string director;
    string title;
    int year;

public:
    void set_id(int new_id);
    void set_director(const string& new_director);
    void set_title(const string& new_title);
    void set_year(int new_year);

    int get_id() const;
    const string& get_director() const;
    const string& get_title() const;
    int get_year() const;
};

#endif // MOVIE_H
