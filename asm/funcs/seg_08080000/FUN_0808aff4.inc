@ FUN_0808aff4  entry 0x0808aff4  size 282
.thumb
.org 0x8aff4
FUN_0808aff4:
	push {r4, r5, r6, r7, lr}	@ 0008aff4 f0b5
.org 0x8aff6
	mov r7, r9	@ 0008aff6 4f46
.org 0x8aff8
	mov r6, r8	@ 0008aff8 4646
.org 0x8affa
	push {r6, r7}	@ 0008affa c0b4
.org 0x8affc
	sub sp, #20	@ 0008affc 85b0
.org 0x8affe
	adds r4, r0, #0	@ 0008affe 041c
.org 0x8b000
	adds r0, #140	@ 0008b000 8c30
.org 0x8b002
	movs r1, #0	@ 0008b002 0021
.org 0x8b004
	str r1, [r0, #0]	@ 0008b004 0160
.org 0x8b006
	adds r0, #4	@ 0008b006 0430
.org 0x8b008
	str r1, [r0, #0]	@ 0008b008 0160
.org 0x8b00a
	adds r0, #4	@ 0008b00a 0430
.org 0x8b00c
	strb r1, [r0, #0]	@ 0008b00c 0170
.org 0x8b00e
	ldrb r2, [r4, #10]	@ 0008b00e a27a
.org 0x8b010
	movs r0, #251	@ 0008b010 fb20
.org 0x8b012
	ands r0, r2	@ 0008b012 1040
.org 0x8b014
	strb r0, [r4, #10]	@ 0008b014 a072
.org 0x8b016
	adds r0, r4, #0	@ 0008b016 201c
.org 0x8b018
	adds r0, #92	@ 0008b018 5c30
.org 0x8b01a
	str r1, [r0, #4]	@ 0008b01a 4160
.org 0x8b01c
	str r1, [r4, #92]	@ 0008b01c e165
.org 0x8b01e
	adds r0, #100	@ 0008b01e 6430
.org 0x8b020
	ldrb r0, [r0, #0]	@ 0008b020 0078
.org 0x8b022
	cmp r0, #1	@ 0008b022 0128
.org 0x8b024
	bne.n 0x8b030	@ 0008b024 04d1
.org 0x8b026
	ldr r0, [r4, #88]	@ 0008b026 a06d
.org 0x8b028
	movs r1, #224	@ 0008b028 e021
.org 0x8b02a
	lsls r1, r1, #5	@ 0008b02a 4901
.org 0x8b02c
	adds r0, r0, r1	@ 0008b02c 4018
.org 0x8b02e
	str r0, [r4, #88]	@ 0008b02e a065
.org 0x8b030
	ldr r0, [r4, #84]	@ 0008b030 606d
.org 0x8b032
	str r0, [sp, #4]	@ 0008b032 0190
.org 0x8b034
	ldr r0, [r4, #88]	@ 0008b034 a06d
.org 0x8b036
	ldr r1, [pc, #216]	@ 0008b036 3649
.org 0x8b038
	adds r0, r0, r1	@ 0008b038 4018
.org 0x8b03a
	str r0, [sp, #8]	@ 0008b03a 0290
.org 0x8b03c
	movs r0, #1	@ 0008b03c 0120
.org 0x8b03e
	add r1, sp, #4	@ 0008b03e 01a9
.org 0x8b040
	bl 0xd0c88	@ 0008b040 45f022fe
.org 0x8b044
	adds r7, r4, #0	@ 0008b044 271c
.org 0x8b046
	adds r7, #180	@ 0008b046 b437
.org 0x8b048
	movs r0, #42	@ 0008b048 2a20
.org 0x8b04a
	bl 0x2b10	@ 0008b04a 77f761fd
.org 0x8b04e
	movs r0, #84	@ 0008b04e 5420
.org 0x8b050
	adds r0, r0, r4	@ 0008b050 0019
.org 0x8b052
	mov r9, r0	@ 0008b052 8146
.org 0x8b054
	movs r0, #3	@ 0008b054 0320
.org 0x8b056
	movs r1, #29	@ 0008b056 1d21
.org 0x8b058
	mov r2, r9	@ 0008b058 4a46
.org 0x8b05a
	bl 0x2ab88	@ 0008b05a 9ff795fd
.org 0x8b05e
	ldr r2, [pc, #180]	@ 0008b05e 2d4a
.org 0x8b060
	ldr r1, [r2, #0]	@ 0008b060 1168
.org 0x8b062
	ldr r0, [pc, #180]	@ 0008b062 2d48
.org 0x8b064
	muls r0, r1	@ 0008b064 4843
.org 0x8b066
	ldr r1, [pc, #180]	@ 0008b066 2d49
.org 0x8b068
	adds r0, r0, r1	@ 0008b068 4018
.org 0x8b06a
	lsls r0, r0, #1	@ 0008b06a 4000
.org 0x8b06c
	lsrs r1, r0, #1	@ 0008b06c 4108
.org 0x8b06e
	str r1, [r2, #0]	@ 0008b06e 1160
.org 0x8b070
	lsrs r6, r0, #17	@ 0008b070 460c
.org 0x8b072
	movs r0, #3	@ 0008b072 0320
.org 0x8b074
	ands r6, r0	@ 0008b074 0640
.org 0x8b076
	ldr r0, [r4, #84]	@ 0008b076 606d
.org 0x8b078
	str r0, [sp, #12]	@ 0008b078 0390
.org 0x8b07a
	ldr r0, [r4, #88]	@ 0008b07a a06d
.org 0x8b07c
	add r5, sp, #12	@ 0008b07c 03ad
.org 0x8b07e
	str r0, [r5, #4]	@ 0008b07e 6860
.org 0x8b080
	movs r1, #0	@ 0008b080 0021
.org 0x8b082
	movs r0, #0	@ 0008b082 0020
.org 0x8b084
	ldrsb r0, [r7, r0]	@ 0008b084 3856
.org 0x8b086
	cmp r0, #0	@ 0008b086 0028
.org 0x8b088
	bne.n 0x8b08c	@ 0008b088 00d1
.org 0x8b08a
	movs r1, #1	@ 0008b08a 0121
.org 0x8b08c
	ldr r2, [pc, #144]	@ 0008b08c 244a
.org 0x8b08e
	movs r0, #1	@ 0008b08e 0120
.org 0x8b090
	mov r8, r0	@ 0008b090 8046
.org 0x8b092
	str r0, [sp, #0]	@ 0008b092 0090
.org 0x8b094
	adds r0, r5, #0	@ 0008b094 281c
.org 0x8b096
	adds r3, r6, #0	@ 0008b096 331c
.org 0x8b098
	bl 0xd8ef8	@ 0008b098 4df02eff
.org 0x8b09c
	movs r1, #0	@ 0008b09c 0021
.org 0x8b09e
	movs r0, #0	@ 0008b09e 0020
.org 0x8b0a0
	ldrsb r0, [r7, r0]	@ 0008b0a0 3856
.org 0x8b0a2
	cmp r0, #0	@ 0008b0a2 0028
.org 0x8b0a4
	bne.n 0x8b0a8	@ 0008b0a4 00d1
.org 0x8b0a6
	movs r1, #1	@ 0008b0a6 0121
.org 0x8b0a8
	ldr r2, [pc, #120]	@ 0008b0a8 1e4a
.org 0x8b0aa
	mov r0, r8	@ 0008b0aa 4046
.org 0x8b0ac
	str r0, [sp, #0]	@ 0008b0ac 0090
.org 0x8b0ae
	adds r0, r5, #0	@ 0008b0ae 281c
.org 0x8b0b0
	adds r3, r6, #0	@ 0008b0b0 331c
.org 0x8b0b2
	bl 0xd8ef8	@ 0008b0b2 4df021ff
.org 0x8b0b6
	movs r1, #0	@ 0008b0b6 0021
.org 0x8b0b8
	movs r0, #0	@ 0008b0b8 0020
.org 0x8b0ba
	ldrsb r0, [r7, r0]	@ 0008b0ba 3856
.org 0x8b0bc
	cmp r0, #0	@ 0008b0bc 0028
.org 0x8b0be
	bne.n 0x8b0c2	@ 0008b0be 00d1
.org 0x8b0c0
	movs r1, #1	@ 0008b0c0 0121
.org 0x8b0c2
	ldr r2, [pc, #100]	@ 0008b0c2 194a
.org 0x8b0c4
	mov r0, r8	@ 0008b0c4 4046
.org 0x8b0c6
	str r0, [sp, #0]	@ 0008b0c6 0090
.org 0x8b0c8
	adds r0, r5, #0	@ 0008b0c8 281c
.org 0x8b0ca
	adds r3, r6, #0	@ 0008b0ca 331c
.org 0x8b0cc
	bl 0xd8ef8	@ 0008b0cc 4df014ff
.org 0x8b0d0
	ldr r2, [pc, #88]	@ 0008b0d0 164a
.org 0x8b0d2
	ldrh r1, [r2, #12]	@ 0008b0d2 9189
.org 0x8b0d4
	ldr r0, [pc, #88]	@ 0008b0d4 1648
.org 0x8b0d6
	cmp r1, r0	@ 0008b0d6 8142
.org 0x8b0d8
	bhi.n 0x8b0de	@ 0008b0d8 01d8
.org 0x8b0da
	adds r0, r1, #1	@ 0008b0da 481c
.org 0x8b0dc
	strh r0, [r2, #12]	@ 0008b0dc 9081
.org 0x8b0de
	adds r0, r4, #0	@ 0008b0de 201c
.org 0x8b0e0
	mov r1, r9	@ 0008b0e0 4946
.org 0x8b0e2
	bl 0x2abe0	@ 0008b0e2 9ff77dfd
.org 0x8b0e6
	ldrb r1, [r4, #10]	@ 0008b0e6 a17a
.org 0x8b0e8
	movs r0, #254	@ 0008b0e8 fe20
.org 0x8b0ea
	ands r0, r1	@ 0008b0ea 0840
.org 0x8b0ec
	strb r0, [r4, #10]	@ 0008b0ec a072
.org 0x8b0ee
	ldr r1, [pc, #68]	@ 0008b0ee 1149
.org 0x8b0f0
	ldrb r0, [r4, #9]	@ 0008b0f0 607a
.org 0x8b0f2
	lsls r0, r0, #2	@ 0008b0f2 8000
.org 0x8b0f4
	adds r0, r0, r1	@ 0008b0f4 4018
.org 0x8b0f6
	movs r1, #4	@ 0008b0f6 0421
.org 0x8b0f8
	str r1, [r4, #12]	@ 0008b0f8 e160
.org 0x8b0fa
	ldr r0, [r0, #0]	@ 0008b0fa 0068
.org 0x8b0fc
	ldr r0, [r0, #16]	@ 0008b0fc 0069
.org 0x8b0fe
	str r0, [r4, #20]	@ 0008b0fe 6061
.org 0x8b100
	add sp, #20	@ 0008b100 05b0
.org 0x8b102
	pop {r3, r4}	@ 0008b102 18bc
.org 0x8b104
	mov r8, r3	@ 0008b104 9846
.org 0x8b106
	mov r9, r4	@ 0008b106 a146
.org 0x8b108
	pop {r4, r5, r6, r7}	@ 0008b108 f0bc
.org 0x8b10a
	pop {r0}	@ 0008b10a 01bc
.org 0x8b10c
	bx r0	@ 0008b10c 0047
