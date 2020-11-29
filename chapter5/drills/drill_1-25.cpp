//
// Created by flisoch on 27.11.2020.
//


#include "../../std_lib_facilities.h"

int main() {
    try {
//        1. Cout << "Success!\n";
//          Cout -> cout

//        2. cout << "Success!\n;
//          add " after \n

//        3. cout << "Success" << !\n"
//          add " before ! and ; at the end

//        4. cout << success << '\n';
//          define and initialize variable success

//        5. string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
//          string res -> int res

//        6. vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
//        vector<int> v(10); v[5] = 7; if (v[5]==7) cout << "Success!\n";

//        7. if (cond) cout << "Success!\n"; else cout << "Fail!\n";
//        if (true) cout << "Success!\n"; else cout << "Fail!\n";

//        8. bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
//          if (c) -> if (!c)

//        9. string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
//        string s = "ape"; bool c = "fool"<s; if (!c) cout << "Success!\n";

//        10. string s = "ape"; if (s=="fool") cout << "Success!\n";
//        string s = "ape"; if (s!="fool") cout << "Success!\n";

//        11. string s = "ape"; if (s=="fool") cout < "Success!\n";
//        string s = "ape"; if (s!="fool") cout << "Success!\n";

//        12. string s = "ape"; if (s+"fool") cout < "Success!\n";
//        string s = "ape"; if (s<"fool") cout << "Success!\n";

//        13. vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";
//            I don't know!

//        14. vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
//            already works!

//        15. string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];
//          i < 6; -> i<s.size();

//        16. if (true) then cout << "Success!\n"; else cout << "Fail!\n";
//          remove 'then'

//        17.  int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
//          char c = x; -> int c = x;

//        18. string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
//          works!

//        19. vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
//        add type to vector definition e.g. vector<int>

//        20. int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
//        ++j; -> ++i;

//        21. int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n";
//        int x = 3; double d = 5/(x-2); if (d!=2*x+0.5) cout << "Success!\n";

//        22. string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
//        string s = "Success!\n"; for (int i=0; i<=9; ++i) cout << s[i];

//        23. int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";
//        int i, j = 0; while (i<10) ++i; if (j<i) cout << "Success!\n";

//        24. int x = 4; double d = 5/(x-2); if (d=2*x+0.5) cout << "Success!\n";
//        int x = 4; double d = 5/(x-2); if (d<2*x+0.5) cout << "Success!\n";

//        25. cin << "Success!\n";
//        cout << "Success!\n";
        keep_window_open();
        return 0;
    }
    catch (exception &e) {
        cerr << "error: " << e.what() << '\n';
        keep_window_open();
        return 1;
    }
    catch (...) {
        cerr << "Oops: unknown exception!\n";
        keep_window_open();
        return 2;
    }
}