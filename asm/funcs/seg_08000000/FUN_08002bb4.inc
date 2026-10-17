@ FUN_08002bb4  entry 0x08002bb4  size 24
.thumb
.org 0x2bb4
FUN_08002bb4:
	push {lr}	@ 00002bb4 00b5
.org 0x2bb6
	lsls r0, r0, #16	@ 00002bb6 0004
.org 0x2bb8
	lsrs r0, r0, #16	@ 00002bb8 000c
.org 0x2bba
	bl 0x2ad0	@ 00002bba fff789ff
.org 0x2bbe
	cmp r0, #0	@ 00002bbe 0028
.org 0x2bc0
	beq.n 0x2bc6	@ 00002bc0 01d0
.org 0x2bc2
	movs r0, #1	@ 00002bc2 0120
.org 0x2bc4
	b.n 0x2bc8	@ 00002bc4 00e0
.org 0x2bc6
	movs r0, #0	@ 00002bc6 0020
.org 0x2bc8
	pop {r1}	@ 00002bc8 02bc
.org 0x2bca
	bx r1	@ 00002bca 0847
