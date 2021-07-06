
//1st pattern
/*

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
}

*/

//2nd pattern

/*

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

*/

//3rd pattern

/*

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=5;j>i;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

*/

//4th pattern

/*

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {

        for(j=5;j>i;j--)
        {
            cout<<"  ";
        }

        for(k=0;k<i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;

    }
}

*/

//5th pattern

/*

#include<iostream>
#include<string.h>
using namespace std;

int main(){

    int i,j,k;

    for(i=0;i<5;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<"  ";
        }
        for(k=5;k>i;k--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

*/

//6th pattern

/*

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        for(j=5;j>i;j--)
        {
            cout<<"  ";
        }

        for(k=0;k<5;k++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
}

*/

//7th pattern

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==0||i==4||j==0||j==4)
            {
                cout<<"* ";
            }
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}
