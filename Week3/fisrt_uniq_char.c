

int firstUniqChar(char * s){
    int array[26] = {0};
    int length = strlen(s);
    int asciiCode;
    for (int i = 0; i < length; i++){
        asciiCode = s[i] - 97;
        array[asciiCode] = array[asciiCode] + 1;
    }
    for (int i = 0; i < length; i++){
        asciiCode = s[i] - 97;
        if (array[asciiCode] == 1){
            return i;
        }
    }
    return -1;
}