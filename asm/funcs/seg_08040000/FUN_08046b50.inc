@ FUN_08046b50  entry 0x08046b50  size 20
.thumb
.org 0x46b50
FUN_08046b50:
	push {lr}	@ 00046b50 00b5
.org 0x46b52
	bl 0x7c7c	@ 00046b52 c1f793f8
.org 0x46b56
	lsls r0, r0, #16	@ 00046b56 0004
.org 0x46b58
	lsrs r0, r0, #16	@ 00046b58 000c
.org 0x46b5a
	cmp r0, #15	@ 00046b5a 0f28
.org 0x46b5c
	bne.n 0x46b60	@ 00046b5c 00d1
.org 0x46b5e
	movs r0, #0	@ 00046b5e 0020
.org 0x46b60
	pop {r1}	@ 00046b60 02bc
.org 0x46b62
	bx r1	@ 00046b62 0847
