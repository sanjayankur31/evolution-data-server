/*
 * Copyright (C) 2014 Red Hat, Inc. (www.redhat.com)
 *
 * This library is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library. If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors: Ankur Sinha <ankursinha AT fedoraproject DOT org>
 */

#ifndef E_CAL_BACKEND_TASKWARRIOR_H
#define E_CAL_BACKEND_TASKWARRIOR_H

#include <libedata-cal/libedata-cal.h>

/* Standard GObject macros */
#define E_TYPE_CAL_BACKEND_TASKWARRIOR \
	(e_cal_backend_taskwarrior_get_type ())
#define E_CAL_BACKEND_TASKWARRIOR(obj) \
	(G_TYPE_CHECK_INSTANCE_CAST \
	((obj), E_TYPE_CAL_BACKEND_TASKWARRIOR, ECalBackendTaskwarrior))
#define E_CAL_BACKEND_TASKWARRIOR_CLASS(cls) \
	(G_TYPE_CHECK_CLASS_CAST \
	((cls), E_TYPE_CAL_BACKEND_TASKWARRIOR, ECalBackendTaskwarriorClass))
#define E_IS_CAL_BACKEND_TASKWARRIOR(obj) \
	(G_TYPE_CHECK_INSTANCE_TYPE \
	((obj), E_TYPE_CAL_BACKEND_TASKWARRIOR))
#define E_IS_CAL_BACKEND_TASKWARRIOR_CLASS(cls) \
	(G_TYPE_CHECK_CLASS_TYPE \
	((cls), E_TYPE_CAL_BACKEND_TASKWARRIOR))
#define E_CAL_BACKEND_TASKWARRIOR_GET_CLASS(obj) \
	(G_TYPE_INSTANCE_GET_CLASS \
	((obj), E_TYPE_CAL_BACKEND_TASKWARRIOR, ECalBackendTaskwarriorClass))

G_BEGIN_DECLS

typedef struct _ECalBackendTaskwarrior ECalBackendTaskwarrior;
typedef struct _ECalBackendTaskwarriorClass ECalBackendTaskwarriorClass;
typedef struct _ECalBackendTaskwarriorPrivate ECalBackendTaskwarriorPrivate;

struct _ECalBackendTaskwarrior {
	ECalMetaBackend parent;
	ECalBackendTaskwarriorPrivate *priv;
};

struct _ECalBackendTaskwarriorClass {
	ECalMetaBackendClass parent_class;
};

GType		e_cal_backend_taskwarrior_get_type	(void);

G_END_DECLS


#endif /* E_CAL_BACKEND_TASKWARRIOR_H */

/* vim: set noexpandtab tabstop=8 shiftwidth=8: */
