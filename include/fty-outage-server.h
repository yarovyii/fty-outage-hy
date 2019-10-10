/*  =========================================================================
    fty_outage_server - 42ity outage server

    Copyright (C) 2014 - 2019 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
    =========================================================================
*/

#ifndef FTY_OUTAGE_SERVER_H_INCLUDED
#define FTY_OUTAGE_SERVER_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

//  @interface
//  fty_outage_server actor
FTY_OUTAGE_EXPORT void
    fty_outage_server (zsock_t *pipe, void *args);

//  Self test of this class
FTY_OUTAGE_EXPORT void
    fty_outage_server_test (bool verbose);

//  @end

#ifdef __cplusplus
}
#endif

#endif
