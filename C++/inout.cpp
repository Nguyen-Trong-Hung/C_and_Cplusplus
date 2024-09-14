// input, output: cin, cout
// kieudulieu: int, char, long long, float, double, short, unsigned int, bool, 
// typedef vector<pair<int, int>> vii;
// struct SinhVien{
//       string name;
// };
// #define PI 3.14, #define ll long long, #define FOR(i, a, b) for(int i = (a);i < (b);i++)
// Xâu ký tự:- string s, cin >> s: nhập không có dấu cách           cout << s
                        //getline(cin, s): nhập nguyên 1 dòng
                        //cin.ignore(n): bỏ qua nhập n ký tự, 
                        //s.length(): độ dài xâu, a += b: nối hai xâu, 
                        //b = a.substr(a, b) Cắt xâu từ vị trí thứ a b ký tự và lưu b ký tự đó vào biến b
                        //stoi: chuyển sang int, to_string(123345): Chuyển sang chuỗi
                        //stringstream ss(s);: Tách các từ trong xâu vào ss
// Vector: vector <int> v;v(n);v(n,100) 
        //v.push_back(10); v.size(); cout << v[v.size() - 1], v.back() - (phần tử end);
        //duyệt: for(int i = 0;i < v.size();i++)    cout << v[i];   for(int x : v);     for(auto it = v.begin(); it != v.end(); ++it)  cout << *it;
// Pair: pair<datatype1, datatype2> v; cout << v.first << v.second; v = make_pair(100, 200) = {100, 200}; 
        //tuple<int, int, int> t; cout << get<0>(t)
// Set: set<int> s; s.insert(100); s.size(); s.count(5) != 0; if(s.find(5) != s.end()); s.erase(5);                                                          100 200
        // Multiset: multiset<int> s; tương tự vs set nhưng các phần tử có thể giống nhau, hàm erase(100) sẽ xóa hết các phần tử 100 trong set                       100 100 200
        // Xóa thông qua iterator: s.erase(s.find(a[i-k]));
        // Unorderset: unordered_set<int> s; Thứ tự bị đảo lộn không theo một thứ tự nào cả
// Map: map<datatype1, datatype2> mp;(Lưu một mảng các pair); mp[solon] = 200; mp.insert({sonho, 50}); cout << mp.size();                       Chỉ được phép có 1 key 1 value
        // for(pair<string, int> x : mp){
                //cout << x.first << " " << x.second;
        //}
        // if(mp.count(solon) != 0) giống với if(mp.find(solon) != mp.end())            Tìm kiếm key
        // mp.erase(solon)
             // multimap<int, int> mp; mp.insert({1, 100}; Có thể có nhiều key VD: 1 100, 1 200, ... và vẫn có thứ tự như map. Nhưng không thể gán như map chỉ được dùng insert
             // unordered_map<int, int> mp;               Tương tự nhưng không sắp xếp có thứ tự như map
