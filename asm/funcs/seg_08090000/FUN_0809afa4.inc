@ FUN_0809afa4  entry 0x0809afa4  size 146
.thumb
.org 0x9afa4
FUN_0809afa4:
	push {r4, r5, r6, lr}	@ 0009afa4 70b5
.org 0x9afa6
	adds r6, r0, #0	@ 0009afa6 061c
.org 0x9afa8
	ldrb r4, [r6, #17]	@ 0009afa8 747c
.org 0x9afaa
	ldr r1, [pc, #48]	@ 0009afaa 0c49
.org 0x9afac
	ldrb r0, [r6, #9]	@ 0009afac 707a
.org 0x9afae
	lsls r0, r0, #2	@ 0009afae 8000
.org 0x9afb0
	adds r0, r0, r1	@ 0009afb0 4018
.org 0x9afb2
	movs r1, #1	@ 0009afb2 0121
.org 0x9afb4
	str r1, [r6, #12]	@ 0009afb4 f160
.org 0x9afb6
	ldr r0, [r0, #0]	@ 0009afb6 0068
.org 0x9afb8
	ldr r0, [r0, #4]	@ 0009afb8 4068
.org 0x9afba
	str r0, [r6, #20]	@ 0009afba 7061
.org 0x9afbc
	ldrb r1, [r6, #10]	@ 0009afbc b17a
.org 0x9afbe
	movs r0, #1	@ 0009afbe 0120
.org 0x9afc0
	movs r5, #0	@ 0009afc0 0025
.org 0x9afc2
	orrs r0, r1	@ 0009afc2 0843
.org 0x9afc4
	movs r1, #2	@ 0009afc4 0221
.org 0x9afc6
	orrs r0, r1	@ 0009afc6 0843
.org 0x9afc8
	strb r0, [r6, #10]	@ 0009afc8 b072
.org 0x9afca
	adds r0, r6, #0	@ 0009afca 301c
.org 0x9afcc
	bl 0x1cc9c	@ 0009afcc 81f766fe
.org 0x9afd0
	cmp r4, #0	@ 0009afd0 002c
.org 0x9afd2
	beq.n 0x9afe0	@ 0009afd2 05d0
.org 0x9afd4
	ldrb r0, [r6, #10]	@ 0009afd4 b07a
.org 0x9afd6
	movs r1, #16	@ 0009afd6 1021
.org 0x9afd8
	orrs r0, r1	@ 0009afd8 0843
.org 0x9afda
	b.n 0x9afe6	@ 0009afda 04e0
.org 0x9afdc
	.byte 0x40,0xdb,0x85,0x08	@ 0009afdc data
.org 0x9afe0
	ldrb r1, [r6, #10]	@ 0009afe0 b17a
.org 0x9afe2
	movs r0, #239	@ 0009afe2 ef20
.org 0x9afe4
	ands r0, r1	@ 0009afe4 0840
.org 0x9afe6
	strb r0, [r6, #10]	@ 0009afe6 b072
.org 0x9afe8
	movs r1, #1	@ 0009afe8 0121
.org 0x9afea
	ands r1, r4	@ 0009afea 2140
.org 0x9afec
	adds r0, r6, #0	@ 0009afec 301c
.org 0x9afee
	adds r0, #76	@ 0009afee 4c30
.org 0x9aff0
	movs r5, #0	@ 0009aff0 0025
.org 0x9aff2
	strb r1, [r0, #0]	@ 0009aff2 0170
.org 0x9aff4
	adds r3, r6, #0	@ 0009aff4 331c
.org 0x9aff6
	adds r3, #74	@ 0009aff6 4a33
.org 0x9aff8
	lsls r1, r1, #4	@ 0009aff8 0901
.org 0x9affa
	ldrb r2, [r3, #0]	@ 0009affa 1a78
.org 0x9affc
	movs r0, #17	@ 0009affc 1120
.org 0x9affe
	negs r0, r0	@ 0009affe 4042
.org 0x9b000
	ands r0, r2	@ 0009b000 1040
.org 0x9b002
	orrs r0, r1	@ 0009b002 0843
.org 0x9b004
	strb r0, [r3, #0]	@ 0009b004 1870
.org 0x9b006
	adds r1, r6, #0	@ 0009b006 311c
.org 0x9b008
	adds r1, #37	@ 0009b008 2531
.org 0x9b00a
	movs r0, #8	@ 0009b00a 0820
.org 0x9b00c
	strb r0, [r1, #0]	@ 0009b00c 0870
.org 0x9b00e
	ldrb r1, [r6, #10]	@ 0009b00e b17a
.org 0x9b010
	movs r0, #4	@ 0009b010 0420
.org 0x9b012
	orrs r0, r1	@ 0009b012 0843
.org 0x9b014
	strb r0, [r6, #10]	@ 0009b014 b072
.org 0x9b016
	adds r4, r6, #0	@ 0009b016 341c
.org 0x9b018
	adds r4, #116	@ 0009b018 7434
.org 0x9b01a
	ldr r0, [pc, #32]	@ 0009b01a 0848
.org 0x9b01c
	ldr r1, [r0, #0]	@ 0009b01c 0168
.org 0x9b01e
	adds r2, r6, #0	@ 0009b01e 321c
.org 0x9b020
	adds r2, #84	@ 0009b020 5432
.org 0x9b022
	adds r0, r4, #0	@ 0009b022 201c
.org 0x9b024
	movs r3, #12	@ 0009b024 0c23
.org 0x9b026
	bl 0x5760	@ 0009b026 6af79bfb
.org 0x9b02a
	str r6, [r4, #44]	@ 0009b02a e662
.org 0x9b02c
	str r5, [r4, #36]	@ 0009b02c 6562
.org 0x9b02e
	adds r0, r6, #0	@ 0009b02e 301c
.org 0x9b030
	bl 0x9b040	@ 0009b030 00f006f8
.org 0x9b034
	pop {r4, r5, r6}	@ 0009b034 70bc
