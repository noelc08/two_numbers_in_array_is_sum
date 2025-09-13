#include <stdio.h>
#include <stdlib.h>



int main(int argc, char **argv){

    int arr[40] = {74, 22, 96, 12, 56, 43, 91, 64, 82, 7,
                   15, 38, 29, 88, 53, 68, 26, 9, 99, 51,
                   35, 71, 3, 44, 60, 27, 21, 8, 33, 41,
                   19, 78, 84, 61, 14, 85, 31, 72, 30, 62,
                   49, 45};

    int sum_val;
    int even_num;
    printf("Enter an integer: ");
    scanf("%d", &sum_val);
    
    even_num = (sum_val % 2 == 0);
    int array_len = sizeof(arr) / sizeof(int);

    for(int i = 0; i < array_len; i++){
        int compare_num = arr[i];
        int comp_even_num = (compare_num % 2 == 0);
        for(int x = 0; x < array_len; x++){
            int second_num = arr[x];
            int second_even_num = (second_num % 2 == 0);
            if(even_num && comp_even_num && second_even_num){
                if((compare_num + second_num) == sum_val){
                    printf("%d + %d = %d\n", compare_num, second_num, sum_val);
                }
            }else if(!even_num && comp_even_num && !second_even_num){
                if((compare_num + second_num) == sum_val){
                    printf("%d + %d = %d\n", compare_num, second_num, sum_val);
                }
            }else if(!even_num && !comp_even_num && second_even_num){
                if((compare_num + second_num) == sum_val){
                    printf("%d + %d = %d\n", compare_num, second_num, sum_val);
                }
            }else if(even_num && !comp_even_num && !second_even_num){
                if((compare_num + second_num) == sum_val){
                    printf("%d + %d = %d\n", compare_num, second_num, sum_val);
                }
            } else {
                continue;
            }
        }
    }
    return 0;
}


