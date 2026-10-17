@ FUN_080f86f8  entry 0x080f86f8  size 48
.thumb
.org 0xf86f8
FUN_080f86f8:
	push {r4, r5, lr}	@ 000f86f8 30b5
.org 0xf86fa
	adds r5, r0, #0	@ 000f86fa 051c
.org 0xf86fc
	adds r4, r1, #0	@ 000f86fc 0c1c
.org 0xf86fe
	bl 0xf872c	@ 000f86fe 00f015f8
.org 0xf8702
	lsls r0, r0, #24	@ 000f8702 0006
.org 0xf8704
	lsrs r0, r0, #24	@ 000f8704 000e
.org 0xf8706
	cmp r0, #13	@ 000f8706 0d28
.org 0xf8708
	beq.n 0xf8712	@ 000f8708 03d0
.org 0xf870a
	ldrb r0, [r4, #0]	@ 000f870a 2078
.org 0xf870c
	movs r1, #1	@ 000f870c 0121
.org 0xf870e
	eors r0, r1	@ 000f870e 4840
.org 0xf8710
	strb r0, [r4, #0]	@ 000f8710 2070
.org 0xf8712
	ldr r1, [r5, #0]	@ 000f8712 2968
.org 0xf8714
	ldr r0, [pc, #16]	@ 000f8714 0448
.org 0xf8716
	adds r1, r1, r0	@ 000f8716 0918
.org 0xf8718
	movs r0, #0	@ 000f8718 0020
.org 0xf871a
	ldrsb r0, [r4, r0]	@ 000f871a 2056
.org 0xf871c
	lsls r0, r0, #9	@ 000f871c 4002
.org 0xf871e
	adds r1, r1, r0	@ 000f871e 0918
.org 0xf8720
	str r1, [r5, #0]	@ 000f8720 2960
.org 0xf8722
	pop {r4, r5}	@ 000f8722 30bc
.org 0xf8724
	pop {r0}	@ 000f8724 01bc
.org 0xf8726
	bx r0	@ 000f8726 0047
