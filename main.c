#include<stdio.h>

int main()
{
    FILE *fp,*fp2;
    //open the file text1.txt to read from it
    fp=fopen("text1.txt","r");
    if(fp==NULL){
        perror("");
        return -1;
    }
    //open file text_copy.txt to write the data from read file
    fp2=fopen("text_copy.txt","w");
    if(fp2==NULL){
        perror("");
        return -1;
    }
    char ch;
    //read one character from text1.txt and write in text_copy.txt until it reaches the End Of File
    while(feof(fp)!=0){
        fread(&ch,1,1,fp);
        fwrite(&ch,1,1,fp2);
    }
    return 0;
}
