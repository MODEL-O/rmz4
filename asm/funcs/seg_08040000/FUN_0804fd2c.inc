@ FUN_0804fd2c  entry 0x0804fd2c  size 106
.thumb
.org 0x4fd2c
FUN_0804fd2c:
	push {r4, r5, r6, lr}	@ 0004fd2c 70b5
.org 0x4fd2e
	adds r4, r0, #0	@ 0004fd2e 041c
.org 0x4fd30
	bl 0x1cc9c	@ 0004fd30 ccf7b4ff
.org 0x4fd34
	adds r0, r4, #0	@ 0004fd34 201c
.org 0x4fd36
	bl 0x1ceec	@ 0004fd36 cdf7d9f8
.org 0x4fd3a
	ldrb r1, [r4, #10]	@ 0004fd3a a17a
.org 0x4fd3c
	movs r0, #1	@ 0004fd3c 0120
.org 0x4fd3e
	movs r6, #0	@ 0004fd3e 0026
.org 0x4fd40
	orrs r0, r1	@ 0004fd40 0843
.org 0x4fd42
	movs r1, #2	@ 0004fd42 0221
.org 0x4fd44
	orrs r0, r1	@ 0004fd44 0843
.org 0x4fd46
	strb r0, [r4, #10]	@ 0004fd46 a072
.org 0x4fd48
	ldr r1, [pc, #76]	@ 0004fd48 1349
.org 0x4fd4a
	adds r0, r4, #0	@ 0004fd4a 201c
.org 0x4fd4c
	bl 0x1cf00	@ 0004fd4c cdf7d8f8
.org 0x4fd50
	ldrb r1, [r4, #10]	@ 0004fd50 a17a
.org 0x4fd52
	movs r0, #4	@ 0004fd52 0420
.org 0x4fd54
	orrs r0, r1	@ 0004fd54 0843
.org 0x4fd56
	strb r0, [r4, #10]	@ 0004fd56 a072
.org 0x4fd58
	adds r5, r4, #0	@ 0004fd58 251c
.org 0x4fd5a
	adds r5, #116	@ 0004fd5a 7435
.org 0x4fd5c
	ldr r1, [pc, #60]	@ 0004fd5c 0f49
.org 0x4fd5e
	adds r2, r4, #0	@ 0004fd5e 221c
.org 0x4fd60
	adds r2, #84	@ 0004fd60 5432
.org 0x4fd62
	adds r0, r5, #0	@ 0004fd62 281c
.org 0x4fd64
	movs r3, #8	@ 0004fd64 0823
.org 0x4fd66
	bl 0x5760	@ 0004fd66 b5f7fbfc
.org 0x4fd6a
	str r4, [r5, #44]	@ 0004fd6a ec62
.org 0x4fd6c
	ldr r0, [pc, #48]	@ 0004fd6c 0c48
.org 0x4fd6e
	str r0, [r5, #36]	@ 0004fd6e 6862
.org 0x4fd70
	strb r6, [r4, #18]	@ 0004fd70 a674
.org 0x4fd72
	movs r0, #69	@ 0004fd72 4520
.org 0x4fd74
	bl 0x2b10	@ 0004fd74 b2f7ccfe
.org 0x4fd78
	ldr r1, [pc, #40]	@ 0004fd78 0a49
.org 0x4fd7a
	ldrb r0, [r4, #9]	@ 0004fd7a 607a
.org 0x4fd7c
	lsls r0, r0, #2	@ 0004fd7c 8000
.org 0x4fd7e
	adds r0, r0, r1	@ 0004fd7e 4018
.org 0x4fd80
	movs r1, #1	@ 0004fd80 0121
.org 0x4fd82
	str r1, [r4, #12]	@ 0004fd82 e160
.org 0x4fd84
	ldr r0, [r0, #0]	@ 0004fd84 0068
.org 0x4fd86
	ldr r0, [r0, #4]	@ 0004fd86 4068
.org 0x4fd88
	str r0, [r4, #20]	@ 0004fd88 6061
.org 0x4fd8a
	adds r0, r4, #0	@ 0004fd8a 201c
.org 0x4fd8c
	bl 0x4fda8	@ 0004fd8c 00f00cf8
.org 0x4fd90
	pop {r4, r5, r6}	@ 0004fd90 70bc
.org 0x4fd92
	pop {r0}	@ 0004fd92 01bc
.org 0x4fd94
	bx r0	@ 0004fd94 0047
