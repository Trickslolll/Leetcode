int numPairsDivisibleBy60(int* time, int timeSize){
    
    if(timeSize > (6 * pow(10,4)) || timeSize < 1) //check validity
        exit(0);
    
    int count = 0;
    
    int mod[60] = {0};
    
    for(int i = 0 ; i < timeSize ; i++){
        
        if(time[i] > 500 || time[i] < 1)//check validity
            exit(0);
        
        mod[(time[i]%60)]++;
        
    }

    if(mod[0] > 1){ //case 0
        count += (mod[0]*(mod[0]-1))/2;
    }

    for(int i = 1 ; i <= 29 ; i++){ //case 1 ~ case 29, case 31 ~ case59
        count += (mod[i]*mod[60-i]);
    }

    if(mod[30] > 1){ //case 30
        count += (mod[30]*(mod[30]-1))/2;
    }    
    
    
    return count;
    
}
