int max(int a, int b){
    return a>b ? a : b;
}

int inc_mult(int a, int b){
    return ((++a)* (++b));
}

bool is_palindrome(unsigned long long int num){
    int temp;
    int remainder;
    unsigned long long int reversed = 0;
    temp = num;
    while(temp>0){
        remainder = temp%10;
        reversed = (reversed*10)+remainder;
        temp = temp/10;
    }
    if(reversed==num)
        return true;
    else
        return false;
}

bool is_palindrome_solution(unsigned long long int num)
{
    int temp; // Will hold temporary nums as we strip off digits
    int remainder;
    unsigned long long int reversed=0;
    temp = num;
    while(temp>0)
    {
        remainder = temp%10;
        reversed = (reversed*10)+remainder;
        temp = temp/10;
    }
    if(reversed==num)
        return true;
    else
        return false;
}