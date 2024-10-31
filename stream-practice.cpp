#include <fstream>
#include <iostream>
#include <string>
#include <cstddef>

using namespace std;


int main()
{
    ifstream input;
    input.open("video_games.tsv");

    string line{};
    int numOfC{};
    int total{};

    while (!input.eof())
    {
        getline(input, line);
        if (line[0] == tolower('c'))
        {
            numOfC++;
        }

        string tmpNum{};
        int iterator{};
        iterator = line.find_last_of('\t');
        while(line[iterator] != '\n')
        {
            tmpNum += line[iterator];
        }
        cout << tmpNum << endl;

    }

    cout << numOfC << endl;

    input.close();
}