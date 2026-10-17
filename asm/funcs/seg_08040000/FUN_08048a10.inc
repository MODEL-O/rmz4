@ FUN_08048a10  entry 0x08048a10  size 82
.thumb
.org 0x48a10
FUN_08048a10:
	push {r4, r5, lr}	@ 00048a10 30b5
.org 0x48a12
	adds r4, r0, #0	@ 00048a12 041c
.org 0x48a14
	ldr r1, [pc, #76]	@ 00048a14 1349
.org 0x48a16
	ldrb r0, [r4, #9]	@ 00048a16 607a
.org 0x48a18
	lsls r0, r0, #2	@ 00048a18 8000
.org 0x48a1a
	adds r0, r0, r1	@ 00048a1a 4018
.org 0x48a1c
	movs r1, #1	@ 00048a1c 0121
.org 0x48a1e
	str r1, [r4, #12]	@ 00048a1e e160
.org 0x48a20
	ldr r0, [r0, #0]	@ 00048a20 0068
.org 0x48a22
	ldr r0, [r0, #4]	@ 00048a22 4068
.org 0x48a24
	str r0, [r4, #20]	@ 00048a24 6061
.org 0x48a26
	adds r0, r4, #0	@ 00048a26 201c
.org 0x48a28
	bl 0x1cc9c	@ 00048a28 d4f738f9
.org 0x48a2c
	adds r0, r4, #0	@ 00048a2c 201c
.org 0x48a2e
	bl 0x1ceec	@ 00048a2e d4f75dfa
.org 0x48a32
	ldrb r1, [r4, #10]	@ 00048a32 a17a
.org 0x48a34
	movs r0, #254	@ 00048a34 fe20
.org 0x48a36
	ands r0, r1	@ 00048a36 0840
.org 0x48a38
	movs r5, #0	@ 00048a38 0025
.org 0x48a3a
	movs r1, #2	@ 00048a3a 0221
.org 0x48a3c
	orrs r0, r1	@ 00048a3c 0843
.org 0x48a3e
	strb r0, [r4, #10]	@ 00048a3e a072
.org 0x48a40
	ldr r1, [pc, #36]	@ 00048a40 0949
.org 0x48a42
	adds r0, r4, #0	@ 00048a42 201c
.org 0x48a44
	bl 0x1cf00	@ 00048a44 d4f75cfa
.org 0x48a48
	movs r0, #8	@ 00048a48 0820
.org 0x48a4a
	strb r0, [r4, #18]	@ 00048a4a a074
.org 0x48a4c
	movs r0, #136	@ 00048a4c 8820
.org 0x48a4e
	strb r0, [r4, #19]	@ 00048a4e e074
.org 0x48a50
	adds r0, r4, #0	@ 00048a50 201c
.org 0x48a52
	adds r0, #189	@ 00048a52 bd30
.org 0x48a54
	strb r5, [r0, #0]	@ 00048a54 0570
.org 0x48a56
	adds r0, r4, #0	@ 00048a56 201c
.org 0x48a58
	bl 0x48a6c	@ 00048a58 00f008f8
.org 0x48a5c
	pop {r4, r5}	@ 00048a5c 30bc
.org 0x48a5e
	pop {r0}	@ 00048a5e 01bc
.org 0x48a60
	bx r0	@ 00048a60 0047
