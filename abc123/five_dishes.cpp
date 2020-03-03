#include <iostream>
using namespace std;

int gap(int number) {
    int i;
    for (i = 10; i < number ; i += 10) {
        ;
    }
    return (i - number);
}

int main() {
    int ans = 0;
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int max_gap = 0;

    if (max_gap < gap(a)) max_gap = gap(a);
    if (max_gap < gap(b)) max_gap = gap(b);
    if (max_gap < gap(c)) max_gap = gap(c);
    if (max_gap < gap(d)) max_gap = gap(d);
    if (max_gap < gap(e)) max_gap = gap(e);


    ans = a + gap(a) + b + gap(b) + c + gap(c) + d + gap(d) + e + gap(e);

    if (max_gap == gap(a)) {
        ans -= gap(a);
    } else if (max_gap == gap(b)){
         ans -= gap(b);
     }
    else if (max_gap == gap(c)) ans -= gap(c);
    else if (max_gap == gap(d)) ans -= gap(d);
    else if (max_gap == gap(e)) ans -= gap(e);

    cout << ans << endl;
}
