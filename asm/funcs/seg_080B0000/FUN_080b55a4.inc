@ FUN_080b55a4  entry 0x080b55a4  size 78
.thumb
.org 0xb55a4
FUN_080b55a4:
	push {r4, r5, r6, lr}	@ 000b55a4 70b5
.org 0xb55a6
	adds r5, r0, #0	@ 000b55a6 051c
.org 0xb55a8
	ldr r0, [r5, #84]	@ 000b55a8 686d
.org 0xb55aa
	ldr r1, [r5, #88]	@ 000b55aa a96d
.org 0xb55ac
	bl 0x7c7c	@ 000b55ac 52f766fb
.org 0xb55b0
	lsls r0, r0, #16	@ 000b55b0 0004
.org 0xb55b2
	cmp r0, #0	@ 000b55b2 0028
.org 0xb55b4
	bne.n 0xb55c2	@ 000b55b4 05d1
.org 0xb55b6
	ldr r0, [r5, #88]	@ 000b55b6 a86d
.org 0xb55b8
	ldr r1, [r5, #96]	@ 000b55b8 296e
.org 0xb55ba
	adds r0, r0, r1	@ 000b55ba 4018
.org 0xb55bc
	str r0, [r5, #88]	@ 000b55bc a865
.org 0xb55be
	adds r1, #64	@ 000b55be 4031
.org 0xb55c0
	str r1, [r5, #96]	@ 000b55c0 2966
.org 0xb55c2
	adds r6, r5, #0	@ 000b55c2 2e1c
.org 0xb55c4
	adds r6, #192	@ 000b55c4 c036
.org 0xb55c6
	ldr r0, [r6, #0]	@ 000b55c6 3068
.org 0xb55c8
	bl 0x2b3e4	@ 000b55c8 75f70cff
.org 0xb55cc
	cmp r0, #0	@ 000b55cc 0028
.org 0xb55ce
	beq.n 0xb55ec	@ 000b55ce 0dd0
.org 0xb55d0
	adds r0, r5, #0	@ 000b55d0 281c
.org 0xb55d2
	adds r0, #116	@ 000b55d2 7430
.org 0xb55d4
	ldr r1, [pc, #28]	@ 000b55d4 0749
.org 0xb55d6
	bl 0x5784	@ 000b55d6 50f7d5f8
.org 0xb55da
	movs r4, #0	@ 000b55da 0024
.org 0xb55dc
	str r4, [r6, #0]	@ 000b55dc 3460
.org 0xb55de
	ldr r0, [r5, #84]	@ 000b55de 686d
.org 0xb55e0
	ldr r1, [r5, #88]	@ 000b55e0 a96d
.org 0xb55e2
	bl 0x8534	@ 000b55e2 52f7a7ff
.org 0xb55e6
	str r0, [r5, #88]	@ 000b55e6 a865
.org 0xb55e8
	strb r4, [r5, #13]	@ 000b55e8 6c73
.org 0xb55ea
	strb r4, [r5, #14]	@ 000b55ea ac73
.org 0xb55ec
	pop {r4, r5, r6}	@ 000b55ec 70bc
.org 0xb55ee
	pop {r0}	@ 000b55ee 01bc
.org 0xb55f0
	bx r0	@ 000b55f0 0047
