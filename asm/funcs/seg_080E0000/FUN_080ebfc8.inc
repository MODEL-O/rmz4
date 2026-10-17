@ FUN_080ebfc8  entry 0x080ebfc8  size 402
.thumb
.org 0xebfc8
FUN_080ebfc8:
	push {r4, r5, r6, r7, lr}	@ 000ebfc8 f0b5
.org 0xebfca
	mov r7, r9	@ 000ebfca 4f46
.org 0xebfcc
	mov r6, r8	@ 000ebfcc 4646
.org 0xebfce
	push {r6, r7}	@ 000ebfce c0b4
.org 0xebfd0
	adds r5, r0, #0	@ 000ebfd0 051c
.org 0xebfd2
	movs r7, #0	@ 000ebfd2 0027
.org 0xebfd4
	movs r4, #0	@ 000ebfd4 0024
.org 0xebfd6
	bl 0x1cff0	@ 000ebfd6 31f70bf8
.org 0xebfda
	ldrb r0, [r5, #18]	@ 000ebfda a87c
.org 0xebfdc
	cmp r0, #0	@ 000ebfdc 0028
.org 0xebfde
	beq.n 0xebfe6	@ 000ebfde 02d0
.org 0xebfe0
	subs r0, #1	@ 000ebfe0 0138
.org 0xebfe2
	strb r0, [r5, #18]	@ 000ebfe2 a874
.org 0xebfe4
	b.n 0xec168	@ 000ebfe4 c0e0
.org 0xebfe6
	ldr r0, [r5, #84]	@ 000ebfe6 686d
.org 0xebfe8
	mov r8, r0	@ 000ebfe8 8046
.org 0xebfea
	ldr r6, [r5, #88]	@ 000ebfea ae6d
.org 0xebfec
	ldr r1, [pc, #128]	@ 000ebfec 2049
.org 0xebfee
	adds r1, r1, r6	@ 000ebfee 8919
.org 0xebff0
	mov r9, r1	@ 000ebff0 8946
.org 0xebff2
	ldrb r0, [r5, #16]	@ 000ebff2 287c
.org 0xebff4
	cmp r0, #1	@ 000ebff4 0128
.org 0xebff6
	bne.n 0xec066	@ 000ebff6 36d1
.org 0xebff8
	ldr r2, [pc, #120]	@ 000ebff8 1e4a
.org 0xebffa
	adds r1, r6, r2	@ 000ebffa b118
.org 0xebffc
	mov r0, r8	@ 000ebffc 4046
.org 0xebffe
	bl 0xc66c	@ 000ebffe 20f735fb
.org 0xec002
	lsls r0, r0, #16	@ 000ec002 0004
.org 0xec004
	cmp r0, #0	@ 000ec004 0028
.org 0xec006
	beq.n 0xec00c	@ 000ec006 01d0
.org 0xec008
	movs r7, #1	@ 000ec008 0127
.org 0xec00a
	movs r4, #1	@ 000ec00a 0124
.org 0xec00c
	movs r0, #128	@ 000ec00c 8020
.org 0xec00e
	lsls r0, r0, #5	@ 000ec00e 4001
.org 0xec010
	add r0, r8	@ 000ec010 4044
.org 0xec012
	mov r1, r9	@ 000ec012 4946
.org 0xec014
	bl 0xc66c	@ 000ec014 20f72afb
.org 0xec018
	lsls r0, r0, #16	@ 000ec018 0004
.org 0xec01a
	cmp r0, #0	@ 000ec01a 0028
.org 0xec01c
	beq.n 0xec028	@ 000ec01c 04d0
.org 0xec01e
	adds r0, r7, #1	@ 000ec01e 781c
.org 0xec020
	lsls r0, r0, #24	@ 000ec020 0006
.org 0xec022
	lsrs r7, r0, #24	@ 000ec022 070e
.org 0xec024
	movs r0, #2	@ 000ec024 0220
.org 0xec026
	orrs r4, r0	@ 000ec026 0443
.org 0xec028
	movs r0, #128	@ 000ec028 8020
.org 0xec02a
	lsls r0, r0, #4	@ 000ec02a 0001
.org 0xec02c
	adds r1, r6, r0	@ 000ec02c 3118
.org 0xec02e
	mov r0, r8	@ 000ec02e 4046
.org 0xec030
	bl 0xc66c	@ 000ec030 20f71cfb
.org 0xec034
	lsls r0, r0, #16	@ 000ec034 0004
.org 0xec036
	cmp r0, #0	@ 000ec036 0028
.org 0xec038
	beq.n 0xec048	@ 000ec038 06d0
.org 0xec03a
	adds r0, r7, #1	@ 000ec03a 781c
.org 0xec03c
	lsls r0, r0, #24	@ 000ec03c 0006
.org 0xec03e
	lsrs r7, r0, #24	@ 000ec03e 070e
.org 0xec040
	movs r0, #4	@ 000ec040 0420
.org 0xec042
	orrs r4, r0	@ 000ec042 0443
.org 0xec044
	lsls r0, r4, #24	@ 000ec044 2006
.org 0xec046
	lsrs r4, r0, #24	@ 000ec046 040e
.org 0xec048
	ldr r0, [pc, #44]	@ 000ec048 0b48
.org 0xec04a
	add r0, r8	@ 000ec04a 4044
.org 0xec04c
	mov r1, r9	@ 000ec04c 4946
.org 0xec04e
	bl 0xc66c	@ 000ec04e 20f70dfb
.org 0xec052
	lsls r0, r0, #16	@ 000ec052 0004
.org 0xec054
	cmp r0, #0	@ 000ec054 0028
.org 0xec056
	beq.n 0xec066	@ 000ec056 06d0
.org 0xec058
	adds r0, r7, #1	@ 000ec058 781c
.org 0xec05a
	lsls r0, r0, #24	@ 000ec05a 0006
.org 0xec05c
	lsrs r7, r0, #24	@ 000ec05c 070e
.org 0xec05e
	movs r0, #8	@ 000ec05e 0820
.org 0xec060
	orrs r4, r0	@ 000ec060 0443
.org 0xec062
	lsls r0, r4, #24	@ 000ec062 2006
.org 0xec064
	lsrs r4, r0, #24	@ 000ec064 040e
.org 0xec066
	cmp r7, #0	@ 000ec066 002f
.org 0xec068
	bne.n 0xec07c	@ 000ec068 08d1
.org 0xec06a
	movs r0, #0	@ 000ec06a 0020
.org 0xec06c
	b.n 0xec16a	@ 000ec06c 7de0
.org 0xec06e
	.byte 0x00	@ 000ec06e data
.org 0xec06f
	.byte 0x00	@ 000ec06f data
.org 0xec070
	.byte 0x00,0xf8,0xff,0xff	@ 000ec070 data
.org 0xec074
	.byte 0x00,0xe8,0xff,0xff	@ 000ec074 data
.org 0xec078
	.byte 0x00,0xf0,0xff,0xff	@ 000ec078 data
.org 0xec07c
	ldr r0, [pc, #44]	@ 000ec07c 0b48
.org 0xec07e
	ldr r0, [r0, #0]	@ 000ec07e 0068
.org 0xec080
	movs r2, #10	@ 000ec080 0a22
.org 0xec082
	ldrsh r1, [r0, r2]	@ 000ec082 815e
.org 0xec084
	ldr r0, [pc, #40]	@ 000ec084 0a48
.org 0xec086
	ldr r0, [r0, #0]	@ 000ec086 0068
.org 0xec088
	movs r2, #10	@ 000ec088 0a22
.org 0xec08a
	ldrsh r0, [r0, r2]	@ 000ec08a 805e
.org 0xec08c
	adds r1, r1, r0	@ 000ec08c 0918
.org 0xec08e
	subs r0, r7, #1	@ 000ec08e 781e
.org 0xec090
	cmp r1, r0	@ 000ec090 8142
.org 0xec092
	blt.n 0xec168	@ 000ec092 69db
.org 0xec094
	movs r0, #1	@ 000ec094 0120
.org 0xec096
	ands r0, r4	@ 000ec096 2040
.org 0xec098
	cmp r0, #0	@ 000ec098 0028
.org 0xec09a
	beq.n 0xec0b8	@ 000ec09a 0dd0
.org 0xec09c
	ldr r0, [r5, #88]	@ 000ec09c a86d
.org 0xec09e
	ldr r1, [pc, #20]	@ 000ec09e 0549
.org 0xec0a0
	adds r0, r0, r1	@ 000ec0a0 4018
.org 0xec0a2
	str r0, [r5, #88]	@ 000ec0a2 a865
.org 0xec0a4
	movs r0, #1	@ 000ec0a4 0120
.org 0xec0a6
	eors r4, r0	@ 000ec0a6 4440
.org 0xec0a8
	b.n 0xec0fc	@ 000ec0a8 28e0
.org 0xec0aa
	.byte 0x00	@ 000ec0aa data
.org 0xec0ab
	.byte 0x00	@ 000ec0ab data
.org 0xec0ac
	.byte 0xa0,0xed,0x02,0x02	@ 000ec0ac data
.org 0xec0b0
	.byte 0x9c,0xed,0x02,0x02	@ 000ec0b0 data
.org 0xec0b4
	.byte 0x00,0xf0,0xff,0xff	@ 000ec0b4 data
.org 0xec0b8
	movs r0, #2	@ 000ec0b8 0220
.org 0xec0ba
	ands r0, r4	@ 000ec0ba 2040
.org 0xec0bc
	cmp r0, #0	@ 000ec0bc 0028
.org 0xec0be
	beq.n 0xec0ce	@ 000ec0be 06d0
.org 0xec0c0
	ldr r0, [r5, #84]	@ 000ec0c0 686d
.org 0xec0c2
	movs r2, #128	@ 000ec0c2 8022
.org 0xec0c4
	lsls r2, r2, #5	@ 000ec0c4 5201
.org 0xec0c6
	adds r0, r0, r2	@ 000ec0c6 8018
.org 0xec0c8
	str r0, [r5, #84]	@ 000ec0c8 6865
.org 0xec0ca
	movs r0, #2	@ 000ec0ca 0220
.org 0xec0cc
	b.n 0xec0f6	@ 000ec0cc 13e0
.org 0xec0ce
	movs r0, #4	@ 000ec0ce 0420
.org 0xec0d0
	ands r0, r4	@ 000ec0d0 2040
.org 0xec0d2
	cmp r0, #0	@ 000ec0d2 0028
.org 0xec0d4
	beq.n 0xec0e4	@ 000ec0d4 06d0
.org 0xec0d6
	ldr r0, [r5, #88]	@ 000ec0d6 a86d
.org 0xec0d8
	movs r1, #128	@ 000ec0d8 8021
.org 0xec0da
	lsls r1, r1, #5	@ 000ec0da 4901
.org 0xec0dc
	adds r0, r0, r1	@ 000ec0dc 4018
.org 0xec0de
	str r0, [r5, #88]	@ 000ec0de a865
.org 0xec0e0
	movs r0, #4	@ 000ec0e0 0420
.org 0xec0e2
	b.n 0xec0f6	@ 000ec0e2 08e0
.org 0xec0e4
	movs r0, #8	@ 000ec0e4 0820
.org 0xec0e6
	ands r0, r4	@ 000ec0e6 2040
.org 0xec0e8
	cmp r0, #0	@ 000ec0e8 0028
.org 0xec0ea
	beq.n 0xec0fc	@ 000ec0ea 07d0
.org 0xec0ec
	ldr r0, [r5, #84]	@ 000ec0ec 686d
.org 0xec0ee
	ldr r2, [pc, #136]	@ 000ec0ee 224a
.org 0xec0f0
	adds r0, r0, r2	@ 000ec0f0 8018
.org 0xec0f2
	str r0, [r5, #84]	@ 000ec0f2 6865
.org 0xec0f4
	movs r0, #8	@ 000ec0f4 0820
.org 0xec0f6
	eors r4, r0	@ 000ec0f6 4440
.org 0xec0f8
	lsls r0, r4, #24	@ 000ec0f8 2006
.org 0xec0fa
	lsrs r4, r0, #24	@ 000ec0fa 040e
.org 0xec0fc
	ldrb r0, [r5, #16]	@ 000ec0fc 287c
.org 0xec0fe
	cmp r0, #1	@ 000ec0fe 0128
.org 0xec100
	bne.n 0xec10e	@ 000ec100 05d1
.org 0xec102
	ldr r0, [r5, #84]	@ 000ec102 686d
.org 0xec104
	ldr r1, [r5, #88]	@ 000ec104 a96d
.org 0xec106
	ldr r2, [pc, #116]	@ 000ec106 1d4a
.org 0xec108
	adds r1, r1, r2	@ 000ec108 8918
.org 0xec10a
	bl 0xc6d8	@ 000ec10a 20f7e5fa
.org 0xec10e
	movs r0, #1	@ 000ec10e 0120
.org 0xec110
	ands r0, r4	@ 000ec110 2040
.org 0xec112
	cmp r0, #0	@ 000ec112 0028
.org 0xec114
	beq.n 0xec122	@ 000ec114 05d0
.org 0xec116
	ldr r2, [pc, #96]	@ 000ec116 184a
.org 0xec118
	add r2, r9	@ 000ec118 4a44
.org 0xec11a
	adds r0, r5, #0	@ 000ec11a 281c
.org 0xec11c
	mov r1, r8	@ 000ec11c 4146
.org 0xec11e
	bl 0xebe6c	@ 000ec11e fff7a5fe
.org 0xec122
	movs r0, #2	@ 000ec122 0220
.org 0xec124
	ands r0, r4	@ 000ec124 2040
.org 0xec126
	cmp r0, #0	@ 000ec126 0028
.org 0xec128
	beq.n 0xec138	@ 000ec128 06d0
.org 0xec12a
	movs r1, #128	@ 000ec12a 8021
.org 0xec12c
	lsls r1, r1, #5	@ 000ec12c 4901
.org 0xec12e
	add r1, r8	@ 000ec12e 4144
.org 0xec130
	adds r0, r5, #0	@ 000ec130 281c
.org 0xec132
	mov r2, r9	@ 000ec132 4a46
.org 0xec134
	bl 0xebe6c	@ 000ec134 fff79afe
.org 0xec138
	movs r0, #4	@ 000ec138 0420
.org 0xec13a
	ands r0, r4	@ 000ec13a 2040
.org 0xec13c
	cmp r0, #0	@ 000ec13c 0028
.org 0xec13e
	beq.n 0xec14e	@ 000ec13e 06d0
.org 0xec140
	movs r2, #128	@ 000ec140 8022
.org 0xec142
	lsls r2, r2, #5	@ 000ec142 5201
.org 0xec144
	add r2, r9	@ 000ec144 4a44
.org 0xec146
	adds r0, r5, #0	@ 000ec146 281c
.org 0xec148
	mov r1, r8	@ 000ec148 4146
.org 0xec14a
	bl 0xebe6c	@ 000ec14a fff78ffe
.org 0xec14e
	movs r0, #8	@ 000ec14e 0820
.org 0xec150
	ands r4, r0	@ 000ec150 0440
.org 0xec152
	cmp r4, #0	@ 000ec152 002c
.org 0xec154
	beq.n 0xec162	@ 000ec154 05d0
.org 0xec156
	ldr r1, [pc, #32]	@ 000ec156 0849
.org 0xec158
	add r1, r8	@ 000ec158 4144
