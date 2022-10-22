#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int score=5;
//srand(time(0));
int t=time(0)%10+1;
bool game_continue()
{
	char answer;
    cout << "__________________________________" << endl;
    cout << "Do you want to play again? (y/n):  " << endl;
    cin >> answer;

    switch (answer)
    {
	    case 'y':
	    {
	        cout << "__________________________________" << endl;
	        cout << "Great! Let's play again!" << endl;
	        cout << "__________________________________" << endl;
	        return true;
	    }
	    case 'n':
	    {
	        cout << "__________________________________" << endl;
	        cout << "Thanks for playing! Press any key to close." << endl;
	        cout << "__________________________________" << endl;
	        cin.get();
	        return false;
	    }
	    default:
	    {
	        cout << "__________________________________" << endl;
	        cout << "Invalid input! Please try again." << endl;
	        cout << "__________________________________" << endl;
	        game_continue();
	    }
	}
}
bool guessing()
{
	int n;
	cin>>n;
	
	if(n>10 || n<1)
	{
		cout<<"INVALID!! PLEASE ENTER NUMBER BETWEEN  1 to 10"<<endl;
	}
	else
	{
		cout << "SO! YOUR GUESS IS -> " << n<< endl;
	    cout << endl;
		string a=(n==t)?"T":"F";
		if(a.compare("T"))
		{
			cout << "****************************************" << endl;
            cout << "YOU ARE LUCKY! YOU GUESSED IT RIGHT! :D" << endl;
            cout << "****************************************" << endl;
            cout << endl;
            cout << "YOUR SCORE ON LUCKY NO GAME IS -> " << score << endl;
            cout << "****************************************" << endl;
            cout << endl;
            bool answer = game_continue();
            return answer;
		}
		else
		{
			cout << "YOU ARE UNLUCKY! YOU GUESSED IT WRONG! :(" << endl;
            cout << "TRY AGAIN YOU UNLUCKY PERSON! :/" << endl;
            cout << endl;
            score = score - 1;
            cout << "Chances left -> " << score << endl;
            
            if(score<=0)
            {
            	cout << "........................" << endl;
                cout << "!!!   YOU LOST IT    !!!" << endl;
                cout << "........................" << endl;
                
            	bool answer=game_continue();
            	return answer;
			}
			else
			{
				guessing();
			}
		}
	}
}
int main()
{
	bool guess;
	cout << "---------------------" << endl;
    cout << "** WELCOME TO GAME **" << endl;
    cout << "---------------------" << endl;
    cout << endl;
    cout << "You have 5 chances to guess the lucky number!" << endl;
    cout << "Number will be between 1 and 10*" << endl;
    cout << " **** Good luck!  ****" << endl;
    cout << endl;
    cout << "______________________________________________________" << endl;
    
	guess=guessing();
	if(guess)
	{
		main();
	}
	else
	{
		cin.get();
	}
	
	return 0;
}
