# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
# include <iomanip>
# include <math.h>
double pi = M_PI;
double Cylinder :: SurfaceArea(){
    double a = pi*(radius)*(radius)*2+pi*2*radius*height;
    return a;
}

double Cylinder :: Volume(){

    double v = pi*(radius)*(radius)*(height);
    return v;
}

double Cylinder :: Circumference(){

    return pi*(radius)*2;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in>>cldr.radius>>cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out<<fixed<<std::setprecision(3)<<"Circumference: "<<cldr.Circumference()<<endl<<"SurfaceArea: "<<cldr.SurfaceArea()<<endl<<"Volume: "<<cldr.Volume()<<endl;
    return out;
}

# endif
