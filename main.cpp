#include<iostream>
using namespace std;

//tower of HANOI function implementation Credit: Includehelp.com - https://www.includehelp.com/data-structure-tutorial/tower-of-hanoi-using-recursion.aspx
void TOH(int n,char Sour, char Aux,char Des) // here they created a function to do the recursion, n for the amount of discs, sour for the starting point, aux is the "auxillary" pole which the program uses as a stepping stone to the destination or "des".
{ 
	if(n==1) //here we check to see if there's only one disc left, which will be the first base that we move to the destination once the top two discs have been moved
	{
		cout<<"Move Disk "<<n<<" from "<<Sour<<" to "<<Des<<endl;
		return;
	}
	
	TOH(n-1,Sour,Des,Aux); // here we do the recusion, calling itself to move the first two discs
	cout<<"Move Disk "<<n<<" from "<<Sour<<" to "<<Des<<endl;
	TOH(n-1,Aux,Sour,Des);
}
int factorialR(int num) { // Recursion of a factorial, credit to: https://www.programiz.com/cpp-programming/recursion for the help to see how to do it. here we recieve the base and start the function
    if (num > 1) //check if it's at the last call
    {
        return num * factorialR(num - 1); // keeps returning the new number until we reach 1
    }
     else //when it's 1 just give em a 1 and because the if statement is not called, the recursion stops
    {
        return 1;
    }
}
//main program
int main()
{ 
	int n, num;
	
	cout<<"Enter no. of disks:";	
	cin>>n;
	//calling the TOH 
	TOH(n,'A','B','C');
	
  cout << "Enter your factorial base: " << endl;
  cin >> num;
  cout << factorialR(num);

	return 0;
}