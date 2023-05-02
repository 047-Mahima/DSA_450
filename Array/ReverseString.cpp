/*
METHOD - 1

void reverse(string &str, int i, int j)
{
    while( i <= j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

string reverseWord(string str){
    
  //Your code here
  reverse(str, 0, str.size()-1);
  return str;
}*/


//METHOD - 2

void reverse(string &str, int i, int j)
{
   for(int i = 0 ; i < str.size()/2 ; i++)
   {
       swap(str[i], str[str.size()-1-i]);
   }
}

string reverseWord(string str){
    
  //Your code here
  reverse(str, 0, str.size()-1);
  return str;
}
