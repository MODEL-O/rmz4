@ FUN_081129d4  entry 0x081129d4  size 54
.thumb
.org 0x1129d4
FUN_081129d4:
	lsrs r1, r1, #1	@ 001129d4 4908
.org 0x1129d6
	push {r4, r5, r6, r7}	@ 001129d6 f0b4
.org 0x1129d8
	movs r7, #127	@ 001129d8 7f27
.org 0x1129da
	ldr r4, [r0, #0]	@ 001129da 0468
.org 0x1129dc
	lsrs r5, r4, #10	@ 001129dc a50a
.org 0x1129de
	ands r5, r2	@ 001129de 1540
.org 0x1129e0
	lsrs r6, r4, #5	@ 001129e0 6609
.org 0x1129e2
	ands r6, r2	@ 001129e2 1640
.org 0x1129e4
	ands r4, r2	@ 001129e4 1440
.org 0x1129e6
	adds r4, r4, r5	@ 001129e6 6419
.org 0x1129e8
	adds r4, r4, r6	@ 001129e8 a419
.org 0x1129ea
	adds r5, r4, #0	@ 001129ea 251c
.org 0x1129ec
	ands r5, r7	@ 001129ec 3d40
.org 0x1129ee
	lsls r5, r5, #1	@ 001129ee 6d00
.org 0x1129f0
	ldrh r5, [r3, r5]	@ 001129f0 5d5b
.org 0x1129f2
	lsrs r4, r4, #16	@ 001129f2 240c
.org 0x1129f4
	ands r4, r7	@ 001129f4 3c40
.org 0x1129f6
	lsls r4, r4, #1	@ 001129f6 6400
.org 0x1129f8
	ldrh r4, [r3, r4]	@ 001129f8 1c5b
.org 0x1129fa
	lsls r4, r4, #16	@ 001129fa 2404
.org 0x1129fc
	orrs r4, r5	@ 001129fc 2c43
.org 0x1129fe
	str r4, [r0, #0]	@ 001129fe 0460
.org 0x112a00
	adds r0, #4	@ 00112a00 0430
.org 0x112a02
	subs r1, #1	@ 00112a02 0139
.org 0x112a04
	bne.n 0x1129da	@ 00112a04 e9d1
.org 0x112a06
	pop {r4, r5, r6, r7}	@ 00112a06 f0bc
.org 0x112a08
	bx lr	@ 00112a08 7047
