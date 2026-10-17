@ FUN_0800613c  entry 0x0800613c  size 172
.thumb
.org 0x613c
FUN_0800613c:
	push {r4, r5, r6, lr}	@ 0000613c 70b5
.org 0x613e
	adds r5, r0, #0	@ 0000613e 051c
.org 0x6140
	mov ip, r1	@ 00006140 8c46
.org 0x6142
	ldr r0, [r1, #4]	@ 00006142 4868
.org 0x6144
	mov r2, ip	@ 00006144 6246
.org 0x6146
	adds r2, #59	@ 00006146 3b32
.org 0x6148
	ldrb r1, [r0, #9]	@ 00006148 417a
.org 0x614a
	ldrb r0, [r2, #0]	@ 0000614a 1078
.org 0x614c
	adds r2, r0, #0	@ 0000614c 021c
.org 0x614e
	orrs r2, r1	@ 0000614e 0a43
.org 0x6150
	ldr r0, [pc, #12]	@ 00006150 0348
.org 0x6152
	ldrb r1, [r0, #0]	@ 00006152 0178
.org 0x6154
	movs r0, #128	@ 00006154 8020
.org 0x6156
	ands r0, r1	@ 00006156 0840
.org 0x6158
	cmp r0, #0	@ 00006158 0028
.org 0x615a
	beq.n 0x6164	@ 0000615a 03d0
.org 0x615c
	movs r0, #0	@ 0000615c 0020
.org 0x615e
	b.n 0x61e6	@ 0000615e 42e0
.org 0x6160
	.byte 0xe0,0x32,0x00,0x03	@ 00006160 data
.org 0x6164
	movs r0, #2	@ 00006164 0220
.org 0x6166
	ands r2, r0	@ 00006166 0240
.org 0x6168
	lsls r0, r2, #24	@ 00006168 1006
.org 0x616a
	lsrs r6, r0, #24	@ 0000616a 060e
.org 0x616c
	cmp r6, #0	@ 0000616c 002e
.org 0x616e
	bne.n 0x61e4	@ 0000616e 39d1
.org 0x6170
	mov r1, ip	@ 00006170 6146
.org 0x6172
	ldrh r0, [r1, #48]	@ 00006172 088e
.org 0x6174
	subs r0, #1	@ 00006174 0138
.org 0x6176
	strh r0, [r1, #48]	@ 00006176 0886
.org 0x6178
	str r5, [r1, #12]	@ 00006178 cd60
.org 0x617a
	ldr r0, [r1, #24]	@ 0000617a 8869
.org 0x617c
	movs r1, #1	@ 0000617c 0121
.org 0x617e
	orrs r0, r1	@ 0000617e 0843
.org 0x6180
	mov r2, ip	@ 00006180 6246
.org 0x6182
	str r0, [r2, #24]	@ 00006182 9061
.org 0x6184
	ldr r0, [r5, #4]	@ 00006184 6868
.org 0x6186
	ldrb r0, [r0, #4]	@ 00006186 0079
.org 0x6188
	mov r4, ip	@ 00006188 6446
.org 0x618a
	adds r4, #35	@ 0000618a 2334
.org 0x618c
	movs r3, #15	@ 0000618c 0f23
.org 0x618e
	adds r1, r3, #0	@ 0000618e 191c
.org 0x6190
	ands r1, r0	@ 00006190 0140
.org 0x6192
	ldrb r2, [r4, #0]	@ 00006192 2278
.org 0x6194
	movs r0, #16	@ 00006194 1020
.org 0x6196
	negs r0, r0	@ 00006196 4042
.org 0x6198
	ands r0, r2	@ 00006198 1040
.org 0x619a
	orrs r0, r1	@ 0000619a 0843
.org 0x619c
	adds r1, r5, #0	@ 0000619c 291c
.org 0x619e
	adds r1, #56	@ 0000619e 3831
.org 0x61a0
	ldrb r1, [r1, #0]	@ 000061a0 0978
.org 0x61a2
	lsls r1, r1, #4	@ 000061a2 0901
.org 0x61a4
	ands r0, r3	@ 000061a4 1840
.org 0x61a6
	orrs r0, r1	@ 000061a6 0843
.org 0x61a8
	strb r0, [r4, #0]	@ 000061a8 2070
.org 0x61aa
	adds r0, r5, #0	@ 000061aa 281c
.org 0x61ac
	adds r0, #58	@ 000061ac 3a30
.org 0x61ae
	ldrb r0, [r0, #0]	@ 000061ae 0078
.org 0x61b0
	mov r2, ip	@ 000061b0 6246
.org 0x61b2
	adds r2, #34	@ 000061b2 2232
.org 0x61b4
	strb r0, [r2, #0]	@ 000061b4 1070
.org 0x61b6
	mov r1, ip	@ 000061b6 6146
.org 0x61b8
	movs r2, #48	@ 000061b8 3022
.org 0x61ba
	ldrsh r0, [r1, r2]	@ 000061ba 885e
.org 0x61bc
	cmp r0, #0	@ 000061bc 0028
.org 0x61be
	bgt.n 0x61ce	@ 000061be 06dc
.org 0x61c0
	strh r6, [r1, #48]	@ 000061c0 0e86
.org 0x61c2
	ldr r0, [r1, #24]	@ 000061c2 8869
.org 0x61c4
	movs r1, #128	@ 000061c4 8021
.org 0x61c6
	lsls r1, r1, #2	@ 000061c6 8900
.org 0x61c8
	orrs r0, r1	@ 000061c8 0843
.org 0x61ca
	mov r1, ip	@ 000061ca 6146
.org 0x61cc
	str r0, [r1, #24]	@ 000061cc 8861
.org 0x61ce
	mov r2, ip	@ 000061ce 6246
.org 0x61d0
	ldr r0, [r2, #4]	@ 000061d0 5068
.org 0x61d2
	ldrb r0, [r0, #2]	@ 000061d2 8078
.org 0x61d4
	cmp r0, #1	@ 000061d4 0128
.org 0x61d6
	beq.n 0x61dc	@ 000061d6 01d0
.org 0x61d8
	cmp r0, #2	@ 000061d8 0228
.org 0x61da
	bne.n 0x61e4	@ 000061da 03d1
.org 0x61dc
	mov r1, ip	@ 000061dc 6146
.org 0x61de
	adds r1, #32	@ 000061de 2031
.org 0x61e0
	movs r0, #90	@ 000061e0 5a20
.org 0x61e2
	strb r0, [r1, #0]	@ 000061e2 0870
.org 0x61e4
	movs r0, #1	@ 000061e4 0120
.org 0x61e6
	pop {r4, r5, r6}	@ 000061e6 70bc
