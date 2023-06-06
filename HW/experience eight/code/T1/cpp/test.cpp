#include "../hpp/circle.hpp"
#include "../hpp/cylinder.hpp"
#include "../hpp/point.hpp"
//ÖØÔØÊä³öÔËËã·û
ostream &operator<<(ostream &out, const Point &p)
{
   p.display(out);
   return out;
}
//???
int main()
{
   Point point(3.5, 6.4), *p;
   Circle circle(4, 5, 6), *cir;
   Cylinder cylinder(5, 6, 8), *cyl;

   cout << point << endl;
   cout << circle << endl;
   cout << cylinder << endl;

   p = &point;
   cir = &circle;
   cyl = &cylinder;
   cout << (*p) << endl;
   cout << (*cir) << endl;
   cout << (*cyl) << endl;

   //+++++++++++++++++++
   cout << cir->area() << endl;
   cir = &cylinder;
   cout << cir->area() << endl;
   //+++++++++++++++++++
   p = &circle;
   cout << p->area() << endl;
   p = &cylinder;
   cout << p->area() << endl;
   Point &p1 = circle;
   cout << p1.area() << endl;
   Point &p2 = cylinder;
   cout << p2.area() << endl;

   //+++++++++++++++++++
   cout << "---------------------------------------------" << endl;
   Point &rp1 = point;
   rp1 = circle;
   rp1.display(std::cout);
   point.display(std::cout);

   Point &rp2 = circle;
   rp2.display(std::cout);

   return 0;
}
