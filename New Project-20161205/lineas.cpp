#ifndef SPACE_CLASS_PAP_2016_TP4
#define SPACE_CLASS_PAP_2016_TP4

#include <iostream>

struct spaceVector {
  int x;
  int y;
} ;


inline bool operator==(spaceVector const &l, spaceVector const &a){return (l.x == a.x) and (l.y == a.y);};
inline bool operator!=(spaceVector const &l, spaceVector const &a){return !(l == a);};
inline bool operator%(spaceVector const &l, spaceVector const &a){return l ==a ;};
inline bool operator/(spaceVector const &l, spaceVector const &a){return l !=a ;};

inline spaceVector operator+(spaceVector const &l, spaceVector const &a){
    spaceVector answer;
    answer.x = l.x + a.x;
    answer.y = l.y + a.y;
    return answer;
};

inline spaceVector operator-(spaceVector const &l, spaceVector const &a){
    spaceVector answer;
    answer.x = l.x - a.x;
    answer.y = l.y - a.y;
    return answer;
};



inline spaceVector operator*(spaceVector const &l, int const &a){
    spaceVector answer;
    answer.x = l.x * a;
    answer.y = l.y * a;
    return answer;
};

struct linea{
   public:
        spaceVector punto;
        spaceVector direccion;
};

//inline bool operator!+!(linea const &l, linea const &a){return true;};
inline bool operator+(linea const &l, spaceVector const &a){return true;};




struct triangulo{
    public:
        spaceVector pivot1;
        spaceVector pivot2;
        spaceVector pivot3;
};

/*inline bool operator!+!(triangulo const &t; spaceVector const &a){
    linea l1; 
    linea l2;
    linea l3;
    
    l1.punto = a;
    l1.direccion = t.pivot1 - a; 
    l2.punto = a;
    l3.punto = a;
}*/

//////////
////////// PRINTS (se ven bonitos n__n )
//////////

inline std::ostream &operator<<(std::ostream &os, spaceVector const &a) {
    return os << "("<< a.x << "|" << a.y << ")" ;
}

inline std::ostream &operator<<(std::ostream &os, linea const &a) {
    return os << "[" << a.punto << " + k"<< a.direccion  << "]" ;
}

#endif