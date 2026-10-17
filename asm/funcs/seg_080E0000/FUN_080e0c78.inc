@ FUN_080e0c78  entry 0x080e0c78  size 68
.thumb
.org 0xe0c78
FUN_080e0c78:
	push {r4, lr}	@ 000e0c78 10b5
.org 0xe0c7a
	adds r4, r0, #0	@ 000e0c7a 041c
.org 0xe0c7c
	ldrb r0, [r4, #14]	@ 000e0c7c a07b
.org 0xe0c7e
	cmp r0, #1	@ 000e0c7e 0128
.org 0xe0c80
	bne.n 0xe0c8e	@ 000e0c80 05d1
.org 0xe0c82
	adds r0, r4, #0	@ 000e0c82 201c
.org 0xe0c84
	bl 0xe0be4	@ 000e0c84 fff7aeff
.org 0xe0c88
	ldrb r0, [r4, #14]	@ 000e0c88 a07b
.org 0xe0c8a
	adds r0, #1	@ 000e0c8a 0130
.org 0xe0c8c
	strb r0, [r4, #14]	@ 000e0c8c a073
.org 0xe0c8e
	adds r0, r4, #0	@ 000e0c8e 201c
.org 0xe0c90
	bl 0xe0cbc	@ 000e0c90 00f014f8
.org 0xe0c94
	adds r2, r4, #0	@ 000e0c94 221c
.org 0xe0c96
	adds r2, #116	@ 000e0c96 7432
.org 0xe0c98
	ldrb r0, [r2, #0]	@ 000e0c98 1078
.org 0xe0c9a
	cmp r0, #0	@ 000e0c9a 0028
.org 0xe0c9c
	beq.n 0xe0caa	@ 000e0c9c 05d0
.org 0xe0c9e
	movs r0, #0	@ 000e0c9e 0020
.org 0xe0ca0
	strb r0, [r2, #0]	@ 000e0ca0 1070
.org 0xe0ca2
	ldrb r1, [r4, #10]	@ 000e0ca2 a17a
.org 0xe0ca4
	movs r0, #254	@ 000e0ca4 fe20
.org 0xe0ca6
	ands r0, r1	@ 000e0ca6 0840
.org 0xe0ca8
	b.n 0xe0cb4	@ 000e0ca8 04e0
.org 0xe0caa
	movs r0, #1	@ 000e0caa 0120
.org 0xe0cac
	movs r1, #1	@ 000e0cac 0121
.org 0xe0cae
	strb r1, [r2, #0]	@ 000e0cae 1170
.org 0xe0cb0
	ldrb r1, [r4, #10]	@ 000e0cb0 a17a
.org 0xe0cb2
	orrs r0, r1	@ 000e0cb2 0843
.org 0xe0cb4
	strb r0, [r4, #10]	@ 000e0cb4 a072
.org 0xe0cb6
	pop {r4}	@ 000e0cb6 10bc
.org 0xe0cb8
	pop {r0}	@ 000e0cb8 01bc
.org 0xe0cba
	bx r0	@ 000e0cba 0047
