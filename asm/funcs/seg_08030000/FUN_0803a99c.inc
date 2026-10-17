@ FUN_0803a99c  entry 0x0803a99c  size 172
.thumb
.org 0x3a99c
FUN_0803a99c:
	push {r4, r5, r6, lr}	@ 0003a99c 70b5
.org 0x3a99e
	adds r4, r0, #0	@ 0003a99e 041c
.org 0x3a9a0
	lsls r1, r1, #24	@ 0003a9a0 0906
.org 0x3a9a2
	lsrs r6, r1, #24	@ 0003a9a2 0e0e
.org 0x3a9a4
	adds r5, r6, #0	@ 0003a9a4 351c
.org 0x3a9a6
	ldr r0, [r4, #84]	@ 0003a9a6 606d
.org 0x3a9a8
	ldr r1, [r4, #88]	@ 0003a9a8 a16d
.org 0x3a9aa
	bl 0x7c7c	@ 0003a9aa cdf767f9
.org 0x3a9ae
	lsls r0, r0, #16	@ 0003a9ae 0004
.org 0x3a9b0
	lsrs r1, r0, #16	@ 0003a9b0 010c
.org 0x3a9b2
	movs r2, #15	@ 0003a9b2 0f22
.org 0x3a9b4
	adds r0, r1, #0	@ 0003a9b4 081c
.org 0x3a9b6
	ands r0, r2	@ 0003a9b6 1040
.org 0x3a9b8
	cmp r0, #15	@ 0003a9b8 0f28
.org 0x3a9ba
	bne.n 0x3a9be	@ 0003a9ba 00d1
.org 0x3a9bc
	movs r1, #0	@ 0003a9bc 0021
.org 0x3a9be
	movs r0, #128	@ 0003a9be 8020
.org 0x3a9c0
	lsls r0, r0, #8	@ 0003a9c0 0002
.org 0x3a9c2
	ands r0, r1	@ 0003a9c2 0840
.org 0x3a9c4
	cmp r0, #0	@ 0003a9c4 0028
.org 0x3a9c6
	beq.n 0x3a9ca	@ 0003a9c6 00d0
.org 0x3a9c8
	movs r1, #0	@ 0003a9c8 0021
.org 0x3a9ca
	ands r1, r2	@ 0003a9ca 1140
.org 0x3a9cc
	cmp r1, #0	@ 0003a9cc 0029
.org 0x3a9ce
	beq.n 0x3a9ee	@ 0003a9ce 0ed0
.org 0x3a9d0
	movs r0, #4	@ 0003a9d0 0420
.org 0x3a9d2
	ands r0, r6	@ 0003a9d2 3040
.org 0x3a9d4
	cmp r0, #0	@ 0003a9d4 0028
.org 0x3a9d6
	beq.n 0x3a9ea	@ 0003a9d6 08d0
.org 0x3a9d8
	adds r0, r4, #0	@ 0003a9d8 201c
.org 0x3a9da
	adds r0, #84	@ 0003a9da 5430
.org 0x3a9dc
	ldrb r2, [r4, #10]	@ 0003a9dc a27a
.org 0x3a9de
	lsrs r2, r2, #4	@ 0003a9de 1209
.org 0x3a9e0
	movs r1, #1	@ 0003a9e0 0121
.org 0x3a9e2
	ands r2, r1	@ 0003a9e2 0a40
.org 0x3a9e4
	movs r1, #7	@ 0003a9e4 0721
.org 0x3a9e6
	bl 0xd1bcc	@ 0003a9e6 97f0f1f8
.org 0x3a9ea
	movs r0, #1	@ 0003a9ea 0120
.org 0x3a9ec
	b.n 0x3aa46	@ 0003a9ec 2be0
.org 0x3a9ee
	movs r3, #1	@ 0003a9ee 0123
.org 0x3a9f0
	adds r0, r5, #0	@ 0003a9f0 281c
.org 0x3a9f2
	ands r0, r3	@ 0003a9f2 1840
.org 0x3a9f4
	cmp r0, #0	@ 0003a9f4 0028
.org 0x3a9f6
	beq.n 0x3aa2a	@ 0003a9f6 18d0
.org 0x3a9f8
	adds r0, r4, #0	@ 0003a9f8 201c
.org 0x3a9fa
	adds r0, #140	@ 0003a9fa 8c30
.org 0x3a9fc
	ldr r0, [r0, #0]	@ 0003a9fc 0068
.org 0x3a9fe
	movs r1, #128	@ 0003a9fe 8021
.org 0x3aa00
	lsls r1, r1, #5	@ 0003aa00 4901
.org 0x3aa02
	ands r0, r1	@ 0003aa02 0840
.org 0x3aa04
	cmp r0, #0	@ 0003aa04 0028
.org 0x3aa06
	beq.n 0x3aa2a	@ 0003aa06 10d0
.org 0x3aa08
	movs r0, #3	@ 0003aa08 0320
.org 0x3aa0a
	ands r5, r0	@ 0003aa0a 0540
.org 0x3aa0c
	cmp r5, #0	@ 0003aa0c 002d
.org 0x3aa0e
	beq.n 0x3aa20	@ 0003aa0e 07d0
.org 0x3aa10
	adds r0, r4, #0	@ 0003aa10 201c
.org 0x3aa12
	adds r0, #84	@ 0003aa12 5430
.org 0x3aa14
	ldrb r2, [r4, #10]	@ 0003aa14 a27a
.org 0x3aa16
	lsrs r2, r2, #4	@ 0003aa16 1209
.org 0x3aa18
	ands r2, r3	@ 0003aa18 1a40
.org 0x3aa1a
	movs r1, #6	@ 0003aa1a 0621
.org 0x3aa1c
	bl 0xd1bcc	@ 0003aa1c 97f0d6f8
.org 0x3aa20
	movs r0, #43	@ 0003aa20 2b20
.org 0x3aa22
	bl 0x2b10	@ 0003aa22 c8f775f8
.org 0x3aa26
	movs r0, #2	@ 0003aa26 0220
.org 0x3aa28
	b.n 0x3aa46	@ 0003aa28 0de0
.org 0x3aa2a
	ldr r0, [pc, #20]	@ 0003aa2a 0548
.org 0x3aa2c
	adds r1, r4, #0	@ 0003aa2c 211c
.org 0x3aa2e
	adds r1, #84	@ 0003aa2e 5431
.org 0x3aa30
	bl 0x1fb14	@ 0003aa30 e5f770f8
.org 0x3aa34
	movs r1, #128	@ 0003aa34 8021
.org 0x3aa36
	lsls r1, r1, #7	@ 0003aa36 c901
.org 0x3aa38
	cmp r0, r1	@ 0003aa38 8842
.org 0x3aa3a
	bhi.n 0x3aa44	@ 0003aa3a 03d8
.org 0x3aa3c
	movs r0, #0	@ 0003aa3c 0020
.org 0x3aa3e
	b.n 0x3aa46	@ 0003aa3e 02e0
.org 0x3aa40
	.byte 0xf8,0xe9,0x02,0x02	@ 0003aa40 data
.org 0x3aa44
	movs r0, #255	@ 0003aa44 ff20
.org 0x3aa46
	pop {r4, r5, r6}	@ 0003aa46 70bc
