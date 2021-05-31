#include "Movie.h"
#include <iostream>

Movie::Movie(std::string n, std::string r, int watch_count) : name{n}, rating{r}, watch_counter{watch_count} {
}

void Movie::increment_watch_count() {
	watch_counter+=1;
}

void Movie::display() {
	std::cout << "\n" << name << ", " << rating << ", " << watch_counter << std::endl;
}

Movie::~Movie()
{
}

