int reverse(int x){
    if(-pow(2,31)+1 <= x && x <= pow(2,31)){
    int  power = -2 , flag = 0;
    double output=0;
    if(x < 0){
        x *= -1 ;
        flag = 1;
    }
    for(int i = x ; i >= 0 ; i /= 10){
        ++power;
        if(i == 0)
            break;
    }

   for(int i = power ; i >= 0 ; i--){
        output += (x % 10)*pow(10,power--);
        x /= 10;
        if(i == 0)
            break;
    }
        if(-pow(2,31) <= output && output <= pow(2,31)-1){
            if(flag)
                return (output*(-1));
            else
                return output;
        }
        else
            return 0;
   
    }
     else 
        return 0;
    
}
