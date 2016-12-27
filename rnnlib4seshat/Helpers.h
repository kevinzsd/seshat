//
//  Helpers.h
//  seshat
//
//  Created by Matthew Whiteside on 12/27/16.
//  Copyright © 2016 mattwhiteside. All rights reserved.
//

#ifndef Helpers_h
#define Helpers_h

#include <iostream>
#include <boost/tuple/tuple.hpp>
//#include <iomanip>
//#include <fstream>
//#include <string>
//#include <sstream>

using namespace std;

template <class C, class Tr, class R>
static basic_ostream<C, Tr>& operator <<(basic_ostream<C, Tr>& out, const R& r);

template<class T1, class T2>
static ostream& operator << (ostream& out, const boost::tuple<T1, T2>& t);

template<class T1, class T2, class T3>
static ostream& operator << (ostream& out, const boost::tuple<T1, T2, T3>& t);

template<class T1, class T2, class T3, class T4>
static ostream& operator << (ostream& out, const boost::tuple<T1, T2, T3, T4>& t);

template<class T1, class T2, class T3, class T4, class T5>
static ostream& operator << (ostream& out, const boost::tuple<T1, T2, T3, T4, T5>& t);

template<class T1, class T2> static ostream& operator <<(ostream& out, const pair<T1, T2>& p);

#endif /* Helpers_h */
