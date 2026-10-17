@ FUN_080d60e8  entry 0x080d60e8  size 236
.thumb
.org 0xd60e8
FUN_080d60e8:
	push {r4, r5, r6, r7, lr}	@ 000d60e8 f0b5
.org 0xd60ea
	mov r7, sl	@ 000d60ea 5746
.org 0xd60ec
	mov r6, r9	@ 000d60ec 4e46
.org 0xd60ee
	mov r5, r8	@ 000d60ee 4546
.org 0xd60f0
	push {r5, r6, r7}	@ 000d60f0 e0b4
.org 0xd60f2
	sub sp, #8	@ 000d60f2 82b0
.org 0xd60f4
	adds r5, r0, #0	@ 000d60f4 051c
.org 0xd60f6
	adds r0, r1, #0	@ 000d60f6 081c
.org 0xd60f8
	lsls r3, r3, #24	@ 000d60f8 1b06
.org 0xd60fa
	lsrs r3, r3, #24	@ 000d60fa 1b0e
.org 0xd60fc
	mov r8, r3	@ 000d60fc 9846
.org 0xd60fe
	movs r1, #255	@ 000d60fe ff21
.org 0xd6100
	lsls r1, r1, #8	@ 000d6100 0902
.org 0xd6102
	str r1, [sp, #0]	@ 000d6102 0091
.org 0xd6104
	cmp r3, #0	@ 000d6104 002b
.org 0xd6106
	beq.n 0xd610c	@ 000d6106 01d0
.org 0xd6108
	movs r7, #255	@ 000d6108 ff27
.org 0xd610a
	str r7, [sp, #0]	@ 000d610a 0097
.org 0xd610c
	ldr r1, [r2, #0]	@ 000d610c 1168
.org 0xd610e
	str r1, [sp, #4]	@ 000d610e 0191
.org 0xd6110
	ldr r4, [r0, #0]	@ 000d6110 0468
.org 0xd6112
	cmp r1, r4	@ 000d6112 a142
.org 0xd6114
	ble.n 0xd611c	@ 000d6114 02dd
.org 0xd6116
	subs r6, r1, r4	@ 000d6116 0e1b
.org 0xd6118
	movs r7, #1	@ 000d6118 0127
.org 0xd611a
	b.n 0xd6124	@ 000d611a 03e0
.org 0xd611c
	ldr r1, [sp, #4]	@ 000d611c 0199
.org 0xd611e
	subs r6, r4, r1	@ 000d611e 661a
.org 0xd6120
	movs r7, #1	@ 000d6120 0127
.org 0xd6122
	negs r7, r7	@ 000d6122 7f42
.org 0xd6124
	mov sl, r7	@ 000d6124 ba46
.org 0xd6126
	ldr r1, [r2, #4]	@ 000d6126 5168
.org 0xd6128
	ldr r0, [r0, #4]	@ 000d6128 4068
.org 0xd612a
	subs r2, r1, r0	@ 000d612a 0a1a
.org 0xd612c
	mov ip, r2	@ 000d612c 9446
.org 0xd612e
	adds r2, r4, #0	@ 000d612e 221c
.org 0xd6130
	adds r4, r0, #0	@ 000d6130 041c
.org 0xd6132
	mov r9, r1	@ 000d6132 8946
.org 0xd6134
	cmp ip, r6	@ 000d6134 b445
.org 0xd6136
	ble.n 0xd617c	@ 000d6136 21dd
.org 0xd6138
	mov r3, ip	@ 000d6138 6346
.org 0xd613a
	lsls r0, r4, #1	@ 000d613a 6000
.org 0xd613c
	adds r5, r0, r5	@ 000d613c 4519
.org 0xd613e
	cmp r4, #0	@ 000d613e 002c
.org 0xd6140
	blt.n 0xd6168	@ 000d6140 12db
.org 0xd6142
	cmp r4, #159	@ 000d6142 9f2c
.org 0xd6144
	bgt.n 0xd61c4	@ 000d6144 3edc
.org 0xd6146
	cmp r2, #0	@ 000d6146 002a
.org 0xd6148
	bge.n 0xd614e	@ 000d6148 01da
.org 0xd614a
	movs r1, #0	@ 000d614a 0021
.org 0xd614c
	b.n 0xd615a	@ 000d614c 05e0
.org 0xd614e
	cmp r2, #240	@ 000d614e f02a
.org 0xd6150
	ble.n 0xd6156	@ 000d6150 01dd
.org 0xd6152
	movs r1, #240	@ 000d6152 f021
.org 0xd6154
	b.n 0xd615a	@ 000d6154 01e0
.org 0xd6156
	lsls r0, r2, #24	@ 000d6156 1006
.org 0xd6158
	lsrs r1, r0, #24	@ 000d6158 010e
.org 0xd615a
	ldrh r0, [r5, #0]	@ 000d615a 2888
.org 0xd615c
	ldr r7, [sp, #0]	@ 000d615c 009f
.org 0xd615e
	ands r0, r7	@ 000d615e 3840
.org 0xd6160
	mov r7, r8	@ 000d6160 4746
.org 0xd6162
	lsls r1, r7	@ 000d6162 b940
.org 0xd6164
	orrs r0, r1	@ 000d6164 0843
.org 0xd6166
	strh r0, [r5, #0]	@ 000d6166 2880
.org 0xd6168
	subs r3, r3, r6	@ 000d6168 9b1b
.org 0xd616a
	cmp r3, #0	@ 000d616a 002b
.org 0xd616c
	bgt.n 0xd6172	@ 000d616c 01dc
.org 0xd616e
	add r2, sl	@ 000d616e 5244
.org 0xd6170
	add r3, ip	@ 000d6170 6344
.org 0xd6172
	cmp r4, r9	@ 000d6172 4c45
.org 0xd6174
	beq.n 0xd61c4	@ 000d6174 26d0
.org 0xd6176
	adds r5, #2	@ 000d6176 0235
.org 0xd6178
	adds r4, #1	@ 000d6178 0134
.org 0xd617a
	b.n 0xd613e	@ 000d617a e0e7
.org 0xd617c
	adds r3, r6, #0	@ 000d617c 331c
.org 0xd617e
	lsls r0, r4, #1	@ 000d617e 6000
.org 0xd6180
	adds r5, r0, r5	@ 000d6180 4519
.org 0xd6182
	cmp r4, #0	@ 000d6182 002c
.org 0xd6184
	blt.n 0xd61ac	@ 000d6184 12db
.org 0xd6186
	cmp r4, #159	@ 000d6186 9f2c
.org 0xd6188
	bgt.n 0xd61c4	@ 000d6188 1cdc
.org 0xd618a
	cmp r2, #0	@ 000d618a 002a
.org 0xd618c
	bge.n 0xd6192	@ 000d618c 01da
.org 0xd618e
	movs r1, #0	@ 000d618e 0021
.org 0xd6190
	b.n 0xd619e	@ 000d6190 05e0
.org 0xd6192
	cmp r2, #240	@ 000d6192 f02a
.org 0xd6194
	ble.n 0xd619a	@ 000d6194 01dd
.org 0xd6196
	movs r1, #240	@ 000d6196 f021
.org 0xd6198
	b.n 0xd619e	@ 000d6198 01e0
.org 0xd619a
	lsls r0, r2, #24	@ 000d619a 1006
.org 0xd619c
	lsrs r1, r0, #24	@ 000d619c 010e
.org 0xd619e
	ldrh r0, [r5, #0]	@ 000d619e 2888
.org 0xd61a0
	ldr r7, [sp, #0]	@ 000d61a0 009f
.org 0xd61a2
	ands r0, r7	@ 000d61a2 3840
.org 0xd61a4
	mov r7, r8	@ 000d61a4 4746
.org 0xd61a6
	lsls r1, r7	@ 000d61a6 b940
.org 0xd61a8
	orrs r0, r1	@ 000d61a8 0843
.org 0xd61aa
	strh r0, [r5, #0]	@ 000d61aa 2880
.org 0xd61ac
	mov r0, ip	@ 000d61ac 6046
.org 0xd61ae
	subs r3, r3, r0	@ 000d61ae 1b1a
.org 0xd61b0
	cmp r3, #0	@ 000d61b0 002b
.org 0xd61b2
	bgt.n 0xd61ba	@ 000d61b2 02dc
.org 0xd61b4
	adds r5, #2	@ 000d61b4 0235
.org 0xd61b6
	adds r4, #1	@ 000d61b6 0134
.org 0xd61b8
	adds r3, r3, r6	@ 000d61b8 9b19
.org 0xd61ba
	ldr r1, [sp, #4]	@ 000d61ba 0199
.org 0xd61bc
	cmp r2, r1	@ 000d61bc 8a42
.org 0xd61be
	beq.n 0xd61c4	@ 000d61be 01d0
.org 0xd61c0
	add r2, sl	@ 000d61c0 5244
.org 0xd61c2
	b.n 0xd6182	@ 000d61c2 dee7
.org 0xd61c4
	add sp, #8	@ 000d61c4 02b0
.org 0xd61c6
	pop {r3, r4, r5}	@ 000d61c6 38bc
.org 0xd61c8
	mov r8, r3	@ 000d61c8 9846
.org 0xd61ca
	mov r9, r4	@ 000d61ca a146
.org 0xd61cc
	mov sl, r5	@ 000d61cc aa46
.org 0xd61ce
	pop {r4, r5, r6, r7}	@ 000d61ce f0bc
.org 0xd61d0
	pop {r0}	@ 000d61d0 01bc
.org 0xd61d2
	bx r0	@ 000d61d2 0047
