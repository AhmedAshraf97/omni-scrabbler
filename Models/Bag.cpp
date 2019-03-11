#include"Bag.h"
Bag::Bag(){

}

Bag::Bag(string InputPath){
 ifstream InputFile;

    InputFile.open(InputPath);
    if (InputFile.is_open()) 
    {
        string Line;
    
        while (getline(InputFile, Line,' ')) 
        {
			char letter = Line[0];
            getline(InputFile,Line,' ');
            int occurence = stoi(Line);
            getline(InputFile,Line,'\n');
            int score=stoi(Line);
            Tile t;
            t.SetParams(letter,-1,-1,score,1);
             bag_.insert(pair<Tile,int>(t,occurence));
        }
    
    }
}
int Bag::GetOccurences(char letter)
{
    Tile tile;
    tile.SetParams(letter,0,0,0,0);

return bag_.at(tile);
<<<<<<< HEAD
=======


>>>>>>> f3cd685a8e549516d7171a69f1463fb0fd393c0e
}
int Bag::GetOccurences(Tile tile){
return bag_.at(tile);
}
int Bag::GetRemainingTiles(){


return 0;
}

void Bag::TakeLetters(vector<Tile> tiles){
for (int i =0;i<(int)tiles.size();i++){

   if(this->bag_[tiles.at(i)]>0){
       this->bag_[tiles.at(i)]--;
   }
}

}


void Bag::GiveTiles(vector<Tile> tiles){
for (int i =0;i<(int)tiles.size();i++){
       this->bag_[tiles.at(i)]++;
   }
}

Bag::~Bag(){

}