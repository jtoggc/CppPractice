#ifndef MOVIES_H
#define MOVIES_H

#include <vector>
#include <string>
#include "Movie.h"

class Movies
{
private:
	std::string name;
	std::vector<Movie> movies;
public:
	Movies(std::string name = "None");
	~Movies();
	
	//getters and setters
	void set_name(std::string new_name) {name = new_name;}
	std::vector<Movie> get_movies() {return movies;}
	
	bool add_movie(std::string name, std::string rating, int watched);
	bool increment_watched(std::string name);
	
	//helper method to find movie in collection
	bool find_movie(std::string name);
	
	void display_movies();

};

#endif // MOVIES_H
