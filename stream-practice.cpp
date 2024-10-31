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
        iterator++;
        while(iterator != (line.size()))
        {
            if (isdigit(line[iterator]))
            {
                tmpNum += line[iterator];
            }

            iterator++;
        }
        cout << tmpNum << " size is: " << tmpNum.size() << endl;
        int newNum = static_cast<int>(tmpNum);

    }
    cout << endl << "total is: " << total << endl;
    cout << numOfC << endl;

    input.close();
}