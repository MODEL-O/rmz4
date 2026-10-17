@ FUN_0808bfc8  entry 0x0808bfc8  size 94
.thumb
.org 0x8bfc8
FUN_0808bfc8:
	push {r4, r5, r6, r7, lr}	@ 0008bfc8 f0b5
.org 0x8bfca
	adds r6, r0, #0	@ 0008bfca 061c
.org 0x8bfcc
	adds r7, r1, #0	@ 0008bfcc 0f1c
.org 0x8bfce
	lsls r2, r2, #24	@ 0008bfce 1206
.org 0x8bfd0
	lsrs r5, r2, #24	@ 0008bfd0 150e
.org 0x8bfd2
	lsls r3, r3, #24	@ 0008bfd2 1b06
.org 0x8bfd4
	lsrs r4, r3, #24	@ 0008bfd4 1c0e
.org 0x8bfd6
	ldr r0, [pc, #80]	@ 0008bfd6 1448
.org 0x8bfd8
	ldr r0, [r0, #0]	@ 0008bfd8 0068
.org 0x8bfda
	bl 0x5500	@ 0008bfda 79f791fa
.org 0x8bfde
	adds r3, r0, #0	@ 0008bfde 031c
.org 0x8bfe0
	cmp r3, #0	@ 0008bfe0 002b
.org 0x8bfe2
	beq.n 0x8c01e	@ 0008bfe2 1cd0
.org 0x8bfe4
	adds r1, r3, #0	@ 0008bfe4 191c
.org 0x8bfe6
	adds r1, #37	@ 0008bfe6 2531
.org 0x8bfe8
	movs r2, #0	@ 0008bfe8 0022
.org 0x8bfea
	movs r0, #24	@ 0008bfea 1820
.org 0x8bfec
	strb r0, [r1, #0]	@ 0008bfec 0870
.org 0x8bfee
	ldr r1, [pc, #60]	@ 0008bfee 0f49
.org 0x8bff0
	movs r0, #13	@ 0008bff0 0d20
.org 0x8bff2
	strb r0, [r3, #9]	@ 0008bff2 5872
.org 0x8bff4
	ldr r0, [r1, #52]	@ 0008bff4 486b
.org 0x8bff6
	ldr r0, [r0, #0]	@ 0008bff6 0068
.org 0x8bff8
	str r0, [r3, #20]	@ 0008bff8 5861
.org 0x8bffa
	movs r0, #0	@ 0008bffa 0020
.org 0x8bffc
	strh r2, [r3, #32]	@ 0008bffc 1a84
.org 0x8bffe
	adds r1, r3, #0	@ 0008bffe 191c
.org 0x8c000
	adds r1, #34	@ 0008c000 2231
.org 0x8c002
	strb r0, [r1, #0]	@ 0008c002 0870
.org 0x8c004
	ldrb r1, [r3, #11]	@ 0008c004 d97a
.org 0x8c006
	movs r0, #16	@ 0008c006 1020
.org 0x8c008
	orrs r0, r1	@ 0008c008 0843
.org 0x8c00a
	strb r0, [r3, #11]	@ 0008c00a d872
.org 0x8c00c
	ldrb r0, [r3, #28]	@ 0008c00c 187f
.org 0x8c00e
	strb r0, [r3, #29]	@ 0008c00e 5877
.org 0x8c010
	str r6, [r3, #40]	@ 0008c010 9e62
.org 0x8c012
	ldr r0, [r7, #0]	@ 0008c012 3868
.org 0x8c014
	ldr r1, [r7, #4]	@ 0008c014 7968
.org 0x8c016
	str r0, [r3, #84]	@ 0008c016 5865
.org 0x8c018
	str r1, [r3, #88]	@ 0008c018 9965
.org 0x8c01a
	strb r5, [r3, #16]	@ 0008c01a 1d74
.org 0x8c01c
	strb r4, [r3, #17]	@ 0008c01c 5c74
.org 0x8c01e
	adds r0, r3, #0	@ 0008c01e 181c
.org 0x8c020
	pop {r4, r5, r6, r7}	@ 0008c020 f0bc
.org 0x8c022
	pop {r1}	@ 0008c022 02bc
.org 0x8c024
	bx r1	@ 0008c024 0847
