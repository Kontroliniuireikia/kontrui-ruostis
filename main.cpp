#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int N;
    ifstream fin("draugai.txt");
    fin>>N;
    string vardai[N];
    for(int i=0; i<N; i++)
    {
        fin>>vardai[i];
    }
    fin.close();

    int sum=0, vsum=0;

    for(int i=0; i<N; i++)
    {
        int j=i+1;
        while(j<N)
        {
            if(vardai[i]==vardai[j] && vardai[i]!="a")
            {
                sum=sum+1;
                vsum=vsum+1;
                j=N;

                int k=i+1;
                while(k<N)
                {
                    if(vardai[i]==vardai[k])
                    {
                        vsum=vsum+1;
                        vardai[k]="a";
                        k++;
                    }
                    else k++;
                }
                vardai[i]="a";
            }
            else j++;
        }

    }
    for(int i=0; i<N; i++)
    {
        cout<<vardai[i]<<endl;
    }
    cout<<sum<<endl;
      cout<<vsum<<endl;

    return 0;
}
