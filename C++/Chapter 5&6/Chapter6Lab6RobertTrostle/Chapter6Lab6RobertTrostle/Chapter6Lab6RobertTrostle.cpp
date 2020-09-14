//Write a class that represents a player in a game.  Output the results
//Created by Robert Trostle - CIT245
//Created on 6/5/20
#pragma warning(disable 4996)
#include<string>
#include<cstdlib>
#include <iostream>
using namespace std;
//Create a player class
class Player
{
public:
		void display();//Create a suitable display method
		void setName(string n);
		void setPassword(string p);
		void setExperience(int x);
		void setLocation(int a, int b);
		void setInventory(string inv[4]);
		//Getters and setters for player attributes
		string getName();
		string getPassword();
		int getExperience();
		int getX();
		int getY();
		string* getInv();
		//Private variables for player attributes
private:
		string name;
		string password;
		int experience;
		int x, y;
		string *inventory;
};

int main()
{   
	cout << "This program generates three player objects and displays them\n\n";
	//Create player objects
	Player playerOne;
	string inven[] = {"Rings", "Sticks", "Caffiene", "Balls" };
	playerOne.setName("Sonic");
	playerOne.setPassword("HedgeHog17");
	playerOne.setExperience(50);
	playerOne.setLocation(17, 140);
	playerOne.setInventory(inven);
	playerOne.display();

	Player playerTwo;
	string inven2[] = { "Pipe", "Fireball", "Stars", "Shrooms" };
	playerTwo.setName("Mario");
	playerTwo.setPassword("Plumber69");
	playerTwo.setExperience(78);
	playerTwo.setLocation(89, 100);
	playerTwo.setInventory(inven2);
	playerTwo.display();

	Player playerThree;
	string inven3[] = { "Bananas", "Coffee", "SlingShot", "Rocks" };
	playerTwo.setName("DiddyKong");
	playerTwo.setPassword("BananasFoster");
	playerTwo.setExperience(45);
	playerTwo.setLocation(90, 1040);
	playerTwo.setInventory(inven3);
	playerTwo.display();

	system("pause");
	return 0;
}

void Player::setName(string n)
{
	name = n;
}

void Player::setPassword(string p)
{
	password = p;
}
void Player::setExperience(int x)
{
	experience = x;
}
void Player:: setLocation(int a, int b)
{
	x = a;
	y = b;
}
void Player::setInventory(string i[4])
{
	inventory = i;
}
string Player::getName()
{
	return name;
}
string Player::getPassword()
{
	return password;
}
int Player::getExperience()
{
	return experience;
}
int Player:: getX()
{
	return x;
}
int Player:: getY()
{
	return y;
}
string* Player::getInv()
{
	return inventory;
}
void Player::display()
{
		cout << "Player Info -"<<endl;
		cout << "Name:\t\t"<<getName()<<endl;
		cout << "Password:\t" << getPassword() << endl;
		cout << "Experience:\t" << getExperience() << endl;
		cout << "Inventory:\t" << endl;
		cout << "Position:\t" << getX() << ", " << getY()<<endl;
	 for(int i = 0; i < 4; i++) 
	 {
			cout<<getInv()[i].c_str() << endl;//loops through the inventory array and displays them as strings. 
	 }
	 cout << endl;
}


