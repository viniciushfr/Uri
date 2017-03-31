#include <iostream>


using namespace std;
string smallConteinsString(string , string*,int);


int tamanhoSeguencia(string,string*,int);


int main() {
int N=0;
//cin>>N;
cin>>N;
while(N>0)
{

    string stgs[N];

    for(int i=0; i<N; i++)
    {
        cout<<"string :"<<i<<endl;
        cin>>stgs[N];
    }

    int maior=0;
    for(int i =0; i<N; i++)
    {
        int tam = tamanhoSeguencia(stgs[i], &stgs,N);
        if(tam > maior)
        {
            maior = tam;
        }
    }
    cout<<(maior)<<endl;
    cin>>N;
}

}

string smallString(string start, string *strings, int vet_size)
{
    string retorno = start;
    for(int i =0; i<vet_size; i++)
    {
        if(strings[i].find(start) != string::npos )
        {
            if(retorno == start)
            {
                retorno = strings[i];
            }
            else
            {
                if(strings[i].size() < retorno.size() && strings[i]!=start)
                {
                    retorno = strings[i];
                }
            }
        }
    }
    return retorno;
}

int tamanhoSeguencia(string start,string *strings, int vet_size)
{
    int lastsize = 0,nowsize = 1;
    string pointer =start;
    int cont = 1;
    while(lastsize!=nowsize)
    {

        lastsize = pointer.size();

        pointer = smallString(pointer, strings,vet_size);
        nowsize = pointer.size();
        if(lastsize==nowsize)
        {
            break;
        }

        cont++;
    }
    return cont;
}
