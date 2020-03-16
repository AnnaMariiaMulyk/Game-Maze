#include <iostream>
#include <string>
#include <Windows.h>
#include <ctime>
#include <conio.h>

using namespace std;

void menu(int *ptrchoiseMenu) {
cout << "\tMENU" << endl;
	cout << endl;
	cout << "1. START" << endl;
	cout << "2. EXIT" << endl;
	cout << endl;
	cout << "Enter actrion (1/2): ";
	cin >> *ptrchoiseMenu;
}
void showMatrix(string matrix, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}


int main()
{
	int i_input;
	i_input = _getch();
	int x = 1;
	int y = 1;
	const int row = 20;
	const int col = 20;
	string myMatrix[row][col] = {
		"*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", 
		"*", " ", " ", "*", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "*",
		"*", " ", " ", "*", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "*", "*", "*", "*",
		"*", " ", " ", "*", "*", "*", "*", "*", "*", " ", " ", " ", "*", "*", "*", " ", " ", " ", "*", "*",
		"*", " ", " ", " ", " ", " ", " ", " ", "*", " ", " ", " ", "*", " ", " ", " ", " ", " ", "*", "*",
		"*", " ", " ", " ", "*", " ", " ", " ", "*", "*", "*", "*", "*", "*", "*", "*", "*", " ", "*", "*",
		"*", " ", " ", " ", "*", "*", "*", "*", "#", " ", " ", " ", "*", " ", " ", " ", " ", " ", "*", "*", 
		"*", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "*", "*", " ", " ", "#", "*", "*", "*",
		"*", "*", "#", " ", " ", " ", " ", " ", "#", " ", " ", " ", " ", "*", " ", " ", "*", " ", " ", "*", 
		"*", " ", "*", " ", " ", "*", "*", "*", "*", "*", "*", " ", " ", "*", " ", " ", "*", "*", " ", "*",
		"*", " ", "*", "*", "*", "*", " ", " ", "#", " ", " ", " ", " ", "*", " ", " ", " ", " ", " ", "*",
		"*", " ", " ", " ", " ", "*", " ", " ", " ", " ", " ", " ", "#", "*", " ", " ", " ", " ", " ", "*",
		"*", " ", " ", "#", " ", " ", " ", "#", "*", "*", "*", "#", "*", " ", " ", "#", "*", "*", " ", "*",
		"*", " ", " ", "*", " ", " ", " ", "*", " ", "*", " ", " ", " ", " ", " ", " ", " ", "*", " ", "*",
		"*", " ", " ", "*", " ", "*", "*", "*", " ", "*", " ", " ", "#", "*", "*", "*", " ", "*", " ", "*",
		"*", " ", " ", "*", "#", "*", " ", " ", " ", "#", " ", " ", "*", " ", " ", "*", " ", "*", " ", "*",
		"*", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "*", " ", " ", "*", "*", "*", " ", "*",
		"*", " ", " ", " ", " ", "#", "*", "*", "*", "*", "*", "*", "*", " ", " ", " ", " ", " ", " ", "*",
		"*", " ", " ", " ", " ", "#", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "F", "*",
		"*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*"
	};
	myMatrix[x][y] = "$";

	int choiseMenu;
	int* ptrchoiseMenu = &choiseMenu;


	cout << "#       #\t# # # #\t\t# # # #\t\t# # # #" << endl;
	cout << "# #   # #\t#     #\t\t      #\t\t#      " << endl;
	cout << "#   #   #\t# # # #\t\t    #  \t\t# # # #" << endl;
	cout << "#       #\t#     #\t\t  #    \t\t#      " << endl;
	cout << "#       #\t#     #\t\t# # # #\t\t# # # #" << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	do {
		menu(&choiseMenu);
		switch (*ptrchoiseMenu)
		{
		case 1:
			do {
				
				showMatrix(myMatrix[row][col], row, col);

				cout << "Use W/A/S/D to move $" << endl;
				switch (i_input) {
				case 17: if (myMatrix[x - 1][y] == "*")
				{
					myMatrix[x][y] = "$";
				}
					   else if (myMatrix[x - 1][y] == "#")
				{
					for (int i = 0; i < 5; i++)
					{
						Sleep(500);
						system("clr");
					cout << "# # # # #\t\t# # # # #\t\t#        #\t\t# # # # #" << endl;
					cout << "#       #\t\t#       #\t\t# #    # #\t\t#        " << endl;
					cout << "#        \t\t#       #\t\t#  #  #  #\t\t#        " << endl;
					cout << "# # # # #\t\t# # # # #\t\t#    #   #\t\t# # # # #" << endl;
					cout << "#       #\t\t#       #\t\t#        #\t\t#        " << endl;
					cout << "#       #\t\t#       #\t\t#        #\t\t#        " << endl;
					cout << "# # # # #\t\t#       #\t\t#        #\t\t# # # # #" << endl;
					cout << endl;
					cout << endl;
					cout << "# # # # #\t\t#       #\t\t# # # # #\t\t# # # # #" << endl;
					cout << "#       #\t\t#       #\t\t#        \t\t#       #" << endl;
					cout << "#       #\t\t#       #\t\t#        \t\t#       #" << endl;
					cout << "#       #\t\t#       #\t\t# # # # #\t\t# # # # #" << endl;
					cout << "#       #\t\t#       #\t\t#        \t\t#   #    " << endl;
					cout << "#       #\t\t  #   #  \t\t#        \t\t#     #  " << endl;
					cout << "# # # # #\t\t    #    \t\t# # # # #\t\t#       #" << endl;

					}

				}
					
				}
			} while (myMatrix[1][1] != myMatrix[18][18]);
		break;

		case 2:
			cout << "GOOGBYE!!!" << endl;
			Sleep(1000);
		default:
			break;
		}

		


	} while (*ptrchoiseMenu != 2);




	system("pause");
	return 0;

}