//
//  Water.h
//
//  Created by Hugo Ledoux on 19/10/15.
//  Copyright © 2015 Hugo Ledoux. All rights reserved.
//

#ifndef Road_h
#define Road_h

#include "TopoFeature.h"


class Road : public Boundary3D
{
public:
  Road (Polygon2* p, std::string pid, std::string heightref);
  bool          threeDfy();
  std::string   get_citygml();
  std::string   get_obj_f(int offset);
  static std::string _heightref;
// protected:
  // void          make_boundary_horizontal(Polygon3 &p3);
};


#endif /* Road_h */
