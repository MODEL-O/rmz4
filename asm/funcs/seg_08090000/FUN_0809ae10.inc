@ FUN_0809ae10  entry 0x0809ae10  size 152
.thumb
.org 0x9ae10
FUN_0809ae10:
	push {r4, r5, r6, r7, lr}	@ 0009ae10 f0b5
.org 0x9ae12
	adds r5, r0, #0	@ 0009ae12 051c
.org 0x9ae14
	ldr r7, [r5, #40]	@ 0009ae14 af6a
.org 0x9ae16
	ldrb r4, [r5, #17]	@ 0009ae16 6c7c
.org 0x9ae18
	ldr r1, [pc, #72]	@ 0009ae18 1249
.org 0x9ae1a
	ldrb r0, [r5, #9]	@ 0009ae1a 687a
.org 0x9ae1c
	lsls r0, r0, #2	@ 0009ae1c 8000
.org 0x9ae1e
	adds r0, r0, r1	@ 0009ae1e 4018
.org 0x9ae20
	movs r2, #1	@ 0009ae20 0122
.org 0x9ae22
	str r2, [r5, #12]	@ 0009ae22 ea60
.org 0x9ae24
	ldr r0, [r0, #0]	@ 0009ae24 0068
.org 0x9ae26
	ldr r0, [r0, #4]	@ 0009ae26 4068
.org 0x9ae28
	str r0, [r5, #20]	@ 0009ae28 6861
.org 0x9ae2a
	ldrb r1, [r5, #10]	@ 0009ae2a a97a
.org 0x9ae2c
	movs r0, #1	@ 0009ae2c 0120
.org 0x9ae2e
	movs r6, #0	@ 0009ae2e 0026
.org 0x9ae30
	orrs r0, r1	@ 0009ae30 0843
.org 0x9ae32
	movs r1, #2	@ 0009ae32 0221
.org 0x9ae34
	orrs r0, r1	@ 0009ae34 0843
.org 0x9ae36
	strb r0, [r5, #10]	@ 0009ae36 a872
.org 0x9ae38
	lsls r0, r4, #1	@ 0009ae38 6000
.org 0x9ae3a
	subs r2, r2, r0	@ 0009ae3a 121a
.org 0x9ae3c
	lsls r2, r2, #7	@ 0009ae3c d201
.org 0x9ae3e
	str r2, [r5, #92]	@ 0009ae3e ea65
.org 0x9ae40
	movs r0, #56	@ 0009ae40 3820
.org 0x9ae42
	strb r0, [r5, #18]	@ 0009ae42 a874
.org 0x9ae44
	adds r0, r5, #0	@ 0009ae44 281c
.org 0x9ae46
	bl 0x1cc9c	@ 0009ae46 81f729ff
.org 0x9ae4a
	adds r0, r5, #0	@ 0009ae4a 281c
.org 0x9ae4c
	bl 0x1ceec	@ 0009ae4c 82f74ef8
.org 0x9ae50
	adds r1, r5, #0	@ 0009ae50 291c
.org 0x9ae52
	adds r1, #37	@ 0009ae52 2531
.org 0x9ae54
	movs r0, #24	@ 0009ae54 1820
.org 0x9ae56
	strb r0, [r1, #0]	@ 0009ae56 0870
.org 0x9ae58
	cmp r4, #0	@ 0009ae58 002c
.org 0x9ae5a
	beq.n 0x9ae68	@ 0009ae5a 05d0
.org 0x9ae5c
	ldrb r0, [r5, #10]	@ 0009ae5c a87a
.org 0x9ae5e
	movs r1, #16	@ 0009ae5e 1021
.org 0x9ae60
	orrs r0, r1	@ 0009ae60 0843
.org 0x9ae62
	b.n 0x9ae6e	@ 0009ae62 04e0
.org 0x9ae64
	.byte 0x40,0xdb,0x85,0x08	@ 0009ae64 data
.org 0x9ae68
	ldrb r1, [r5, #10]	@ 0009ae68 a97a
.org 0x9ae6a
	movs r0, #239	@ 0009ae6a ef20
.org 0x9ae6c
	ands r0, r1	@ 0009ae6c 0840
.org 0x9ae6e
	strb r0, [r5, #10]	@ 0009ae6e a872
.org 0x9ae70
	movs r1, #1	@ 0009ae70 0121
.org 0x9ae72
	ands r1, r4	@ 0009ae72 2140
.org 0x9ae74
	adds r0, r5, #0	@ 0009ae74 281c
.org 0x9ae76
	adds r0, #76	@ 0009ae76 4c30
.org 0x9ae78
	strb r1, [r0, #0]	@ 0009ae78 0170
.org 0x9ae7a
	adds r3, r5, #0	@ 0009ae7a 2b1c
.org 0x9ae7c
	adds r3, #74	@ 0009ae7c 4a33
.org 0x9ae7e
	lsls r1, r1, #4	@ 0009ae7e 0901
.org 0x9ae80
	ldrb r2, [r3, #0]	@ 0009ae80 1a78
.org 0x9ae82
	movs r0, #17	@ 0009ae82 1120
.org 0x9ae84
	negs r0, r0	@ 0009ae84 4042
.org 0x9ae86
	ands r0, r2	@ 0009ae86 1040
.org 0x9ae88
	orrs r0, r1	@ 0009ae88 0843
.org 0x9ae8a
	strb r0, [r3, #0]	@ 0009ae8a 1870
.org 0x9ae8c
	ldr r1, [pc, #28]	@ 0009ae8c 0749
.org 0x9ae8e
	adds r0, r5, #0	@ 0009ae8e 281c
.org 0x9ae90
	bl 0x1cf00	@ 0009ae90 82f736f8
.org 0x9ae94
	ldrb r1, [r5, #11]	@ 0009ae94 e97a
.org 0x9ae96
	movs r0, #16	@ 0009ae96 1020
.org 0x9ae98
	orrs r0, r1	@ 0009ae98 0843
.org 0x9ae9a
	strb r0, [r5, #11]	@ 0009ae9a e872
.org 0x9ae9c
	ldrb r0, [r7, #28]	@ 0009ae9c 387f
.org 0x9ae9e
	strb r0, [r5, #29]	@ 0009ae9e 6877
.org 0x9aea0
	adds r0, r5, #0	@ 0009aea0 281c
.org 0x9aea2
	bl 0x9aeb0	@ 0009aea2 00f005f8
.org 0x9aea6
	pop {r4, r5, r6, r7}	@ 0009aea6 f0bc
