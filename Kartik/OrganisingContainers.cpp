#include <bits/stdc++.h>

using namespace std;

// Complete the organizingContainers function below.
string organizingContainers(vector<vector<int>> container)
{
    int i,j,a,b;
    int vect[100][100];
    int cont[100][100];
    int r[20],c[20];
    
for (int i = 0; i < container.size(); i++)
{ 
        for (int j = 0; j < container[i].size(); j++)
        { 
             vect[i][j]=cont[i][j]; 
        } 
}

  for( i=0; i<container.size(); i++ )
  {
       r[i]=0;
       for(j=0;j<container[i].size();j++)
       r[i] = r[i] + vect[i][j];
}
  
    for( j=0; j<container.size(); j++ )
    {
        c[j]=0;
      for(i=0;i<container[j].size();i++)       
       c[j] = c[j] + vect[i][j];
       }
    
    
    for(i=0;i<container.size();i++)
    {
        a=r[i];
        b=c[i];
        if(a==b)
            return("Possible");
        if(a!=b)
        {
            break;
            return("Impossiple");
        }   
    }
  
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
