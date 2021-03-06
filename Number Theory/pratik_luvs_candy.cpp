#include <iostream>
using namespace std;
#define ll long long
long long a[100];

//PRIME SIEVE & OPTIMISATIONS


void primeSieve(ll *p,ll n) {

    p[0] = p[1] = 0;
    p[2] = 1;

    //Let us Mark all Odd Numbers as Prime(Initialisations)
    for(ll i=3;i<=n;i+=2) {
        p[i] = 1;
    }

    //Sieve Login to mark non prime numbers as 0
    //1. Optimsation : Iterate only over odd Numbers
    for(ll i=3;i<=n;i+=2){
        
        if(p[i]) {
            //Mark all the multiples of that number as not prime.
            //2. Optimisation Take a jump of 2i starting from i*i
            for(ll j=i*i;j<=n;j+=2*i){
                p[j] = 0;
            }
        }

    }
    int k=0;
    for(int i=2;i<100;++i)  {
        if(p[i]){
            a[k]=i;
            k++;
        }
    }
    return;
}




int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll N = 100;
    ll p[N] = {0};
    primeSieve(p,N-1);
    int t;
    ll n;
    cin>>t;
    while(t--)  {
        cin>>n;
        cout<<a[n-1]<<endl;
    }
    return 0;

}
