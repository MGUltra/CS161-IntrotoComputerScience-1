/******************************
 * Author: Matt Garner
 * Date: 10/21/15
 * Description: Project 4.b function sorting integers into ascending order
 * ****************************/

using namespace std;

/*****************************************
 *              smallSort                
 *This function compares the values of a, b 
 *and c, and sorts them into ascending order
 *
 * ***************************************/

void smallSort(int &a,int &b,int &c)
{
    int highValue;
    int midValue;
    int lowValue;
 
    if(a==b && a==c)
    {
        c = b = a; // if all are equal
    }

    else
    {
        //Testing for the lowest value
        if((a<=b && a<c) || (a<b && a<=c))
           lowValue = a;
        if((b<=a && b<c) || (b<a && b<=c))
           lowValue = b;
        if((c<=a && c<b) || (c<a && c<=b))
           lowValue = c; 

        //Testing for the highest value
        if((a>=b && a>c) || (a>b && a>=c))
           highValue = a;
        if((b>=a && b>c) || (b>a && b>=c))
           highValue = b;
        if((c>=a && c>b) || (c>a && c>=b))
           highValue = c;

        //Testing for the middle value
        if(((a>=b && a<c) || (a<b && a>=c)) || ((a<=b && a>c) || (a>b && a<=c)))
           midValue = a;
        if(((b>=a && b<c) || (b<a && b>=c)) || ((b<=a && b>c) || (b>a && b<=c)))
           midValue = b;
        if(((c>=a && c<b) || (c<a && c>=b)) || ((c<=a && c>b) || (c>a && c<=b)))
           midValue = c;

        a = lowValue;
        b = midValue;
        c = highValue;
    }
}

/*************** TEST *****************
int main()
{

int a = 14;
int b = -90;
int c = 2;

cout << "Enter integer for a." << endl;
cin >> a;
cout << "Enter integer for b." << endl;
cin >> b;
cout << "Enter integer for c." << endl;
cin >> c;

smallSort(a, b, c);
   
cout << a << ", " << b << ", " << c << endl;
   return 0;
}
**************** TEST ****************/
