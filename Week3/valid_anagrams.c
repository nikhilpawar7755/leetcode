

bool isAnagram(char * s, char * t){
    int arrayS[26] = {0};
    int arrayT[26] = {0};
    int lengthS = strlen(s);
    int lengthT = strlen(t);
    int index = 0;
    int i = 0;
    if(lengthS != lengthT) return false;
    for (int i = 0; i < lengthT; i++){
        index = s[i] - 'a';
        arrayS[index] = arrayS[index] + 1;
        index = t[i] - 'a';
        arrayT[index] = arrayT[index] + 1;
    } 
    for ( i = 0; i < 26; i++){
        if (arrayS[i] != arrayT[i]){
            return false;
        }
    }
    return true;
}