#include <iostream>
# include <string.h>
using namespace std;
int main()
{
	char ch;
	int ascii,alpha_count=0,space_count=0,digit_count=0;
	
 	// create a file pointer
	FILE *file ;
 	
	// open the file in read mode
        file = fopen("file1.txt", "r") ;

    while(1)
    {	//read the chracter from the file
    	ch = fgetc(file);
    	
		
	// if the chracter is in the end of the file    	
      	if ( ch == EOF )  
		break ;
  		//print the read chracter
		cout<<ch;	
        
        // convert the chracter into equivalent ascii code
        ascii=ch;
        
	//check if the chracter is an Alphabet        
        if(ascii>63 && ascii<91 || ascii>96 && ascii<123)
                alpha_count+=1; 
     
        // check if the chracter is an empty space 
        else if(ch==' ') 
                 space_count+=1; 

        //check if the chracter is a Digit 
        else if(ascii>47&&ascii<58)
                digit_count++;
    }
    fclose(file);
	cout<<"\n---------The Above File Statement Has----------------------\n";
    cout<<"No. of Alphabets :: "<<alpha_count<<endl;
    cout<<"No. Of Digits :: "<<digit_count<<endl;
    cout<<"No. Of White Spaces :: "<<space_count<<endl;
    return 0;
}



