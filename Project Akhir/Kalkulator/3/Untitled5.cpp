
#include <stdio.h>
#include <math.h>
//fungsi-fungsinya.......

using namespace std;

int main(){
   //fibonaci(5); //panggil disini.......
   return 0;
}

// BILANGAN PRIMA
// 1
int prima(int n){
   int i,j;
   for(i=1;i<=n;++i){
       
       printf("Angka %d \n",i);
       printf("=========\n");
       int counter = 0;
       for(j=1;j<=i;++j){
          
           if(i % j==0){
              ++counter;
           }
       }
      
      /*bil prima tepat punya 2 buah faktor
        yaitu 1 dan dirinya sendiri*/
      if(counter==2)
        printf("Bil %d Prima",i);
        
      printf("\n");
   }
}
// 2
int prima(int n){

   int i,j;
   for(i=2;i<=n;++i){
      int flag = 0;
      
      if(i % 2 !=0 ){                         
        //cek dari 3 saja, krena 1 sdh pasti faktor pembaginya
        for(j=3;j<=(int)ceil(sqrt(i));++j){
             
             /*check apakah i habis dibagi j, 
                jika ya maka flag++ artinya bkn prima*/
             if(i % j ==0){                                
                flag++;               
             }                             
        }           
               
       }else{
         
         if(i!=2)
            flag++;
       }
          
       if(flag==0){          
           printf("Bil %d  = prima \n",i);
       }     
   }
}

// BILANGAN FAKTORIAL
int faktorial(int n){

    int i;
    int hasil=1; //penampung sementara
    for(i=n;i>=1;--i){       
        hasil =hasil * i;            
    }
    
    printf("Faktorial %d! = %d \n",n,hasil);
}

// BILANGAN FIBONACY :
// A. FUNGSI REKURSIF
F(2) = F(2-1) + F(2-2)
     = F(1)   + F(0) 
     = 1 + 0 = 1   //substitusi kedalam fungsi rumus
// B. CARA LOGIKA BIASA DAN MATEMATIKA :
// > Logika Biasa
int fibonaci(int n){

    int i,next,a=0,b=1;
    for(i=0;i<n;++i){
    
        if(i<=1){
            next = i;
        }else{
            
            next = a + b;
            a = b;
            b= next;
        }
        
        printf("%d ",next);
    }
}
// > Cara Matematika
int fibonaci(int n){
    
    int i;float tmp;
    
    //x^2 - x - 1 =0
    float x1 = ( 1 + sqrt(5) ) / 2;
    float x2 = (1 - sqrt(5) ) / 2;  
    
    for(i=0;i<n;i++){
               
        tmp = (pow(x1,i) - pow(x2,i)) / sqrt(5);
        printf("%d ",(int)floor(tmp)); //pembulatan kebawah         
    }
    
    printf("\n");
}


