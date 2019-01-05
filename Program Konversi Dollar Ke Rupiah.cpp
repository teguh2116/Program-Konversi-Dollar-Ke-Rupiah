#include <iostream>
using namespace std;
int main ()
{
    int Rp,D;
    cout<< "========= Dollar to Rupiah ========\n";
    cout<< "==== Rp.15.094/Dollar Saat ini ====\n";
    cout<< "Input Dollar :";
    cin>>D;
    Rp=D*15094;
    cout<< "Rupiah :Rp."<<Rp;
    char LG;
    cout<<"\n \n\n Apakah anda ingin mengulang program ini kembali [ Y/T ] ?";cin>>LG;
if (LG=='Y' || LG=='y')main();
else if (LG=='T' || LG=='t') goto x;
x:
    return 0;
}
