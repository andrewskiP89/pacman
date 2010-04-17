#pragma once

#include <string>
#include <fstream>
#include <iomanip>

#define MAXENTRIES 8


class hScore
{
private:
	std::string			name[MAXENTRIES];
	unsigned long		score[MAXENTRIES];
	char				filename[20];
public:
	hScore();
	~hScore();
	
	void add(std::string, unsigned int);
	
	std::string getName(int);

	int getScore(int);

	int save();
	int load();
	void clear();

	bool onlist(unsigned int) const;

	void setfilename(std::string fn);
};
