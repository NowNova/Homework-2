#include "Sphere.h"
#include <iostream>

namespace sa {
		Sphere::Sphere(float r) {
			SetR(r);
		}
		//Sphere::~Sphere() {
		//	std::cout << "Dest" << std::endl;
		//}
		void Sphere::SetR(float r) {
			if (r < 0) {
				std::cout << "Error";
				return;
			}
			m_r = r;
		}
		void Sphere::SurfaceArea() {
			std::cout << "Surface area of the sphere is equal to " << acos(-1) * 4 * pow(m_r, 2) << std::endl;
		}
		void Sphere::Volume() {
			std::cout << "Volume of the sphere is equal to " << (4/3.) * acos(-1) * pow(m_r, 3) << std::endl;
		}
}
