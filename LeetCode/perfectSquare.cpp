    bool isPerfectSquare(int num) {
        float res=sqrt(num);
        
        if(floor(res)==ceil(res))
            return true;
        else
            return false;
    }
