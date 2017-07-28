    #include<iostream>
    #include<vector>
    #include<cmath>
    #include<algorithm>
    using namespace std;
     
    int main () {
    int t;
    cin >> t;
    for (int i=0; i<t;i++) {
     
    vector<string>s;
    int a;
     cin >> a;
     string c;
      for (int j=0; j<a; j++) {
       cin >> c;
       s.push_back(c);
     
      }
      int flag = 0;
      int v = s.size();
      if (s[v-1] == "cookie") {
        flag = 1;
      }
    else {
      for (int h=0; h<v-1; h++) {
        if (s[h] == "cookie" && s[h+1] != "milk") {
          flag = 1;
          break ;
        }else{}
     
     
      }
    }
       if (flag == 1) {
        cout << "NO" << endl;
       }else {
     
       cout << "YES" << endl;
       }
    }
     
    return 0;
    }
     
