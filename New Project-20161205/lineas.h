#ifndef SPACE_CLASS_PAP_2016_TP4_h
#define SPACE_CLASS_PAP_2016_TP4_h

struct spaceVector {int x;  int y;};

inline bool operator==(spaceVector const &l, spaceVector const &a);
inline bool operator!=(spaceVector const &l, spaceVector const &a);
inline bool operator%(spaceVector const &l, spaceVector const &a);

inline spaceVector operator+(spaceVector const &l, spaceVector const &a);
inline spaceVector operator-(spaceVector const &l, spaceVector const &a);
inline spaceVector operator*(spaceVector const &l, int const &a);
inline int operator&(spaceVector const &l, spaceVector const &a);

struct linea{
   public:
        spaceVector puntoA;
        spaceVector puntoB;
        bool finita;
};

inline spaceVector direccion(linea const &l);

inline bool operator%(linea const &l, linea const &a);


struct triangulo{
    public:
        spaceVector pivot1;
        spaceVector pivot2;
        spaceVector pivot3;
};


//////////
////////// PRINTS (se ven bonitos n__n )
//////////

inline std::ostream &operator<<(std::ostream &os, spaceVector const &a) {
    return os << "("<< a.x << "|" << a.y << ")" ;
}

inline std::ostream &operator<<(std::ostream &os, linea const &a) {
    if (a.finita){return os << "[" << a.puntoA << "->"<< a.puntoB  << "]" ;}
    else{return os << "[" << a.puntoA << " + k"<< direccion(a)  << "]" ;}
}

#endif