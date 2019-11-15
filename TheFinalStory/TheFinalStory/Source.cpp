#include <iostream>
#include <string>
#include <conio.h>
#include <algorithm>
#include <chrono>
#include <stdlib.h>
#include <windows.h>
#include <thread>

using namespace std;

void story();
void game();
void king();
void gameover();



int main()
{
	string firedragon =
		"	   .==.        .==.          \n"
		"          //`^\\\\      //^`\\\\         \n"
		"	 // ^ ^\\(\\__/)/^ ^^\\\\        \n"
		"        //^ ^^ ^/6  6\\ ^^ ^ \\\\       \n"
		"       //^ ^^ ^/( .. )\\^ ^ ^ \\\\      \n"
		"      // ^^ ^/\\| v''v |/\\^ ^ ^\\\\     \n"
		"     // ^^/\\/  /  `~~` \\ \\/\\^ ^\\\\    \n"
		"     \\\\^ /   _/  /IIII\\  \\_  \\^ //    \n"
		"      \\\\/  /(   (IIIIII)   )\\ \\//        \n"
		"       ^ /   \\   \\IIII/   /  \\  ^      \n"
		"	 \\   ((((`    `))))  /            \n"
		"	 .--'  /\\_______/\\ `--.        \n"
		"	((((--'           '--))))       \n"
		"\n";

	string name;
	string yesno;
	string clear =
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n";
	string smile =
		"  -------   \n"
		" /  0 0  \\   \n"
		" | \\___/ | \n"
		" \\       / \n"
		"   ------";

	cout << "Hello" << endl;
	cout << "What is your name?" << endl;
	cin >> name;
	if (name == "Ryan")
		{
			cout << "[computer] oh its him, quick everyone hide" << endl;
			this_thread::sleep_for(chrono::milliseconds(1000));
				cout << "Its to lat... Hey Ryan" << endl;
				this_thread::sleep_for(chrono::milliseconds(2000));
		}
	cout << "Hello " << name << endl;
	cout << "So " << name << " do you want to play a game" << endl;
	while (1)
	{
		cin >> yesno;
		if (yesno == "yes")
		{
			cout << "ok lets play" << endl;
			cout << clear << endl;
			cout << firedragon << endl;
			cout << "type story to start" << endl;
			while (1)
			{
				cin >> yesno;
				if (yesno == "skip")
				{
					game();
					break;
				}
				if (yesno == "story")
				{
					story();
					break;
				}
				else
					cout << "try again etheir skip to game or story" << endl;
			}
			break;
		}
		if (yesno == "no")
		{
			cout << "no is not an option" << endl;
		}
		else
			cout << "Try again yes or no" << endl;
	}
}
void story()
{
	string answer;
	cout << "You are but a measly peaseant in a world ruled by knights." << endl;
	cout << "You are forced to steal to survive. But one day you where spotted stealing a loaf of bread." << endl;
	cout << "You have Two options. run or fight. \n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n" << endl;
	cin >> answer;
	if (answer == "run")
	{
		//13 lines of writing or space other than dragon
		cout << "You turn and run away from the guards. They chase you, you dart bettween ally's and stalls." << endl;
		cout << "but eventually you get cornered in a ally. The guards then cuff you and drag you to the castle to see the king" << endl;
		cout << "[king] Why did you steal? A = because I am to poor to survive by paying for it. \n"
			"B = becuase I was hoping to get your attention so I can speak with you. \n"
			"\n"
			"\n"
			"\n"
			"\n"
			"\n"
			"\n"
			"\n"
			"\n" << endl;
		cin >> answer;
		if (answer == "A")
		{
			cout << "[king]That is understandable, you where doing it because you needed to eat and you could not afford to eat so you stole. \n"
				"But that does not mean your crimes can go unpunished." << endl;
			king();
		}
		if (answer == "B")
		{
			cout << "[king] Why did you want my attention \n"
				"[you] because I am poor and I need money" << endl;
			king();
		}
	}
	if (answer == "fight")
	{
		cout << "You raise your fist's prepared to strike. But the guards draw their swords and you are forced to backdown. \n"
			"Instead of taking you to see the king they decide to make an example of you. \n"
			"You are walked up to a platform in the main sqare. A rope is put around your neck. \n"
			"Do you either A = plead for mercy or B = ask to see the king so you can have a propor trial" << endl;
		cin >> answer;
		if (answer == "A")
		{
			cout << "The guards ignor you and release the platform underneath you." << endl;
			gameover();
		}
		if (answer == "B")
		{
			cout << "The guards accept your reasoning and decide that it would only be fair to let you see the king first" << endl;
			cout << "20 minutes later you are in the kings presence" << endl;
			cout << "[king] Why did you steal? A = because I am to poor to survive by paying for it. \n"
				"B = becuase I was hoping to get your attention so I can speak with you. \n"
				"\n"
				"\n"
				"\n"
				"\n"
				"\n"
				"\n"
				"\n"
				"\n" << endl;
			cin >> answer;
			if (answer == "A")
			{
				cout << "[king] That is understandable, you where doing it because you needed to eat and you could not afford to eat so you stole. \n"
					"But that does not mean your crimes can go unpunished." << endl;
				king();
			}
		}

	}
}


void game()
{
	int xCharacter = 1;
	int yCharacter = 1;
	char Map[20][70] = {
		"#####################################################################",
		"#@                                                                  #",
		"#                                                                   #",
		"#                                                                   #",
		"#                                                              #    #",
		"#                                                          #### #####",
		"#                                                        (0)#       #",
		"#                                                   ######          #",
		"#                                                    MMMMM          #",
		"#                                                   #######      ####",
		"#                                                         #      #  #",
		"#                                                         #       ###",
		"#                                                          #        #",
		"#                                                           ##      #",
		"#                                                             #######",
		"#                                                                   #",
		"#                                                                   #",
		"#                                                                   #",
		"#                                                                   #",
		"#####################################################################",
	};

	cout << "you arrive at a cave where the dragon is said to lurk. \n"
		"The dragon lets out a mighty ROAR!!!! as you disturb his slumber. You prepare for battle \n"
		"You must destroy his eye to beat him"<< endl;
	this_thread::sleep_for(chrono::milliseconds(10000));
	while (1)
	{
		this_thread::sleep_for(chrono::milliseconds(50));
		system("cls");

		for (int y = 0; y < 20; y++)
		{
			cout << Map[y] << endl;
		}

		if (GetAsyncKeyState(VK_UP))
		{
			if (Map[(yCharacter- 1)][xCharacter] == ' ')
			{
			Map[yCharacter][xCharacter] = ' ';
			yCharacter -= 1;
			Map[yCharacter][xCharacter] = '@';
			}
			if (Map[(yCharacter - 1)][xCharacter] == '(')
			{
				while (1)
				{
					cout << "YOU WIN" << endl;
				}
			}
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			if (Map[(yCharacter + 1)][xCharacter] == ' ')
			{
				Map[yCharacter][xCharacter] = ' ';
				yCharacter += 1;
				Map[yCharacter][xCharacter] = '@';
			}
			if (Map[(yCharacter + 1)][xCharacter] == '(')
			{
				while (1)
				{
					cout << "YOU WIN" << endl;
				}
			}
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			if (Map[yCharacter][(xCharacter + 1)] == ' ')
			{
				Map[yCharacter][xCharacter] = ' ';
				xCharacter += 1;
				Map[yCharacter][xCharacter] = '@';
			}
			if (Map[yCharacter][(xCharacter + 1)] == '(')
			{
				while (1)
				{
					cout << "YOU WIN" << endl;
				}
			}
		}
		else if (GetAsyncKeyState(VK_LEFT))
		{
			if (Map[yCharacter][(xCharacter-1)] == ' ')
			{
				Map[yCharacter][xCharacter] = ' ';
				xCharacter -= 1;
				Map[yCharacter][xCharacter] = '@';
			}
			if (Map[yCharacter][(xCharacter - 1)] == '(')
			{
				while (1)
				{
					cout << "YOU WIN" << endl;
				}
			}
		}
	}
}


void king()
{
	string answer1;
	cout << "[king] You need money and I need a job done for me. The person who attempts this job will mostlikly die. \n"
		"If you complete this task you shall live a comfortable rest of you life with no financial worries \n"
		"Do you accept the task yes or no?" << endl;
	cin >> answer1;
	if (answer1 == "yes")
	{
		cout << "[king] since you accepted you will need gear \n"
			"[Item] you recived [Sword] \n"
			"[Item] you recived [Armor]" << endl;
		game();
	}
}
void gameover()
{
	while (1)
	{
		cout << "GameOver" << endl;
	}
}