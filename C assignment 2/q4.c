# include <stdio.h>
int main(){
    float capital_sum;
    int years;
    float capital;
    float interest_rate,interest;
    printf("enter the capital_sum in pence : ");
    scanf("%f",&capital_sum);
    printf("enter interest_rate : ");
    scanf("%f",&interest_rate);
    printf("enter years : ");
    scanf("%d",&years);
    if (years<0){
        printf("year is invalid");
        return 1;
    }
    printf("Original sum %.2f at %.1f percent for %d years\n", capital_sum / 100.0, interest_rate, years);
    printf("Year  Interest  Sum\n");
    printf("-----+------+-------\n");
    capital = capital_sum;
    // printf("%d\n",capital);
    // printf("%d\n",capital_sum);
    for (int i=1; i<=years; i++){
        // capital = capital_sum;
        // printf("%", )
        interest= (capital* interest_rate)/100;
        capital+=interest;
        printf("%d %0.2f %0.2f\n", i,interest/100,capital/100);
    }
   
    return 0;
     
}