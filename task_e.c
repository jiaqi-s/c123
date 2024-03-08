#include <stdio.h>
int main(int argc, char *argv[]){
    
	// Enter your code under here to read the filename from the command line
	if (argc < 2) { 
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }
	
	
	// Read number from file - do not edit
	double num;
	FILE *fptr;
	fptr = fopen(argv[1], "r");
	if(fptr == NULL) { // display error if can't open file
        printf("Error. Not able to open the file.");
		return 1;
    }
	fscanf(fptr, "%lf", &num);
	fclose(fptr);

	// Enter your code from Lab D to print JSON output (with name, email, number1, number2) goes under here
	printf("{\"name\":\"Jiaqi Sheng\",\n");
	printf(" \"email\":\"jiaqi.sheng@student.manchester.ac.uk\",\n");
	printf(" \"number1\":%4.2f,\n",num);
	printf(" \"number2\":%8.3e}\n",num);
	// Do not edit below here
	return 0;
}