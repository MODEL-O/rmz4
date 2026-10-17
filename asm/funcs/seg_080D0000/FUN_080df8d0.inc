@ FUN_080df8d0  entry 0x080df8d0  size 76
.thumb
.org 0xdf8d0
FUN_080df8d0:
	push {r4, r5, r6, lr}	@ 000df8d0 70b5
.org 0xdf8d2
	adds r5, r0, #0	@ 000df8d2 051c
.org 0xdf8d4
	lsls r1, r1, #24	@ 000df8d4 0906
.org 0xdf8d6
	lsrs r6, r1, #24	@ 000df8d6 0e0e
.org 0xdf8d8
	ldr r0, [pc, #64]	@ 000df8d8 1048
.org 0xdf8da
	ldr r0, [r0, #0]	@ 000df8da 0068
.org 0xdf8dc
	bl 0x5500	@ 000df8dc 25f710fe
.org 0xdf8e0
	adds r4, r0, #0	@ 000df8e0 041c
.org 0xdf8e2
	cmp r4, #0	@ 000df8e2 002c
.org 0xdf8e4
	beq.n 0xdf914	@ 000df8e4 16d0
.org 0xdf8e6
	adds r1, r4, #0	@ 000df8e6 211c
.org 0xdf8e8
	adds r1, #37	@ 000df8e8 2531
.org 0xdf8ea
	movs r3, #0	@ 000df8ea 0023
.org 0xdf8ec
	movs r0, #1	@ 000df8ec 0120
.org 0xdf8ee
	strb r0, [r1, #0]	@ 000df8ee 0870
.org 0xdf8f0
	ldr r0, [pc, #44]	@ 000df8f0 0b48
.org 0xdf8f2
	movs r1, #53	@ 000df8f2 3521
.org 0xdf8f4
	strb r1, [r4, #9]	@ 000df8f4 6172
.org 0xdf8f6
	adds r0, #212	@ 000df8f6 d430
.org 0xdf8f8
	ldr r0, [r0, #0]	@ 000df8f8 0068
.org 0xdf8fa
	ldr r0, [r0, #0]	@ 000df8fa 0068
.org 0xdf8fc
	str r0, [r4, #20]	@ 000df8fc 6061
.org 0xdf8fe
	movs r2, #0	@ 000df8fe 0022
.org 0xdf900
	strh r3, [r4, #32]	@ 000df900 2384
.org 0xdf902
	adds r0, r4, #0	@ 000df902 201c
.org 0xdf904
	adds r0, #34	@ 000df904 2230
.org 0xdf906
	strb r2, [r0, #0]	@ 000df906 0270
.org 0xdf908
	ldr r0, [r5, #0]	@ 000df908 2868
.org 0xdf90a
	ldr r1, [r5, #4]	@ 000df90a 6968
.org 0xdf90c
	str r0, [r4, #84]	@ 000df90c 6065
.org 0xdf90e
	str r1, [r4, #88]	@ 000df90e a165
.org 0xdf910
	strb r2, [r4, #16]	@ 000df910 2274
.org 0xdf912
	strb r6, [r4, #17]	@ 000df912 6674
.org 0xdf914
	adds r0, r4, #0	@ 000df914 201c
.org 0xdf916
	pop {r4, r5, r6}	@ 000df916 70bc
.org 0xdf918
	pop {r1}	@ 000df918 02bc
.org 0xdf91a
	bx r1	@ 000df91a 0847
