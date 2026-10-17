@ FUN_080c058c  entry 0x080c058c  size 148
.thumb
.org 0xc058c
FUN_080c058c:
	push {r4, r5, r6, lr}	@ 000c058c 70b5
.org 0xc058e
	adds r6, r0, #0	@ 000c058e 061c
.org 0xc0590
	ldr r0, [r6, #40]	@ 000c0590 b06a
.org 0xc0592
	ldrb r4, [r0, #10]	@ 000c0592 847a
.org 0xc0594
	lsrs r4, r4, #4	@ 000c0594 2409
.org 0xc0596
	movs r2, #1	@ 000c0596 0122
.org 0xc0598
	ands r4, r2	@ 000c0598 1440
.org 0xc059a
	ldr r1, [pc, #56]	@ 000c059a 0e49
.org 0xc059c
	ldrb r0, [r6, #9]	@ 000c059c 707a
.org 0xc059e
	lsls r0, r0, #2	@ 000c059e 8000
.org 0xc05a0
	adds r0, r0, r1	@ 000c05a0 4018
.org 0xc05a2
	str r2, [r6, #12]	@ 000c05a2 f260
.org 0xc05a4
	ldr r0, [r0, #0]	@ 000c05a4 0068
.org 0xc05a6
	ldr r0, [r0, #4]	@ 000c05a6 4068
.org 0xc05a8
	str r0, [r6, #20]	@ 000c05a8 7061
.org 0xc05aa
	movs r0, #0	@ 000c05aa 0020
.org 0xc05ac
	strb r0, [r6, #13]	@ 000c05ac 7073
.org 0xc05ae
	strb r0, [r6, #14]	@ 000c05ae b073
.org 0xc05b0
	strb r0, [r6, #15]	@ 000c05b0 f073
.org 0xc05b2
	ldrb r0, [r6, #10]	@ 000c05b2 b07a
.org 0xc05b4
	movs r1, #1	@ 000c05b4 0121
.org 0xc05b6
	movs r5, #0	@ 000c05b6 0025
.org 0xc05b8
	orrs r0, r1	@ 000c05b8 0843
.org 0xc05ba
	movs r1, #2	@ 000c05ba 0221
.org 0xc05bc
	orrs r0, r1	@ 000c05bc 0843
.org 0xc05be
	strb r0, [r6, #10]	@ 000c05be b072
.org 0xc05c0
	adds r0, r6, #0	@ 000c05c0 301c
.org 0xc05c2
	bl 0x1cc9c	@ 000c05c2 5cf76bfb
.org 0xc05c6
	cmp r4, #0	@ 000c05c6 002c
.org 0xc05c8
	beq.n 0xc05d8	@ 000c05c8 06d0
.org 0xc05ca
	ldrb r0, [r6, #10]	@ 000c05ca b07a
.org 0xc05cc
	movs r1, #16	@ 000c05cc 1021
.org 0xc05ce
	orrs r0, r1	@ 000c05ce 0843
.org 0xc05d0
	b.n 0xc05de	@ 000c05d0 05e0
.org 0xc05d2
	.byte 0x00	@ 000c05d2 data
.org 0xc05d3
	.byte 0x00	@ 000c05d3 data
.org 0xc05d4
	.byte 0xf4,0x49,0x86,0x08	@ 000c05d4 data
.org 0xc05d8
	ldrb r1, [r6, #10]	@ 000c05d8 b17a
.org 0xc05da
	movs r0, #239	@ 000c05da ef20
.org 0xc05dc
	ands r0, r1	@ 000c05dc 0840
.org 0xc05de
	strb r0, [r6, #10]	@ 000c05de b072
.org 0xc05e0
	adds r1, r4, #0	@ 000c05e0 211c
.org 0xc05e2
	adds r0, r6, #0	@ 000c05e2 301c
.org 0xc05e4
	adds r0, #76	@ 000c05e4 4c30
.org 0xc05e6
	movs r5, #0	@ 000c05e6 0025
.org 0xc05e8
	strb r1, [r0, #0]	@ 000c05e8 0170
.org 0xc05ea
	adds r3, r6, #0	@ 000c05ea 331c
.org 0xc05ec
	adds r3, #74	@ 000c05ec 4a33
.org 0xc05ee
	lsls r1, r1, #4	@ 000c05ee 0901
.org 0xc05f0
	ldrb r2, [r3, #0]	@ 000c05f0 1a78
.org 0xc05f2
	movs r0, #17	@ 000c05f2 1120
.org 0xc05f4
	negs r0, r0	@ 000c05f4 4042
.org 0xc05f6
	ands r0, r2	@ 000c05f6 1040
.org 0xc05f8
	orrs r0, r1	@ 000c05f8 0843
.org 0xc05fa
	strb r0, [r3, #0]	@ 000c05fa 1870
.org 0xc05fc
	ldrb r1, [r6, #10]	@ 000c05fc b17a
.org 0xc05fe
	movs r0, #4	@ 000c05fe 0420
.org 0xc0600
	orrs r0, r1	@ 000c0600 0843
.org 0xc0602
	strb r0, [r6, #10]	@ 000c0602 b072
.org 0xc0604
	adds r4, r6, #0	@ 000c0604 341c
.org 0xc0606
	adds r4, #116	@ 000c0606 7434
.org 0xc0608
	ldr r1, [pc, #28]	@ 000c0608 0749
.org 0xc060a
	adds r2, r6, #0	@ 000c060a 321c
.org 0xc060c
	adds r2, #84	@ 000c060c 5432
.org 0xc060e
	adds r0, r4, #0	@ 000c060e 201c
.org 0xc0610
	movs r3, #64	@ 000c0610 4023
.org 0xc0612
	bl 0x5760	@ 000c0612 45f7a5f8
.org 0xc0616
	str r6, [r4, #44]	@ 000c0616 e662
.org 0xc0618
	str r5, [r4, #36]	@ 000c0618 6562
.org 0xc061a
	adds r0, r6, #0	@ 000c061a 301c
.org 0xc061c
	bl 0xc062c	@ 000c061c 00f006f8
