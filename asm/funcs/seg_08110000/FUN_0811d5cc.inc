@ FUN_0811d5cc  entry 0x0811d5cc  size 86
.thumb
.org 0x11d5cc
FUN_0811d5cc:
	push {r4, r5, lr}	@ 0011d5cc 30b5
.org 0x11d5ce
	lsls r1, r1, #24	@ 0011d5ce 0906
.org 0x11d5d0
	lsrs r5, r1, #24	@ 0011d5d0 0d0e
.org 0x11d5d2
	cmp r5, #255	@ 0011d5d2 ff2d
.org 0x11d5d4
	bne.n 0x11d608	@ 0011d5d4 18d1
.org 0x11d5d6
	b.n 0x11d620	@ 0011d5d6 23e0
.org 0x11d5d8
	strb r5, [r1, #0]	@ 0011d5d8 0d70
.org 0x11d5da
	ldr r0, [pc, #40]	@ 0011d5da 0a48
.org 0x11d5dc
	ldr r4, [r0, #0]	@ 0011d5dc 0468
.org 0x11d5de
	lsrs r0, r5, #1	@ 0011d5de 6808
.org 0x11d5e0
	adds r4, r4, r0	@ 0011d5e0 2418
.org 0x11d5e2
	ldrb r3, [r4, #0]	@ 0011d5e2 2378
.org 0x11d5e4
	movs r1, #1	@ 0011d5e4 0121
.org 0x11d5e6
	ands r1, r5	@ 0011d5e6 2940
.org 0x11d5e8
	lsls r1, r1, #2	@ 0011d5e8 8900
.org 0x11d5ea
	adds r0, r3, #0	@ 0011d5ea 181c
.org 0x11d5ec
	asrs r0, r1	@ 0011d5ec 0841
.org 0x11d5ee
	movs r2, #15	@ 0011d5ee 0f22
.org 0x11d5f0
	ands r0, r2	@ 0011d5f0 1040
.org 0x11d5f2
	subs r0, #1	@ 0011d5f2 0138
.org 0x11d5f4
	lsls r0, r1	@ 0011d5f4 8840
.org 0x11d5f6
	lsls r2, r1	@ 0011d5f6 8a40
.org 0x11d5f8
	bics r3, r2	@ 0011d5f8 9343
.org 0x11d5fa
	orrs r0, r3	@ 0011d5fa 1843
.org 0x11d5fc
	strb r0, [r4, #0]	@ 0011d5fc 2070
.org 0x11d5fe
	movs r0, #1	@ 0011d5fe 0120
.org 0x11d600
	b.n 0x11d622	@ 0011d600 0fe0
.org 0x11d602
	.byte 0x00	@ 0011d602 data
.org 0x11d603
	.byte 0x00	@ 0011d603 data
.org 0x11d604
	.byte 0xa8,0xed,0x02,0x02	@ 0011d604 data
.org 0x11d608
	movs r2, #0	@ 0011d608 0022
.org 0x11d60a
	ldr r1, [pc, #28]	@ 0011d60a 0749
.org 0x11d60c
	adds r3, r0, r1	@ 0011d60c 4318
.org 0x11d60e
	adds r1, r3, r2	@ 0011d60e 9918
.org 0x11d610
	ldrb r0, [r1, #0]	@ 0011d610 0878
.org 0x11d612
	cmp r0, #255	@ 0011d612 ff28
.org 0x11d614
	beq.n 0x11d5d8	@ 0011d614 e0d0
.org 0x11d616
	adds r0, r2, #1	@ 0011d616 501c
.org 0x11d618
	lsls r0, r0, #24	@ 0011d618 0006
.org 0x11d61a
	lsrs r2, r0, #24	@ 0011d61a 020e
.org 0x11d61c
	cmp r2, #3	@ 0011d61c 032a
.org 0x11d61e
	bls.n 0x11d60e	@ 0011d61e f6d9
.org 0x11d620
	movs r0, #0	@ 0011d620 0020
