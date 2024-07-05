#include <stdio.h>
#include <stdlib.h>
int main(void){
    //FILE file_ptr /create file pointer /  
    FILE *p;
    //file_ptr=fopen("filename.txt","w",)/ open file for editing/
    *p=fopen("testfile1.text","w");
    char str []="Hello Gloria ! ";
    fputs(str, p); // add the content of the array to the file 
    fclose(p); //close file 
    return 0;
    }