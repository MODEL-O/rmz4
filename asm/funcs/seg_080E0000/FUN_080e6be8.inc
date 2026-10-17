@ FUN_080e6be8  entry 0x080e6be8  size 66
.thumb
.org 0xe6be8
FUN_080e6be8:
	push {r4, lr}	@ 000e6be8 10b5
.org 0xe6bea
	adds r4, r0, #0	@ 000e6bea 041c
.org 0xe6bec
	bl 0x1cc9c	@ 000e6bec 36f756f8
.org 0xe6bf0
	ldrb r1, [r4, #10]	@ 000e6bf0 a17a
.org 0xe6bf2
	movs r0, #1	@ 000e6bf2 0120
.org 0xe6bf4
	orrs r0, r1	@ 000e6bf4 0843
.org 0xe6bf6
	movs r1, #2	@ 000e6bf6 0221
.org 0xe6bf8
	orrs r0, r1	@ 000e6bf8 0843
.org 0xe6bfa
	strb r0, [r4, #10]	@ 000e6bfa a072
.org 0xe6bfc
	ldr r1, [pc, #44]	@ 000e6bfc 0b49
.org 0xe6bfe
	ldrb r0, [r4, #9]	@ 000e6bfe 607a
.org 0xe6c00
	lsls r0, r0, #2	@ 000e6c00 8000
.org 0xe6c02
	adds r0, r0, r1	@ 000e6c02 4018
.org 0xe6c04
	movs r1, #1	@ 000e6c04 0121
.org 0xe6c06
	str r1, [r4, #12]	@ 000e6c06 e160
.org 0xe6c08
	ldr r0, [r0, #0]	@ 000e6c08 0068
.org 0xe6c0a
	ldr r0, [r0, #4]	@ 000e6c0a 4068
.org 0xe6c0c
	str r0, [r4, #20]	@ 000e6c0c 6061
.org 0xe6c0e
	ldr r1, [pc, #32]	@ 000e6c0e 0849
.org 0xe6c10
	ldrb r0, [r4, #16]	@ 000e6c10 207c
.org 0xe6c12
	lsls r0, r0, #2	@ 000e6c12 8000
.org 0xe6c14
	adds r0, r0, r1	@ 000e6c14 4018
.org 0xe6c16
	ldr r1, [r0, #0]	@ 000e6c16 0168
.org 0xe6c18
	adds r0, r4, #0	@ 000e6c18 201c
.org 0xe6c1a
	bl 0x128f80	@ 000e6c1a 42f0b1f9
.org 0xe6c1e
	adds r0, r4, #0	@ 000e6c1e 201c
.org 0xe6c20
	bl 0xe6c34	@ 000e6c20 00f008f8
.org 0xe6c24
	pop {r4}	@ 000e6c24 10bc
.org 0xe6c26
	pop {r0}	@ 000e6c26 01bc
.org 0xe6c28
	bx r0	@ 000e6c28 0047
