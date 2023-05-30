#ifndef MEMBER_H
#define MEMBER_H

#include <string>

class Member {
private:
    int id;
    std::string first_name;
    std::string last_name;

public:
    void set_id(int new_id);
    void set_first_name(const std::string& new_first_name);
    void set_last_name(const std::string& new_last_name);

    int get_id() const;
    const std::string& get_first_name() const;
    const std::string& get_last_name() const;

    bool operator==(const Member& member_object) const;
    bool operator!=(const Member& member_object) const;
};

#endif // MEMBER_H
