//Антон Селюков myfunc.cpp - функция, которая делает сортировку вставками.
void myfunc(int s[], int n){ 
    int c;
    int j;
    for (int i=1; i<n; i++ ){
        j=i;
        while ((j>0)&&(s[j]<s[j-1])){
            c = s[j];
            s[j] = s[j-1];
            s[j-1] = c;
            j=j-1;
        }
    } 
}