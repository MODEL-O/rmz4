@ FUN_08090d0c  entry 0x08090d0c  size 66
.thumb
.org 0x90d0c
FUN_08090d0c:
	push {r4, r5, r6, lr}	@ 00090d0c 70b5
.org 0x90d0e
	adds r4, r0, #0	@ 00090d0e 041c
.org 0x90d10
	ldr r5, [r4, #40]	@ 00090d10 a56a
.org 0x90d12
	ldrb r6, [r4, #17]	@ 00090d12 667c
.org 0x90d14
	ldrb r0, [r5, #12]	@ 00090d14 287b
.org 0x90d16
	cmp r0, #1	@ 00090d16 0128
.org 0x90d18
	bls.n 0x90d38	@ 00090d18 0ed9
.org 0x90d1a
	ldr r1, [pc, #24]	@ 00090d1a 0649
.org 0x90d1c
	ldrb r0, [r4, #9]	@ 00090d1c 607a
.org 0x90d1e
	lsls r0, r0, #2	@ 00090d1e 8000
.org 0x90d20
	adds r0, r0, r1	@ 00090d20 4018
.org 0x90d22
	movs r1, #2	@ 00090d22 0221
.org 0x90d24
	str r1, [r4, #12]	@ 00090d24 e160
.org 0x90d26
	ldr r0, [r0, #0]	@ 00090d26 0068
.org 0x90d28
	ldr r0, [r0, #8]	@ 00090d28 8068
.org 0x90d2a
	str r0, [r4, #20]	@ 00090d2a 6061
.org 0x90d2c
	adds r0, r4, #0	@ 00090d2c 201c
.org 0x90d2e
	bl 0x90d54	@ 00090d2e 00f011f8
.org 0x90d32
	b.n 0x90d4c	@ 00090d32 0be0
.org 0x90d34
	.byte 0x40,0xdb,0x85,0x08	@ 00090d34 data
.org 0x90d38
	adds r0, r4, #0	@ 00090d38 201c
.org 0x90d3a
	bl 0x1cff0	@ 00090d3a 8cf759f9
.org 0x90d3e
	ldr r0, [r5, #84]	@ 00090d3e 686d
.org 0x90d40
	str r0, [r4, #84]	@ 00090d40 6065
.org 0x90d42
	adds r1, r6, #1	@ 00090d42 711c
.org 0x90d44
	lsls r1, r1, #15	@ 00090d44 c903
.org 0x90d46
	ldr r0, [r5, #88]	@ 00090d46 a86d
.org 0x90d48
	subs r0, r0, r1	@ 00090d48 401a
.org 0x90d4a
	str r0, [r4, #88]	@ 00090d4a a065
.org 0x90d4c
	pop {r4, r5, r6}	@ 00090d4c 70bc
