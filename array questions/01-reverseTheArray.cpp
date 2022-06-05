string reverseWord(string str){

    // gfg
    
    int s = 0;
    int e = str.length()-1;
    
    while(s<=e){
        swap(str[s++],str[e--]);
    }
    return str;
}