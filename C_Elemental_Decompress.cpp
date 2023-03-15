#include <iostream>
#include <vector>

using namespace std;

int query()
{
    /// Input number of element
    int n;
    cin >> n;

    /// Input the array a[1..n]
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    /// Storing position of each a[i]
    vector<vector<int> > b(n + 1);
    for (int i = 1; i <= n; ++i) {
        b[a[i]].push_back(i);

        /// max(p[i], q[i]) = a[i] so either p[i] = a[i] or/and q[i] = a[i]
        /// so if the number appear the third time or more, then "NO"
        if (b[a[i]].size() >= 3) {
            cout << "NO\n";
            return 0;
        }
    }

    /// Initialize permutation p[1..n], q[1..n]
    vector<int> p(n + 1, -1), q(n + 1, -1);

    /// Initialize permutation position, fp[p[i]] = i, fq[q[i]] = i
    vector<int> fp(n + 1, -1), fq(n + 1, -1);
    for (int x = n; x >= 1; --x) {
        for (int i : b[x]) {
            /// Because of max(), we must save up the larger value
            /// So we assign p[i] or q[i] by x, one by one from x large -> small
                 if (fp[x] == -1) p[fp[x] = i] = x;
            else if (fq[x] == -1) q[fq[x] = i] = x;
        }
    }

    for (int x = n, vp = n, vq = n; x >= 1; --x) {
        for (int i : b[x]) {
            /// Assign the remaining integers
            while (fp[vp] != -1) --vp;
            while (fq[vq] != -1) --vq;
            if (p[i] == -1 && vp > 0) p[fp[vp] = i] = vp;
            if (q[i] == -1 && vq > 0) q[fq[vq] = i] = vq;
        }
    }

    for (int i = 1; i <= n; ++i) {
        if (max(p[i], q[i]) != a[i]) {
            /// Statement condition is not satisfied
            cout << "NO\n";
            return 0;
        }
    }

    /// Output the answer
    cout << "YES\n";
    for (int i = 1; i <= n; ++i) cout << p[i] << " "; cout << "\n";
    for (int i = 1; i <= n; ++i) cout << q[i] << " "; cout << "\n";
    return 0;
}



signed main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);



    int q = 1; /// If there is no multiquery
    cin >> q;  /// then comment this

    while (q-->0)
    {
        /// For each query
        query();


    }



    return 0;
}