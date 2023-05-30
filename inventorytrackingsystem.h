#ifndef INVENTORY_TRACKING_SYSTEM_H
#define INVENTORY_TRACKING_SYSTEM_H

#include <fstream>
#include <unordered_map>
#include <string>
#include <vector>
#include "member.h"
#include "movie.h"

using namespace std;

class InventoryTrackingSystem {
private:
    struct Transaction {
      string type;
    };
    unordered_map<string, Movie> movie_map;
    unordered_map<string, Member> members_map;
    vector<Transaction> transactions;

public:
    void processMovies(ifstream& data4movies);
    void processMembers(ifstream& data4members);
    void processLine(const string& line);
    void createMovieInstance();
    void createMemberInstance();
    void Borrow();
    void Return();
    void showHistory();
};

#endif // INVENTORY_TRACKING_SYSTEM_H
