#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>

using namespace std;

void menu(int *ptrchoiseMenu) {
cout << "\tMENU" << endl;
	cout << endl;
	cout << "1. START" << endl;
	cout << "2. EXIT" << endl;
	cout << endl;
	cout << "Enter action (1/2): ";
	cin >> *ptrchoiseMenu;
}
void showMatrix(string matrix[][20])
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
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
	string codeWord;
	string myMatrix[20][20] = {
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
				codeWord = " ";
				showMatrix(myMatrix);

				cout << "Use ^/v/</> to move $" << endl;
				//cin >> i_input;
				switch (_getch())
				{
				case 75: 
					if (myMatrix[x][y-1] == "*")
				{
					
				}
					else if (myMatrix[x][y-1] == "#")
				{

					for (int i = 0; i < 5; i++)
					{
						Sleep(1000);
						system("CLS");
						Sleep(1000);
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
					myMatrix[x][y] = " ";
					x = 1;
					y = 1;
					myMatrix[x][y] = "$";
					codeWord = "stop";
					break;
				}
				else if (myMatrix[x][y-1] == "F")
				{
						for (int i = 0; i < 5; i++)
						{
							Sleep(1000);
							system("CLS");
							Sleep(1000);
							cout << "#       #\t\t# # # # #\t\t#       #\t\t\t\t#       #\t\t# # # # #\t\t#       #" << endl;
							cout << "#       #\t\t#       #\t\t#       #\t\t\t\t#       #\t\t#       #\t\t#       #" << endl;
							cout << "#       #\t\t#       #\t\t#       #\t\t\t\t#       #\t\t#       #\t\t#       #" << endl;
							cout << "  # # #  \t\t#       #\t\t#       #\t\t\t\t#   #   #\t\t#       #\t\t# #     #" << endl;
							cout << "    #    \t\t#       #\t\t#       #\t\t\t\t#   #   #\t\t#       #\t\t#   #   #" << endl;
							cout << "    #    \t\t#       #\t\t#       #\t\t\t\t#   #   #\t\t#       #\t\t#     # #" << endl;
							cout << "    #    \t\t# # # # #\t\t# # # # #\t\t\t\t# #   # #\t\t# # # # #\t\t#       #" << endl;
						}
						myMatrix[x][y] = " ";

						x = 1;
						y = 1;
						myMatrix[x][y] = "$";
						codeWord = "stop";

						
				}
				else 
					{
						y--;
						myMatrix[x][y] = "$";
						myMatrix[x][y + 1] = " ";
					}
					break;
				case 77:
					if (myMatrix[x][y + 1] == "*")
					{

					}
					else if (myMatrix[x][y + 1] == "#")
					{
						for (int i = 0; i < 5; i++)
						{
							Sleep(1000);
							system("CLS");
							Sleep(1000);
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
						myMatrix[x][y] = " ";
						x = 1;
						y = 1;
						myMatrix[x][y] = "$";
						
						codeWord = "stop";
						break;
					}
					else if (myMatrix[x][y + 1] == "F")
					{
						for (int i = 0; i < 5; i++)
						{
							Sleep(1000);
							system("CLS");
							Sleep(1000);
							cout << "#       #\t\t# # # # #\t\t#       #\t\t\t\t#       #\t\t# # # # #\t\t#       #" << endl;
							cout << "#       #\t\t#       #\t\t#       #\t\t\t\t#       #\t\t#       #\t\t#       #" << endl;
							cout << "#       #\t\t#       #\t\t#       #\t\t\t\t#       #\t\t#       #\t\t#       #" << endl;
							cout << "  # # #  \t\t#       #\t\t#       #\t\t\t\t#   #   #\t\t#       #\t\t# #     #" << endl;
							cout << "    #    \t\t#       #\t\t#       #\t\t\t\t#   #   #\t\t#       #\t\t#   #   #" << endl;
							cout << "    #    \t\t#       #\t\t#       #\t\t\t\t#   #   #\t\t#       #\t\t#     # #" << endl;
							cout << "    #    \t\t# # # # #\t\t# # # # #\t\t\t\t# #   # #\t\t# # # # #\t\t#       #" << endl;
						}
						myMatrix[x][y] = " ";
						x = 1;
						y = 1;
						myMatrix[x][y] = "$";
						codeWord = "stop";


					}
					else
					{
						y++;
						myMatrix[x][y] = "$";
						myMatrix[x][y - 1] = " ";
					}
					break;
				case 72:
					if (myMatrix[x-1][y] == "*")
					{

					}
					else if (myMatrix[x-1][y] == "#")
					{
						for (int i = 0; i < 5; i++)
						{
							Sleep(2000);
							system("CLS");
							Sleep(1000);
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
						myMatrix[x][y] = " ";
						x = 1;
						y = 1;
						myMatrix[x][y] = "$";
						
						codeWord = "stop";
						break;
					}
					else if (myMatrix[x-1][y] == "F")
					{
						for (int i = 0; i < 5; i++)
						{
							Sleep(2000);
							system("CLS");
							Sleep(1000);
							cout << "#       #\t\t# # # # #\t\t#       #\t\t\t\t#       #\t\t# # # # #\t\t#       #" << endl;
							cout << "#       #\t\t#       #\t\t#       #\t\t\t\t#       #\t\t#       #\t\t#       #" << endl;
							cout << "#       #\t\t#       #\t\t#       #\t\t\t\t#       #\t\t#       #\t\t#       #" << endl;
							cout << "  # # #  \t\t#       #\t\t#       #\t\t\t\t#   #   #\t\t#       #\t\t# #     #" << endl;
							cout << "    #    \t\t#       #\t\t#       #\t\t\t\t#   #   #\t\t#       #\t\t#   #   #" << endl;
							cout << "    #    \t\t#       #\t\t#       #\t\t\t\t#   #   #\t\t#       #\t\t#     # #" << endl;
							cout << "    #    \t\t# # # # #\t\t# # # # #\t\t\t\t# #   # #\t\t# # # # #\t\t#       #" << endl;
						}
						myMatrix[x][y] = " ";
						x = 1;
						y = 1;
						myMatrix[x][y] = "$";
						codeWord = "stop";

					}
					else
					{
						x--;
						myMatrix[x][y] = "$";
						myMatrix[x+1][y] = " ";
					}
					break;
					
				case 80:
					if (myMatrix[x + 1][y] == "*")
					{

					}
					else if (myMatrix[x + 1][y] == "#")
					{
						for (int i = 0; i < 5; i++)
						{
							Sleep(2000);
							system("CLS");
							Sleep(1000);
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
						myMatrix[x][y] = " ";
						x = 1;
						y = 1;
						myMatrix[x][y] = "$";
						codeWord = "stop";
						break;
					}
					else if (myMatrix[x + 1][y] == "F")
					{

						for (int i = 0; i < 5; i++)
						{
							Sleep(2000);
							system("CLS");
							Sleep(1000);
							cout << "#       #\t\t# # # # #\t\t#       #\t\t\t\t#       #\t\t# # # # #\t\t#       #" << endl;
							cout << "#       #\t\t#       #\t\t#       #\t\t\t\t#       #\t\t#       #\t\t#       #" << endl;
							cout << "#       #\t\t#       #\t\t#       #\t\t\t\t#       #\t\t#       #\t\t#       #" << endl;
							cout << "  # # #  \t\t#       #\t\t#       #\t\t\t\t#   #   #\t\t#       #\t\t# #     #" << endl;
							cout << "    #    \t\t#       #\t\t#       #\t\t\t\t#   #   #\t\t#       #\t\t#   #   #" << endl;
							cout << "    #    \t\t#       #\t\t#       #\t\t\t\t#   #   #\t\t#       #\t\t#     # #" << endl;
							cout << "    #    \t\t# # # # #\t\t# # # # #\t\t\t\t# #   # #\t\t# # # # #\t\t#       #" << endl;
						}
						myMatrix[x][y] = " ";
						x = 1;
						y = 1;
						myMatrix[x][y] = "$";
						codeWord = "stop";

						
					}
					else
					{
						x++;
						myMatrix[x][y] = "$";
						myMatrix[x - 1][y] = " ";
					}
					break;
				}
				system("CLS");
				
			} while (codeWord!="stop");
		break;

		case 2:
			cout << "GOODBYE!!!" << endl;
			Sleep(1000);
		default:
			break;
		}

		


	} while (*ptrchoiseMenu != 2);




	system("pause");
	return 0;

}