@ FUN_08037cb4  entry 0x08037cb4  size 44
.thumb
.org 0x37cb4
FUN_08037cb4:
	push {r4, lr}	@ 00037cb4 10b5
.org 0x37cb6
	adds r4, r0, #0	@ 00037cb6 041c
.org 0x37cb8
	bl 0x3a19c	@ 00037cb8 02f070fa
.org 0x37cbc
	adds r1, r0, #0	@ 00037cbc 011c
.org 0x37cbe
	cmp r1, #0	@ 00037cbe 0029
.org 0x37cc0
	bne.n 0x37ccc	@ 00037cc0 04d1
.org 0x37cc2
	movs r2, #128	@ 00037cc2 8022
.org 0x37cc4
	lsls r2, r2, #1	@ 00037cc4 5200
.org 0x37cc6
	adds r0, r4, r2	@ 00037cc6 a018
.org 0x37cc8
	strb r1, [r0, #0]	@ 00037cc8 0170
.org 0x37cca
	b.n 0x37cda	@ 00037cca 06e0
.org 0x37ccc
	ldr r0, [pc, #16]	@ 00037ccc 0448
.org 0x37cce
	adds r1, r4, r0	@ 00037cce 2118
.org 0x37cd0
	movs r0, #1	@ 00037cd0 0120
.org 0x37cd2
	strb r0, [r1, #0]	@ 00037cd2 0870
.org 0x37cd4
	adds r0, r4, #0	@ 00037cd4 201c
.org 0x37cd6
	bl 0x37ce4	@ 00037cd6 00f005f8
.org 0x37cda
	pop {r4}	@ 00037cda 10bc
.org 0x37cdc
	pop {r0}	@ 00037cdc 01bc
.org 0x37cde
	bx r0	@ 00037cde 0047
