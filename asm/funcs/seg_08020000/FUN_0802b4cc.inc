@ FUN_0802b4cc  entry 0x0802b4cc  size 78
.thumb
.org 0x2b4cc
FUN_0802b4cc:
	push {r4, r5, r6, lr}	@ 0002b4cc 70b5
.org 0x2b4ce
	ldr r6, [pc, #76]	@ 0002b4ce 134e
.org 0x2b4d0
	ldr r0, [r6, #0]	@ 0002b4d0 3068
.org 0x2b4d2
	bl 0x5500	@ 0002b4d2 daf715f8
.org 0x2b4d6
	adds r5, r0, #0	@ 0002b4d6 051c
.org 0x2b4d8
	cmp r5, #0	@ 0002b4d8 002d
.org 0x2b4da
	beq.n 0x2b4f4	@ 0002b4da 0bd0
.org 0x2b4dc
	ldr r0, [pc, #64]	@ 0002b4dc 1048
.org 0x2b4de
	ldr r0, [r0, #0]	@ 0002b4de 0068
.org 0x2b4e0
	cmp r5, r0	@ 0002b4e0 8542
.org 0x2b4e2
	bne.n 0x2b4f4	@ 0002b4e2 07d1
.org 0x2b4e4
	bl 0x2b4cc	@ 0002b4e4 fff7f2ff
.org 0x2b4e8
	adds r4, r0, #0	@ 0002b4e8 041c
.org 0x2b4ea
	ldr r0, [r6, #0]	@ 0002b4ea 3068
.org 0x2b4ec
	adds r1, r5, #0	@ 0002b4ec 291c
.org 0x2b4ee
	bl 0x55c8	@ 0002b4ee daf76bf8
.org 0x2b4f2
	adds r5, r4, #0	@ 0002b4f2 251c
.org 0x2b4f4
	movs r0, #1	@ 0002b4f4 0120
.org 0x2b4f6
	strb r0, [r5, #16]	@ 0002b4f6 2874
.org 0x2b4f8
	movs r0, #128	@ 0002b4f8 8020
.org 0x2b4fa
	lsls r0, r0, #2	@ 0002b4fa 8000
.org 0x2b4fc
	strh r0, [r5, #32]	@ 0002b4fc 2884
.org 0x2b4fe
	adds r1, r5, #0	@ 0002b4fe 291c
.org 0x2b500
	adds r1, #34	@ 0002b500 2231
.org 0x2b502
	movs r0, #4	@ 0002b502 0420
.org 0x2b504
	strb r0, [r1, #0]	@ 0002b504 0870
.org 0x2b506
	ldrb r1, [r5, #11]	@ 0002b506 e97a
.org 0x2b508
	movs r0, #16	@ 0002b508 1020
.org 0x2b50a
	orrs r0, r1	@ 0002b50a 0843
.org 0x2b50c
	strb r0, [r5, #11]	@ 0002b50c e872
.org 0x2b50e
	ldrb r0, [r5, #28]	@ 0002b50e 287f
.org 0x2b510
	strb r0, [r5, #29]	@ 0002b510 6877
.org 0x2b512
	adds r0, r5, #0	@ 0002b512 281c
.org 0x2b514
	pop {r4, r5, r6}	@ 0002b514 70bc
.org 0x2b516
	pop {r1}	@ 0002b516 02bc
.org 0x2b518
	bx r1	@ 0002b518 0847
