@ FUN_080c2a08  entry 0x080c2a08  size 170
.thumb
.org 0xc2a08
FUN_080c2a08:
	push {r4, r5, r6, r7, lr}	@ 000c2a08 f0b5
.org 0xc2a0a
	sub sp, #4	@ 000c2a0a 81b0
.org 0xc2a0c
	adds r6, r0, #0	@ 000c2a0c 061c
.org 0xc2a0e
	ldr r1, [pc, #68]	@ 000c2a0e 1149
.org 0xc2a10
	mov r0, sp	@ 000c2a10 6846
.org 0xc2a12
	movs r2, #2	@ 000c2a12 0222
.org 0xc2a14
	bl 0x129258	@ 000c2a14 66f020fc
.org 0xc2a18
	ldr r0, [r6, #40]	@ 000c2a18 b06a
.org 0xc2a1a
	ldrb r7, [r6, #17]	@ 000c2a1a 777c
.org 0xc2a1c
	ldrb r4, [r0, #10]	@ 000c2a1c 847a
.org 0xc2a1e
	lsrs r4, r4, #4	@ 000c2a1e 2409
.org 0xc2a20
	movs r2, #1	@ 000c2a20 0122
.org 0xc2a22
	ands r4, r2	@ 000c2a22 1440
.org 0xc2a24
	ldr r1, [pc, #48]	@ 000c2a24 0c49
.org 0xc2a26
	ldrb r0, [r6, #9]	@ 000c2a26 707a
.org 0xc2a28
	lsls r0, r0, #2	@ 000c2a28 8000
.org 0xc2a2a
	adds r0, r0, r1	@ 000c2a2a 4018
.org 0xc2a2c
	str r2, [r6, #12]	@ 000c2a2c f260
.org 0xc2a2e
	ldr r0, [r0, #0]	@ 000c2a2e 0068
.org 0xc2a30
	ldr r0, [r0, #4]	@ 000c2a30 4068
.org 0xc2a32
	str r0, [r6, #20]	@ 000c2a32 7061
.org 0xc2a34
	ldrb r1, [r6, #10]	@ 000c2a34 b17a
.org 0xc2a36
	movs r0, #1	@ 000c2a36 0120
.org 0xc2a38
	movs r5, #0	@ 000c2a38 0025
.org 0xc2a3a
	orrs r0, r1	@ 000c2a3a 0843
.org 0xc2a3c
	movs r1, #2	@ 000c2a3c 0221
.org 0xc2a3e
	orrs r0, r1	@ 000c2a3e 0843
.org 0xc2a40
	strb r0, [r6, #10]	@ 000c2a40 b072
.org 0xc2a42
	adds r0, r6, #0	@ 000c2a42 301c
.org 0xc2a44
	bl 0x1cc9c	@ 000c2a44 5af72af9
.org 0xc2a48
	cmp r4, #0	@ 000c2a48 002c
.org 0xc2a4a
	beq.n 0xc2a5c	@ 000c2a4a 07d0
.org 0xc2a4c
	ldrb r0, [r6, #10]	@ 000c2a4c b07a
.org 0xc2a4e
	movs r1, #16	@ 000c2a4e 1021
.org 0xc2a50
	orrs r0, r1	@ 000c2a50 0843
.org 0xc2a52
	b.n 0xc2a62	@ 000c2a52 06e0
.org 0xc2a54
	.byte 0x30,0xa1,0x12,0x08	@ 000c2a54 data
.org 0xc2a58
	.byte 0xf4,0x49,0x86,0x08	@ 000c2a58 data
.org 0xc2a5c
	ldrb r1, [r6, #10]	@ 000c2a5c b17a
.org 0xc2a5e
	movs r0, #239	@ 000c2a5e ef20
.org 0xc2a60
	ands r0, r1	@ 000c2a60 0840
.org 0xc2a62
	strb r0, [r6, #10]	@ 000c2a62 b072
.org 0xc2a64
	adds r1, r4, #0	@ 000c2a64 211c
.org 0xc2a66
	adds r0, r6, #0	@ 000c2a66 301c
.org 0xc2a68
	adds r0, #76	@ 000c2a68 4c30
.org 0xc2a6a
	movs r5, #0	@ 000c2a6a 0025
.org 0xc2a6c
	strb r1, [r0, #0]	@ 000c2a6c 0170
.org 0xc2a6e
	adds r3, r6, #0	@ 000c2a6e 331c
.org 0xc2a70
	adds r3, #74	@ 000c2a70 4a33
.org 0xc2a72
	lsls r1, r1, #4	@ 000c2a72 0901
.org 0xc2a74
	ldrb r2, [r3, #0]	@ 000c2a74 1a78
.org 0xc2a76
	movs r0, #17	@ 000c2a76 1120
.org 0xc2a78
	negs r0, r0	@ 000c2a78 4042
.org 0xc2a7a
	ands r0, r2	@ 000c2a7a 1040
.org 0xc2a7c
	orrs r0, r1	@ 000c2a7c 0843
.org 0xc2a7e
	strb r0, [r3, #0]	@ 000c2a7e 1870
.org 0xc2a80
	ldrb r1, [r6, #10]	@ 000c2a80 b17a
.org 0xc2a82
	movs r0, #4	@ 000c2a82 0420
.org 0xc2a84
	orrs r0, r1	@ 000c2a84 0843
.org 0xc2a86
	strb r0, [r6, #10]	@ 000c2a86 b072
.org 0xc2a88
	adds r4, r6, #0	@ 000c2a88 341c
.org 0xc2a8a
	adds r4, #116	@ 000c2a8a 7434
.org 0xc2a8c
	mov r1, sp	@ 000c2a8c 6946
.org 0xc2a8e
	adds r0, r1, r7	@ 000c2a8e c819
.org 0xc2a90
	ldrb r0, [r0, #0]	@ 000c2a90 0078
.org 0xc2a92
	lsls r1, r0, #1	@ 000c2a92 4100
.org 0xc2a94
	adds r1, r1, r0	@ 000c2a94 0918
.org 0xc2a96
	lsls r1, r1, #3	@ 000c2a96 c900
.org 0xc2a98
	ldr r0, [pc, #32]	@ 000c2a98 0848
.org 0xc2a9a
	adds r1, r1, r0	@ 000c2a9a 0918
.org 0xc2a9c
	adds r2, r6, #0	@ 000c2a9c 321c
.org 0xc2a9e
	adds r2, #84	@ 000c2a9e 5432
.org 0xc2aa0
	adds r0, r4, #0	@ 000c2aa0 201c
.org 0xc2aa2
	movs r3, #64	@ 000c2aa2 4023
.org 0xc2aa4
	bl 0x5760	@ 000c2aa4 42f75cfe
.org 0xc2aa8
	str r6, [r4, #44]	@ 000c2aa8 e662
.org 0xc2aaa
	str r5, [r4, #36]	@ 000c2aaa 6562
.org 0xc2aac
	adds r0, r6, #0	@ 000c2aac 301c
.org 0xc2aae
	bl 0xc2bb8	@ 000c2aae 00f083f8
