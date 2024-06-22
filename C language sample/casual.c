#include <stdio.h>
//1
int main()
{
    int a, b ;
    printf("enter a\n");
    scanf("%d",&a);
    printf("enter b\n");
    scanf("%d",&b);
    printf("sum is %d\n",a+b);
    return 0;
}

//2
// int main()
// {
//     int a ,b;
//     a=34;
//     b=23;
//     printf("a+b=%d\n",a+b);
//     printf("a-b=%d\n",a-b);
//     printf("a*b=%d\n",a*b);
//     printf("a/b=%d\n",a/b);
//     return 0;
// }
// //3 if usig=ng float value 
// int main()
// {
//     int a ;
//     float b;
//     a=34;
//     b=23.34;
//     printf("a+b=%f\n",a+b);
//     printf("a-b=%f\n",a-b);
//     printf("a*b=%f\n",a*b);
//     printf("a/b=%f\n",a/b);
//     return 0;
// }


// //MULTIPLICATION TABLES 
// // usimg for loop 
// int main()
// {
//     int a ;
//     printf("enter the no u want multiplicaion table of a\n");
//     scanf("%d",&a);
//     for (int i =0; i<10 ; i++)
//     {
//         printf("%d X %d = %d\n", a, (i+1), (i+1)*a);
//     }
//     return 0;
// }



// // usimg while loop 
// int main()
// {
//     int a, i=1 ;
//     printf("enter the no u want multiplicaion table of a\n");
//     scanf("%d",&a);
//     while (i<10)
//     {
//         printf("%d X %d = %d\n", a, i, i*a);
//         i++;
//     }
//     return 0;
// }

// // normal doing if else statement prackets are imp 
// int main() {
//     int a;
//     // Write C code here
//     printf("enter a ");
//     scanf("%d", &a);
//     if (a>18){
//         printf("okay");
//     }
//     else if (a>10)
//     {
//         printf("its wridjssd");
//     }
//     else{
//         printf("not okay");
//     }

//     return 0;
// }


// //SWITCH STATEMENT EXECTUTION  
// // FOR JUST ONE VARIABLE 
// int main(){
//     int age;
//     printf("enter ur age");
//     scanf("%d",&age);

//     switch (age)
//     {
//     case 4:
//         printf("ur age is four\n")
//         break;

//     case 5:
//         printf("ur age is five\n")
//         break;

//     case 24:
//         printf("ur age is twenty-four\n")        
//         break;
        
//     default:
//     printf("neither of the age is satisfied ")
//         break;
//     }
// }

// // if using 2 parameters like age and weight 
// int main()
// {
//     int weight, age;
//     printf("Enter your age :");
//     scanf("%d", &age);


//     switch (age)
//     {
//     case 18:
//         printf("Enter your weight :");
//         scanf("%d", &weight);
//         switch (weight)
//         {
//         case 55:
//             printf("You'r eligible for army training");
//             break;
//         default:
//             printf("You are not eligible for army training");
//             break;
//         }
//         break;
//     case 20:
//         printf("Enter your weight :");
//         scanf("%d", &weight);
//         switch (weight)
//         {
//         case 65:
//             printf("You'r eligible for army training");
//             break;
//         default:
//             printf("You are not eligible for army training");
//             break;
//         }
//         break;
//     default:
//         printf("You'r age is not 18 & 20");
//         break;
//     }
//     return 0;
// }
// //  programme for given conditions and their gift woucher 

// int main(){
//     int a ;
//     printf("enter a\n 1. if passed in maths\n 2. if passed in science \n 3. if passed in both \n");
//     scanf("%d",&a);
//     switch (a)
//     {
//     case 1:
//     printf("won RS. 15\n");
//     break;
    
//     case 2:
//     printf("won 15");
//     break;
//     case 3:
//     printf("wotn 50");
//     break;
//     default:
//     printf("Work Hard!!!!");
//         break;
        
//     } 
//     return 0;
//     }


// //COUNTING USING DO WHILE LOOP 
// int main(){
//     int a, i =0;
//     printf("enter a\n ");
//     scanf("%d",&a);
    
//     do{
//        i=i+1;
//        printf("%d\n",i);
       
       
//     }while (i<a);
 
//     return 0;
//     }    



// //SEQUENTIAL PRINTING OF DATA Print the employee's ID and salary (with two decimal places) of a particular month


// int main() {
//     char id[10];
//     int a ;
//     double value , salary ;
//     printf("Input the Employees ID(Max. 10 chars): ");
// 	scanf("%s", id);
//     printf("hrs :");
//     scanf("%d",&a);
//     printf("salary :");
//     scanf("%lf",&value);
//     salary= value*a;
//     printf("\nEmployees ID = %s\nSalary = U$ %.2lf\n", id,salary);
    
    
//     return 0;
// }    

// // CONVERTING MONEY INTO SMALLEST NO OF N0TES NEEDED 

// int main() {
//     int amount, n100,n50,n20, n10;
//     printf("enter amount");
//     scanf("%d", &amount);
    
//     n100= amount/100;
//     amount= amount%100;
//     printf("n100 %d\n",n100);
//     n50= amount/50;
//     amount%= 50;
//     printf("n50 %d\n", n50);
//     n20= amount/20;
//     amount%= 20;
//     printf("n20 %d\n", n20);
//     n10= amount/10;
//     amount%= 10;
//     printf("n10 %d\n", n10);

//     return 0;
// }

// //POSTION AND HIGHTEST NO IN THE INPUT FROM USER 

// #include <stdio.h>
// int main(){
//     int n , high,pos,i;
//     printf("enter int u want\n");
//     scanf("%d",&n);
//     printf("Enter an integer: ");
//     scanf("%d", &high);
//     pos = 1;
    
//     for (int i = 2; i <= n; i++) {
//         int x;
//         printf("Enter integer %d: ", i);
//         scanf("%d", &x);
//         if (x > high) {
//             high = x;
//             pos = i;
//         }
//     }
//     printf("The highest value is %d and its position is %d\n", high, pos);  
    
// }


// // PRINTING NOS WITH RESEPECT TO ROWS AND COLUMNS 

// int main() {
//    int n,x,i,j=1,c=1;
//    printf("no of lines");
//    scanf("%d",&n);
//    printf("no of lines");
//    scanf("%d",&x);
//    for (i=1;i<= n; i++){
//       for (j=1; j<=x;j++){
//           printf("%d",c);
//           c++;
//       }
//       printf("\n");
//        }
    
//     return 0;
// }


// //FOR SPECIFY PRININTING WITH 3 NO IN A ROW
// int main() {
//     int n, i;
//     printf("Enter the number of lines: ");
//     scanf("%d", &n);
//     int count = 1;
    
//     for (i = 1; i <= n; i++) {
//         printf("%d %d %d ", count, count+1, count+2);
//         count += 3;
//         printf("\n");
//     }
    
//     return 0;
// }
// // OR
// int main() {
//     int a ,i,x=0,j=1;
//     // Write C code here
//     printf("Hello world no of lines that ");
//     scanf("%d",&a);
//     for (i=1;i<=a;i++){
//         while (x<3){
//             printf("%d",j++);
//             x++;
//         }
//         x=0;
//         printf("\n");
//     }

//     return 0;
// }
