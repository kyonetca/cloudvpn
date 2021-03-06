
/*
 * CloudVPN
 *
 * This program is a free software: You can redistribute and/or modify it
 * under the terms of GNU GPLv3 license, or any later version of the license.
 * The program is distributed in a good hope it will be useful, but without
 * any warranty - see the aforementioned license for more details.
 * You should have received a copy of the license along with this program;
 * if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _CVPN_API_H
#define _CVPN_API_H

/*
 * Every plugin must export these functions.
 */

#ifdef __cplusplus
extern "C"
{
#endif

#include "plugin.h"

	int cloudvpn_plugin_init();
	void cloudvpn_plugin_fini();
	struct plugin*cloudvpn_plugin_get ();

#ifdef __cplusplus
}
#endif

#endif
