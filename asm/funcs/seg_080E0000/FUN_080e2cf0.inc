@ FUN_080e2cf0  entry 0x080e2cf0  size 148
.thumb
.org 0xe2cf0
FUN_080e2cf0:
	push {r4, r5, r6, lr}	@ 000e2cf0 70b5
.org 0xe2cf2
	sub sp, #8	@ 000e2cf2 82b0
.org 0xe2cf4
	adds r6, r0, #0	@ 000e2cf4 061c
.org 0xe2cf6
	ldr r0, [r6, #84]	@ 000e2cf6 706d
.org 0xe2cf8
	ldr r1, [r6, #92]	@ 000e2cf8 f16d
.org 0xe2cfa
	adds r0, r0, r1	@ 000e2cfa 4018
.org 0xe2cfc
	str r0, [r6, #84]	@ 000e2cfc 7065
.org 0xe2cfe
	ldr r0, [r6, #100]	@ 000e2cfe 706e
.org 0xe2d00
	adds r1, r1, r0	@ 000e2d00 0918
.org 0xe2d02
	str r1, [r6, #92]	@ 000e2d02 f165
.org 0xe2d04
	ldr r0, [r6, #120]	@ 000e2d04 b06f
.org 0xe2d06
	subs r0, #16	@ 000e2d06 1038
.org 0xe2d08
	str r0, [r6, #120]	@ 000e2d08 b067
.org 0xe2d0a
	cmp r0, #0	@ 000e2d0a 0028
.org 0xe2d0c
	bge.n 0xe2d7c	@ 000e2d0c 36da
.org 0xe2d0e
	ldrb r0, [r6, #17]	@ 000e2d0e 707c
.org 0xe2d10
	cmp r0, #0	@ 000e2d10 0028
.org 0xe2d12
	bne.n 0xe2d3c	@ 000e2d12 13d1
.org 0xe2d14
	adds r5, r6, #0	@ 000e2d14 351c
.org 0xe2d16
	adds r5, #84	@ 000e2d16 5435
.org 0xe2d18
	movs r1, #129	@ 000e2d18 8121
.org 0xe2d1a
	lsls r1, r1, #1	@ 000e2d1a 4900
.org 0xe2d1c
	ldrb r2, [r6, #10]	@ 000e2d1c b27a
.org 0xe2d1e
	lsrs r2, r2, #4	@ 000e2d1e 1209
.org 0xe2d20
	movs r4, #1	@ 000e2d20 0124
.org 0xe2d22
	ands r2, r4	@ 000e2d22 2240
.org 0xe2d24
	adds r0, r5, #0	@ 000e2d24 281c
.org 0xe2d26
	bl 0xe2914	@ 000e2d26 fff7f5fd
.org 0xe2d2a
	movs r1, #130	@ 000e2d2a 8221
.org 0xe2d2c
	lsls r1, r1, #1	@ 000e2d2c 4900
.org 0xe2d2e
	ldrb r2, [r6, #10]	@ 000e2d2e b27a
.org 0xe2d30
	lsrs r2, r2, #4	@ 000e2d30 1209
.org 0xe2d32
	ands r2, r4	@ 000e2d32 2240
.org 0xe2d34
	adds r0, r5, #0	@ 000e2d34 281c
.org 0xe2d36
	bl 0xe2914	@ 000e2d36 fff7edfd
.org 0xe2d3a
	b.n 0xe2d4e	@ 000e2d3a 08e0
.org 0xe2d3c
	adds r0, r6, #0	@ 000e2d3c 301c
.org 0xe2d3e
	adds r0, #84	@ 000e2d3e 5430
.org 0xe2d40
	ldr r1, [pc, #64]	@ 000e2d40 1049
.org 0xe2d42
	ldrb r2, [r6, #10]	@ 000e2d42 b27a
.org 0xe2d44
	lsrs r2, r2, #4	@ 000e2d44 1209
.org 0xe2d46
	movs r3, #1	@ 000e2d46 0123
.org 0xe2d48
	ands r2, r3	@ 000e2d48 1a40
.org 0xe2d4a
	bl 0xe2914	@ 000e2d4a fff7e3fd
.org 0xe2d4e
	ldr r0, [r6, #84]	@ 000e2d4e 706d
.org 0xe2d50
	str r0, [sp, #0]	@ 000e2d50 0090
.org 0xe2d52
	ldr r0, [r6, #88]	@ 000e2d52 b06d
.org 0xe2d54
	ldr r1, [pc, #48]	@ 000e2d54 0c49
.org 0xe2d56
	adds r0, r0, r1	@ 000e2d56 4018
.org 0xe2d58
	str r0, [sp, #4]	@ 000e2d58 0190
.org 0xe2d5a
	movs r0, #1	@ 000e2d5a 0120
.org 0xe2d5c
	mov r1, sp	@ 000e2d5c 6946
.org 0xe2d5e
	bl 0xd0c88	@ 000e2d5e edf793ff
.org 0xe2d62
	movs r0, #179	@ 000e2d62 b320
.org 0xe2d64
	lsls r0, r0, #1	@ 000e2d64 4000
.org 0xe2d66
	bl 0x2b10	@ 000e2d66 1ff7d3fe
.org 0xe2d6a
	ldr r1, [pc, #32]	@ 000e2d6a 0849
.org 0xe2d6c
	ldrb r0, [r6, #9]	@ 000e2d6c 707a
.org 0xe2d6e
	lsls r0, r0, #2	@ 000e2d6e 8000
.org 0xe2d70
	adds r0, r0, r1	@ 000e2d70 4018
.org 0xe2d72
	movs r1, #2	@ 000e2d72 0221
.org 0xe2d74
	str r1, [r6, #12]	@ 000e2d74 f160
.org 0xe2d76
	ldr r0, [r0, #0]	@ 000e2d76 0068
.org 0xe2d78
	ldr r0, [r0, #8]	@ 000e2d78 8068
.org 0xe2d7a
	str r0, [r6, #20]	@ 000e2d7a 7061
.org 0xe2d7c
	add sp, #8	@ 000e2d7c 02b0
.org 0xe2d7e
	pop {r4, r5, r6}	@ 000e2d7e 70bc
.org 0xe2d80
	pop {r0}	@ 000e2d80 01bc
.org 0xe2d82
	bx r0	@ 000e2d82 0047
