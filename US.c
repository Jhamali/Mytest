#include <stdio.h>
#include <math.h>



int main() {
    
    int i;
    int pass;
    int intArray [50];
    int cases = enterc();

    printf ("Press enter then enter integers to find find the US for.");
    for (i=0; i<cases; i++) {
        intArray[i] = enterInt();
       }
    
      
    for ( i = 0; i<cases; i++) {
        int s = intArray[i];
        int answ = single(s);
        printf ("%d", answ);

        }
    scanf ("%d",i);
    return 0;
}



int enterc() {
            
    float num;
    printf ("Enter number of cases (Must be an integer less than or equal to 50)");
    scanf ("%d",&num );
     float t = ((int) num) - num;
    if (num<=50) {
       return num;
       }
       printf ("Incorrect type entered or size exceeded, re-enter number.");
       enterc();        
}

int enterInt() {
    int num;
    scanf ("%d", &num);
    return  num;
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
    


         
        
        
        
      
