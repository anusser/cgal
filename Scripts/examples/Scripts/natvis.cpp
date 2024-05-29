#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/Surface_mesh.h>
typedef  CGAL::Exact_predicates_inexact_constructions_kernel Epic;
typedef CGAL::Simple_cartesian<double> SCdouble;
typedef CGAL::Simple_cartesian<CGAL::Interval_nt<>> SCinterval;

typedef CGAL::Surface_mesh<Epic::Point_3> Surface_mesh;


int main()
{
  CGAL::Interval_nt<> i;
  Epic::Point_3 epic(1,2,3);
  SCdouble::Point_3 scdouble(4,5,6);
  SCinterval::Point_3 scinterval(7,8,9);

Surface_mesh sm;

sm.add_vertex(epic);

  return 0;
}
