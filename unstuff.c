#include<stdio.h>
#include<string.h>
int main(){
    char sen[300],line[100],stx[5],esc[5],etx[5];
    FILE *fp1 = fopen("stuff.txt","r");
    FILE *fp2 = fopen("unstuff.txt","w");
    if(fp1 == NULL || fp2 == NULL){
        printf("Error opening file.\n");
        return -1;
    }
    int i;
    printf("Enter starting and escape and end value for stuffing: ");
    scanf("%s %s %s",stx,esc,etx);
    while((fgets(line,sizeof(line),fp1)) != NULL){
        for (i = 0; line[i] != '\0'; i++) {
            if (line[i] == '\n') {
                line[i] = '\0';
                break;
            }
        }
        char temp[100];
        strcpy(temp,line);
        char *first = strtok(temp," ");
        char *words = first;
        char *last = NULL;
        while(words != NULL){
            last = words;
            words = strtok(NULL," ");
        }
        if((strcmp(first,stx) != 0) || (strcmp(last,etx) != 0)){
            continue;
        }
        int next = 0;
        char *word = strtok(line," ");
            while(word != NULL){
                if(strcmp(word,esc) == 0){
                    next = 1;
                }
                else if(next){
                    fputs(word,fp2);
                    fputs(" ",fp2);
                    next = 0;
                }
                else if((strcmp(word,stx) == 0) || strcmp(word,etx) == 0){

                }
                else{
                    fputs(word,fp2);
                    fputs(" ",fp2);
                }
                word = strtok(NULL," ");
        }
        fputs("\n",fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("Unstuffed successfully.\n"); 
}