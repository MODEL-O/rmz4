@ FUN_080034b8  entry 0x080034b8  size 94
.thumb
.org 0x34b8
FUN_080034b8:
	push {r4, lr}	@ 000034b8 10b5
.org 0x34ba
	adds r3, r0, #0	@ 000034ba 031c
.org 0x34bc
	lsls r1, r1, #24	@ 000034bc 0906
.org 0x34be
	lsrs r1, r1, #24	@ 000034be 090e
.org 0x34c0
	movs r4, #0	@ 000034c0 0024
.org 0x34c2
	strb r1, [r3, #4]	@ 000034c2 1971
.org 0x34c4
	strb r4, [r3, #5]	@ 000034c4 5c71
.org 0x34c6
	ldr r2, [r3, #0]	@ 000034c6 1a68
.org 0x34c8
	lsls r1, r1, #2	@ 000034c8 8900
.org 0x34ca
	adds r1, r1, r2	@ 000034ca 8918
.org 0x34cc
	ldr r0, [r1, #0]	@ 000034cc 0868
.org 0x34ce
	ldrb r0, [r0, #1]	@ 000034ce 4078
.org 0x34d0
	adds r1, r0, #1	@ 000034d0 411c
.org 0x34d2
	strb r1, [r3, #6]	@ 000034d2 9971
.org 0x34d4
	ldrb r0, [r3, #4]	@ 000034d4 1879
.org 0x34d6
	lsls r0, r0, #2	@ 000034d6 8000
.org 0x34d8
	adds r0, r0, r2	@ 000034d8 8018
.org 0x34da
	ldr r0, [r0, #0]	@ 000034da 0068
.org 0x34dc
	movs r2, #3	@ 000034dc 0322
.org 0x34de
	ldrsb r2, [r0, r2]	@ 000034de 8256
.org 0x34e0
	cmp r2, #0	@ 000034e0 002a
.org 0x34e2
	bge.n 0x350e	@ 000034e2 14da
.org 0x34e4
	lsls r0, r1, #24	@ 000034e4 0806
.org 0x34e6
	asrs r0, r0, #24	@ 000034e6 0016
.org 0x34e8
	cmp r0, #2	@ 000034e8 0228
.org 0x34ea
	bne.n 0x34f0	@ 000034ea 01d1
.org 0x34ec
	strb r0, [r3, #7]	@ 000034ec d871
.org 0x34ee
	b.n 0x3510	@ 000034ee 0fe0
.org 0x34f0
	cmp r0, #1	@ 000034f0 0128
.org 0x34f2
	bne.n 0x3508	@ 000034f2 09d1
.org 0x34f4
	movs r0, #1	@ 000034f4 0120
.org 0x34f6
	negs r0, r0	@ 000034f6 4042
.org 0x34f8
	cmp r2, r0	@ 000034f8 8242
.org 0x34fa
	bne.n 0x3502	@ 000034fa 02d1
.org 0x34fc
	movs r0, #3	@ 000034fc 0320
.org 0x34fe
	strb r0, [r3, #7]	@ 000034fe d871
.org 0x3500
	b.n 0x3510	@ 00003500 06e0
.org 0x3502
	movs r0, #4	@ 00003502 0420
.org 0x3504
	strb r0, [r3, #7]	@ 00003504 d871
.org 0x3506
	b.n 0x3510	@ 00003506 03e0
.org 0x3508
	movs r0, #1	@ 00003508 0120
.org 0x350a
	strb r0, [r3, #7]	@ 0000350a d871
.org 0x350c
	b.n 0x3510	@ 0000350c 00e0
.org 0x350e
	strb r4, [r3, #7]	@ 0000350e dc71
.org 0x3510
	pop {r4}	@ 00003510 10bc
.org 0x3512
	pop {r0}	@ 00003512 01bc
.org 0x3514
	bx r0	@ 00003514 0047
