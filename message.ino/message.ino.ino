
String[] splitSMS(String a )
{
  String b[4];
  int subStart = 0;
  int subArrayIndex = 0;
  for ( int i = 0 ; i < a.length() i++) 
  {
    if (a[i]  == ",")
    {
      b[subArrayIndex] = a.subString(subStart,i-1);
      subArrayIndex++;
      subStart = i+1;
    }
    else if ( a[i] == "\n")
    {
      b[subArrayIndex] = a.subString(subStart,i-1);
      return (b);
    }
  }
}


class message
{
  public:
        bool dir; String ID; int startID; int stopID;
  message smsConvert( String SMS)
  {
    String smsArray[4] = splitSMS(SMS);
    if (smsArray[0] == "1") { dir = True; }
    else { dir = false ; }
    ID = smsArray[1];
    startID = smsArray[2];
    stopID = smsArray[3];
    
  }
};

