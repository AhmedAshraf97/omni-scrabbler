#pragma once
#include<iostream>
#include<vector>
#include"Tile.h"


using namespace std;
class Rack
{
	vector<Tile> tiles_;
public:
	Rack();
	Rack(Tile tiles[7]);
	Rack(string rack);
	int GetLength();
	~Rack();
	void SetTile(char c, int loc);
	char GetLetter(int loc);
};

