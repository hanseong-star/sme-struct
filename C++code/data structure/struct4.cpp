#include <iostream>
#include <string>
using namespace std;

class GameEntry{
public:
    GameEntry(const string& n = "", int s=0);
    string getName() const;
    int getScore() const;
    

private:
    string name;
    int score;

};

GameEntry::GameEntry(const string& n, int s)
    :name(n), score(s) {}

string GameEntry::getName() const {return name;}

int GameEntry::getScore() const {return score;}

class Scores{
public:
    Scores(int maxEnt = 10);
    ~Scores();
    void add(const GameEntry& e){
    int newScore = e.getScore();
    if(numEntries == maxEntries){
        if(newScore <= entries[maxEntries-1].getScore())
            return;
    }
    else numEntries++;

    int i = numEntries-2;
    while ( i >= 0 && newScore > entries[i].getScore()){
        entries[i+1] = entries[i];
        i--;
    }
    entries[i+1] = e;

    };
    void print(){
        for(int i =0; i<numEntries; i++){
        cout << entries[i].getName() << ": " << entries[i].getScore()<< "  ";
        }
     cout << endl;
    };


    GameEntry remove(int i){
    if((i<0) || (i >= numEntries))
        printf("Invalid index");
    GameEntry e = entries[i];
    for(int j = i+1; j< numEntries; j++)
        entries[j-1] = entries[j];
    numEntries--;
    return e;
    };
        //throw(indexOutOfBounds);
private:
    GameEntry* entries;
    int maxEntries;
    int numEntries;
};

Scores::Scores(int maxEnt){
    maxEntries = maxEnt;
    entries = new GameEntry[maxEntries];
    numEntries = 0;
}

Scores::~Scores(){
    delete[] entries;

// void Scores::add(const GameEntry& e) {
//     int newScore = e.getScore();
//     if(numEntries == maxEntries){
//         if(newScore <= entries[maxEntries-1].getScore())
//             return;
//     }
//     else numEntries++;

//     int i = numEntries-2;
//     while ( i >= 0 && newScore > entries[i].getScore()){
//         entries[i+1] = entries[i]
//         i--;
//     }
//     entries[i+1] = e;

// }

// GameEntry Scores::remove(int i) {
//     if((i<0) || (i >= numEntries))
//         printf("Invalid index");
//     GameEntry e = entries[i];
//     for(int j = i+1; j< numEntries; j++)
//         entries[j-1] = entries[j];
//     numEntries--;
//     return e;
// }


}

int main(){
    Scores game;
    game.add(GameEntry("Mike",1105));
    game.add(GameEntry("Rob", 750));
    game.add(GameEntry("Paul", 720));
    game.add(GameEntry("Anna", 660));
    game.add(GameEntry("Rose", 590));
    game.add(GameEntry("Jack", 510));
    game.print();
    game.add(GameEntry("Jill", 740));
    game.print();
    game.remove(3);
    game.print();

}
    
