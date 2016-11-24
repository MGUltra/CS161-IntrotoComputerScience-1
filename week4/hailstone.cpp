/********************************
 * Author: Matt Garner
 * Date: 10/21/15
 * Description: 4.c - Hailstone function - counts
 * loop cycles unti an integer equals 1
 * ******************************/

using namespace std;

/**********************************
 *          hailstone
 * This function runs a hailstone sequence
 * until the initial integer equals 1, while 
 * keeping track of the loop count and returning
 * the loop count as an integer.
 *
 * ********************************/

int hailstone(int n)
{
    int loopCount = 0; //start loopcount at zero
    
    while(n>1) //loop for all numbers above 1
    { 
       if(n%2==0) // if the integer is even
          n /= 2; // divide by two
       else
          n = n*3+1; //Otherwise, multiply by 3 and add 1

    loopCount += 1; //loop counter, only if n is above 1
    }

    return loopCount; //return amount of loops
}

/************** TEST ****************
int main()
{
 //   int n;
    int count;

//   cout << "enter an integer" << endl;
 //   cin >> n;

    count = hailstone(3);

    cout << "loop count: ";
    cout << count << endl;

    return 0;
}
************** TEST *****************/
