#ifndef CLASSIC_MOVIE_H
#define CLASSIC_MOVIE_H

#include "Movie.h"

class ClassicMovie : public Movie {
private:
    string major_actor;
    int month;

public:
    void set_major_actor(const string& new_major_actor);
    void set_month(int new_month);

    const string& get_major_actor() const;
    int get_month() const;
};

#endif // CLASSIC_MOVIE_H
