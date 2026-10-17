@ FUN_0811a9c0  entry 0x0811a9c0  size 422
.thumb
.org 0x11a9c0
FUN_0811a9c0:
	push {r4, r5, r6, r7, lr}	@ 0011a9c0 f0b5
.org 0x11a9c2
	mov r7, r9	@ 0011a9c2 4f46
.org 0x11a9c4
	mov r6, r8	@ 0011a9c4 4646
.org 0x11a9c6
	push {r6, r7}	@ 0011a9c6 c0b4
.org 0x11a9c8
	adds r5, r0, #0	@ 0011a9c8 051c
.org 0x11a9ca
	ldr r1, [pc, #80]	@ 0011a9ca 1449
.org 0x11a9cc
	adds r0, r5, r1	@ 0011a9cc 6818
.org 0x11a9ce
	ldr r7, [r0, #0]	@ 0011a9ce 0768
.org 0x11a9d0
	ldr r2, [pc, #76]	@ 0011a9d0 134a
.org 0x11a9d2
	adds r4, r5, r2	@ 0011a9d2 ac18
.org 0x11a9d4
	ldrb r1, [r4, #0]	@ 0011a9d4 2178
.org 0x11a9d6
	cmp r1, #0	@ 0011a9d6 0029
.org 0x11a9d8
	bne.n 0x11a9ea	@ 0011a9d8 07d1
.org 0x11a9da
	movs r3, #221	@ 0011a9da dd23
.org 0x11a9dc
	lsls r3, r3, #4	@ 0011a9dc 1b01
.org 0x11a9de
	adds r0, r5, r3	@ 0011a9de e818
.org 0x11a9e0
	strb r1, [r0, #3]	@ 0011a9e0 c170
.org 0x11a9e2
	strb r1, [r0, #11]	@ 0011a9e2 c172
.org 0x11a9e4
	ldrb r0, [r4, #0]	@ 0011a9e4 2078
.org 0x11a9e6
	adds r0, #1	@ 0011a9e6 0130
.org 0x11a9e8
	strb r0, [r4, #0]	@ 0011a9e8 2070
.org 0x11a9ea
	movs r0, #22	@ 0011a9ea 1620
.org 0x11a9ec
	bl 0x25d8	@ 0011a9ec e7f6f4fd
.org 0x11a9f0
	adds r0, r5, #0	@ 0011a9f0 281c
.org 0x11a9f2
	bl 0x11afe8	@ 0011a9f2 00f0f9fa
.org 0x11a9f6
	ldr r2, [pc, #44]	@ 0011a9f6 0b4a
.org 0x11a9f8
	ldrh r1, [r2, #4]	@ 0011a9f8 9188
.org 0x11a9fa
	movs r0, #2	@ 0011a9fa 0220
.org 0x11a9fc
	mov r8, r0	@ 0011a9fc 8046
.org 0x11a9fe
	movs r0, #2	@ 0011a9fe 0220
.org 0x11aa00
	ands r0, r1	@ 0011aa00 0840
.org 0x11aa02
	lsls r0, r0, #16	@ 0011aa02 0004
.org 0x11aa04
	lsrs r6, r0, #16	@ 0011aa04 060c
.org 0x11aa06
	cmp r6, #0	@ 0011aa06 002e
.org 0x11aa08
	beq.n 0x11aa28	@ 0011aa08 0ed0
.org 0x11aa0a
	movs r0, #3	@ 0011aa0a 0320
.org 0x11aa0c
	bl 0x2b10	@ 0011aa0c e8f680f8
.org 0x11aa10
	movs r0, #0	@ 0011aa10 0020
.org 0x11aa12
	mov r1, r8	@ 0011aa12 4146
.org 0x11aa14
	strb r1, [r5, #3]	@ 0011aa14 e970
.org 0x11aa16
	strb r0, [r4, #0]	@ 0011aa16 2070
.org 0x11aa18
	b.n 0x11ab92	@ 0011aa18 bbe0
.org 0x11aa1a
	.byte 0x00	@ 0011aa1a data
.org 0x11aa1b
	.byte 0x00	@ 0011aa1b data
.org 0x11aa1c
	.byte 0xa8,0x63,0x00,0x00	@ 0011aa1c data
.org 0x11aa20
	.byte 0xf7,0x0d,0x00,0x00	@ 0011aa20 data
.org 0x11aa24
	.byte 0x60,0x07,0x00,0x02	@ 0011aa24 data
.org 0x11aa28
	movs r0, #1	@ 0011aa28 0120
.org 0x11aa2a
	ands r0, r1	@ 0011aa2a 0840
.org 0x11aa2c
	cmp r0, #0	@ 0011aa2c 0028
.org 0x11aa2e
	beq.n 0x11aa56	@ 0011aa2e 12d0
.org 0x11aa30
	movs r0, #2	@ 0011aa30 0220
.org 0x11aa32
	bl 0x2b10	@ 0011aa32 e8f66df8
.org 0x11aa36
	adds r2, r7, #0	@ 0011aa36 3a1c
.org 0x11aa38
	adds r2, #180	@ 0011aa38 b432
.org 0x11aa3a
	movs r3, #221	@ 0011aa3a dd23
.org 0x11aa3c
	lsls r3, r3, #4	@ 0011aa3c 1b01
.org 0x11aa3e
	adds r0, r5, r3	@ 0011aa3e e818
.org 0x11aa40
	ldrb r0, [r0, #3]	@ 0011aa40 c078
.org 0x11aa42
	adds r3, #4	@ 0011aa42 0433
.org 0x11aa44
	adds r1, r5, r3	@ 0011aa44 e918
.org 0x11aa46
	adds r0, r1, r0	@ 0011aa46 0818
.org 0x11aa48
	ldrb r0, [r0, #0]	@ 0011aa48 0078
.org 0x11aa4a
	strb r0, [r2, #18]	@ 0011aa4a 9074
.org 0x11aa4c
	mov r0, r8	@ 0011aa4c 4046
.org 0x11aa4e
	strb r0, [r5, #3]	@ 0011aa4e e870
.org 0x11aa50
	strb r6, [r4, #0]	@ 0011aa50 2670
.org 0x11aa52
	adds r6, r1, #0	@ 0011aa52 0e1c
.org 0x11aa54
	b.n 0x11aae2	@ 0011aa54 45e0
.org 0x11aa56
	ldrh r1, [r2, #6]	@ 0011aa56 d188
.org 0x11aa58
	movs r0, #64	@ 0011aa58 4020
.org 0x11aa5a
	ands r0, r1	@ 0011aa5a 0840
.org 0x11aa5c
	cmp r0, #0	@ 0011aa5c 0028
.org 0x11aa5e
	beq.n 0x11aaa0	@ 0011aa5e 1fd0
.org 0x11aa60
	movs r1, #221	@ 0011aa60 dd21
.org 0x11aa62
	lsls r1, r1, #4	@ 0011aa62 0901
.org 0x11aa64
	adds r4, r5, r1	@ 0011aa64 6c18
.org 0x11aa66
	ldrb r0, [r4, #3]	@ 0011aa66 e078
.org 0x11aa68
	cmp r0, #0	@ 0011aa68 0028
.org 0x11aa6a
	beq.n 0x11aa84	@ 0011aa6a 0bd0
.org 0x11aa6c
	movs r0, #1	@ 0011aa6c 0120
.org 0x11aa6e
	bl 0x2b10	@ 0011aa6e e8f64ff8
.org 0x11aa72
	ldrb r0, [r4, #3]	@ 0011aa72 e078
.org 0x11aa74
	subs r0, #1	@ 0011aa74 0138
.org 0x11aa76
	strb r0, [r4, #3]	@ 0011aa76 e070
.org 0x11aa78
	ldr r2, [pc, #4]	@ 0011aa78 014a
.org 0x11aa7a
	adds r6, r5, r2	@ 0011aa7a ae18
.org 0x11aa7c
	b.n 0x11aae2	@ 0011aa7c 31e0
.org 0x11aa7e
	.byte 0x00	@ 0011aa7e data
.org 0x11aa7f
	.byte 0x00	@ 0011aa7f data
.org 0x11aa80
	.byte 0xd4,0x0d,0x00,0x00	@ 0011aa80 data
.org 0x11aa84
	ldrb r0, [r4, #12]	@ 0011aa84 207b
.org 0x11aa86
	ldr r3, [pc, #20]	@ 0011aa86 054b
.org 0x11aa88
	adds r6, r5, r3	@ 0011aa88 ee18
.org 0x11aa8a
	cmp r0, #0	@ 0011aa8a 0028
.org 0x11aa8c
	beq.n 0x11aae2	@ 0011aa8c 29d0
.org 0x11aa8e
	movs r0, #1	@ 0011aa8e 0120
.org 0x11aa90
	bl 0x2b10	@ 0011aa90 e8f63ef8
.org 0x11aa94
	ldrb r0, [r4, #11]	@ 0011aa94 e07a
.org 0x11aa96
	subs r0, #1	@ 0011aa96 0138
.org 0x11aa98
	b.n 0x11aae0	@ 0011aa98 22e0
.org 0x11aa9a
	.byte 0x00	@ 0011aa9a data
.org 0x11aa9b
	.byte 0x00	@ 0011aa9b data
.org 0x11aa9c
	.byte 0xd4,0x0d,0x00,0x00	@ 0011aa9c data
.org 0x11aaa0
	movs r0, #128	@ 0011aaa0 8020
.org 0x11aaa2
	ands r0, r1	@ 0011aaa2 0840
.org 0x11aaa4
	ldr r1, [pc, #36]	@ 0011aaa4 0949
.org 0x11aaa6
	adds r6, r5, r1	@ 0011aaa6 6e18
.org 0x11aaa8
	cmp r0, #0	@ 0011aaa8 0028
.org 0x11aaaa
	beq.n 0x11aae2	@ 0011aaaa 1ad0
.org 0x11aaac
	movs r2, #221	@ 0011aaac dd22
.org 0x11aaae
	lsls r2, r2, #4	@ 0011aaae 1201
.org 0x11aab0
	adds r4, r5, r2	@ 0011aab0 ac18
.org 0x11aab2
	ldrb r0, [r4, #3]	@ 0011aab2 e078
.org 0x11aab4
	adds r0, #1	@ 0011aab4 0130
.org 0x11aab6
	ldrb r3, [r4, #10]	@ 0011aab6 a37a
.org 0x11aab8
	cmp r0, r3	@ 0011aab8 9842
.org 0x11aaba
	bge.n 0x11aad0	@ 0011aaba 09da
.org 0x11aabc
	movs r0, #1	@ 0011aabc 0120
.org 0x11aabe
	bl 0x2b10	@ 0011aabe e8f627f8
.org 0x11aac2
	ldrb r0, [r4, #3]	@ 0011aac2 e078
.org 0x11aac4
	adds r0, #1	@ 0011aac4 0130
.org 0x11aac6
	strb r0, [r4, #3]	@ 0011aac6 e070
.org 0x11aac8
	b.n 0x11aae2	@ 0011aac8 0be0
.org 0x11aaca
	.byte 0x00	@ 0011aaca data
.org 0x11aacb
	.byte 0x00	@ 0011aacb data
.org 0x11aacc
	.byte 0xd4,0x0d,0x00,0x00	@ 0011aacc data
.org 0x11aad0
	ldrb r0, [r4, #13]	@ 0011aad0 607b
.org 0x11aad2
	cmp r0, #0	@ 0011aad2 0028
.org 0x11aad4
	beq.n 0x11aae2	@ 0011aad4 05d0
.org 0x11aad6
	movs r0, #1	@ 0011aad6 0120
.org 0x11aad8
	bl 0x2b10	@ 0011aad8 e8f61af8
.org 0x11aadc
	ldrb r0, [r4, #11]	@ 0011aadc e07a
.org 0x11aade
	adds r0, #1	@ 0011aade 0130
.org 0x11aae0
	strb r0, [r4, #11]	@ 0011aae0 e072
.org 0x11aae2
	adds r0, r5, #0	@ 0011aae2 281c
.org 0x11aae4
	bl 0x11afe8	@ 0011aae4 00f080fa
.org 0x11aae8
	movs r4, #0	@ 0011aae8 0024
.org 0x11aaea
	ldr r0, [pc, #16]	@ 0011aaea 0448
.org 0x11aaec
	mov r8, r0	@ 0011aaec 8046
.org 0x11aaee
	movs r1, #236	@ 0011aaee ec21
.org 0x11aaf0
	lsls r1, r1, #2	@ 0011aaf0 8900
.org 0x11aaf2
	add r1, r8	@ 0011aaf2 4144
.org 0x11aaf4
	mov r9, r1	@ 0011aaf4 8946
.org 0x11aaf6
	ldr r7, [pc, #8]	@ 0011aaf6 024f
.org 0x11aaf8
	b.n 0x11ab24	@ 0011aaf8 14e0
.org 0x11aafa
	.byte 0x00	@ 0011aafa data
.org 0x11aafb
	.byte 0x00	@ 0011aafb data
.org 0x11aafc
	.byte 0xf8,0xcf,0x86,0x08	@ 0011aafc data
.org 0x11ab00
	.byte 0x5f,0x0e,0x01,0x09	@ 0011ab00 data
.org 0x11ab04
	ldrb r0, [r1, #0]	@ 0011ab04 0878
.org 0x11ab06
	movs r2, #200	@ 0011ab06 c822
.org 0x11ab08
	lsls r2, r2, #1	@ 0011ab08 5200
.org 0x11ab0a
	adds r0, r0, r2	@ 0011ab0a 8018
.org 0x11ab0c
	lsls r0, r0, #1	@ 0011ab0c 4000
.org 0x11ab0e
	add r0, r8	@ 0011ab0e 4044
.org 0x11ab10
	ldrh r0, [r0, #0]	@ 0011ab10 0088
.org 0x11ab12
	adds r0, r0, r7	@ 0011ab12 c019
.org 0x11ab14
	lsls r2, r4, #1	@ 0011ab14 6200
.org 0x11ab16
	adds r2, #2	@ 0011ab16 0232
.org 0x11ab18
	movs r1, #3	@ 0011ab18 0321
.org 0x11ab1a
	bl 0x10d85c	@ 0011ab1a f2f79ffe
.org 0x11ab1e
	adds r0, r4, #1	@ 0011ab1e 601c
.org 0x11ab20
	lsls r0, r0, #24	@ 0011ab20 0006
.org 0x11ab22
	lsrs r4, r0, #24	@ 0011ab22 040e
.org 0x11ab24
	cmp r4, #5	@ 0011ab24 052c
.org 0x11ab26
	bhi.n 0x11ab44	@ 0011ab26 0dd8
.org 0x11ab28
	adds r1, r6, r4	@ 0011ab28 3119
.org 0x11ab2a
	ldrb r0, [r1, #0]	@ 0011ab2a 0878
.org 0x11ab2c
	cmp r0, #255	@ 0011ab2c ff28
.org 0x11ab2e
	bne.n 0x11ab04	@ 0011ab2e e9d1
.org 0x11ab30
	cmp r4, #0	@ 0011ab30 002c
.org 0x11ab32
	bne.n 0x11ab44	@ 0011ab32 07d1
.org 0x11ab34
	mov r3, r9	@ 0011ab34 4b46
.org 0x11ab36
	ldrh r0, [r3, #0]	@ 0011ab36 1888
.org 0x11ab38
	adds r0, r0, r7	@ 0011ab38 c019
.org 0x11ab3a
	movs r1, #3	@ 0011ab3a 0321
.org 0x11ab3c
	movs r2, #2	@ 0011ab3c 0222
.org 0x11ab3e
	bl 0x10d85c	@ 0011ab3e f2f78dfe
.org 0x11ab42
	b.n 0x11ab1e	@ 0011ab42 ece7
.org 0x11ab44
	movs r1, #221	@ 0011ab44 dd21
.org 0x11ab46
	lsls r1, r1, #4	@ 0011ab46 0901
.org 0x11ab48
	adds r0, r5, r1	@ 0011ab48 6818
.org 0x11ab4a
	ldrb r0, [r0, #3]	@ 0011ab4a c078
.org 0x11ab4c
	adds r2, r6, r0	@ 0011ab4c 3218
.org 0x11ab4e
	ldrb r0, [r2, #0]	@ 0011ab4e 1078
.org 0x11ab50
	cmp r0, #255	@ 0011ab50 ff28
.org 0x11ab52
	bne.n 0x11ab78	@ 0011ab52 11d1
.org 0x11ab54
	ldr r0, [pc, #20]	@ 0011ab54 0548
.org 0x11ab56
	ldr r2, [pc, #24]	@ 0011ab56 064a
.org 0x11ab58
	adds r0, r0, r2	@ 0011ab58 8018
.org 0x11ab5a
	ldrh r0, [r0, #0]	@ 0011ab5a 0088
.org 0x11ab5c
	ldr r1, [pc, #20]	@ 0011ab5c 0549
.org 0x11ab5e
	adds r0, r0, r1	@ 0011ab5e 4018
.org 0x11ab60
	movs r1, #1	@ 0011ab60 0121
.org 0x11ab62
	movs r2, #18	@ 0011ab62 1222
.org 0x11ab64
	bl 0x10d85c	@ 0011ab64 f2f77afe
