#include <cstdlib>
#include <iostream>
using namespace std;
int faktorial(int n)
{
    if (n==0)
       return 1;
    else
       return n * faktorial(n‐1);
}
int main(int argc, char *argv[])
{
    int n;
    cout<<"Program Faktorial Rekursif\n";
    cout<<"Masukkan Nilai n : ";
    cin>>n;
    cout<<"Faktorial("<<n<<") = "<<faktorial(n)<<"\n";
    system("PAUSE");
    return EXIT_SUCCESS;
} 
