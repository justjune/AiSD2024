void selection_sort(int s[], int n){
    int i, j;
    int min;
    int a, b, c;
    for (i=0; i<n; i++) {
        min=i;
        for (j= i+1; j<n; j++) {
            if (s[j] < s[min]) {
                min=j;
            }
        }
        //swap(&s[i], &s[min]);
        c = s[i];
        s[i] = s[min];
        s[min] = c;
    }
}