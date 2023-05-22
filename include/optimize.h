#ifndef OBJECT_OPTIMIZE_H
# define OBJECT_OPTIMIZE_H

# include "vector3.h"
# include "vector3_utils.h"
# include "vector3_utils_extended.h"
# include "point3.h"
# include "color3.h"
# include "ray3.h"

# include "objects.h"
# include "object_parameters.h"
# include "object_plane.h"
# include "object_sphere.h"
# include "object_cylinder.h"
# include "object_camera.h"
# include "object_light.h"

void	optimize(t_objects *objects);

#endif
