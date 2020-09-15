   
    #include <string>
    #include <iostream>
     
    using namespace std;
     
    string s1;
    string s2;
     
    int main()
    {
      
      cin >> s1 >> s2;
      if(s1.size() != s2.size() ) {cout << "NO" << endl; return 0;}
      int m = 0,n = 0;
      for(int i=0;i<s1.size();++i) if(s1[i] == '1') m = 1;
      for(int i=0;i<s2.size();++i) if(s2[i] == '1') n = 1;
      if(m != n) cout << "NO" << endl;
      else cout << "YES" << endl;
      return 0;
    }