#include <bits/stdc++.h>
using namespace std;
#define debug(x...)                                       \
    cerr << "(Line " << __LINE__ << "):[" << #x << "]=>"; \
    _print_(x);                                           \
    cerr << endl;

template <class T>
void _print_(T x)
{
    cerr << x;
}

template <class T>
void _print_(T *x, int n)
{
    cerr << "{ ";
    for (int i = 0; i < n; i++)
        cerr << i<<":"<<*(x++) << ", ";
    cerr << "}";
}

template <class T1, class T2>
void _print_(pair<T1, T2> x)
{
    cerr << "{";
    _print_(x.first);
    cerr << ",";
    _print_(x.second);
    cerr << "}";
}

template <class T>
void _print_(vector<T> &x)
{
    cerr << "{";
    int j = 0;
    for (T i : x)
    {
        cerr << j++ << ":";
        _print_(i);
        cerr << " ";
    }
    cerr << "}";
}

template <class T1, class T2>
void _print_(map<T1, T2> &x)
{
    cerr << "{ ";
    for (auto i : x)
    {
        cerr << "{";
        _print_(i.first);
        cerr << ":";
        _print_(i.second);
        cerr << "} ";
    }
    cerr << "}";
}

template <class T>
void _print_(queue<T> x)
{
    cerr << "[ ";
    while (!x.empty())
    {
        _print_(x.front());
        cerr << " ";
        x.pop();
    }
    cerr << "]";
}

template <class T>
void _print_(deque<T> x)
{
    cerr << "[ ";
    while (!x.empty())
    {
        _print_(x.front());
        cerr << " ";
        x.pop_front();
    }
    cerr << "]";
}

template <class T>
void _print_(set<T> &x)
{
    cerr << "{ ";
    int j = 0;
    for (T i : x)
    {
        cerr << j++ << ":";
        _print_(i);
        cerr << " ";
    }
    cerr << "}";
}

template <class T>
void _print_(multiset<T> &x)
{
    cerr << "{";
    int j = 0;
    for (T i : x)
    {
        cerr << j++ << ":";
        _print_(i);
        cerr << " ";
    }
    cerr << "}";
}

template <class T>
void _print_(unordered_set<T> &x)
{
    cerr << "{ ";
    int j = 0;
    for (T i : x)
    {
        cerr << j++ << ":";
        _print_(i);
        cerr << " ";
    }
    cerr << "}";
}

template <class T>
void _print_(priority_queue<T> x)
{
    cerr << "{ ";
    int j = 0;
    while (!x.empty())
    {
        cerr << j++ << ":";
        _print_(x.top());
        x.pop();
        cerr << " ";
    }
    cerr << "}";
}

template <class T>
void _print_(stack<T> x)
{
    int y = x.size(), j = -1;
    cerr<<"{ ";
    while (y--)
    {
        cerr << ++j << ':';
        _print_(x.top());
        cerr << ' ';
        x.pop();
    }
    cerr << '}';
}

template <class T1, class... T2>
void _print_(T1 &x, T2... y)
{
    _print_(x);
    if (sizeof...(y))
        cerr << ",";
    _print_(y...);
}

