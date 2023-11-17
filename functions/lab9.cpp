#include <iostream>
#include <string>

using namespace std;
double getSales(string);
void findHighest (double, double, double, double);

int main ()
{
    double NESales, NWSales, SWSales, SESales;
    
    //determine which of four divisions had the greatest sales.
    string division1 = "Northeast";
    string division2 = "Southeast";
    string division3 = "Northwest";
    string division4 = "Southwest";

    double sales1 = getSales(division1);
    double sales2 = getSales(division2);
    double sales3 = getSales(division3);
    double sales4 = getSales(division4);

    findHighest (sales1, sales2, sales3, sales4);
 
    
    //terminate the program
    return 0;
}

double getSales(string division)
{
    double divisionSales;

    //ask fo a divisions quarterly
    cout << "Enter the divisions quarterly for " << division <<endl;
    cin >> divisionSales;

    //input va;idation
    while (divisionSales < 0)
    {
        cout << "Division sell should be more than 0 \n"
            << "Enter the divisions quarterly for " << division << endl;
        cin >> divisionSales;
    }

    return divisionSales;
    
}
void findHighest (double nEastSales, double nWestSales, double sEastSales, double sWestSales)
{
    string divisionname;
    double highestSales;
    if (nEastSales > nWestSales && nEastSales > sEastSales && nEastSales > sWestSales )
    {
       divisionname = "Northeast";
       highestSales = nEastSales;
    }
    else if (nWestSales > nEastSales && nWestSales > sEastSales && nWestSales > sWestSales)
    {
        divisionname = "Northwest";
        highestSales = nWestSales;
    }
    else if (sWestSales > nEastSales && sWestSales > nWestSales && sWestSales > sEastSales)
    {
       divisionname = "Southwest";
       highestSales = sWestSales;
    }
    else
    {
        divisionname = "SouthEast";
        highestSales = sEastSales;
    }

cout << "\n The" <<divisionname <<"division is the highest sales this quarter with " << highestSales;
}

