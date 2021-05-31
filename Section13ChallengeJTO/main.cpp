#include <iostream>
#include "Movies.h"



// helper function to add movie to existing Movies collection
void add_movie(Movies &movies, std::string name, std::string rating, int watched) {
    if (movies.add_movie(name,rating,watched)) {
        std::cout << name << " added" << std::endl;
    } else {
        std::cout << name << " already exists" <<  std::endl;
    }
}

// helper function to increment watch counter for existing collection
void increment_watched(Movies &movies, std::string name) {
    if (movies.increment_watched(name)) {
        std::cout << name << " watch incremented" <<  std::endl;
    } else {
        std::cout << name << " not found" <<  std::endl;
    }
}

int main()
{
	Movies my_movies;
	my_movies.display_movies();
	
	add_movie(my_movies, "Dumb and Dumber", "PG-13", 100);
	
	my_movies.display_movies();
	
	add_movie(my_movies, "Dumb and Dumber", "PG-13", 200); // already exists
	
	increment_watched(my_movies, "Dumb and Dumber");
	
	my_movies.display_movies();
	return 0;
}
