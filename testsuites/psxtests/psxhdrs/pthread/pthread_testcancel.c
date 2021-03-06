/*
* @file
* @brief pthread_testcancel() API Conformance Test
*/

/*
* COPYRIGHT (c) 1989-2009.
* On-Line Applications Research Corporation (OAR).
*
* The license and distribution terms for this file may be
* found in the file LICENSE in this distribution or at
* http://www.rtems.org/license/LICENSE.
*/

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <pthread.h>

#ifndef _POSIX_THREADS
#error "rtems is supposed to have pthread_testcancel"
#endif

void test( void );
void init_routine( void );

void init_routine( void )
{
}

void test( void )
{
  pthread_testcancel();
}
