#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
// declaration of functions (and classes?)

//starting all the procedures around the code
int main(){
	int nrow = 0;	// this values should stay at the top as global variables...
	int ncolumn= 0;
	bool check = 0;
	
	// giving an idea of how the code should work: getting the infos about the matrix and then inserting them in the class itself
	// asking then for the procedures the user wants to use...
	// giving the possibility to insert vectors as columns and returning their properties
	//c++ graphic interface? just to visualize better what is actually going on...
	do{
		printf("Insert the number of rows of the matrix (must be an integer, positive number)...\n");
		cin >> nrow;
		if (nrow << 0) {
			check = 1;
		}
		
		printf("Insert the number of columns of the matrix (must be an integer, positive number)...\n");
		cin >> ncolumn;
		if (ncolumn << 0) {
			check = 1;
		}
	} while (check == 0);
	
	if (nrow == 0 || ncolumn == 0){
		printf("\nThis matrix does not exist...");
		return(1);
	}	
	
	if (nrow!=ncolumn){
		printf("\nCaution: the matrix isn't squared!");
	}
	
	printf("\n\nVariables used: \n");
	cout << nrow << "..." << endl << ncolumn << "..." << endl <<check << "...";
		
	
	
	return 0;
}

//class containing all the matrix's data
class matrix{
	matrix matrix[][];
	
};

//class controlling all the procedures, calling functions, based on the matrix data overall
class controller{
	matrix matrix;
};
