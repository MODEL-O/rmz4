@ FUN_080e2c84  entry 0x080e2c84  size 92
.thumb
.org 0xe2c84
FUN_080e2c84:
	push {r4, lr}	@ 000e2c84 10b5
.org 0xe2c86
	sub sp, #8	@ 000e2c86 82b0
.org 0xe2c88
	adds r4, r0, #0	@ 000e2c88 041c
.org 0xe2c8a
	ldr r2, [r4, #84]	@ 000e2c8a 626d
.org 0xe2c8c
	str r2, [sp, #0]	@ 000e2c8c 0092
.org 0xe2c8e
	ldr r0, [r4, #88]	@ 000e2c8e a06d
.org 0xe2c90
	ldr r1, [pc, #20]	@ 000e2c90 0549
.org 0xe2c92
	adds r0, r0, r1	@ 000e2c92 4018
.org 0xe2c94
	str r0, [sp, #4]	@ 000e2c94 0190
.org 0xe2c96
	ldrb r1, [r4, #10]	@ 000e2c96 a17a
.org 0xe2c98
	movs r0, #16	@ 000e2c98 1020
.org 0xe2c9a
	ands r0, r1	@ 000e2c9a 0840
.org 0xe2c9c
	cmp r0, #0	@ 000e2c9c 0028
.org 0xe2c9e
	bne.n 0xe2cac	@ 000e2c9e 05d1
.org 0xe2ca0
	movs r1, #128	@ 000e2ca0 8021
.org 0xe2ca2
	lsls r1, r1, #4	@ 000e2ca2 0901
.org 0xe2ca4
	b.n 0xe2cae	@ 000e2ca4 03e0
.org 0xe2ca6
	.byte 0x00	@ 000e2ca6 data
.org 0xe2ca7
	.byte 0x00	@ 000e2ca7 data
.org 0xe2ca8
	.byte 0x00,0xf4,0xff,0xff	@ 000e2ca8 data
.org 0xe2cac
	ldr r1, [pc, #56]	@ 000e2cac 0e49
.org 0xe2cae
	adds r0, r2, r1	@ 000e2cae 5018
.org 0xe2cb0
	str r0, [sp, #0]	@ 000e2cb0 0090
.org 0xe2cb2
	movs r0, #1	@ 000e2cb2 0120
.org 0xe2cb4
	mov r1, sp	@ 000e2cb4 6946
.org 0xe2cb6
	bl 0xd0c88	@ 000e2cb6 edf7e7ff
.org 0xe2cba
	movs r0, #179	@ 000e2cba b320
.org 0xe2cbc
	lsls r0, r0, #1	@ 000e2cbc 4000
.org 0xe2cbe
	bl 0x2b10	@ 000e2cbe 1ff727ff
.org 0xe2cc2
	movs r0, #0	@ 000e2cc2 0020
.org 0xe2cc4
	strb r0, [r4, #17]	@ 000e2cc4 6074
.org 0xe2cc6
	adds r0, r4, #0	@ 000e2cc6 201c
.org 0xe2cc8
	adds r0, #84	@ 000e2cc8 5430
.org 0xe2cca
	ldr r1, [pc, #32]	@ 000e2cca 0849
.org 0xe2ccc
	ldrb r2, [r4, #10]	@ 000e2ccc a27a
.org 0xe2cce
	lsrs r2, r2, #4	@ 000e2cce 1209
.org 0xe2cd0
	movs r3, #1	@ 000e2cd0 0123
.org 0xe2cd2
	ands r2, r3	@ 000e2cd2 1a40
.org 0xe2cd4
	bl 0xe2914	@ 000e2cd4 fff71efe
.org 0xe2cd8
	adds r0, r4, #0	@ 000e2cd8 201c
.org 0xe2cda
	bl 0xe2aac	@ 000e2cda fff7e7fe
.org 0xe2cde
	add sp, #8	@ 000e2cde 02b0
