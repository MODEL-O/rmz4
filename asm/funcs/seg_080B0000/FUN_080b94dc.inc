@ FUN_080b94dc  entry 0x080b94dc  size 52
.thumb
.org 0xb94dc
FUN_080b94dc:
	push {r4, lr}	@ 000b94dc 10b5
.org 0xb94de
	adds r4, r0, #0	@ 000b94de 041c
.org 0xb94e0
	ldr r2, [r4, #40]	@ 000b94e0 a26a
.org 0xb94e2
	ldr r1, [pc, #44]	@ 000b94e2 0b49
.org 0xb94e4
	movs r0, #0	@ 000b94e4 0020
.org 0xb94e6
	strh r0, [r1, #0]	@ 000b94e6 0880
.org 0xb94e8
	adds r3, r4, #0	@ 000b94e8 231c
.org 0xb94ea
	adds r3, #69	@ 000b94ea 4533
.org 0xb94ec
	ldrb r1, [r3, #0]	@ 000b94ec 1978
.org 0xb94ee
	subs r0, #13	@ 000b94ee 0d38
.org 0xb94f0
	ands r0, r1	@ 000b94f0 0840
.org 0xb94f2
	strb r0, [r3, #0]	@ 000b94f2 1870
.org 0xb94f4
	adds r2, #204	@ 000b94f4 cc32
.org 0xb94f6
	ldrh r1, [r2, #0]	@ 000b94f6 1188
.org 0xb94f8
	movs r3, #0	@ 000b94f8 0023
.org 0xb94fa
	ldrsh r0, [r2, r3]	@ 000b94fa d05e
.org 0xb94fc
	cmp r0, #0	@ 000b94fc 0028
.org 0xb94fe
	beq.n 0xb9504	@ 000b94fe 01d0
.org 0xb9500
	subs r0, r1, #1	@ 000b9500 481e
.org 0xb9502
	strh r0, [r2, #0]	@ 000b9502 1080
.org 0xb9504
	adds r0, r4, #0	@ 000b9504 201c
.org 0xb9506
	bl 0x7f8ec	@ 000b9506 c6f7f1f9
.org 0xb950a
	pop {r4}	@ 000b950a 10bc
.org 0xb950c
	pop {r0}	@ 000b950c 01bc
.org 0xb950e
	bx r0	@ 000b950e 0047
