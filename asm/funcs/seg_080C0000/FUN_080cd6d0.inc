@ FUN_080cd6d0  entry 0x080cd6d0  size 80
.thumb
.org 0xcd6d0
FUN_080cd6d0:
	push {r4, r5, r6, lr}	@ 000cd6d0 70b5
.org 0xcd6d2
	adds r4, r0, #0	@ 000cd6d2 041c
.org 0xcd6d4
	lsls r1, r1, #24	@ 000cd6d4 0906
.org 0xcd6d6
	lsrs r6, r1, #24	@ 000cd6d6 0e0e
.org 0xcd6d8
	lsls r2, r2, #24	@ 000cd6d8 1206
.org 0xcd6da
	lsrs r5, r2, #24	@ 000cd6da 150e
.org 0xcd6dc
	ldr r0, [pc, #64]	@ 000cd6dc 1048
.org 0xcd6de
	ldr r0, [r0, #0]	@ 000cd6de 0068
.org 0xcd6e0
	bl 0x5500	@ 000cd6e0 37f70eff
.org 0xcd6e4
	adds r3, r0, #0	@ 000cd6e4 031c
.org 0xcd6e6
	cmp r3, #0	@ 000cd6e6 002b
.org 0xcd6e8
	beq.n 0xcd71a	@ 000cd6e8 17d0
.org 0xcd6ea
	adds r1, r3, #0	@ 000cd6ea 191c
.org 0xcd6ec
	adds r1, #37	@ 000cd6ec 2531
.org 0xcd6ee
	movs r2, #0	@ 000cd6ee 0022
.org 0xcd6f0
	movs r0, #8	@ 000cd6f0 0820
.org 0xcd6f2
	strb r0, [r1, #0]	@ 000cd6f2 0870
.org 0xcd6f4
	ldr r0, [pc, #44]	@ 000cd6f4 0b48
.org 0xcd6f6
	movs r1, #49	@ 000cd6f6 3121
.org 0xcd6f8
	strb r1, [r3, #9]	@ 000cd6f8 5972
.org 0xcd6fa
	adds r0, #196	@ 000cd6fa c430
.org 0xcd6fc
	ldr r0, [r0, #0]	@ 000cd6fc 0068
.org 0xcd6fe
	ldr r0, [r0, #0]	@ 000cd6fe 0068
.org 0xcd700
	str r0, [r3, #20]	@ 000cd700 5861
.org 0xcd702
	movs r0, #0	@ 000cd702 0020
.org 0xcd704
	strh r2, [r3, #32]	@ 000cd704 1a84
.org 0xcd706
	adds r1, r3, #0	@ 000cd706 191c
.org 0xcd708
	adds r1, #34	@ 000cd708 2231
.org 0xcd70a
	strb r0, [r1, #0]	@ 000cd70a 0870
.org 0xcd70c
	str r4, [r3, #40]	@ 000cd70c 9c62
.org 0xcd70e
	ldr r0, [r4, #84]	@ 000cd70e 606d
.org 0xcd710
	ldr r1, [r4, #88]	@ 000cd710 a16d
.org 0xcd712
	str r0, [r3, #84]	@ 000cd712 5865
.org 0xcd714
	str r1, [r3, #88]	@ 000cd714 9965
.org 0xcd716
	strb r6, [r3, #16]	@ 000cd716 1e74
.org 0xcd718
	strb r5, [r3, #17]	@ 000cd718 5d74
.org 0xcd71a
	pop {r4, r5, r6}	@ 000cd71a 70bc
.org 0xcd71c
	pop {r0}	@ 000cd71c 01bc
.org 0xcd71e
	bx r0	@ 000cd71e 0047
