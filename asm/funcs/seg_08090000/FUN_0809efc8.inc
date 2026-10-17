@ FUN_0809efc8  entry 0x0809efc8  size 180
.thumb
.org 0x9efc8
FUN_0809efc8:
	push {r4, r5, r6, lr}	@ 0009efc8 70b5
.org 0x9efca
	adds r6, r0, #0	@ 0009efca 061c
.org 0x9efcc
	bl 0x1cc9c	@ 0009efcc 7df766fe
.org 0x9efd0
	ldrb r1, [r6, #10]	@ 0009efd0 b17a
.org 0x9efd2
	movs r0, #1	@ 0009efd2 0120
.org 0x9efd4
	movs r2, #0	@ 0009efd4 0022
.org 0x9efd6
	orrs r1, r0	@ 0009efd6 0143
.org 0x9efd8
	movs r0, #2	@ 0009efd8 0220
.org 0x9efda
	orrs r1, r0	@ 0009efda 0143
.org 0x9efdc
	orrs r1, r2	@ 0009efdc 1143
.org 0x9efde
	strb r1, [r6, #10]	@ 0009efde b172
.org 0x9efe0
	ldrb r3, [r6, #16]	@ 0009efe0 337c
.org 0x9efe2
	cmp r3, #0	@ 0009efe2 002b
.org 0x9efe4
	beq.n 0x9efec	@ 0009efe4 02d0
.org 0x9efe6
	movs r0, #16	@ 0009efe6 1020
.org 0x9efe8
	orrs r1, r0	@ 0009efe8 0143
.org 0x9efea
	b.n 0x9eff0	@ 0009efea 01e0
.org 0x9efec
	movs r0, #239	@ 0009efec ef20
.org 0x9efee
	ands r1, r0	@ 0009efee 0140
.org 0x9eff0
	strb r1, [r6, #10]	@ 0009eff0 b172
.org 0x9eff2
	movs r5, #1	@ 0009eff2 0125
.org 0x9eff4
	adds r1, r5, #0	@ 0009eff4 291c
.org 0x9eff6
	ands r1, r3	@ 0009eff6 1940
.org 0x9eff8
	adds r0, r6, #0	@ 0009eff8 301c
.org 0x9effa
	adds r0, #76	@ 0009effa 4c30
.org 0x9effc
	strb r1, [r0, #0]	@ 0009effc 0170
.org 0x9effe
	adds r3, r6, #0	@ 0009effe 331c
.org 0x9f000
	adds r3, #74	@ 0009f000 4a33
.org 0x9f002
	lsls r1, r1, #4	@ 0009f002 0901
.org 0x9f004
	ldrb r2, [r3, #0]	@ 0009f004 1a78
.org 0x9f006
	movs r0, #17	@ 0009f006 1120
.org 0x9f008
	negs r0, r0	@ 0009f008 4042
.org 0x9f00a
	ands r0, r2	@ 0009f00a 1040
.org 0x9f00c
	orrs r0, r1	@ 0009f00c 0843
.org 0x9f00e
	strb r0, [r3, #0]	@ 0009f00e 1870
.org 0x9f010
	ldrb r1, [r6, #10]	@ 0009f010 b17a
.org 0x9f012
	movs r0, #4	@ 0009f012 0420
.org 0x9f014
	orrs r0, r1	@ 0009f014 0843
.org 0x9f016
	strb r0, [r6, #10]	@ 0009f016 b072
.org 0x9f018
	adds r4, r6, #0	@ 0009f018 341c
.org 0x9f01a
	adds r4, #116	@ 0009f01a 7434
.org 0x9f01c
	ldr r1, [pc, #48]	@ 0009f01c 0c49
.org 0x9f01e
	adds r2, r6, #0	@ 0009f01e 321c
.org 0x9f020
	adds r2, #84	@ 0009f020 5432
.org 0x9f022
	adds r0, r4, #0	@ 0009f022 201c
.org 0x9f024
	movs r3, #6	@ 0009f024 0623
.org 0x9f026
	bl 0x5760	@ 0009f026 66f79bfb
.org 0x9f02a
	str r6, [r4, #44]	@ 0009f02a e662
.org 0x9f02c
	ldr r0, [pc, #36]	@ 0009f02c 0948
.org 0x9f02e
	str r0, [r4, #36]	@ 0009f02e 6062
.org 0x9f030
	ldr r1, [pc, #36]	@ 0009f030 0949
.org 0x9f032
	ldrb r0, [r6, #9]	@ 0009f032 707a
.org 0x9f034
	lsls r0, r0, #2	@ 0009f034 8000
.org 0x9f036
	adds r0, r0, r1	@ 0009f036 4018
.org 0x9f038
	str r5, [r6, #12]	@ 0009f038 f560
.org 0x9f03a
	ldr r0, [r0, #0]	@ 0009f03a 0068
.org 0x9f03c
	ldr r0, [r0, #4]	@ 0009f03c 4068
.org 0x9f03e
	str r0, [r6, #20]	@ 0009f03e 7061
.org 0x9f040
	ldrb r0, [r6, #16]	@ 0009f040 307c
.org 0x9f042
	cmp r0, #0	@ 0009f042 0028
.org 0x9f044
	bne.n 0x9f05c	@ 0009f044 0ad1
.org 0x9f046
	ldr r0, [r6, #84]	@ 0009f046 706d
.org 0x9f048
	ldr r1, [r6, #88]	@ 0009f048 b16d
.org 0x9f04a
	bl 0x8868	@ 0009f04a 69f70dfc
.org 0x9f04e
	b.n 0x9f064	@ 0009f04e 09e0
.org 0x9f050
	.byte 0x44,0x17,0x86,0x08	@ 0009f050 data
.org 0x9f054
	.byte 0xf9,0xf1,0x09,0x08	@ 0009f054 data
.org 0x9f058
	.byte 0x40,0xdb,0x85,0x08	@ 0009f058 data
.org 0x9f05c
	ldr r0, [r6, #84]	@ 0009f05c 706d
.org 0x9f05e
	ldr r1, [r6, #88]	@ 0009f05e b16d
.org 0x9f060
	bl 0x8988	@ 0009f060 69f792fc
.org 0x9f064
	str r0, [r6, #84]	@ 0009f064 7065
.org 0x9f066
	movs r0, #0	@ 0009f066 0020
.org 0x9f068
	strb r0, [r6, #13]	@ 0009f068 7073
.org 0x9f06a
	strb r0, [r6, #14]	@ 0009f06a b073
.org 0x9f06c
	strb r0, [r6, #18]	@ 0009f06c b074
.org 0x9f06e
	adds r1, r6, #0	@ 0009f06e 311c
.org 0x9f070
	adds r1, #184	@ 0009f070 b831
.org 0x9f072
	strb r0, [r1, #0]	@ 0009f072 0870
.org 0x9f074
	adds r1, #1	@ 0009f074 0131
.org 0x9f076
	strb r0, [r1, #0]	@ 0009f076 0870
.org 0x9f078
	adds r1, #7	@ 0009f078 0731
.org 0x9f07a
	str r0, [r1, #0]	@ 0009f07a 0860
