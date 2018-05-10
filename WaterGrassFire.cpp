#include <iostream>
#include <cstdlib>
#include <limits>
#include <ctime>

using namespace std;


int main()
{
	
    int choice;
    int i;
    int comp;
    char res;
   
    unsigned seed;
		
    cout << "Water/Grass/Fire is a simple game of Pokemon RPS. The rules are: \n Water beats Fire. \n Fire beats Grass. \n Grass beats Water.\n";    
    //The choices Rock = Water, Grass = Papper, Fire = scissors
    cout << "Game Choices.\n\n";
    cout << "1. Water\n";
    cout << "2. Grass\n";
    cout << "3. Fire\n";
    cout << "4. Quit, exits the game.\n\n";
    cout << "Please enter your choice.";
    cin >> choice;
 
    
     //Now for the IF/Else statements.
    
    if (choice == 1) //Water
        {   
        cout << "You picked Water.\n";
        }
    
     else if (choice == 2) //Grass
        {   
        cout << "You picked Grass.\n";
        }
    
   else if (choice == 3) //Fire
        {   
        cout << "You picked Fire.\n";
        }
    else if ( choice == 4)
        {
        return 0;
        }
//*************************************************
        seed = time(0);
        srand(seed); //For the random generator.
        
 comp = rand() % 3 + 1; //Computers pick.
  
  if (comp==1) //Computer Water
        {
        res = 1;
        cout << "Computer Chooses...\n";
		cout << "Water!\n";
        }
  
  else if (comp==2) //Computer Grass
       {
        res = 2;
         cout << "Computer Chooses...\n";
		cout << "Grass!\n";
        }
  else if (comp==3)  // Computer Fire
        {
        res = 3;
         cout << "Computer Chooses...\n";
		cout << "Fire!\n";
        }
  
	if (choice==1){
		if (comp==1){
		cout<<"Draw, you both just suck";
	}
	}
	if (choice==2){
		if (comp==2){
		cout<<"Draw, you both just suck";
	}
	}
	if (choice==3){
		if (comp==3){
		cout<<"Draw, you both just suck";
	}
	}
	if (choice==1){
		if (comp==2){
		cout<<"Grass Beats Water! Computer says suck it nerd!";
	}
	}
	if (choice==1){
		if (comp==3){
		cout<<"Water Beats Fire! You didnt suck!";
	}
	}
	if (choice==2){
		if (comp==1){
		cout<<"Grass Beats Water! You didnt suck!";
	}
	}
	if (choice==2){
		if (comp==3){
		cout<<"Fire Beats Grass! Computer says suck it, nerd!";
	}
	}
	if (choice==3){
		if (comp==1){
		cout<<"Water Beats Fire! Computer tells you to suck it!";
	}
	}
	if (choice==3){
		if (comp==2){
		cout<<"Fire Beats Grass! You didnt suck!";
	}
	}
  switch (res)
    {
        case '1': cout << "test";
        case '2': cout << "tests";
        case '3': cout << "test";
    }

}