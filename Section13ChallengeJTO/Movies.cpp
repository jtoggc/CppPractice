#include "Movies.h"
#include "Movie.h"
#include <string>
#include <iostream>

Movies::Movies(std::string n) : name{n} {
}


//method to add movie to collection
// return true if successfully added a new movie
// return false if movie already in collection
bool Movies::add_movie(std::string new_name, std::string new_rating, int watch_count) {
	if (!find_movie(new_name)) {
		Movie new_movie = Movie {new_name, new_rating, watch_count};
		movies.push_back(new_movie);
		return true;
	}
	return false;
}

bool Movies::increment_watched(std::string new_name) {
	for (Movie &movie : movies) {
		if (movie.get_name() == new_name) {
			movie.increment_watch_count();
			return true;
		}
	}
	return false;
}

void Movies::display_movies() {
	std::cout << "========================================" << std::endl;
	if (movies.size() == 0) {
		std::cout << "\nSorry, no movies in collection" << std::endl;
	} else {
		for (Movie movie : movies) {
		movie.display();
		}
	}
	std::cout << "========================================" << std::endl;
}

bool Movies::find_movie(std::string name) {
	for (Movie movie : movies) {
		if (movie.get_name() == name) {
			return true;
		}
	}
	return false;
}

Movies::~Movies() {
}

