#include <stdio.h>
#include <math.h>



int main() {
    
    int i;
    int pass;
    int intArray [50];
    int cases;
    int nums;
    scanf("%d", &cases);

    for (i=0; i<cases; i++) {
        scanf("%d",&nums);
        intArray[i] = nums;
       }
    
      
    for ( i = 0; i<cases; i++) {
        int s = intArray[i];
        int answ = single(s);
        printf ("%d\n", answ);

        }
    scanf ("%d",i);
    return 0;
}


int single (int num) {
    int newnum = addAll(num,0);
    if (newnum<10) {
       return newnum;
                  }
    else {
         return single (newnum);
         }
}

int addAll (int num, int remain) {
    int rem;
    if (num<10)
    {
       rem = num;
       }
    else{
        rem = num%10;
        }
        int div = (num-rem)/10;
        int total = rem + remain;
        if (div == 0){
            return total;
            }
        else{
            return addAll(div,total);
            }
}
    


         
        
        
        
      
