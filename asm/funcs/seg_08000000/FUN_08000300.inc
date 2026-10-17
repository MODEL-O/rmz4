@ FUN_08000300  entry 0x08000300  size 40
.thumb
.org 0x300
FUN_08000300:
	push {r4, r5, r6, r7}	@ 00000300 f0b4
.org 0x302
	mov r4, r8	@ 00000302 4446
.org 0x304
	mov r5, r9	@ 00000304 4d46
.org 0x306
	mov r6, sl	@ 00000306 5646
.org 0x308
	mov r7, fp	@ 00000308 5f46
.org 0x30a
	push {r4, r5, r6, r7}	@ 0000030a f0b4
.org 0x30c
	mov r3, lr	@ 0000030c 7346
.org 0x30e
	str r3, [r0, #0]	@ 0000030e 0360
.org 0x310
	mov r3, sp	@ 00000310 6b46
.org 0x312
	str r3, [r1, #0]	@ 00000312 0b60
.org 0x314
	mov sp, r2	@ 00000314 9546
.org 0x316
	pop {r4, r5, r6, r7}	@ 00000316 f0bc
.org 0x318
	mov fp, r7	@ 00000318 bb46
.org 0x31a
	mov sl, r6	@ 0000031a b246
.org 0x31c
	mov r9, r5	@ 0000031c a946
.org 0x31e
	mov r8, r4	@ 0000031e a046
.org 0x320
	pop {r4, r5, r6, r7}	@ 00000320 f0bc
.org 0x322
	pop {r3}	@ 00000322 08bc
.org 0x324
	mov lr, r3	@ 00000324 9e46
.org 0x326
	bx lr	@ 00000326 7047
