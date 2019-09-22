//ITSC: 20342478
#include "implementation.h"

Result getLargestConsecutiveChar(char *str)
{
    Result r;
    // implementation here
    // if empty string return '\0' and 1
    if(strlen(str)==0){
    	r.c='\0';
    	r.length=1;
    	return r;
    }

    unsigned short len = strlen(str);
    unsigned short count = 0;
    char solution = str[0];
    unsigned short currentCount = 1;
    //O(1) time
    for(unsigned short i=0;i<len;i++){
        // if next char is same with current character
        if(i<len-1 && str[i]==str[i+1]){
            currentCount+=1;
        }else{
            if(currentCount>count){
                solution = str[i];
                count = currentCount;
            }
            currentCount = 1;
        }
    }
    r.c = solution;
    r.length = count;
    return r;
}
