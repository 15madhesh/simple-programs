#include<stdio.h>
#include<string.h>
int main(){
    char sen[300],line[100],stx[5],esc[5],etx[5];
    FILE *fp1 = fopen("original.txt","r");
    FILE *fp2 = fopen("stuff.txt","w");
    if(fp1 == NULL || fp2 == NULL){
        printf("Error opening file.\n");
        return -1;
    }
    printf("Enter starting and escape and end value for stuffing: ");
    scanf("%s %s %s",stx,esc,etx);
    while((fgets(line,sizeof(line),fp1)) != NULL){
        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] == '\n') {
                line[i] = '\0';
                break;
            }
        }
        fputs(stx,fp2);
        fputs(" ",fp2);
        char *word = strtok(line," ");
        while(word != NULL){
            if((strcmp(word,stx) == 0) || (strcmp(word,esc) == 0) || (strcmp(word,etx) == 0)){
                fputs(esc,fp2);
                fputs(" ",fp2);
            }
            fputs(word,fp2);
            fputs(" ",fp2);
            word = strtok(NULL," ");
        }
        fputs(etx,fp2);
        fputs("\n",fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("Stuffed successfully.\n");
}