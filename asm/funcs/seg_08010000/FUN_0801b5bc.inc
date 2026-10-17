@ FUN_0801b5bc  entry 0x0801b5bc  size 86
.thumb
.org 0x1b5bc
FUN_0801b5bc:
	push {r4, r5, r6, lr}	@ 0001b5bc 70b5
.org 0x1b5be
	ldr r5, [pc, #84]	@ 0001b5be 154d
.org 0x1b5c0
	ldr r1, [pc, #84]	@ 0001b5c0 1549
.org 0x1b5c2
	adds r0, r5, r1	@ 0001b5c2 6818
.org 0x1b5c4
	ldrh r1, [r0, #0]	@ 0001b5c4 0188
.org 0x1b5c6
	lsrs r0, r1, #8	@ 0001b5c6 080a
.org 0x1b5c8
	cmp r0, #16	@ 0001b5c8 1028
.org 0x1b5ca
	bne.n 0x1b60c	@ 0001b5ca 1fd1
.org 0x1b5cc
	movs r0, #255	@ 0001b5cc ff20
.org 0x1b5ce
	ands r0, r1	@ 0001b5ce 0840
.org 0x1b5d0
	cmp r0, #6	@ 0001b5d0 0628
.org 0x1b5d2
	bne.n 0x1b60c	@ 0001b5d2 1bd1
.org 0x1b5d4
	ldr r6, [pc, #68]	@ 0001b5d4 114e
.org 0x1b5d6
	ldr r0, [pc, #72]	@ 0001b5d6 1248
.org 0x1b5d8
	adds r5, r5, r0	@ 0001b5d8 2d18
.org 0x1b5da
	ldrb r0, [r5, #0]	@ 0001b5da 2878
.org 0x1b5dc
	lsrs r0, r0, #1	@ 0001b5dc 4008
.org 0x1b5de
	lsls r1, r0, #2	@ 0001b5de 8100
.org 0x1b5e0
	adds r1, r1, r0	@ 0001b5e0 0918
.org 0x1b5e2
	lsls r1, r1, #2	@ 0001b5e2 8900
.org 0x1b5e4
	ldr r4, [pc, #60]	@ 0001b5e4 0f4c
.org 0x1b5e6
	adds r1, r1, r4	@ 0001b5e6 0919
.org 0x1b5e8
	ldr r0, [r6, #0]	@ 0001b5e8 3068
.org 0x1b5ea
	adds r0, r0, r1	@ 0001b5ea 4018
.org 0x1b5ec
	movs r1, #128	@ 0001b5ec 8021
.org 0x1b5ee
	lsls r1, r1, #7	@ 0001b5ee c901
.org 0x1b5f0
	bl 0x1ea4	@ 0001b5f0 e6f758fc
.org 0x1b5f4
	ldrb r0, [r5, #0]	@ 0001b5f4 2878
.org 0x1b5f6
	lsrs r0, r0, #1	@ 0001b5f6 4008
.org 0x1b5f8
	lsls r1, r0, #2	@ 0001b5f8 8100
.org 0x1b5fa
	adds r1, r1, r0	@ 0001b5fa 0918
.org 0x1b5fc
	lsls r1, r1, #2	@ 0001b5fc 8900
.org 0x1b5fe
	adds r1, r1, r4	@ 0001b5fe 0919
.org 0x1b600
	ldr r0, [r6, #0]	@ 0001b600 3068
.org 0x1b602
	adds r0, r0, r1	@ 0001b602 4018
.org 0x1b604
	adds r0, #12	@ 0001b604 0c30
.org 0x1b606
	movs r1, #0	@ 0001b606 0021
.org 0x1b608
	bl 0x2208	@ 0001b608 e6f7fefd
.org 0x1b60c
	pop {r4, r5, r6}	@ 0001b60c 70bc
.org 0x1b60e
	pop {r0}	@ 0001b60e 01bc
.org 0x1b610
	bx r0	@ 0001b610 0047
