#include <iostream>

double add(double a, double b);
double mult(double a, double b);
double sub(double a, double b);
double division(double a, double b);
int power(int base, int exp);
int fact(int num);
int sum(int arr[], int num);
double average(int arr[], int num);
double  round(double  num);
double find_max(double arr[], int num) ;
double find_min(double arr[], int num);
double mult_arr(double arr[], int num);
int find_P(int a, int b);
int find_S(int a, int b);
int* find_del_count(int a);
int nod(int a, int b);


int main() {

    int a = 20;
    int b = 10;
   
    nod(a, b);
   
}

double add(double a, double b) {
    double sum = 0;
    sum = a + b;
    return sum;

}
double mult(double a, double b) {
    double sum = 0;
    sum = a * b;
    return sum;

}
double sub(double a, double b) {
    double sum = 0;
    sum = a - b;
    return sum;

}
double division(double a, double b) {
    double sum = 0;
    if(b == 0) {
        std::cout << "error: zero division" << std::endl;
    }
    sum = a / b;

    return sum;

}


int power(int base, int exp) {
    int temp = base; 
    if(exp == 0) {
            return 1;
        }

    if(exp < 0) {
        std::cout << "error" << std::endl;
        return 0;
    }

    for(int i = 0; i < exp - 1; i++) {
        base = temp * base;
    }
     
    return base;
    
}
//5! = 1 * 2 * 3 * 4 * 5
//res = 120
// 1* 2 * 3 * 4 * 5 =  
int fact(int num) {
    if(num == 0) {
        return 1;
    }
    int res = 1;
    for(int i = 1; i <= num; i++) {
       res = res * i; 
    }
    return res;
}

int sum(int arr[], int num) {
    int res = 0;
    for(int i = 0; i < num; i++) {
        res += arr[i];
    }
    return res;
}


double average(int arr[], int num) {
    double res = (double)sum(arr, num) / num;
    return res;
}
                        
// FIXMEEEE      -4       -4.51
double  round(double  num) {
    bool flag = false; 
    if(num < 0) {
        num *= -1;
        flag = true;
    }
    double temp = (int)num;
    num -= temp;//-0.51

    if(num >= 0.50) {
        num = 1;
    } else {
        num = 0;
    }
    
    temp += num;
    if(flag == true) {
        temp *= -1;
    }

    

    return temp;
}

double find_min(double arr[], int num) {
    double min = arr[0];
    for(int i = 0; i < num; i++) {
        if(min > arr[i]) {
            min = arr[i];
        } 
    }
    return min;
}


//1  2
double find_max(double arr[], int num) {
    double max = arr[0];
    for(int i = 0; i < num; i++) {
        if(max < arr[i]) {
            max = arr[i];
        } 
    }
    return max;
}



double mult_arr(double arr[], int num) {
    double res = 1;
    for(int i = 0; i < num; i++) {
        res *= arr[i];
    }
    return res;
}


int find_P(int a, int b) {
    if((a <= 0) || (b <= 0)) {
        std:: cout << "error" << std::endl;
        return -1;
    }
    int res = 0;
    res = (a+b) * 2;
    return res;
}


int find_S(int a, int b) {
    if((a <= 0) || (b <= 0)) {
        std:: cout << "error" << std::endl;
        return -1;
    }
    int res = a * b;
    return res;

}

                    //20
int* find_del_count(int a) {
    int count = 0;
    int*  arr = (int*)malloc(100 * sizeof(a));
    for(int i = 1; i  <= a; i++) {//i=5
        if(a % i == 0) {
           arr[count] = i;
            count++;
        }
    }

    return arr;
}



int nod(int a, int b) {
    int* p_a = find_del_count(a);
    int* p_b = find_del_count(b);

    for(int i = 0; i < a; i++) {
        std:: cout << *(p_a + i) << " ";

    }

    std:: cout << std::endl;

    for(int i = 0; i < b; i++) {
        std:: cout << *(p_b + i) << " " ;
    }

    int nod = 1;

    for(int i = 0; p_a[i] != 0; i++) {
        for(int j = 0; p_b[j] != 0; j++) {
        
            if(p_a[i] == p_b[j]) {
                nod = p_a[i];
            }
        }
    }
    return 0;
}