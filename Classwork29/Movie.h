#pragma once
#include <iostream>
#include <sstream>

namespace movies
{
    //structures defined
    struct Movie
    {
        std::string title;
        int releaseYear;
        Movie(std::string&);
    };

    std::ostream& operator<<(std::ostream&, Movie&);
}
