/*

Kenneth L Moore
CIT 245
Implementation file to show how to use .h and .cpp files to make 
your own library.

*/

// try changing the prototype to non-reference (take out the &)
// the function will not swap.
void kswap(int & a, int & b){
   int temp = a;
   a = b;
   b = temp;
}