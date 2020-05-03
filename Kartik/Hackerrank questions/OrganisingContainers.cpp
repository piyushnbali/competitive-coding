#include <bits/stdc++.h>

using namespace std;

// Complete the organizingContainers function below.
string organizingContainers(vector<vector<int>> container) {
int i,j,a,b,x;
long long int r[100],c[100];


  for( i=0; i<container.size(); i++ )
  {
       r[i]=0;
       for(j=0;j<container.size();j++)
       {
                r[i] = r[i] + container[i][j];
                r[i]%=1000000000;
                
       }
       cout<<i<<" "<<r[i]<<endl;
}
  
    for( j=0; j<container.size(); j++ )
    {
        c[j]=0;
      for(i=0;i<container.size();i++)  
      {     
       
       c[j] = c[j] + container[i][j];
        c[j]%=1000000000;
      } 

       cout<<j<<" "<<c[j]<<endl;
    }
    
    x=0;
    int cnt=0;
    for(i=0;i<container.size();i++)
    {
        
       /* a=r[i];
        b=c[i];
         if(a==b)
        {
            x++;
        }*/
     for(j=0;j<container.size();j++)
     {
         if(r[i]==c[j])
         {
             cnt++;
             break;
         }
     }

     
    } 
    if(cnt==container.size())
         return("Possible");
         else
   return("Impossible");
    cout<<x<<"      okoko"<<endl;
       if(x==container.size())
            return("Possible");
       else
   return("Impossible");   
           
    
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<vector<int>> container(n);
        for (int i = 0; i < n; i++) {
            container[i].resize(n);

            for (int j = 0; j < n; j++) {
                cin >> container[i][j];
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        string result = organizingContainers(container);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
