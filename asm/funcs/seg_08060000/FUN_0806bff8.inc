@ FUN_0806bff8  entry 0x0806bff8  size 98
.thumb
.org 0x6bff8
FUN_0806bff8:
	push {r4, lr}	@ 0006bff8 10b5
.org 0x6bffa
	adds r4, r0, #0	@ 0006bffa 041c
.org 0x6bffc
	ldrb r0, [r4, #14]	@ 0006bffc a07b
.org 0x6bffe
	cmp r0, #0	@ 0006bffe 0028
.org 0x6c000
	bne.n 0x6c02e	@ 0006c000 15d1
.org 0x6c002
	ldrb r1, [r4, #10]	@ 0006c002 a17a
.org 0x6c004
	movs r0, #16	@ 0006c004 1020
.org 0x6c006
	ands r0, r1	@ 0006c006 0840
.org 0x6c008
	cmp r0, #0	@ 0006c008 0028
.org 0x6c00a
	beq.n 0x6c010	@ 0006c00a 01d0
.org 0x6c00c
	movs r0, #192	@ 0006c00c c020
.org 0x6c00e
	b.n 0x6c014	@ 0006c00e 01e0
.org 0x6c010
	movs r0, #192	@ 0006c010 c020
.org 0x6c012
	negs r0, r0	@ 0006c012 4042
.org 0x6c014
	str r0, [r4, #92]	@ 0006c014 e065
.org 0x6c016
	ldr r0, [pc, #68]	@ 0006c016 1148
.org 0x6c018
	str r0, [r4, #96]	@ 0006c018 2066
.org 0x6c01a
	adds r0, r4, #0	@ 0006c01a 201c
.org 0x6c01c
	adds r0, #116	@ 0006c01c 7430
.org 0x6c01e
	ldr r1, [pc, #64]	@ 0006c01e 1049
.org 0x6c020
	bl 0x5784	@ 0006c020 99f7b0fb
.org 0x6c024
	movs r0, #0	@ 0006c024 0020
.org 0x6c026
	strb r0, [r4, #15]	@ 0006c026 e073
.org 0x6c028
	ldrb r0, [r4, #14]	@ 0006c028 a07b
.org 0x6c02a
	adds r0, #1	@ 0006c02a 0130
.org 0x6c02c
	strb r0, [r4, #14]	@ 0006c02c a073
.org 0x6c02e
	adds r0, r4, #0	@ 0006c02e 201c
.org 0x6c030
	bl 0x1cff0	@ 0006c030 b0f7deff
.org 0x6c034
	ldr r0, [r4, #84]	@ 0006c034 606d
.org 0x6c036
	ldr r1, [r4, #92]	@ 0006c036 e16d
.org 0x6c038
	adds r0, r0, r1	@ 0006c038 4018
.org 0x6c03a
	str r0, [r4, #84]	@ 0006c03a 6065
.org 0x6c03c
	ldr r0, [r4, #88]	@ 0006c03c a06d
.org 0x6c03e
	ldr r1, [r4, #96]	@ 0006c03e 216e
.org 0x6c040
	adds r0, r0, r1	@ 0006c040 4018
.org 0x6c042
	str r0, [r4, #88]	@ 0006c042 a065
.org 0x6c044
	adds r1, #64	@ 0006c044 4031
.org 0x6c046
	str r1, [r4, #96]	@ 0006c046 2166
.org 0x6c048
	cmp r1, #0	@ 0006c048 0029
.org 0x6c04a
	ble.n 0x6c054	@ 0006c04a 03dd
.org 0x6c04c
	movs r1, #0	@ 0006c04c 0021
.org 0x6c04e
	movs r0, #17	@ 0006c04e 1120
.org 0x6c050
	strb r0, [r4, #13]	@ 0006c050 6073
.org 0x6c052
	strb r1, [r4, #14]	@ 0006c052 a173
.org 0x6c054
	pop {r4}	@ 0006c054 10bc
.org 0x6c056
	pop {r0}	@ 0006c056 01bc
.org 0x6c058
	bx r0	@ 0006c058 0047
