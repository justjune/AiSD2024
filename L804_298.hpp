#ifndef L804_298_h
#define L804_298_h

long fib_ultimate(int n) 
{
    long back2=0, back1=1;
    long next;
    if (n==0) return 0;
    for (int i=2; i<n; i++) {
        next = back2+back1;
        back2 = back1;
        back1 = next;
    }
    return back1 + back2;
}

#endif