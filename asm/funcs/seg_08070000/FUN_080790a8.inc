@ FUN_080790a8  entry 0x080790a8  size 198
.thumb
.org 0x790a8
FUN_080790a8:
	push {r4, r5, r6, r7, lr}	@ 000790a8 f0b5
.org 0x790aa
	mov r7, r8	@ 000790aa 4746
.org 0x790ac
	push {r7}	@ 000790ac 80b4
.org 0x790ae
	sub sp, #8	@ 000790ae 82b0
.org 0x790b0
	adds r5, r0, #0	@ 000790b0 051c
.org 0x790b2
	ldr r1, [pc, #44]	@ 000790b2 0b49
.org 0x790b4
	mov r0, sp	@ 000790b4 6846
.org 0x790b6
	movs r2, #4	@ 000790b6 0422
.org 0x790b8
	bl 0x129258	@ 000790b8 b0f0cef8
.org 0x790bc
	add r4, sp, #4	@ 000790bc 01ac
.org 0x790be
	ldr r1, [pc, #36]	@ 000790be 0949
.org 0x790c0
	adds r0, r4, #0	@ 000790c0 201c
.org 0x790c2
	movs r2, #4	@ 000790c2 0422
.org 0x790c4
	bl 0x129258	@ 000790c4 b0f0c8f8
.org 0x790c8
	ldr r0, [pc, #28]	@ 000790c8 0748
.org 0x790ca
	ldrh r1, [r0, #8]	@ 000790ca 0189
.org 0x790cc
	movs r0, #8	@ 000790cc 0820
.org 0x790ce
	ands r0, r1	@ 000790ce 0840
.org 0x790d0
	adds r3, r4, #0	@ 000790d0 231c
.org 0x790d2
	cmp r0, #0	@ 000790d2 0028
.org 0x790d4
	beq.n 0x790ec	@ 000790d4 0ad0
.org 0x790d6
	movs r0, #0	@ 000790d6 0020
.org 0x790d8
	strb r0, [r5, #13]	@ 000790d8 6873
.org 0x790da
	strb r0, [r5, #14]	@ 000790da a873
.org 0x790dc
	strb r0, [r5, #15]	@ 000790dc e873
.org 0x790de
	b.n 0x7917c	@ 000790de 4de0
.org 0x790e0
	.byte 0xe4,0x99,0x12,0x08	@ 000790e0 data
.org 0x790e4
	.byte 0xe8,0x99,0x12,0x08	@ 000790e4 data
.org 0x790e8
	.byte 0x10,0xe9,0x02,0x02	@ 000790e8 data
.org 0x790ec
	adds r0, r5, #0	@ 000790ec 281c
.org 0x790ee
	adds r0, #181	@ 000790ee b530
.org 0x790f0
	ldrb r1, [r0, #0]	@ 000790f0 0178
.org 0x790f2
	mov r8, r0	@ 000790f2 8046
.org 0x790f4
	adds r4, r5, #0	@ 000790f4 2c1c
.org 0x790f6
	adds r4, #180	@ 000790f6 b434
.org 0x790f8
	ldr r7, [pc, #20]	@ 000790f8 054f
.org 0x790fa
	cmp r1, #1	@ 000790fa 0129
.org 0x790fc
	bls.n 0x7912a	@ 000790fc 15d9
.org 0x790fe
	ldrb r2, [r4, #0]	@ 000790fe 2278
.org 0x79100
	movs r1, #0	@ 00079100 0021
.org 0x79102
	mov r0, sp	@ 00079102 6846
.org 0x79104
	ldrb r0, [r0, #0]	@ 00079104 0078
.org 0x79106
	cmp r0, r2	@ 00079106 9042
.org 0x79108
	bne.n 0x79114	@ 00079108 04d1
.org 0x7910a
	strb r1, [r3, #0]	@ 0007910a 1970
.org 0x7910c
	b.n 0x7912a	@ 0007910c 0de0
.org 0x7910e
	.byte 0x00	@ 0007910e data
.org 0x7910f
	.byte 0x00	@ 0007910f data
.org 0x79110
	.byte 0xe0,0xe8,0x02,0x02	@ 00079110 data
.org 0x79114
	adds r1, #1	@ 00079114 0131
.org 0x79116
	cmp r1, #3	@ 00079116 0329
.org 0x79118
	bgt.n 0x7912a	@ 00079118 07dc
.org 0x7911a
	mov r6, sp	@ 0007911a 6e46
.org 0x7911c
	adds r0, r6, r1	@ 0007911c 7018
.org 0x7911e
	ldrb r0, [r0, #0]	@ 0007911e 0078
.org 0x79120
	cmp r0, r2	@ 00079120 9042
.org 0x79122
	bne.n 0x79114	@ 00079122 f7d1
.org 0x79124
	adds r1, r3, r1	@ 00079124 5918
.org 0x79126
	movs r0, #0	@ 00079126 0020
.org 0x79128
	strb r0, [r1, #0]	@ 00079128 0870
.org 0x7912a
	ldr r0, [r7, #0]	@ 0007912a 3868
.org 0x7912c
	ldrb r0, [r0, #1]	@ 0007912c 4078
.org 0x7912e
	cmp r0, #4	@ 0007912e 0428
.org 0x79130
	bls.n 0x7913e	@ 00079130 05d9
.org 0x79132
	ldr r0, [pc, #56]	@ 00079132 0e48
.org 0x79134
	ldrb r1, [r0, #4]	@ 00079134 0179
.org 0x79136
	movs r0, #4	@ 00079136 0420
.org 0x79138
	ands r0, r1	@ 00079138 0840
.org 0x7913a
	cmp r0, #0	@ 0007913a 0028
.org 0x7913c
	beq.n 0x79142	@ 0007913c 01d0
.org 0x7913e
	movs r0, #0	@ 0007913e 0020
.org 0x79140
	strb r0, [r3, #3]	@ 00079140 d870
.org 0x79142
	adds r0, r3, #0	@ 00079142 181c
.org 0x79144
	movs r1, #4	@ 00079144 0421
.org 0x79146
	bl 0x792a0	@ 00079146 00f0abf8
.org 0x7914a
	add r0, sp	@ 0007914a 6844
.org 0x7914c
	ldrb r2, [r0, #0]	@ 0007914c 0278
.org 0x7914e
	ldr r0, [pc, #32]	@ 0007914e 0848
.org 0x79150
	adds r0, r2, r0	@ 00079150 1018
.org 0x79152
	ldrb r0, [r0, #0]	@ 00079152 0078
.org 0x79154
	movs r1, #0	@ 00079154 0021
.org 0x79156
	strb r0, [r5, #13]	@ 00079156 6873
.org 0x79158
	strb r1, [r5, #14]	@ 00079158 a973
.org 0x7915a
	strb r1, [r5, #15]	@ 0007915a e973
.org 0x7915c
	ldrb r0, [r4, #0]	@ 0007915c 2078
.org 0x7915e
	cmp r2, r0	@ 0007915e 8242
.org 0x79160
	bne.n 0x79174	@ 00079160 08d1
.org 0x79162
	mov r1, r8	@ 00079162 4146
.org 0x79164
	ldrb r0, [r1, #0]	@ 00079164 0878
.org 0x79166
	adds r0, #1	@ 00079166 0130
.org 0x79168
	strb r0, [r1, #0]	@ 00079168 0870
.org 0x7916a
	b.n 0x7917c	@ 0007916a 07e0
.org 0x7916c
	.byte 0xb0,0xe8,0x02,0x02	@ 0007916c data
