@ FUN_080bffd0  entry 0x080bffd0  size 82
.thumb
.org 0xbffd0
FUN_080bffd0:
	push {r4, r5, r6, r7, lr}	@ 000bffd0 f0b5
.org 0xbffd2
	adds r6, r0, #0	@ 000bffd2 061c
.org 0xbffd4
	adds r7, r1, #0	@ 000bffd4 0f1c
.org 0xbffd6
	lsls r2, r2, #24	@ 000bffd6 1206
.org 0xbffd8
	lsrs r5, r2, #24	@ 000bffd8 150e
.org 0xbffda
	lsls r3, r3, #24	@ 000bffda 1b06
.org 0xbffdc
	lsrs r4, r3, #24	@ 000bffdc 1c0e
.org 0xbffde
	ldr r0, [pc, #68]	@ 000bffde 1148
.org 0xbffe0
	ldr r0, [r0, #0]	@ 000bffe0 0068
.org 0xbffe2
	bl 0x5500	@ 000bffe2 45f78dfa
.org 0xbffe6
	adds r3, r0, #0	@ 000bffe6 031c
.org 0xbffe8
	cmp r3, #0	@ 000bffe8 002b
.org 0xbffea
	beq.n 0xc001a	@ 000bffea 16d0
.org 0xbffec
	adds r1, r3, #0	@ 000bffec 191c
.org 0xbffee
	adds r1, #37	@ 000bffee 2531
.org 0xbfff0
	movs r2, #0	@ 000bfff0 0022
.org 0xbfff2
	movs r0, #8	@ 000bfff2 0820
.org 0xbfff4
	strb r0, [r1, #0]	@ 000bfff4 0870
.org 0xbfff6
	ldr r1, [pc, #48]	@ 000bfff6 0c49
.org 0xbfff8
	movs r0, #9	@ 000bfff8 0920
.org 0xbfffa
	strb r0, [r3, #9]	@ 000bfffa 5872
.org 0xbfffc
	ldr r0, [r1, #36]	@ 000bfffc 486a
.org 0xbfffe
	ldr r0, [r0, #0]	@ 000bfffe 0068
.org 0xc0000
	str r0, [r3, #20]	@ 000c0000 5861
.org 0xc0002
	movs r0, #0	@ 000c0002 0020
.org 0xc0004
	strh r2, [r3, #32]	@ 000c0004 1a84
.org 0xc0006
	adds r1, r3, #0	@ 000c0006 191c
.org 0xc0008
	adds r1, #34	@ 000c0008 2231
.org 0xc000a
	strb r0, [r1, #0]	@ 000c000a 0870
.org 0xc000c
	str r6, [r3, #40]	@ 000c000c 9e62
.org 0xc000e
	ldr r0, [r7, #0]	@ 000c000e 3868
.org 0xc0010
	ldr r1, [r7, #4]	@ 000c0010 7968
.org 0xc0012
	str r0, [r3, #84]	@ 000c0012 5865
.org 0xc0014
	str r1, [r3, #88]	@ 000c0014 9965
.org 0xc0016
	strb r5, [r3, #16]	@ 000c0016 1d74
.org 0xc0018
	strb r4, [r3, #17]	@ 000c0018 5c74
.org 0xc001a
	adds r0, r3, #0	@ 000c001a 181c
.org 0xc001c
	pop {r4, r5, r6, r7}	@ 000c001c f0bc
.org 0xc001e
	pop {r1}	@ 000c001e 02bc
.org 0xc0020
	bx r1	@ 000c0020 0847
