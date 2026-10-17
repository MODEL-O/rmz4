@ FUN_080e9cb0  entry 0x080e9cb0  size 28
.thumb
.org 0xe9cb0
FUN_080e9cb0:
	push {r4, r5, lr}	@ 000e9cb0 30b5
.org 0xe9cb2
	adds r5, r0, #0	@ 000e9cb2 051c
.org 0xe9cb4
	ldrb r0, [r5, #14]	@ 000e9cb4 a87b
.org 0xe9cb6
	cmp r0, #4	@ 000e9cb6 0428
.org 0xe9cb8
	bls.n 0xe9cbc	@ 000e9cb8 00d9
.org 0xe9cba
	b.n 0xe9ea2	@ 000e9cba f2e0
.org 0xe9cbc
	lsls r0, r0, #2	@ 000e9cbc 8000
.org 0xe9cbe
	ldr r1, [pc, #8]	@ 000e9cbe 0249
.org 0xe9cc0
	adds r0, r0, r1	@ 000e9cc0 4018
.org 0xe9cc2
	ldr r0, [r0, #0]	@ 000e9cc2 0068
.org 0xe9cc4
	mov pc, r0	@ 000e9cc4 8746
.org 0xe9cc6
	.byte 0x00	@ 000e9cc6 data
.org 0xe9cc7
	.byte 0x00	@ 000e9cc7 data
.org 0xe9cc8
	.byte 0xcc,0x9c,0x0e,0x08	@ 000e9cc8 data
