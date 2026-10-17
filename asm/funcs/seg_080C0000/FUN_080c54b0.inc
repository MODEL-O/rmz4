@ FUN_080c54b0  entry 0x080c54b0  size 90
.thumb
.org 0xc54b0
FUN_080c54b0:
	push {r4, r5, r6, r7, lr}	@ 000c54b0 f0b5
.org 0xc54b2
	adds r4, r0, #0	@ 000c54b2 041c
.org 0xc54b4
	adds r5, r1, #0	@ 000c54b4 0d1c
.org 0xc54b6
	adds r7, r2, #0	@ 000c54b6 171c
.org 0xc54b8
	lsls r3, r3, #24	@ 000c54b8 1b06
.org 0xc54ba
	lsrs r6, r3, #24	@ 000c54ba 1e0e
.org 0xc54bc
	ldr r0, [pc, #76]	@ 000c54bc 1348
.org 0xc54be
	ldr r0, [r0, #0]	@ 000c54be 0068
.org 0xc54c0
	bl 0x5500	@ 000c54c0 40f71ef8
.org 0xc54c4
	adds r3, r0, #0	@ 000c54c4 031c
.org 0xc54c6
	cmp r3, #0	@ 000c54c6 002b
.org 0xc54c8
	beq.n 0xc5502	@ 000c54c8 1bd0
.org 0xc54ca
	adds r1, r3, #0	@ 000c54ca 191c
.org 0xc54cc
	adds r1, #37	@ 000c54cc 2531
.org 0xc54ce
	movs r2, #0	@ 000c54ce 0022
.org 0xc54d0
	movs r0, #8	@ 000c54d0 0820
.org 0xc54d2
	strb r0, [r1, #0]	@ 000c54d2 0870
.org 0xc54d4
	ldr r1, [pc, #56]	@ 000c54d4 0e49
.org 0xc54d6
	movs r0, #24	@ 000c54d6 1820
.org 0xc54d8
	strb r0, [r3, #9]	@ 000c54d8 5872
.org 0xc54da
	ldr r0, [r1, #96]	@ 000c54da 086e
.org 0xc54dc
	ldr r0, [r0, #0]	@ 000c54dc 0068
.org 0xc54de
	str r0, [r3, #20]	@ 000c54de 5861
.org 0xc54e0
	movs r0, #0	@ 000c54e0 0020
.org 0xc54e2
	strh r2, [r3, #32]	@ 000c54e2 1a84
.org 0xc54e4
	adds r1, r3, #0	@ 000c54e4 191c
.org 0xc54e6
	adds r1, #34	@ 000c54e6 2231
.org 0xc54e8
	strb r0, [r1, #0]	@ 000c54e8 0870
.org 0xc54ea
	str r4, [r3, #40]	@ 000c54ea 9c62
.org 0xc54ec
	ldr r0, [r5, #0]	@ 000c54ec 2868
.org 0xc54ee
	ldr r1, [r5, #4]	@ 000c54ee 6968
.org 0xc54f0
	str r0, [r3, #84]	@ 000c54f0 5865
.org 0xc54f2
	str r1, [r3, #88]	@ 000c54f2 9965
.org 0xc54f4
	movs r0, #2	@ 000c54f4 0220
.org 0xc54f6
	strb r0, [r3, #16]	@ 000c54f6 1874
.org 0xc54f8
	adds r0, r3, #0	@ 000c54f8 181c
.org 0xc54fa
	adds r0, #180	@ 000c54fa b430
.org 0xc54fc
	str r7, [r0, #0]	@ 000c54fc 0760
.org 0xc54fe
	adds r0, #4	@ 000c54fe 0430
.org 0xc5500
	strb r6, [r0, #0]	@ 000c5500 0670
.org 0xc5502
	adds r0, r3, #0	@ 000c5502 181c
.org 0xc5504
	pop {r4, r5, r6, r7}	@ 000c5504 f0bc
.org 0xc5506
	pop {r1}	@ 000c5506 02bc
.org 0xc5508
	bx r1	@ 000c5508 0847
