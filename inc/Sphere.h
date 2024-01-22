#pragma once

namespace sa {
	class Sphere{
	private:
		float m_r;
	public:
		Sphere() = default;
		//~Sphere();
		Sphere(float r);
		void SetR(float r);
		void SurfaceArea(float r);
		void Volume(float r);
	};
}
