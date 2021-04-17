// Hello world! Cplayground is an online sandbox that makes it easy to try out
// code.

#include <stdio.h>
#include <stdlib.h>



int main() {
    char a = 'A';
    char b = 'B';
    char c = 'C';
    char vazio = ' ';
    int x = 20;
    int y = 33;
    
    int countx = 1;
    int county = 1;

    /* imprimindo primeira linha */    
        if((countx=1) & (county=1)){
            printf("%c",a);
            countx++;
            while ((x>countx) & (county=1)){                
                countx++;
                printf("%c",b);
            }
        
            while ((x==countx) & (county=1)){
            printf("%c",a);
            countx++;
            }
            county++;
            countx = 1;

             printf("\n");

        } 
    /* imprimindo linhas do meio */    

            while(y!=county){

                while ((countx=1) & (y!=county)) {
                    printf("%c", b);
                    countx++;
                
                    while(x!=countx){               
                        printf("%c", vazio);
                        countx++;
                    }
                
                    while ((x==countx) & (y!=county)){
                        printf("%c",b);
                        printf("\n");
                        countx=1;                
                    }
                    county++;                
                
                }
                countx = 1;
                county=y;
            }
    /*imprimindo ultima linha*/
            if((countx=1) & (county==y)){
                printf("%c",c);
                countx++;
            
                while ((x>countx) & (county==y)){                
                    countx++;
                    printf("%c",b);
                }
        
                while ((x==countx) & (county==y)){
                    printf("%c",c);
                    countx++;
                }
                county++;
                countx = 1;

                printf("\n");
            }
  
}
