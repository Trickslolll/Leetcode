bool isPalindrome(int x){
    if(x<0)
        return false;
    else if(x < -pow(2,31) || x > pow(2,31)-1)
        return false;
    else{
        double reverse = 0;
        int original = x;
        for(x;x>0;x/=10){
            reverse *= 10;
            reverse += (x%10);
        }
        if(reverse == original)
            return true;
        else
            return false;
    }
}
