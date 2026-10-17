@ FUN_0801ce54  entry 0x0801ce54  size 144
.thumb
.org 0x1ce54
FUN_0801ce54:
	push {r4, r5, r6, lr}	@ 0001ce54 70b5
.org 0x1ce56
	adds r6, r0, #0	@ 0001ce56 061c
.org 0x1ce58
	adds r4, r6, #0	@ 0001ce58 341c
.org 0x1ce5a
	adds r4, #52	@ 0001ce5a 3434
.org 0x1ce5c
	adds r0, #108	@ 0001ce5c 6c30
.org 0x1ce5e
	ldr r1, [pc, #132]	@ 0001ce5e 2149
.org 0x1ce60
	ldr r1, [r1, #0]	@ 0001ce60 0968
.org 0x1ce62
	bl 0x34a4	@ 0001ce62 e6f71ffb
.org 0x1ce66
	ldr r0, [pc, #128]	@ 0001ce66 2048
.org 0x1ce68
	ldr r1, [r0, #0]	@ 0001ce68 0168
.org 0x1ce6a
	adds r2, r6, #0	@ 0001ce6a 321c
.org 0x1ce6c
	adds r2, #84	@ 0001ce6c 5432
.org 0x1ce6e
	adds r0, r4, #0	@ 0001ce6e 201c
.org 0x1ce70
	bl 0x2e0c	@ 0001ce70 e5f7ccff
.org 0x1ce74
	ldrb r0, [r6, #10]	@ 0001ce74 b07a
.org 0x1ce76
	lsrs r0, r0, #4	@ 0001ce76 0009
.org 0x1ce78
	movs r3, #1	@ 0001ce78 0123
.org 0x1ce7a
	ands r0, r3	@ 0001ce7a 1840
.org 0x1ce7c
	movs r5, #0	@ 0001ce7c 0025
.org 0x1ce7e
	strb r0, [r4, #24]	@ 0001ce7e 2076
.org 0x1ce80
	ldrb r0, [r6, #10]	@ 0001ce80 b07a
.org 0x1ce82
	lsrs r0, r0, #4	@ 0001ce82 0009
.org 0x1ce84
	ands r0, r3	@ 0001ce84 1840
.org 0x1ce86
	lsls r0, r0, #4	@ 0001ce86 0001
.org 0x1ce88
	ldrb r2, [r4, #22]	@ 0001ce88 a27d
.org 0x1ce8a
	movs r1, #17	@ 0001ce8a 1121
.org 0x1ce8c
	negs r1, r1	@ 0001ce8c 4942
.org 0x1ce8e
	ands r1, r2	@ 0001ce8e 1140
.org 0x1ce90
	orrs r1, r0	@ 0001ce90 0143
.org 0x1ce92
	strb r1, [r4, #22]	@ 0001ce92 a175
.org 0x1ce94
	ldrb r0, [r6, #10]	@ 0001ce94 b07a
.org 0x1ce96
	lsrs r0, r0, #5	@ 0001ce96 4009
.org 0x1ce98
	ands r0, r3	@ 0001ce98 1840
.org 0x1ce9a
	strb r0, [r4, #25]	@ 0001ce9a 6076
.org 0x1ce9c
	ldrb r0, [r6, #10]	@ 0001ce9c b07a
.org 0x1ce9e
	lsrs r0, r0, #5	@ 0001ce9e 4009
.org 0x1cea0
	ands r0, r3	@ 0001cea0 1840
.org 0x1cea2
	lsls r0, r0, #5	@ 0001cea2 4001
.org 0x1cea4
	movs r2, #33	@ 0001cea4 2122
.org 0x1cea6
	negs r2, r2	@ 0001cea6 5242
.org 0x1cea8
	ands r1, r2	@ 0001cea8 1140
.org 0x1ceaa
	orrs r1, r0	@ 0001ceaa 0143
.org 0x1ceac
	strb r1, [r4, #22]	@ 0001ceac a175
.org 0x1ceae
	movs r0, #255	@ 0001ceae ff20
.org 0x1ceb0
	strb r0, [r6, #30]	@ 0001ceb0 b077
.org 0x1ceb2
	adds r0, r6, #0	@ 0001ceb2 301c
.org 0x1ceb4
	adds r0, #36	@ 0001ceb4 2430
.org 0x1ceb6
	strb r5, [r0, #0]	@ 0001ceb6 0570
.org 0x1ceb8
	movs r0, #128	@ 0001ceb8 8020
.org 0x1ceba
	lsls r0, r0, #1	@ 0001ceba 4000
.org 0x1cebc
	strh r0, [r4, #28]	@ 0001cebc a083
.org 0x1cebe
	strh r0, [r4, #30]	@ 0001cebe e083
.org 0x1cec0
	ldrb r0, [r6, #10]	@ 0001cec0 b07a
.org 0x1cec2
	movs r1, #8	@ 0001cec2 0821
.org 0x1cec4
	orrs r0, r1	@ 0001cec4 0843
.org 0x1cec6
	movs r1, #64	@ 0001cec6 4021
.org 0x1cec8
	orrs r0, r1	@ 0001cec8 0843
.org 0x1ceca
	strb r0, [r6, #10]	@ 0001ceca b072
.org 0x1cecc
	ldrb r0, [r6, #11]	@ 0001cecc f07a
.org 0x1cece
	orrs r3, r0	@ 0001cece 0343
.org 0x1ced0
	movs r0, #253	@ 0001ced0 fd20
.org 0x1ced2
	ands r3, r0	@ 0001ced2 0340
.org 0x1ced4
	movs r0, #251	@ 0001ced4 fb20
.org 0x1ced6
	ands r3, r0	@ 0001ced6 0340
.org 0x1ced8
	movs r0, #223	@ 0001ced8 df20
.org 0x1ceda
	ands r3, r0	@ 0001ceda 0340
.org 0x1cedc
	strb r3, [r6, #11]	@ 0001cedc f372
.org 0x1cede
	pop {r4, r5, r6}	@ 0001cede 70bc
.org 0x1cee0
	pop {r0}	@ 0001cee0 01bc
.org 0x1cee2
	bx r0	@ 0001cee2 0047
