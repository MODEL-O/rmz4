@ FUN_08035bbc  entry 0x08035bbc  size 44
.thumb
.org 0x35bbc
FUN_08035bbc:
	push {r4, lr}	@ 00035bbc 10b5
.org 0x35bbe
	adds r4, r0, #0	@ 00035bbe 041c
.org 0x35bc0
	bl 0x3a19c	@ 00035bc0 04f0ecfa
.org 0x35bc4
	adds r1, r0, #0	@ 00035bc4 011c
.org 0x35bc6
	cmp r1, #0	@ 00035bc6 0029
.org 0x35bc8
	bne.n 0x35bd4	@ 00035bc8 04d1
.org 0x35bca
	movs r2, #128	@ 00035bca 8022
.org 0x35bcc
	lsls r2, r2, #1	@ 00035bcc 5200
.org 0x35bce
	adds r0, r4, r2	@ 00035bce a018
.org 0x35bd0
	strb r1, [r0, #0]	@ 00035bd0 0170
.org 0x35bd2
	b.n 0x35be2	@ 00035bd2 06e0
.org 0x35bd4
	ldr r0, [pc, #16]	@ 00035bd4 0448
.org 0x35bd6
	adds r1, r4, r0	@ 00035bd6 2118
.org 0x35bd8
	movs r0, #1	@ 00035bd8 0120
.org 0x35bda
	strb r0, [r1, #0]	@ 00035bda 0870
.org 0x35bdc
	adds r0, r4, #0	@ 00035bdc 201c
.org 0x35bde
	bl 0x35bec	@ 00035bde 00f005f8
.org 0x35be2
	pop {r4}	@ 00035be2 10bc
.org 0x35be4
	pop {r0}	@ 00035be4 01bc
.org 0x35be6
	bx r0	@ 00035be6 0047
