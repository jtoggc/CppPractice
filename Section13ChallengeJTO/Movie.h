#ifndef MOVIE_H
#define MOVIE_H
#include <string>

class Movie
{
private:
	std::string name;
	std::string rating;
	int watch_counter;
public:
	Movie(std::string name = "None", std::string rating = "None", int watch_count = 0);
	~Movie();
	
	//getters and setters
	std::string get_name() {return name;}
	std::string get_rating() {return rating;}
	int get_watch_counter() {return watch_counter;}
	
	void set_name(std::string new_name) {name = new_name;}
	void set_rating(std::string new_rating) {rating = new_rating;}
	void set_watch_counter(int new_count) {watch_counter = new_count;}
	
	void increment_watch_count();
	void display();
	

};

#endif // MOVIE_H
