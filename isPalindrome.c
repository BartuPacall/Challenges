
//Bu code hatali olabilir cunku cok uzun surede calisiyor ve hata veriyor ama mantigi dogru olabilir buna bakin
// hatayi giderin ve calistirin, hatayi gideren ilk kişinin adi yazilacak

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#define bool int // we defined bool is int
#define true 1  // we defined true is 1
#define false 0 //we defined false is 0

bool isPalindrome(int x) {
    int i,j;
    int len = 0;
    int flag = 0;
    char str[100];
    sprintf(str,"%d",x);
    len = strlen(str);
    for(i=0,j=len-1;i<len/2;i++,j--){
        if(str[i] != str[j]){  // if flag is set to 1 if the reverse reading of the number is not equal to the straight reading.
            flag = 1;
            break;
        }
    }
    if(flag == 1){ // if flag is 1,return 0
        return false;
    }
    else{
        return true; //if flag is 0,return 1
    }

}

int main() 
{
    int x = 121;
    printf("%d",isPalindrome(x));
    return 0;
}
@themanoftalent 
