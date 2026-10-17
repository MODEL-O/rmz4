@ FUN_0802bfe8  entry 0x0802bfe8  size 340
.thumb
.org 0x2bfe8
FUN_0802bfe8:
	push {r4, r5, r6, r7, lr}	@ 0002bfe8 f0b5
.org 0x2bfea
	mov r7, sl	@ 0002bfea 5746
.org 0x2bfec
	mov r6, r9	@ 0002bfec 4e46
.org 0x2bfee
	mov r5, r8	@ 0002bfee 4546
.org 0x2bff0
	push {r5, r6, r7}	@ 0002bff0 e0b4
.org 0x2bff2
	sub sp, #16	@ 0002bff2 84b0
.org 0x2bff4
	mov r9, r0	@ 0002bff4 8146
.org 0x2bff6
	adds r3, r1, #0	@ 0002bff6 0b1c
.org 0x2bff8
	movs r0, #0	@ 0002bff8 0020
.org 0x2bffa
	mov sl, r0	@ 0002bffa 8246
.org 0x2bffc
	movs r1, #2	@ 0002bffc 0221
.org 0x2bffe
	ldrsh r0, [r3, r1]	@ 0002bffe 585e
.org 0x2c000
	mov r2, r9	@ 0002c000 4a46
.org 0x2c002
	ldr r1, [r2, #88]	@ 0002c002 916d
.org 0x2c004
	adds r1, r1, r0	@ 0002c004 0918
.org 0x2c006
	ldrh r0, [r3, #6]	@ 0002c006 d888
.org 0x2c008
	lsls r0, r0, #16	@ 0002c008 0004
.org 0x2c00a
	asrs r0, r0, #17	@ 0002c00a 4014
.org 0x2c00c
	subs r6, r1, r0	@ 0002c00c 0e1a
.org 0x2c00e
	ldrb r1, [r2, #10]	@ 0002c00e 917a
.org 0x2c010
	movs r0, #16	@ 0002c010 1020
.org 0x2c012
	ands r0, r1	@ 0002c012 0840
.org 0x2c014
	cmp r0, #0	@ 0002c014 0028
.org 0x2c016
	beq.n 0x2c034	@ 0002c016 0dd0
.org 0x2c018
	movs r4, #0	@ 0002c018 0024
.org 0x2c01a
	ldrsh r1, [r3, r4]	@ 0002c01a 195f
.org 0x2c01c
	ldr r2, [r2, #84]	@ 0002c01c 526d
.org 0x2c01e
	subs r1, r2, r1	@ 0002c01e 511a
.org 0x2c020
	ldrh r0, [r3, #4]	@ 0002c020 9888
.org 0x2c022
	lsls r0, r0, #16	@ 0002c022 0004
.org 0x2c024
	asrs r0, r0, #17	@ 0002c024 4014
.org 0x2c026
	adds r1, r1, r0	@ 0002c026 0918
.org 0x2c028
	str r1, [sp, #0]	@ 0002c028 0091
.org 0x2c02a
	movs r4, #0	@ 0002c02a 0024
.org 0x2c02c
	ldrsh r1, [r3, r4]	@ 0002c02c 195f
.org 0x2c02e
	subs r2, r2, r1	@ 0002c02e 521a
.org 0x2c030
	subs r2, r2, r0	@ 0002c030 121a
.org 0x2c032
	b.n 0x2c050	@ 0002c032 0de0
.org 0x2c034
	movs r0, #0	@ 0002c034 0020
.org 0x2c036
	ldrsh r1, [r3, r0]	@ 0002c036 195e
.org 0x2c038
	mov r4, r9	@ 0002c038 4c46
.org 0x2c03a
	ldr r2, [r4, #84]	@ 0002c03a 626d
.org 0x2c03c
	adds r1, r2, r1	@ 0002c03c 5118
.org 0x2c03e
	ldrh r0, [r3, #4]	@ 0002c03e 9888
.org 0x2c040
	lsls r0, r0, #16	@ 0002c040 0004
.org 0x2c042
	asrs r0, r0, #17	@ 0002c042 4014
.org 0x2c044
	subs r1, r1, r0	@ 0002c044 091a
.org 0x2c046
	str r1, [sp, #0]	@ 0002c046 0091
.org 0x2c048
	movs r4, #0	@ 0002c048 0024
.org 0x2c04a
	ldrsh r1, [r3, r4]	@ 0002c04a 195f
.org 0x2c04c
	adds r2, r2, r1	@ 0002c04c 5218
.org 0x2c04e
	adds r2, r2, r0	@ 0002c04e 1218
.org 0x2c050
	str r2, [sp, #4]	@ 0002c050 0192
.org 0x2c052
	movs r0, #220	@ 0002c052 dc20
.org 0x2c054
	lsls r0, r0, #1	@ 0002c054 4000
.org 0x2c056
	add r0, r9	@ 0002c056 4844
.org 0x2c058
	ldrb r0, [r0, #0]	@ 0002c058 0078
.org 0x2c05a
	cmp r0, #0	@ 0002c05a 0028
.org 0x2c05c
	beq.n 0x2c0d4	@ 0002c05c 3ad0
.org 0x2c05e
	movs r7, #0	@ 0002c05e 0027
.org 0x2c060
	lsls r0, r7, #2	@ 0002c060 b800
.org 0x2c062
	add r0, sp	@ 0002c062 6844
.org 0x2c064
	ldr r1, [r0, #0]	@ 0002c064 0168
.org 0x2c066
	mov r0, r9	@ 0002c066 4846
.org 0x2c068
	adds r2, r6, #0	@ 0002c068 321c
.org 0x2c06a
	bl 0x2e058	@ 0002c06a 01f0f5ff
.org 0x2c06e
	lsls r0, r0, #16	@ 0002c06e 0004
.org 0x2c070
	lsrs r4, r0, #16	@ 0002c070 040c
.org 0x2c072
	movs r0, #128	@ 0002c072 8020
.org 0x2c074
	lsls r0, r0, #8	@ 0002c074 0002
.org 0x2c076
	adds r1, r0, #0	@ 0002c076 011c
.org 0x2c078
	adds r0, r4, #0	@ 0002c078 201c
.org 0x2c07a
	ands r0, r1	@ 0002c07a 0840
.org 0x2c07c
	cmp r0, #0	@ 0002c07c 0028
.org 0x2c07e
	beq.n 0x2c08c	@ 0002c07e 05d0
.org 0x2c080
	movs r0, #15	@ 0002c080 0f20
.org 0x2c082
	ands r0, r4	@ 0002c082 2040
.org 0x2c084
	cmp r0, #0	@ 0002c084 0028
.org 0x2c086
	beq.n 0x2c08c	@ 0002c086 01d0
.org 0x2c088
	cmp r0, #14	@ 0002c088 0e28
.org 0x2c08a
	bls.n 0x2c0ca	@ 0002c08a 1ed9
.org 0x2c08c
	movs r1, #15	@ 0002c08c 0f21
.org 0x2c08e
	mov r8, r1	@ 0002c08e 8846
.org 0x2c090
	ands r4, r1	@ 0002c090 0c40
.org 0x2c092
	cmp r4, #15	@ 0002c092 0f2c
.org 0x2c094
	beq.n 0x2c0ca	@ 0002c094 19d0
.org 0x2c096
	lsls r0, r7, #2	@ 0002c096 b800
.org 0x2c098
	add r0, sp	@ 0002c098 6844
.org 0x2c09a
	ldr r1, [r0, #0]	@ 0002c09a 0168
.org 0x2c09c
	add r5, sp, #8	@ 0002c09c 02ad
.org 0x2c09e
	mov r0, r9	@ 0002c09e 4846
.org 0x2c0a0
	adds r2, r6, #0	@ 0002c0a0 321c
.org 0x2c0a2
	adds r3, r5, #0	@ 0002c0a2 2b1c
.org 0x2c0a4
	bl 0x2dd54	@ 0002c0a4 01f056fe
.org 0x2c0a8
	lsls r0, r0, #16	@ 0002c0a8 0004
.org 0x2c0aa
	lsrs r4, r0, #16	@ 0002c0aa 040c
.org 0x2c0ac
	adds r0, r4, #0	@ 0002c0ac 201c
.org 0x2c0ae
	mov r2, r8	@ 0002c0ae 4246
.org 0x2c0b0
	ands r0, r2	@ 0002c0b0 1040
.org 0x2c0b2
	cmp r0, #0	@ 0002c0b2 0028
.org 0x2c0b4
	beq.n 0x2c0ca	@ 0002c0b4 09d0
.org 0x2c0b6
	ldr r0, [sp, #0]	@ 0002c0b6 0098
.org 0x2c0b8
	ldr r1, [sp, #8]	@ 0002c0b8 0299
.org 0x2c0ba
	adds r0, r0, r1	@ 0002c0ba 4018
.org 0x2c0bc
	str r0, [sp, #0]	@ 0002c0bc 0090
.org 0x2c0be
	ldr r0, [sp, #4]	@ 0002c0be 0198
.org 0x2c0c0
	adds r0, r0, r1	@ 0002c0c0 4018
.org 0x2c0c2
	str r0, [sp, #4]	@ 0002c0c2 0190
.org 0x2c0c4
	ldr r0, [r5, #4]	@ 0002c0c4 6868
.org 0x2c0c6
	adds r6, r6, r0	@ 0002c0c6 3618
.org 0x2c0c8
	mov sl, r4	@ 0002c0c8 a246
.org 0x2c0ca
	adds r0, r7, #1	@ 0002c0ca 781c
.org 0x2c0cc
	lsls r0, r0, #16	@ 0002c0cc 0004
.org 0x2c0ce
	lsrs r7, r0, #16	@ 0002c0ce 070c
.org 0x2c0d0
	cmp r7, #1	@ 0002c0d0 012f
.org 0x2c0d2
	bls.n 0x2c060	@ 0002c0d2 c5d9
.org 0x2c0d4
	movs r7, #0	@ 0002c0d4 0027
.org 0x2c0d6
	lsls r0, r7, #2	@ 0002c0d6 b800
.org 0x2c0d8
	mov r4, sp	@ 0002c0d8 6c46
.org 0x2c0da
	adds r5, r0, r4	@ 0002c0da 0519
.org 0x2c0dc
	ldr r0, [r5, #0]	@ 0002c0dc 2868
.org 0x2c0de
	adds r1, r6, #0	@ 0002c0de 311c
.org 0x2c0e0
	bl 0x7020	@ 0002c0e0 daf79eff
.org 0x2c0e4
	lsls r0, r0, #16	@ 0002c0e4 0004
.org 0x2c0e6
	lsrs r4, r0, #16	@ 0002c0e6 040c
.org 0x2c0e8
	movs r0, #128	@ 0002c0e8 8020
.org 0x2c0ea
	lsls r0, r0, #3	@ 0002c0ea c000
.org 0x2c0ec
	adds r1, r0, #0	@ 0002c0ec 011c
.org 0x2c0ee
	adds r0, r4, #0	@ 0002c0ee 201c
.org 0x2c0f0
	ands r0, r1	@ 0002c0f0 0840
.org 0x2c0f2
	cmp r0, #0	@ 0002c0f2 0028
.org 0x2c0f4
	bne.n 0x2c120	@ 0002c0f4 14d1
.org 0x2c0f6
	movs r0, #15	@ 0002c0f6 0f20
.org 0x2c0f8
	ands r0, r4	@ 0002c0f8 2040
.org 0x2c0fa
	cmp r0, #1	@ 0002c0fa 0128
.org 0x2c0fc
	bne.n 0x2c120	@ 0002c0fc 10d1
.org 0x2c0fe
	movs r2, #128	@ 0002c0fe 8022
.org 0x2c100
	lsls r2, r2, #8	@ 0002c100 1202
.org 0x2c102
	adds r1, r2, #0	@ 0002c102 111c
.org 0x2c104
	adds r0, r4, #0	@ 0002c104 201c
.org 0x2c106
	ands r0, r1	@ 0002c106 0840
.org 0x2c108
	cmp r0, #0	@ 0002c108 0028
.org 0x2c10a
	bne.n 0x2c120	@ 0002c10a 09d1
.org 0x2c10c
	ldr r0, [r5, #0]	@ 0002c10c 2868
.org 0x2c10e
	adds r1, r6, #0	@ 0002c10e 311c
.org 0x2c110
	bl 0x8080	@ 0002c110 dbf7b6ff
.org 0x2c114
	mov r2, r9	@ 0002c114 4a46
.org 0x2c116
	ldr r1, [r2, #88]	@ 0002c116 916d
.org 0x2c118
	adds r1, r1, r0	@ 0002c118 0918
.org 0x2c11a
	str r1, [r2, #88]	@ 0002c11a 9165
.org 0x2c11c
	adds r6, r6, r0	@ 0002c11c 3618
.org 0x2c11e
	mov sl, r4	@ 0002c11e a246
.org 0x2c120
	adds r0, r7, #1	@ 0002c120 781c
.org 0x2c122
	lsls r0, r0, #16	@ 0002c122 0004
.org 0x2c124
	lsrs r7, r0, #16	@ 0002c124 070c
.org 0x2c126
	cmp r7, #1	@ 0002c126 012f
.org 0x2c128
	bls.n 0x2c0d6	@ 0002c128 d5d9
.org 0x2c12a
	mov r0, sl	@ 0002c12a 5046
.org 0x2c12c
	add sp, #16	@ 0002c12c 04b0
.org 0x2c12e
	pop {r3, r4, r5}	@ 0002c12e 38bc
.org 0x2c130
	mov r8, r3	@ 0002c130 9846
.org 0x2c132
	mov r9, r4	@ 0002c132 a146
.org 0x2c134
	mov sl, r5	@ 0002c134 aa46
.org 0x2c136
	pop {r4, r5, r6, r7}	@ 0002c136 f0bc
.org 0x2c138
	pop {r1}	@ 0002c138 02bc
.org 0x2c13a
	bx r1	@ 0002c13a 0847
