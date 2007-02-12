// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/Vec3>
#include <osg/Vec4>
#include <osgUtil/HighlightMapGenerator>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgUtil::HighlightMapGenerator)
	I_BaseType(osgUtil::CubeMapGenerator);
	I_ConstructorWithDefaults4(IN, const osg::Vec3 &, light_direction, , IN, const osg::Vec4 &, light_color, , IN, float, specular_exponent, , IN, int, texture_size, 64,
	                           ____HighlightMapGenerator__C5_osg_Vec3_R1__C5_osg_Vec4_R1__float__int,
	                           "",
	                           "");
	I_ConstructorWithDefaults2(IN, const osgUtil::HighlightMapGenerator &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____HighlightMapGenerator__C5_HighlightMapGenerator_R1__C5_osg_CopyOp_R1,
	                           "",
	                           "");
END_REFLECTOR

