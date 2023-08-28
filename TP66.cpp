#include <iostream>
#include <string>
using namespace std;

string SimularDisplay1(string car);
string SimularDisplay2(string car);
string SimularDisplay3(string car);
string SimularDisplay4(string car);
string SimularDisplay5(string car);
string SimularDisplay6(string car);
string SimularDisplay7(string car);
string SimularDisplay8(string car);
string SimularDisplay9(string car);

int main()
{
    string numcar;
    string num;
    string car;
    string display;
    cout << "Ingrese un entero menor a 9 digitos: ";
    getline(cin, numcar);
    for (int i = 0; i < numcar.size(); i++)
    {
        char n = numcar[i];
        if (n >= '0' && n <= '9')
        {
            num += numcar[i];
        }
        else
        {
            car += numcar[i];
        }
    }
    for (int j = 0; j < num.size(); j++)
    {
        if (num[j] == '1')
        {
            display += SimularDisplay1(car) + "\n";
        }
        if (num[j] == '2')
        {
            display += SimularDisplay2(car) + "\n";
        }
        if (num[j] == '3')
        {
            display += SimularDisplay3(car) + "\n";
        }
        if (num[j] == '4')
        {
            display += SimularDisplay4(car) + "\n";
        }
        if (num[j] == '5')
        {
            display += SimularDisplay5(car) + "\n";
        }
        if (num[j] == '6')
        {
            display += SimularDisplay6(car) + "\n";
        }
        if (num[j] == '7')
        {
            display += SimularDisplay7(car) + "\n";
        }
        if (num[j] == '8')
        {
            display += SimularDisplay8(car) + "\n";
        }
        if (num[j] == '9')
        {
            display += SimularDisplay9(car) + "\n";
        }
    }
    cout<<display<<endl;
    return 0;
}

string SimularDisplay1(string car)
{
    string display;
    display =
             car + "\n" +
             car + "\n" +
             car + "\n" +
             car + "\n" +
             car + "\n";
    return display;
}
string SimularDisplay2(string car)
{
    string display;
    display = 
			car + car + car + "\n" +
			"    " + car + "\n" +
			car + car + car + "\n" +
			car + "  " + "\n" +
			car + car + car + "\n";
    return display;
}
string SimularDisplay3(string car)
{
    string display;
    display = 
		 	car + car + car + "\n" +
		 	"    " + car + "\n" +
		 	car + car + car + "\n" +
		 	"    " + car + "\n" +
		 	car + car + car + "\n";
    return display;
}
string SimularDisplay4(string car)
{
    string display;
    display = 
		 	car + "  " + car + "\n" +
		 	car + "  " + car + "\n" +
		 	car + car + car + "\n" +
		 	"    " + car + "\n" +
		 	"    " + car + "\n";
    return display;
}
string SimularDisplay5(string car)
{
    string display;
    display = 
		 	car + car + car + "\n" +
	 		car + "    " + "\n" +
		 	car + car + car + "\n" +
		 	"    " + car + "\n" +
		 	car + car + car + "\n";
    return display;
}
string SimularDisplay6(string car)
{
    string display;
    display = 
		 	car + car + car + "\n" +
		 	car + "    " + "\n" +
		 	car + car + car + "\n" +
		 	car + "  " + car + "\n" +
		 	car + car + car + "\n";
    return display;
}
string SimularDisplay7(string car)
{
    string display;
    display = 
		 	car + car + car + "\n" +
		 	"    " + car + "\n" +
		 	"    " + car + "\n" +
		 	"    " + car + "\n" +
		 	"    " + car + "\n";
    return display;
}
string SimularDisplay8(string car)
{
    string display;
    display = 
		 	car + car + car + "\n" +
		 	car + "  " + car + "\n" +
		 	car + car + car + "\n" +
	 		car + "  " + car + "\n" +
		 	car + car + car + "\n";
    return display;
}
string SimularDisplay9(string car)
{
    string display;
    display = 
		 	car + car + car + "\n" +
		 	car + "  " + car + "\n" +
		 	car + car + car + "\n" +
	 		"    " + car + "\n" +
	 		"    " + car + "\n";
    return display;
}