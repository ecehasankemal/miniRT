/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector3_utils_extended.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcakmako <tcakmako@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 13:51:17 by tcakmako          #+#    #+#             */
/*   Updated: 2023/04/15 16:03:45 by tcakmako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR3_UTILS_EXTENDED_H
# define VECTOR3_UTILS_EXTENDED_H

# include "vector3.h"
# include "vector3_utils.h"
# include "random42.h"

t_vec3	vector3_random(void);
t_vec3	vector3_random_minmax(const float min, const float max);

#endif
