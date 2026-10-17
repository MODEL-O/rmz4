@ FUN_08107194  entry 0x08107194  size 28
.thumb
.org 0x107194
FUN_08107194:
	push {r4, lr}	@ 00107194 10b5
.org 0x107196
	adds r4, r0, #0	@ 00107196 041c
.org 0x107198
	ldrb r0, [r4, #13]	@ 00107198 607b
.org 0x10719a
	cmp r0, #15	@ 0010719a 0f28
.org 0x10719c
	bls.n 0x1071a0	@ 0010719c 00d9
.org 0x10719e
	b.n 0x107418	@ 0010719e 3be1
.org 0x1071a0
	lsls r0, r0, #2	@ 001071a0 8000
.org 0x1071a2
	ldr r1, [pc, #8]	@ 001071a2 0249
.org 0x1071a4
	adds r0, r0, r1	@ 001071a4 4018
.org 0x1071a6
	ldr r0, [r0, #0]	@ 001071a6 0068
.org 0x1071a8
	mov pc, r0	@ 001071a8 8746
.org 0x1071aa
	.byte 0x00	@ 001071aa data
.org 0x1071ab
	.byte 0x00	@ 001071ab data
.org 0x1071ac
	.byte 0xb0,0x71,0x10,0x08	@ 001071ac data
