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
        //5. string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
//          string res -> int res
        //6. vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
//        vector<int> v(10); v[5] = 7; if (v[5]==7) cout << "Success!\n";
        //7. if (cond) cout << "Success!\n"; else cout << "Fail!\n";
//        if (true) cout << "Success!\n"; else cout << "Fail!\n";
        //8. bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
//          if (c) -> if (!c)
        //9. string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
//        string s = "ape"; bool c = "fool"<s; if (!c) cout << "Success!\n";
        //10. string s = "ape"; if (s=="fool") cout << "Success!\n";
//        string s = "ape"; if (s!="fool") cout << "Success!\n";
//        11. string s = "ape"; if (s=="fool") cout < "Success!\n";
//        string s = "ape"; if (s!="fool") cout << "Success!\n";
//        12. string s = "ape"; if (s+"fool") cout < "Success!\n";
//        string s = "ape"; if (s<"fool") cout << "Success!\n";
//        13. vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";
//            i don't know!

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