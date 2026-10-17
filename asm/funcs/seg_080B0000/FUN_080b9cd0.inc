@ FUN_080b9cd0  entry 0x080b9cd0  size 92
.thumb
.org 0xb9cd0
FUN_080b9cd0:
	push {lr}	@ 000b9cd0 00b5
.org 0xb9cd2
	adds r2, r0, #0	@ 000b9cd2 021c
.org 0xb9cd4
	ldrb r1, [r2, #14]	@ 000b9cd4 917b
.org 0xb9cd6
	cmp r1, #0	@ 000b9cd6 0029
.org 0xb9cd8
	bne.n 0xb9ce2	@ 000b9cd8 03d1
.org 0xb9cda
	movs r0, #60	@ 000b9cda 3c20
.org 0xb9cdc
	strb r0, [r2, #15]	@ 000b9cdc d073
.org 0xb9cde
	adds r0, r1, #1	@ 000b9cde 481c
.org 0xb9ce0
	strb r0, [r2, #14]	@ 000b9ce0 9073
.org 0xb9ce2
	ldrb r0, [r2, #15]	@ 000b9ce2 d07b
.org 0xb9ce4
	cmp r0, #0	@ 000b9ce4 0028
.org 0xb9ce6
	bne.n 0xb9d22	@ 000b9ce6 1cd1
.org 0xb9ce8
	ldr r0, [r2, #44]	@ 000b9ce8 d06a
.org 0xb9cea
	ldr r1, [pc, #20]	@ 000b9cea 0549
.org 0xb9cec
	adds r0, r0, r1	@ 000b9cec 4018
.org 0xb9cee
	ldr r3, [r2, #84]	@ 000b9cee 536d
.org 0xb9cf0
	ldr r1, [r0, #40]	@ 000b9cf0 816a
.org 0xb9cf2
	cmp r3, r1	@ 000b9cf2 8b42
.org 0xb9cf4
	bcs.n 0xb9d04	@ 000b9cf4 06d2
.org 0xb9cf6
	adds r0, r2, #0	@ 000b9cf6 101c
.org 0xb9cf8
	adds r0, #192	@ 000b9cf8 c030
.org 0xb9cfa
	str r1, [r0, #0]	@ 000b9cfa 0160
.org 0xb9cfc
	b.n 0xb9d0a	@ 000b9cfc 05e0
.org 0xb9cfe
	.byte 0x00	@ 000b9cfe data
.org 0xb9cff
	.byte 0x00	@ 000b9cff data
.org 0xb9d00
	.byte 0xcc,0x0d,0x00,0x00	@ 000b9d00 data
.org 0xb9d04
	adds r0, r2, #0	@ 000b9d04 101c
.org 0xb9d06
	adds r0, #192	@ 000b9d06 c030
.org 0xb9d08
	str r3, [r0, #0]	@ 000b9d08 0360
.org 0xb9d0a
	adds r1, r2, #0	@ 000b9d0a 111c
.org 0xb9d0c
	adds r1, #188	@ 000b9d0c bc31
.org 0xb9d0e
	ldr r0, [pc, #36]	@ 000b9d0e 0948
.org 0xb9d10
	ldr r0, [r0, #0]	@ 000b9d10 0068
.org 0xb9d12
	ldr r0, [r0, #88]	@ 000b9d12 806d
.org 0xb9d14
	ldr r3, [pc, #32]	@ 000b9d14 084b
.org 0xb9d16
	adds r0, r0, r3	@ 000b9d16 c018
.org 0xb9d18
	str r0, [r1, #0]	@ 000b9d18 0860
.org 0xb9d1a
	movs r1, #0	@ 000b9d1a 0021
.org 0xb9d1c
	movs r0, #1	@ 000b9d1c 0120
.org 0xb9d1e
	strb r0, [r2, #13]	@ 000b9d1e 5073
.org 0xb9d20
	strb r1, [r2, #14]	@ 000b9d20 9173
.org 0xb9d22
	ldrb r0, [r2, #15]	@ 000b9d22 d07b
.org 0xb9d24
	subs r0, #1	@ 000b9d24 0138
.org 0xb9d26
	strb r0, [r2, #15]	@ 000b9d26 d073
.org 0xb9d28
	adds r0, r2, #0	@ 000b9d28 101c
.org 0xb9d2a
	bl 0xb9d3c	@ 000b9d2a 00f007f8
