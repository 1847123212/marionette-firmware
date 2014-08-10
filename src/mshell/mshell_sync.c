/*!
 * \file    mshell_sync.c
 *
 *  Synchronization support for the mshell
 *
 * @defgroup mshell_sync Marionette Shell Synchronization
 * @{
 */


#include <string.h>

#include "ch.h"
#include "hal.h"
#include "chprintf.h"
#include "chbsem.h"

#include "mshell_sync.h"

BinarySemaphore    mshell_io_sem;

/*! \brief Initialize the Binary Semaphore for the Terminal */
void mshell_io_sem_init() {
	chBSemInit(&mshell_io_sem, 0);
}

/** @} */

