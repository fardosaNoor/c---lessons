#include <iostream>
#include <iomanip>

using namespace std;

//function prototypes
void getJudgeData(double scores[], int size);
double findLowest(double scores[], int size);
double findHighest(double scores[], int size);
void calcScore(double scores[], int size);

int main ()
{
    const int numOfJudges = 5;
    double scores[numOfJudges];

    //getjudges score
    getJudgeData(scores, numOfJudges);

    //get the average score 
   calcScore(scores, numOfJudges);

    //terminate the program
    return 0;
}

//function for gettig the judges data
void getJudgeData(double scores[], int size)
{
    for (int i = 0; i < size; i++)
    {
        //ask the user for judges score
        do
        {
           cout << "Enter the score between 0-10 for judge " << (i + 1) << " : ";
           cin >> scores[i];

           //validate the scores 
           if (scores[i] < 0 || scores[i] > 10)
           {
            cout << "Invalid entry!\n";
            cout <<"Enter score between 0 - 10\n";
           }
        } while (scores[i] < 0 || scores[i] > 10);
        
    }
}
    
//function to get the lowest score
double findLowest(double scores[], int size)
{
    double lowest = scores[0];

    //find the lowest by looping
    for (int i = 1; i < size; i++)
    {
        if (scores[i] < lowest)
        {
            lowest = scores[i];
        }
    }
    return lowest;
}

//get the highest score
double findHighest(double scores[], int size)
{
    double highest = scores[0];

    //find the highest by looping
    for (int i = 1; i < size; i++)
    {
        if (scores[i] > highest)
        {
            highest = scores[i];
        }
    }
    return highest;
}

//calculate the average of the three remaining scores 
void calcScore(double scores[], int size)
{
    double lowestScore = findLowest(scores, size);
    double highestScore = findHighest(scores, size);
    double total = 0;

    //calculate the sum of the remaining scores
    for (int i = 0; i < size; i++)
    {
        if (scores[i] != lowestScore && scores[i] != highestScore)
        {
            total +=scores[i];
        }
    }

    //calculate the averagge 
    double average = (total / 3);

    cout << setprecision(2) << fixed;
    cout << "The averge score is : " << average;
    cout << endl;
    cout << endl;
}
