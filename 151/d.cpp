/*
  author: ruruvuvu
  GitHub account: colon-ku

  created at: 2020-01-12 21:19:20
*/

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define rep(x, y) for (int x = 0; x < y; x++)
#define MOD 1000000007
#define INF INT_MAX

typedef long long LL;
typedef long double LD;

bool compare_by_b(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

ostringstream oss_global;
string s_global = oss_global.str();

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<char>> s(h+2);
    for (int i = 0; i < h; i++) {
        string ipt;
        cin >> ipt;
        s[i+1].push_back('#');
        for (int j = 0; j < w; j++) {
            s[i+1].push_back(ipt[j]);
        }
        s[i+1].push_back('#');
    }

    for (int j = 0; j < w+2; j++) {
        s[0].push_back('#');
        s[h+1].push_back('#');
    }

    int ans = -1;
    for (int x1 = 1; x1 <= h; x1++) {
        for (int y1 = 1; y1 <= w; y1++) {
            for (int x2 = 1; x2 <= h; x2++) {
                for (int y2 = 1; y2 <= w; y2++) {
                    if (x1 - x2 || y1 - y2) {

                        vector<int> dist(h*w, INF); // distance(x,y) = dist[x + h*y - h - 1]
                        vector<int> determined(h*w, 0);
                        vector<pair<int, int>> q;
                        for (int i = 0; i < h; i++) {
                            for (int j = 0; j < w; j++) {
                                q.push_back(make_pair(i+1, j+1));
                            }
                        }
                        dist[x1 + h*y1 - h - 1] = 0;
                        while (determined[x2 + h*y2 - h - 1] - 1) {
                            int minx, miny, m_coor, m_dist;
                            m_dist = INF;
                            for (int i = 0; i < q.size(); i++) {
                                if (m_dist > dist[q[i].first + h*q[i].second - h - 1]) {
                                    m_dist = dist[q[i].first + h*q[i].second - h - 1];
                                    m_coor = q[i].first + h*q[i].second - h - 1;
                                }
                            }
                            minx = m_coor % h + 1;
                            miny = m_coor / h + 1;
                            determined[minx + h*miny - h - 1] = 1;


                            pair<int, int> u, v;
                            for (int i = 0; i < q.size(); i++) {
                                if (q[i] == make_pair(minx, miny)) {
                                    u = q[i];
                                    q.erase(q.begin() + i);
                                }
                            }

                            for (int mvx = 0; mvx <= 1; mvx++) {
                                for (int mvy = 0; mvy <= 1; mvy++) {
                                    if (mvx - mvy) {
                                        v = make_pair(u.first + mvx, u.second + mvy);
                                        if (s[v.first][v.second] == '.' && dist[v.first + h*v.second - h - 1] > dist[u.first + h*u.second - h - 1] + 1) {
                                            dist[v.first + h*v.second - h - 1] = dist[u.first + h*u.second - h - 1] + 1;
                                        }
                                    }
                                }
                            }
                        }
                        
                        if (ans < dist[x2 + h*y2 - h - 1]) {
                            ans = dist[x2 + h*y2 - h - 1];
                        }

                    }
                }
            }
        }
    }
    
    cout << ans << endl;
    return 0;
}
