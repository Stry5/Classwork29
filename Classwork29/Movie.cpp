
#include "Movie.h"

namespace movies
{
    //string parsing operation
    Movie::Movie(std::string& input)
    {
        std::stringstream stream(input);

        std::getline(stream, title, ',');

        stream >> releaseYear;
    }

    //overloaded operator
    std::ostream& operator<<(std::ostream& stream, Movie& movie)
    {
        stream << "title: " << movie.title << std::endl
               << "year: " << movie.releaseYear << std::endl;
        return stream;
    }
}