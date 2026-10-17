@ FUN_080b57b4  entry 0x080b57b4  size 154
.thumb
.org 0xb57b4
FUN_080b57b4:
	push {r4, r5, r6, lr}	@ 000b57b4 70b5
.org 0xb57b6
	adds r6, r0, #0	@ 000b57b6 061c
.org 0xb57b8
	ldr r0, [r6, #40]	@ 000b57b8 b06a
.org 0xb57ba
	ldrb r4, [r0, #10]	@ 000b57ba 847a
.org 0xb57bc
	lsrs r4, r4, #4	@ 000b57bc 2409
.org 0xb57be
	movs r2, #1	@ 000b57be 0122
.org 0xb57c0
	ands r4, r2	@ 000b57c0 1440
.org 0xb57c2
	ldr r1, [pc, #60]	@ 000b57c2 0f49
.org 0xb57c4
	ldrb r0, [r6, #9]	@ 000b57c4 707a
.org 0xb57c6
	lsls r0, r0, #2	@ 000b57c6 8000
.org 0xb57c8
	adds r0, r0, r1	@ 000b57c8 4018
.org 0xb57ca
	str r2, [r6, #12]	@ 000b57ca f260
.org 0xb57cc
	ldr r0, [r0, #0]	@ 000b57cc 0068
.org 0xb57ce
	ldr r0, [r0, #4]	@ 000b57ce 4068
.org 0xb57d0
	str r0, [r6, #20]	@ 000b57d0 7061
.org 0xb57d2
	movs r2, #0	@ 000b57d2 0022
.org 0xb57d4
	strb r2, [r6, #13]	@ 000b57d4 7273
.org 0xb57d6
	strb r2, [r6, #14]	@ 000b57d6 b273
.org 0xb57d8
	strb r2, [r6, #15]	@ 000b57d8 f273
.org 0xb57da
	ldrb r0, [r6, #10]	@ 000b57da b07a
.org 0xb57dc
	movs r1, #1	@ 000b57dc 0121
.org 0xb57de
	movs r5, #0	@ 000b57de 0025
.org 0xb57e0
	orrs r0, r1	@ 000b57e0 0843
.org 0xb57e2
	movs r1, #2	@ 000b57e2 0221
.org 0xb57e4
	orrs r0, r1	@ 000b57e4 0843
.org 0xb57e6
	strb r0, [r6, #10]	@ 000b57e6 b072
.org 0xb57e8
	adds r0, r6, #0	@ 000b57e8 301c
.org 0xb57ea
	adds r0, #180	@ 000b57ea b430
.org 0xb57ec
	strb r2, [r0, #0]	@ 000b57ec 0270
.org 0xb57ee
	adds r0, r6, #0	@ 000b57ee 301c
.org 0xb57f0
	bl 0x1cc9c	@ 000b57f0 67f754fa
.org 0xb57f4
	cmp r4, #0	@ 000b57f4 002c
.org 0xb57f6
	beq.n 0xb5804	@ 000b57f6 05d0
.org 0xb57f8
	ldrb r0, [r6, #10]	@ 000b57f8 b07a
.org 0xb57fa
	movs r1, #16	@ 000b57fa 1021
.org 0xb57fc
	orrs r0, r1	@ 000b57fc 0843
.org 0xb57fe
	b.n 0xb580a	@ 000b57fe 04e0
.org 0xb5800
	.byte 0x40,0xdb,0x85,0x08	@ 000b5800 data
.org 0xb5804
	ldrb r1, [r6, #10]	@ 000b5804 b17a
.org 0xb5806
	movs r0, #239	@ 000b5806 ef20
.org 0xb5808
	ands r0, r1	@ 000b5808 0840
.org 0xb580a
	strb r0, [r6, #10]	@ 000b580a b072
.org 0xb580c
	adds r1, r4, #0	@ 000b580c 211c
.org 0xb580e
	adds r0, r6, #0	@ 000b580e 301c
.org 0xb5810
	adds r0, #76	@ 000b5810 4c30
.org 0xb5812
	movs r5, #0	@ 000b5812 0025
.org 0xb5814
	strb r1, [r0, #0]	@ 000b5814 0170
.org 0xb5816
	adds r3, r6, #0	@ 000b5816 331c
.org 0xb5818
	adds r3, #74	@ 000b5818 4a33
.org 0xb581a
	lsls r1, r1, #4	@ 000b581a 0901
.org 0xb581c
	ldrb r2, [r3, #0]	@ 000b581c 1a78
.org 0xb581e
	movs r0, #17	@ 000b581e 1120
.org 0xb5820
	negs r0, r0	@ 000b5820 4042
.org 0xb5822
	ands r0, r2	@ 000b5822 1040
.org 0xb5824
	orrs r0, r1	@ 000b5824 0843
.org 0xb5826
	strb r0, [r3, #0]	@ 000b5826 1870
.org 0xb5828
	ldrb r1, [r6, #10]	@ 000b5828 b17a
.org 0xb582a
	movs r0, #4	@ 000b582a 0420
.org 0xb582c
	orrs r0, r1	@ 000b582c 0843
.org 0xb582e
	strb r0, [r6, #10]	@ 000b582e b072
.org 0xb5830
	adds r4, r6, #0	@ 000b5830 341c
.org 0xb5832
	adds r4, #116	@ 000b5832 7434
.org 0xb5834
	ldr r1, [pc, #28]	@ 000b5834 0749
.org 0xb5836
	adds r2, r6, #0	@ 000b5836 321c
.org 0xb5838
	adds r2, #84	@ 000b5838 5432
.org 0xb583a
	adds r0, r4, #0	@ 000b583a 201c
.org 0xb583c
	movs r3, #64	@ 000b583c 4023
.org 0xb583e
	bl 0x5760	@ 000b583e 4ff78fff
.org 0xb5842
	str r6, [r4, #44]	@ 000b5842 e662
.org 0xb5844
	str r5, [r4, #36]	@ 000b5844 6562
.org 0xb5846
	adds r0, r6, #0	@ 000b5846 301c
.org 0xb5848
	bl 0xb5858	@ 000b5848 00f006f8
.org 0xb584c
	pop {r4, r5, r6}	@ 000b584c 70bc
