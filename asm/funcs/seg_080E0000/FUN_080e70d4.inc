@ FUN_080e70d4  entry 0x080e70d4  size 138
.thumb
.org 0xe70d4
FUN_080e70d4:
	push {r4, r5, r6, r7, lr}	@ 000e70d4 f0b5
.org 0xe70d6
	adds r6, r0, #0	@ 000e70d6 061c
.org 0xe70d8
	lsls r4, r1, #16	@ 000e70d8 0c04
.org 0xe70da
	lsrs r7, r4, #16	@ 000e70da 270c
.org 0xe70dc
	lsls r2, r2, #24	@ 000e70dc 1206
.org 0xe70de
	lsrs r5, r2, #24	@ 000e70de 150e
.org 0xe70e0
	ldr r0, [pc, #76]	@ 000e70e0 1348
.org 0xe70e2
	ldr r0, [r0, #0]	@ 000e70e2 0068
.org 0xe70e4
	bl 0x5500	@ 000e70e4 1ef70cfa
.org 0xe70e8
	adds r3, r0, #0	@ 000e70e8 031c
.org 0xe70ea
	cmp r3, #0	@ 000e70ea 002b
.org 0xe70ec
	beq.n 0xe7160	@ 000e70ec 38d0
.org 0xe70ee
	adds r1, r3, #0	@ 000e70ee 191c
.org 0xe70f0
	adds r1, #37	@ 000e70f0 2531
.org 0xe70f2
	movs r2, #0	@ 000e70f2 0022
.org 0xe70f4
	movs r0, #1	@ 000e70f4 0120
.org 0xe70f6
	strb r0, [r1, #0]	@ 000e70f6 0870
.org 0xe70f8
	ldr r0, [pc, #56]	@ 000e70f8 0e48
.org 0xe70fa
	movs r1, #83	@ 000e70fa 5321
.org 0xe70fc
	strb r1, [r3, #9]	@ 000e70fc 5972
.org 0xe70fe
	adds r1, #249	@ 000e70fe f931
.org 0xe7100
	adds r0, r0, r1	@ 000e7100 4018
.org 0xe7102
	ldr r0, [r0, #0]	@ 000e7102 0068
.org 0xe7104
	ldr r0, [r0, #0]	@ 000e7104 0068
.org 0xe7106
	str r0, [r3, #20]	@ 000e7106 5861
.org 0xe7108
	movs r0, #0	@ 000e7108 0020
.org 0xe710a
	strh r2, [r3, #32]	@ 000e710a 1a84
.org 0xe710c
	adds r1, r3, #0	@ 000e710c 191c
.org 0xe710e
	adds r1, #34	@ 000e710e 2231
.org 0xe7110
	strb r0, [r1, #0]	@ 000e7110 0870
.org 0xe7112
	ldr r0, [r6, #0]	@ 000e7112 3068
.org 0xe7114
	ldr r1, [r6, #4]	@ 000e7114 7168
.org 0xe7116
	str r0, [r3, #84]	@ 000e7116 5865
.org 0xe7118
	str r1, [r3, #88]	@ 000e7118 9965
.org 0xe711a
	lsrs r0, r4, #24	@ 000e711a 200e
.org 0xe711c
	strb r0, [r3, #16]	@ 000e711c 1874
.org 0xe711e
	strb r7, [r3, #17]	@ 000e711e 5f74
.org 0xe7120
	adds r2, r5, #0	@ 000e7120 2a1c
.org 0xe7122
	cmp r2, #0	@ 000e7122 002a
.org 0xe7124
	beq.n 0xe7138	@ 000e7124 08d0
.org 0xe7126
	ldrb r0, [r3, #10]	@ 000e7126 987a
.org 0xe7128
	movs r1, #16	@ 000e7128 1021
.org 0xe712a
	orrs r0, r1	@ 000e712a 0843
.org 0xe712c
	b.n 0xe713e	@ 000e712c 07e0
.org 0xe712e
	.byte 0x00	@ 000e712e data
.org 0xe712f
	.byte 0x00	@ 000e712f data
.org 0xe7130
	.byte 0x9c,0xed,0x02,0x02	@ 000e7130 data
.org 0xe7134
	.byte 0x64,0x6f,0x86,0x08	@ 000e7134 data
.org 0xe7138
	ldrb r1, [r3, #10]	@ 000e7138 997a
.org 0xe713a
	movs r0, #239	@ 000e713a ef20
.org 0xe713c
	ands r0, r1	@ 000e713c 0840
.org 0xe713e
	strb r0, [r3, #10]	@ 000e713e 9872
.org 0xe7140
	movs r1, #1	@ 000e7140 0121
.org 0xe7142
	ands r1, r2	@ 000e7142 1140
.org 0xe7144
	adds r0, r3, #0	@ 000e7144 181c
.org 0xe7146
	adds r0, #76	@ 000e7146 4c30
.org 0xe7148
	strb r1, [r0, #0]	@ 000e7148 0170
.org 0xe714a
	movs r0, #74	@ 000e714a 4a20
.org 0xe714c
	adds r0, r0, r3	@ 000e714c c018
.org 0xe714e
	mov ip, r0	@ 000e714e 8446
.org 0xe7150
	lsls r1, r1, #4	@ 000e7150 0901
.org 0xe7152
	ldrb r2, [r0, #0]	@ 000e7152 0278
.org 0xe7154
	movs r0, #17	@ 000e7154 1120
.org 0xe7156
	negs r0, r0	@ 000e7156 4042
.org 0xe7158
	ands r0, r2	@ 000e7158 1040
.org 0xe715a
	orrs r0, r1	@ 000e715a 0843
.org 0xe715c
	mov r1, ip	@ 000e715c 6146
