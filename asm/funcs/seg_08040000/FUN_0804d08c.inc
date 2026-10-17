@ FUN_0804d08c  entry 0x0804d08c  size 226
.thumb
.org 0x4d08c
FUN_0804d08c:
	push {r4, r5, lr}	@ 0004d08c 30b5
.org 0x4d08e
	adds r5, r0, #0	@ 0004d08e 051c
.org 0x4d090
	adds r4, r1, #0	@ 0004d090 0c1c
.org 0x4d092
	ldr r0, [pc, #64]	@ 0004d092 1048
.org 0x4d094
	ldr r0, [r0, #0]	@ 0004d094 0068
.org 0x4d096
	bl 0x5500	@ 0004d096 b8f733fa
.org 0x4d09a
	adds r3, r0, #0	@ 0004d09a 031c
.org 0x4d09c
	cmp r3, #0	@ 0004d09c 002b
.org 0x4d09e
	beq.n 0x4d184	@ 0004d09e 71d0
.org 0x4d0a0
	adds r0, r5, #0	@ 0004d0a0 281c
.org 0x4d0a2
	adds r0, #248	@ 0004d0a2 f830
.org 0x4d0a4
	ldrb r0, [r0, #0]	@ 0004d0a4 0078
.org 0x4d0a6
	cmp r0, #2	@ 0004d0a6 0228
.org 0x4d0a8
	bne.n 0x4d0e4	@ 0004d0a8 1cd1
.org 0x4d0aa
	ldr r0, [pc, #44]	@ 0004d0aa 0b48
.org 0x4d0ac
	movs r1, #47	@ 0004d0ac 2f21
.org 0x4d0ae
	strb r1, [r3, #9]	@ 0004d0ae 5972
.org 0x4d0b0
	adds r0, #188	@ 0004d0b0 bc30
.org 0x4d0b2
	ldr r0, [r0, #0]	@ 0004d0b2 0068
.org 0x4d0b4
	ldr r0, [r0, #0]	@ 0004d0b4 0068
.org 0x4d0b6
	str r0, [r3, #20]	@ 0004d0b6 5861
.org 0x4d0b8
	ldrb r1, [r3, #11]	@ 0004d0b8 d97a
.org 0x4d0ba
	movs r0, #191	@ 0004d0ba bf20
.org 0x4d0bc
	ands r0, r1	@ 0004d0bc 0840
.org 0x4d0be
	strb r0, [r3, #11]	@ 0004d0be d872
.org 0x4d0c0
	adds r1, r3, #0	@ 0004d0c0 191c
.org 0x4d0c2
	adds r1, #37	@ 0004d0c2 2531
.org 0x4d0c4
	movs r0, #16	@ 0004d0c4 1020
.org 0x4d0c6
	strb r0, [r1, #0]	@ 0004d0c6 0870
.org 0x4d0c8
	ldr r0, [pc, #16]	@ 0004d0c8 0448
.org 0x4d0ca
	ldrh r0, [r0, #0]	@ 0004d0ca 0088
.org 0x4d0cc
	strh r0, [r3, #32]	@ 0004d0cc 1884
.org 0x4d0ce
	ldr r0, [pc, #16]	@ 0004d0ce 0448
.org 0x4d0d0
	ldrb r0, [r0, #0]	@ 0004d0d0 0078
.org 0x4d0d2
	b.n 0x4d10c	@ 0004d0d2 1be0
.org 0x4d0d4
	.byte 0x88,0xed,0x02,0x02	@ 0004d0d4 data
.org 0x4d0d8
	.byte 0xf8,0x39,0x85,0x08	@ 0004d0d8 data
.org 0x4d0dc
	.byte 0xfc,0x36,0x85,0x08	@ 0004d0dc data
.org 0x4d0e0
	.byte 0x04,0x37,0x85,0x08	@ 0004d0e0 data
.org 0x4d0e4
	ldr r0, [pc, #72]	@ 0004d0e4 1248
.org 0x4d0e6
	movs r1, #47	@ 0004d0e6 2f21
.org 0x4d0e8
	strb r1, [r3, #9]	@ 0004d0e8 5972
.org 0x4d0ea
	adds r0, #188	@ 0004d0ea bc30
.org 0x4d0ec
	ldr r0, [r0, #0]	@ 0004d0ec 0068
.org 0x4d0ee
	ldr r0, [r0, #0]	@ 0004d0ee 0068
.org 0x4d0f0
	str r0, [r3, #20]	@ 0004d0f0 5861
.org 0x4d0f2
	ldrb r1, [r3, #11]	@ 0004d0f2 d97a
.org 0x4d0f4
	movs r0, #191	@ 0004d0f4 bf20
.org 0x4d0f6
	ands r0, r1	@ 0004d0f6 0840
.org 0x4d0f8
	strb r0, [r3, #11]	@ 0004d0f8 d872
.org 0x4d0fa
	adds r1, r3, #0	@ 0004d0fa 191c
.org 0x4d0fc
	adds r1, #37	@ 0004d0fc 2531
.org 0x4d0fe
	movs r0, #16	@ 0004d0fe 1020
.org 0x4d100
	strb r0, [r1, #0]	@ 0004d100 0870
.org 0x4d102
	ldr r0, [pc, #48]	@ 0004d102 0c48
.org 0x4d104
	ldrh r0, [r0, #2]	@ 0004d104 4088
.org 0x4d106
	strh r0, [r3, #32]	@ 0004d106 1884
.org 0x4d108
	ldr r0, [pc, #44]	@ 0004d108 0b48
.org 0x4d10a
	ldrb r0, [r0, #1]	@ 0004d10a 4078
.org 0x4d10c
	subs r1, #3	@ 0004d10c 0339
.org 0x4d10e
	strb r0, [r1, #0]	@ 0004d10e 0870
.org 0x4d110
	str r5, [r3, #40]	@ 0004d110 9d62
.org 0x4d112
	str r4, [r3, #44]	@ 0004d112 dc62
.org 0x4d114
	movs r0, #0	@ 0004d114 0020
.org 0x4d116
	strb r0, [r3, #16]	@ 0004d116 1874
.org 0x4d118
	strb r0, [r3, #17]	@ 0004d118 5874
.org 0x4d11a
	ldrb r0, [r4, #10]	@ 0004d11a a07a
.org 0x4d11c
	lsrs r2, r0, #4	@ 0004d11c 0209
.org 0x4d11e
	movs r0, #1	@ 0004d11e 0120
.org 0x4d120
	ands r2, r0	@ 0004d120 0240
.org 0x4d122
	cmp r2, #0	@ 0004d122 002a
.org 0x4d124
	beq.n 0x4d13c	@ 0004d124 0ad0
.org 0x4d126
	ldrb r0, [r3, #10]	@ 0004d126 987a
.org 0x4d128
	movs r1, #16	@ 0004d128 1021
.org 0x4d12a
	orrs r0, r1	@ 0004d12a 0843
.org 0x4d12c
	b.n 0x4d142	@ 0004d12c 09e0
.org 0x4d12e
	.byte 0x00	@ 0004d12e data
.org 0x4d12f
	.byte 0x00	@ 0004d12f data
.org 0x4d130
	.byte 0xf8,0x39,0x85,0x08	@ 0004d130 data
.org 0x4d134
	.byte 0xfc,0x36,0x85,0x08	@ 0004d134 data
.org 0x4d138
	.byte 0x04,0x37,0x85,0x08	@ 0004d138 data
.org 0x4d13c
	ldrb r1, [r3, #10]	@ 0004d13c 997a
.org 0x4d13e
	movs r0, #239	@ 0004d13e ef20
.org 0x4d140
	ands r0, r1	@ 0004d140 0840
.org 0x4d142
	strb r0, [r3, #10]	@ 0004d142 9872
.org 0x4d144
	adds r1, r2, #0	@ 0004d144 111c
.org 0x4d146
	adds r0, r3, #0	@ 0004d146 181c
.org 0x4d148
	adds r0, #76	@ 0004d148 4c30
.org 0x4d14a
	strb r1, [r0, #0]	@ 0004d14a 0170
.org 0x4d14c
	movs r0, #74	@ 0004d14c 4a20
.org 0x4d14e
	adds r0, r0, r3	@ 0004d14e c018
.org 0x4d150
	mov ip, r0	@ 0004d150 8446
.org 0x4d152
	lsls r1, r1, #4	@ 0004d152 0901
.org 0x4d154
	ldrb r2, [r0, #0]	@ 0004d154 0278
.org 0x4d156
	movs r0, #17	@ 0004d156 1120
.org 0x4d158
	negs r0, r0	@ 0004d158 4042
.org 0x4d15a
	ands r0, r2	@ 0004d15a 1040
.org 0x4d15c
	orrs r0, r1	@ 0004d15c 0843
.org 0x4d15e
	mov r1, ip	@ 0004d15e 6146
.org 0x4d160
	strb r0, [r1, #0]	@ 0004d160 0870
.org 0x4d162
	ldrb r1, [r3, #10]	@ 0004d162 997a
.org 0x4d164
	movs r0, #16	@ 0004d164 1020
.org 0x4d166
	ands r0, r1	@ 0004d166 0840
.org 0x4d168
	cmp r0, #0	@ 0004d168 0028
.org 0x4d16a
	beq.n 0x4d174	@ 0004d16a 03d0
.org 0x4d16c
	ldr r0, [r4, #84]	@ 0004d16c 606d
