/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

#pragma once

#include "vmm/vmm.h"
#include <stdio.h>
#include <elf/elf.h>

/*
	Reads the elf header and elf program headers from a file
		when given a sufficiently large memory buffer
*/
int vmm_read_elf_headers(void *buf, vmm_t *vmm, FILE *file, size_t buf_size, elf_t *elf);

