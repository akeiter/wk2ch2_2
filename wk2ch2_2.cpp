#include <iostream>
using namespace std;
int cubed(int param);

int main()
{

    int num;
    int cubedNum;

    cout << "Please enter a number to be cubed: ";
    cin >> num;
    cubedNum = cubed(num);
    cout << num << " cubed is: " << cubedNum;

}

int cubed(int param)
{
    return param * param * param;
}