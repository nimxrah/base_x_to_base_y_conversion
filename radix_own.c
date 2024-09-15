#include <stdio.h>
#include <math.h>

int sum = 0;
int sum_arr[15];
void from_base10(int new_base, int num);
void to_base10(int old_base, int num_arr[], int size);
int main(){
    int old_base;
    int new_base;
    int num;
    int temp;
    int num_arr[15];

    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num;

    printf("Enter the base of this number: ");
    scanf("%d", &old_base);

    printf("Enter the base in which you want to convert: ");
    scanf("%d", &new_base);

    int i = 0;
    while(temp!=0){
        num_arr[i] = temp%10;
        temp = temp/10;
        i++;
    }

    for(int j = i; j<15; j++){
        num_arr[j] = 0;
    }

    if(old_base == 10){
        from_base10(new_base, num);
    }
    else{
        to_base10(old_base, num_arr, i);
        from_base10(new_base, sum);
    }

    return 0;
}

void from_base10(int new_base, int num){
    int new_arr[15];
    int i = 0;

    while(num > 0){
        new_arr[i] = num % new_base;
        num = num / new_base;
        i++;
    }


    for(int j = i - 1; j >= 0; j--){
        printf("%d", new_arr[j]);
    }
    printf("\n");
}

void to_base10(int old_base, int num_arr[], int size){
    sum = 0;
    for(int i = 0; i<size; i++){
        sum += num_arr[i]*(int)pow(old_base, i);
}
    printf("sum in base 10: %d\n", sum);

}

