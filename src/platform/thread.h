/*!The Treasure Box Library
 * 
 * TBox is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 * 
 * TBox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with TBox; 
 * If not, see <a href="http://www.gnu.org/licenses/"> http://www.gnu.org/licenses/</a>
 * 
 * Copyright (C) 2009 - 2012, ruki All rights reserved.
 *
 * \author		ruki
 * \file		thread.h
 *
 */
#ifndef TB_PLATFORM_THREAD_H
#define TB_PLATFORM_THREAD_H


/* ///////////////////////////////////////////////////////////////////////
 * includes
 */
#include "prefix.h"

/* ///////////////////////////////////////////////////////////////////////
 * interfaces
 */

// init & exit
tb_handle_t 	tb_thread_init(tb_char_t const* name, tb_pointer_t (*callback)(tb_pointer_t), tb_pointer_t cb_data, tb_size_t stack_size);
tb_void_t 		tb_thread_exit(tb_handle_t handle);

// wait
tb_long_t 		tb_thread_wait(tb_handle_t handle, tb_long_t timeout);

// suspend & resume
tb_bool_t 		tb_thread_suspend(tb_handle_t handle);
tb_bool_t 		tb_thread_resume(tb_handle_t handle);

// kill & return
tb_bool_t 		tb_thread_kill(tb_handle_t handle);
tb_void_t 		tb_thread_return(tb_pointer_t value);

#endif
