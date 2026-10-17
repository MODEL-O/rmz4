@ FUN_081074f4  entry 0x081074f4  size 26
.thumb
.org 0x1074f4
FUN_081074f4:
	push {r4, lr}	@ 001074f4 10b5
.org 0x1074f6
	adds r4, r0, #0	@ 001074f6 041c
.org 0x1074f8
	ldrb r0, [r4, #13]	@ 001074f8 607b
.org 0x1074fa
	cmp r0, #4	@ 001074fa 0428
.org 0x1074fc
	bhi.n 0x10757a	@ 001074fc 3dd8
.org 0x1074fe
	lsls r0, r0, #2	@ 001074fe 8000
.org 0x107500
	ldr r1, [pc, #4]	@ 00107500 0149
.org 0x107502
	adds r0, r0, r1	@ 00107502 4018
.org 0x107504
	ldr r0, [r0, #0]	@ 00107504 0068
.org 0x107506
	mov pc, r0	@ 00107506 8746
.org 0x107508
	.byte 0x0c,0x75,0x10,0x08	@ 00107508 data
.org 0x10750c
	.byte 0x20,0x75,0x10,0x08	@ 0010750c data
