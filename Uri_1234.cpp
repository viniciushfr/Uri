#include <ctype.h>
#include <iostream>

using namespace std;

int main()
{
    string entrada;
    while(getline(cin,entrada)!=NULL)
    {


        for(int i =0; i<entrada.size();)
        {
            while(!isalpha(entrada[i]) and i<entrada.size())
            {
                i++;
            }
            if(isalpha(entrada[i]))
            {
                entrada[i]= toupper(entrada[i]);
                i++;
            }
            while(!isalpha(entrada[i]) and i<entrada.size())
            {
                i++;
            }
            if(isalpha(entrada[i]))
            {
                entrada[i] = tolower(entrada[i]);


            }
            i++;
            while(!isalpha(entrada[i])and i<entrada.size())
            {
                i++;
            }


        }


        cout<<entrada<<endl;

    }





}
