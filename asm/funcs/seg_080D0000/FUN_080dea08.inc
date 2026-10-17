@ FUN_080dea08  entry 0x080dea08  size 150
.thumb
.org 0xdea08
FUN_080dea08:
	push {r4, r5, r6, lr}	@ 000dea08 70b5
.org 0xdea0a
	adds r5, r0, #0	@ 000dea0a 051c
.org 0xdea0c
	ldr r3, [r5, #40]	@ 000dea0c ab6a
.org 0xdea0e
	ldrb r4, [r3, #10]	@ 000dea0e 9c7a
.org 0xdea10
	lsrs r4, r4, #4	@ 000dea10 2409
.org 0xdea12
	movs r2, #1	@ 000dea12 0122
.org 0xdea14
	ands r4, r2	@ 000dea14 1440
.org 0xdea16
	ldr r1, [pc, #80]	@ 000dea16 1449
.org 0xdea18
	ldrb r0, [r5, #9]	@ 000dea18 687a
.org 0xdea1a
	lsls r0, r0, #2	@ 000dea1a 8000
.org 0xdea1c
	adds r0, r0, r1	@ 000dea1c 4018
.org 0xdea1e
	str r2, [r5, #12]	@ 000dea1e ea60
.org 0xdea20
	ldr r0, [r0, #0]	@ 000dea20 0068
.org 0xdea22
	ldr r0, [r0, #4]	@ 000dea22 4068
.org 0xdea24
	str r0, [r5, #20]	@ 000dea24 6861
.org 0xdea26
	ldrb r1, [r5, #10]	@ 000dea26 a97a
.org 0xdea28
	movs r0, #1	@ 000dea28 0120
.org 0xdea2a
	movs r6, #0	@ 000dea2a 0026
.org 0xdea2c
	orrs r0, r1	@ 000dea2c 0843
.org 0xdea2e
	movs r1, #2	@ 000dea2e 0221
.org 0xdea30
	orrs r0, r1	@ 000dea30 0843
.org 0xdea32
	strb r0, [r5, #10]	@ 000dea32 a872
.org 0xdea34
	ldr r0, [r3, #84]	@ 000dea34 586d
.org 0xdea36
	ldr r1, [r3, #88]	@ 000dea36 996d
.org 0xdea38
	str r0, [r5, #84]	@ 000dea38 6865
.org 0xdea3a
	str r1, [r5, #88]	@ 000dea3a a965
.org 0xdea3c
	lsls r0, r4, #1	@ 000dea3c 6000
.org 0xdea3e
	subs r0, #1	@ 000dea3e 0138
.org 0xdea40
	lsls r0, r0, #3	@ 000dea40 c000
.org 0xdea42
	str r0, [r5, #92]	@ 000dea42 e865
.org 0xdea44
	movs r0, #24	@ 000dea44 1820
.org 0xdea46
	strb r0, [r5, #18]	@ 000dea46 a874
.org 0xdea48
	adds r0, r5, #0	@ 000dea48 281c
.org 0xdea4a
	bl 0x1cc9c	@ 000dea4a 3ef727f9
.org 0xdea4e
	adds r0, r5, #0	@ 000dea4e 281c
.org 0xdea50
	bl 0x1ceec	@ 000dea50 3ef74cfa
.org 0xdea54
	adds r1, r5, #0	@ 000dea54 291c
.org 0xdea56
	adds r1, #37	@ 000dea56 2531
.org 0xdea58
	movs r0, #26	@ 000dea58 1a20
.org 0xdea5a
	strb r0, [r1, #0]	@ 000dea5a 0870
.org 0xdea5c
	cmp r4, #0	@ 000dea5c 002c
.org 0xdea5e
	beq.n 0xdea6c	@ 000dea5e 05d0
.org 0xdea60
	ldrb r0, [r5, #10]	@ 000dea60 a87a
.org 0xdea62
	movs r1, #16	@ 000dea62 1021
.org 0xdea64
	orrs r0, r1	@ 000dea64 0843
.org 0xdea66
	b.n 0xdea72	@ 000dea66 04e0
.org 0xdea68
	.byte 0x64,0x6f,0x86,0x08	@ 000dea68 data
.org 0xdea6c
	ldrb r1, [r5, #10]	@ 000dea6c a97a
.org 0xdea6e
	movs r0, #239	@ 000dea6e ef20
.org 0xdea70
	ands r0, r1	@ 000dea70 0840
.org 0xdea72
	strb r0, [r5, #10]	@ 000dea72 a872
.org 0xdea74
	adds r1, r4, #0	@ 000dea74 211c
.org 0xdea76
	adds r0, r5, #0	@ 000dea76 281c
.org 0xdea78
	adds r0, #76	@ 000dea78 4c30
.org 0xdea7a
	strb r1, [r0, #0]	@ 000dea7a 0170
.org 0xdea7c
	adds r3, r5, #0	@ 000dea7c 2b1c
.org 0xdea7e
	adds r3, #74	@ 000dea7e 4a33
.org 0xdea80
	lsls r1, r1, #4	@ 000dea80 0901
.org 0xdea82
	ldrb r2, [r3, #0]	@ 000dea82 1a78
.org 0xdea84
	movs r0, #17	@ 000dea84 1120
.org 0xdea86
	negs r0, r0	@ 000dea86 4042
.org 0xdea88
	ands r0, r2	@ 000dea88 1040
.org 0xdea8a
	orrs r0, r1	@ 000dea8a 0843
.org 0xdea8c
	strb r0, [r3, #0]	@ 000dea8c 1870
.org 0xdea8e
	ldr r1, [pc, #20]	@ 000dea8e 0549
.org 0xdea90
	adds r0, r5, #0	@ 000dea90 281c
.org 0xdea92
	bl 0x1cf00	@ 000dea92 3ef735fa
.org 0xdea96
	adds r0, r5, #0	@ 000dea96 281c
.org 0xdea98
	bl 0xdeaa8	@ 000dea98 00f006f8
.org 0xdea9c
	pop {r4, r5, r6}	@ 000dea9c 70bc
