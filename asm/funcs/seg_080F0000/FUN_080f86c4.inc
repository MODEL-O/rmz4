@ FUN_080f86c4  entry 0x080f86c4  size 48
.thumb
.org 0xf86c4
FUN_080f86c4:
	push {r4, r5, lr}	@ 000f86c4 30b5
.org 0xf86c6
	adds r5, r0, #0	@ 000f86c6 051c
.org 0xf86c8
	adds r4, r1, #0	@ 000f86c8 0c1c
.org 0xf86ca
	bl 0xf872c	@ 000f86ca 00f02ff8
.org 0xf86ce
	lsls r0, r0, #24	@ 000f86ce 0006
.org 0xf86d0
	lsrs r0, r0, #24	@ 000f86d0 000e
.org 0xf86d2
	cmp r0, #12	@ 000f86d2 0c28
.org 0xf86d4
	beq.n 0xf86de	@ 000f86d4 03d0
.org 0xf86d6
	ldrb r0, [r4, #0]	@ 000f86d6 2078
.org 0xf86d8
	movs r1, #1	@ 000f86d8 0121
.org 0xf86da
	eors r0, r1	@ 000f86da 4840
.org 0xf86dc
	strb r0, [r4, #0]	@ 000f86dc 2070
.org 0xf86de
	ldr r1, [r5, #4]	@ 000f86de 6968
.org 0xf86e0
	ldr r0, [pc, #16]	@ 000f86e0 0448
.org 0xf86e2
	adds r1, r1, r0	@ 000f86e2 0918
.org 0xf86e4
	movs r0, #0	@ 000f86e4 0020
.org 0xf86e6
	ldrsb r0, [r4, r0]	@ 000f86e6 2056
.org 0xf86e8
	lsls r0, r0, #9	@ 000f86e8 4002
.org 0xf86ea
	adds r1, r1, r0	@ 000f86ea 0918
.org 0xf86ec
	str r1, [r5, #4]	@ 000f86ec 6960
.org 0xf86ee
	pop {r4, r5}	@ 000f86ee 30bc
.org 0xf86f0
	pop {r0}	@ 000f86f0 01bc
.org 0xf86f2
	bx r0	@ 000f86f2 0047
