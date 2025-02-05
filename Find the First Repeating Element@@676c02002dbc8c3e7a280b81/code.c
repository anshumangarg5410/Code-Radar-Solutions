// 1

// #include <stdio.h>

// int main() {
//     int num1, num2;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     if (num1 > num2) {
//         printf("Maximum: %d\n", num1);
//     }
//     if (num2 > num1) {
//         printf("Maximum: %d\n", num2);
//     }
//     if (num1 == num2) {
//         printf("Both numbers are equal.\n");
//     }

//     return 0;
// }

//2 

// #include <stdio.h>

// int main() {
//     int scope;

//     printf("Enter the scope level (8, 6, 4, 2, 0 for no scope): ");
//     scanf("%d", &scope);

//     if (scope == 8) {
//         printf("Use Sniper Gun.\n");
//     } else if (scope == 6) {
//         printf("Use AUG A3, GROZA, QBZ, M16A4, M416.\n");
//     } else if (scope == 4) {
//         printf("Use UMP9, AKM, SCAR-L, Cross Bow.\n");
//     } else if (scope == 2) {
//         printf("Use almost all guns.\n");
//     } else if (scope == 0) {
//         printf("Find a scope first.\n");
//     } else {
//         printf("Invalid scope level.\n");
//     }

//     return 0;
// }

// 3

// #include <stdio.h>

// int main() {
//     int num1, num2, num3;

//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &num1, &num2, &num3);

//     if (num1 > num2 && num1 > num3) {
//         printf("Maximum: %d\n", num1);
//     } else if (num2 > num1 && num2 > num3) {
//         printf("Maximum: %d\n", num2);
//     } else {
//         printf("Maximum: %d\n", num3);
//     }

//     return 0;
// }

// 4

// #include <stdio.h>

// int main() {
//     int weight, age;

//     printf("Enter your weight (in kg): ");
//     scanf("%d", &weight);

//     printf("Enter your age: ");
//     scanf("%d", &age);

//     if (age < 12) {
//         printf("You are not eligible. Minimum age is 12 years.\n");
//     } else if (weight < 40) {
//         printf("You are not eligible. Minimum weight is 40 kg.\n");
//     } else if (weight > 110) {
//         printf("You are eligible, but extra ropes will be added.\n");
//     } else {
//         printf("You are eligible for bungee jumping. Enjoy!\n");
//     }

//     return 0;
// }

// 5

// #include <stdio.h>

// int main() {
//     float amount, discount = 0;

//     printf("Enter the purchase amount: ₹");
//     scanf("%f", &amount);

//     if (amount >= 10000) {
//         discount = amount * 0.2;
//     } else if (amount >= 5000) {
//         discount = amount * 0.1;
//     }

//     printf("Discount: ₹%.2f\n", discount);
//     printf("Total amount to pay: ₹%.2f\n", amount - discount);

//     return 0;
// }

// 6

// Write a program to calculate the bonus of an employee based on the following rules:

// Input the employee's years of service and basic salary.
// If the employee has worked for more than 10 years, the bonus is 15% of their salary.
// If the employee has worked for 5–10 years, the bonus is 10% of their salary.
// If the employee has worked for less than 5 years, the bonus is 5% of their salary.

// #include<stdio.h>

// int main(){
    
// }






























// #include <stdio.h>

// int main() {
//     int years;
//     float salary, bonus = 0;

//     printf("Enter your basic salary: ₹");
//     scanf("%f", &salary);

//     printf("Enter your years of service: ");
//     scanf("%d", &years);

//     if (years > 10) {
//         bonus = salary * 0.15;
//     } else if (years >= 5) {
//         bonus = salary * 0.1;
//     } else {
//         bonus = salary * 0.05;
//     }

//     printf("Bonus: ₹%.2f\n", bonus);
//     printf("Total Salary: ₹%.2f\n", salary + bonus);

//     return 0;
// }

// 7

// #include <stdio.h>

// int main() {
//     int num, sum;

//     printf("Enter a positive integer: ");
//     scanf("%d", &num);

//     while (num >= 10) {
//         sum = 0;
//         while (num > 0) {
//             sum += num % 10;
//             num /= 10;
//         }
//         num = sum;
//     }

//     printf("Digital Root: %d\n", num);

//     return 0;
// }

// 8

// #include <stdio.h>

// int main() {
//     char player1, player2;

//     printf("Player 1, enter your choice (R for Rock, P for Paper, S for Scissors): ");
//     scanf(" %c", &player1);

//     printf("Player 2, enter your choice (R for Rock, P for Paper, S for Scissors): ");
//     scanf(" %c", &player2);

//     if (player1 == player2) {
//         printf("It's a tie!\n");
//     } else if ((player1 == 'R' && player2 == 'S') || 
//                (player1 == 'P' && player2 == 'R') || 
//                (player1 == 'S' && player2 == 'P')) {
//         printf("Player 1 wins!\n");
//     } else {
//         printf("Player 2 wins!\n");
//     }

//     return 0;
// }

// 9 

// #include <stdio.h>

// int main() {
//     int day;

//     printf("Enter a number (1-7): ");
//     scanf("%d", &day);

//     if (day == 1) {
//         printf("Monday\n");
//     } else if (day == 2) {
//         printf("Tuesday\n");
//     } else if (day == 3) {
//         printf("Wednesday\n");
//     } else if (day == 4) {
//         printf("Thursday\n");
//     } else if (day == 5) {
//         printf("Friday\n");
//     } else if (day == 6) {
//         printf("Saturday\n");
//     } else if (day == 7) {
//         printf("Sunday\n");
//     } else {
//         printf("Invalid day.\n");
//     }

//     return 0;
// }

// 10


// #include <stdio.h>

// int main() {
//     char vehicleType;
//     int hours, fee = 0;

//     printf("Enter vehicle type (C for Car, B for Bike, T for Truck): ");
//     scanf(" %c", &vehicleType);

//     printf("Enter the number of hours parked: ");
//     scanf("%d", &hours);

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// int reverse(int myarray[], int size){
//     for (int i =0; i<size/2; i++){
//         int temp = myarray[i];
//         myarray[i] = myarray[size-1-i];
//         myarray[size-1-i] = temp;
//     }
//     return 0;
// }

// int main(){
//     int a;
//     scanf("%d", &a);
//     int *myarray = (int *)malloc((a) * sizeof(int));
//     int *copiedarray = (int *)malloc((a) * sizeof(int));
//     for (int i =0; i<a; i++){
//         int temp;
//         scanf("%d", &temp);
//         myarray[i] = temp;
//         copiedarray[i] = temp;
//     }
//     reverse(copiedarray, a);
//     int condition = 1;
//     for (int i =0; i<a; i++){
//         if (myarray[i] != copiedarray[i]){
//             printf("NO");
//             condition = 0;
//             break;
//         }
//     }
//     if (condition) printf("YES");

//     return 0;
// }   


// #include<stdio.h>
// #include<stdlib.h>

// int primechecker(int ele){
//     if (ele == 0 || ele == 1) return 0;
//     for (int i = 2; i<=ele/2; i++){
//         if (ele %i == 0){
//             return 0;
//         }
//     }
//     return 1;
// }

// int main(){
//     int a;
//     scanf("%d", &a);
//     int *myarray = (int *)malloc((a) * sizeof(int));
//     for (int i=0; i<a; i++){
//         scanf("%d", &myarray[i]);
//     }
//     int count = 0;
//     for(int i=0; i<a; i++){
//         if (primechecker(myarray[i])) count++;
//     }
//     printf("%d", count);
// }

// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int a;
//     scanf("%d", &a);
//     int *myarray = malloc((a) * sizeof(int));
//     int *newarray = malloc((a) * sizeof(int));
//     for (int i =0; i<a; i++){
//         scanf("%d", &myarray[i]);
//     }
//     int backcount = a-1;
//     int frontcount = 0;
//     for (int i =0; i<a; i++){
//         if (myarray[i] == 0) {
//             newarray[backcount] = 0;
//             backcount--;
//         }
//         else {
//             newarray[frontcount] = myarray[i];
//             frontcount++;
//         }
//     }
//     for(int i =0; i<a; i++){
//         printf("%d ", newarray[i]);
//     }

//     free(myarray);
//     free(newarray);

// }


// #include<stdio.h>
// #include<stdlib.h>
// #include <string.h>

// int main(){
//     int a;
//     scanf("%d", &a);
//     int *myarray = (int *)malloc((a) * sizeof(int));
//     for(int i =0; i<a; i++){
//         char *temparray = malloc(10 * sizeof(int));
//         sprintf(temparray, "%d", myarray);
//         int *mainarray = (int *)malloc(10 * sizeof(int));
//         for (int i =0; i<(sizeof(temparray) / sizeof(temparray[0]));i++){
            
//         }

//     }
// }


// #include<stdio.h>

// int primenumbers(int num){
//     if (num == 1 || num == 2) return 0;
//     for (int i =2; i*i<=num; i++){
//         if (num %i == 0){
//             return 0;
//         }
//     }
//     return 1;
// }

// int main(){
//     int a,b;
//     printf("Enter the range seprated by space: ");
//     scanf("%d %d", &a, &b);
//     for(int j =a; j<=b; j++){
//         if (primenumbers(j)) printf("%d is a prime number\n", j);
//         else printf("%d is not a prime number\n", j);
//     }
// }

// #include<stdio.h>
// #include<limits.h>
// #include<stdlib.h>

// int main(){
//     int a;
//     scanf("%d", &a);
    // int *myarray = malloc((a) * sizeof(int));
//     for(int i =0; i<a; i++){
//         scanf("%d", &myarray[i]);
//     }
//     // {1,2,3,4,5}
//     int max = 0;
//     for(int i =0; i<a; i++){
//         for(int j =i+1; j<a; j++){
//             if ((myarray[i] * myarray[j]) >= max) max = myarray[i] * myarray[j];
//         }
//     }
//     printf("%d", max);
// }

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = malloc((a) * sizeof(int));
    for (int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    int result = -1;
    int condition = 0;
    for (int i =0; i<a; i++){
        for(int j=i+1; j<a; j++){
            if (myarray[i] == myarray[j]){
                result = myarray[i];
                condition = 1;
                break;
            }
            if (condition) break;
        }
        if (condition) break;
    }
    printf("%d", result);
}