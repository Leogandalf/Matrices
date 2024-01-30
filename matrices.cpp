#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

/* 
giving an idea of how the code should work: getting the infos about the matrix and then inserting them in the class itself
asking then for the procedures the user wants to use...
giving the possibility to insert vectors as columns and returning their properties
c++ graphic interface? just to visualize better what is actually going on...
*/
void createMatrix();

//starting all the procedures around the code
int main(){
	//Matrix ;
	//a.defineDimension();
	
	
	return 0;
}

//main class allowing to create all the matrices
class Matrix{

	
};

//class controlling all the procedures, calling functions, based on the matrix data overall
//class Controller(Matrix matrix){
//
//};

void createMatrix(){
	int nrow = 0;		//private attributes of matrices
	int ncolumn= 0;
	bool check = 0;

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
		exit(1);
	}	

	if (nrow!=ncolumn){
		printf("\nCaution: the matrix isn't squared!");
	}

	printf("\n\nVariables used: \n");
	cout << nrow << "..." << endl << ncolumn << "..." << endl <<check << "...";
}
