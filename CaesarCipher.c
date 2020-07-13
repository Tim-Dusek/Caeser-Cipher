//Timothy Dusek
//2/15/18
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	FILE *infile;
    char plainText[5000];
	char letter;
	int key;
    
	infile=fopen("text.txt", "r");
	while(!feof(infile)){
		fscanf(infile, "%s", plainText);
	}
	
    printf("Enter the A key used for encryption: \n");
    scanf("%d", &key);
    
    for(int i = 0; plainText[i] != '\0'; i++){
		letter = plainText[i];
		if(letter >= 'a' && letter <= 'z'){
			letter = letter + key;
			
            if(letter > 'z'){
 			   letter = letter - 'z' + 'a' - 1;
		   }
            
            plainText[i] = letter;
        }
        else{
			 if (letter >= 'A' && letter <= 'Z')
            letter = letter + key;
            
            if (letter > 'Z'){
                letter = letter - 'Z' + 'A' - 1;
            }
            plainText[i] = letter;
        }
    }
    printf("Your encrypted message: %s\n", plainText);
	printf("\n");
    return 0;
}
