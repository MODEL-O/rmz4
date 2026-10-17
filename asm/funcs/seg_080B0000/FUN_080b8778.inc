@ FUN_080b8778  entry 0x080b8778  size 122
.thumb
.org 0xb8778
FUN_080b8778:
	push {r4, r5, r6, r7, lr}	@ 000b8778 f0b5
.org 0xb877a
	adds r4, r0, #0	@ 000b877a 041c
.org 0xb877c
	adds r7, r1, #0	@ 000b877c 0f1c
.org 0xb877e
	lsls r2, r2, #24	@ 000b877e 1206
.org 0xb8780
	lsrs r6, r2, #24	@ 000b8780 160e
.org 0xb8782
	lsls r3, r3, #24	@ 000b8782 1b06
.org 0xb8784
	lsrs r5, r3, #24	@ 000b8784 1d0e
.org 0xb8786
	ldr r0, [pc, #108]	@ 000b8786 1b48
.org 0xb8788
	ldr r0, [r0, #0]	@ 000b8788 0068
.org 0xb878a
	bl 0x5500	@ 000b878a 4cf7b9fe
.org 0xb878e
	adds r3, r0, #0	@ 000b878e 031c
.org 0xb8790
	cmp r3, #0	@ 000b8790 002b
.org 0xb8792
	beq.n 0xb87ea	@ 000b8792 2ad0
.org 0xb8794
	adds r1, r3, #0	@ 000b8794 191c
.org 0xb8796
	adds r1, #37	@ 000b8796 2531
.org 0xb8798
	movs r2, #0	@ 000b8798 0022
.org 0xb879a
	movs r0, #24	@ 000b879a 1820
.org 0xb879c
	strb r0, [r1, #0]	@ 000b879c 0870
.org 0xb879e
	ldr r0, [pc, #88]	@ 000b879e 1648
.org 0xb87a0
	movs r1, #105	@ 000b87a0 6921
.org 0xb87a2
	strb r1, [r3, #9]	@ 000b87a2 5972
.org 0xb87a4
	movs r1, #210	@ 000b87a4 d221
.org 0xb87a6
	lsls r1, r1, #1	@ 000b87a6 4900
.org 0xb87a8
	adds r0, r0, r1	@ 000b87a8 4018
.org 0xb87aa
	ldr r0, [r0, #0]	@ 000b87aa 0068
.org 0xb87ac
	ldr r0, [r0, #0]	@ 000b87ac 0068
.org 0xb87ae
	str r0, [r3, #20]	@ 000b87ae 5861
.org 0xb87b0
	movs r0, #0	@ 000b87b0 0020
.org 0xb87b2
	strh r2, [r3, #32]	@ 000b87b2 1a84
.org 0xb87b4
	adds r1, r3, #0	@ 000b87b4 191c
.org 0xb87b6
	adds r1, #34	@ 000b87b6 2231
.org 0xb87b8
	strb r0, [r1, #0]	@ 000b87b8 0870
.org 0xb87ba
	ldrb r1, [r3, #11]	@ 000b87ba d97a
.org 0xb87bc
	movs r0, #16	@ 000b87bc 1020
.org 0xb87be
	orrs r0, r1	@ 000b87be 0843
.org 0xb87c0
	strb r0, [r3, #11]	@ 000b87c0 d872
.org 0xb87c2
	ldrb r0, [r3, #28]	@ 000b87c2 187f
.org 0xb87c4
	strb r0, [r3, #29]	@ 000b87c4 5877
.org 0xb87c6
	str r4, [r3, #40]	@ 000b87c6 9c62
.org 0xb87c8
	ldr r0, [r7, #0]	@ 000b87c8 3868
.org 0xb87ca
	ldr r1, [r7, #4]	@ 000b87ca 7968
.org 0xb87cc
	str r0, [r3, #84]	@ 000b87cc 5865
.org 0xb87ce
	str r1, [r3, #88]	@ 000b87ce 9965
.org 0xb87d0
	strb r6, [r3, #16]	@ 000b87d0 1e74
.org 0xb87d2
	strb r5, [r3, #17]	@ 000b87d2 5d74
.org 0xb87d4
	adds r1, r4, #0	@ 000b87d4 211c
.org 0xb87d6
	adds r1, #204	@ 000b87d6 cc31
.org 0xb87d8
	ldrh r0, [r1, #0]	@ 000b87d8 0888
.org 0xb87da
	adds r0, #1	@ 000b87da 0130
.org 0xb87dc
	strh r0, [r1, #0]	@ 000b87dc 0880
.org 0xb87de
	adds r2, r4, #0	@ 000b87de 221c
.org 0xb87e0
	adds r2, #191	@ 000b87e0 bf32
.org 0xb87e2
	ldrb r1, [r2, #0]	@ 000b87e2 1178
.org 0xb87e4
	movs r0, #251	@ 000b87e4 fb20
.org 0xb87e6
	ands r0, r1	@ 000b87e6 0840
.org 0xb87e8
	strb r0, [r2, #0]	@ 000b87e8 1070
.org 0xb87ea
	adds r0, r3, #0	@ 000b87ea 181c
.org 0xb87ec
	pop {r4, r5, r6, r7}	@ 000b87ec f0bc
.org 0xb87ee
	pop {r1}	@ 000b87ee 02bc
.org 0xb87f0
	bx r1	@ 000b87f0 0847
