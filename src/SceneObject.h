#pragma once

#include "vec3.h"
#include "Ray.h"
#include "Material.h"



struct SceneObject
{
	virtual real  intersect(const Ray   & r) noexcept = 0;
	virtual vec3r getNormal(const vec3r & p) noexcept = 0;

	virtual SceneObject * clone() const = 0;


	Material mat;
};
