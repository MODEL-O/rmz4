@ FUN_0803ed7c  entry 0x0803ed7c  size 248
.thumb
.org 0x3ed7c
FUN_0803ed7c:
	push {r4, r5, lr}	@ 0003ed7c 30b5
.org 0x3ed7e
	adds r4, r0, #0	@ 0003ed7e 041c
.org 0x3ed80
	adds r0, #180	@ 0003ed80 b430
.org 0x3ed82
	ldr r5, [r0, #0]	@ 0003ed82 0568
.org 0x3ed84
	ldrb r2, [r4, #13]	@ 0003ed84 627b
.org 0x3ed86
	cmp r2, #1	@ 0003ed86 012a
.org 0x3ed88
	beq.n 0x3ee06	@ 0003ed88 3dd0
.org 0x3ed8a
	cmp r2, #1	@ 0003ed8a 012a
.org 0x3ed8c
	bgt.n 0x3ed94	@ 0003ed8c 02dc
.org 0x3ed8e
	cmp r2, #0	@ 0003ed8e 002a
.org 0x3ed90
	beq.n 0x3ed9e	@ 0003ed90 05d0
.org 0x3ed92
	b.n 0x3ee74	@ 0003ed92 6fe0
.org 0x3ed94
	cmp r2, #2	@ 0003ed94 022a
.org 0x3ed96
	beq.n 0x3ee22	@ 0003ed96 44d0
.org 0x3ed98
	cmp r2, #3	@ 0003ed98 032a
.org 0x3ed9a
	beq.n 0x3ee58	@ 0003ed9a 5dd0
.org 0x3ed9c
	b.n 0x3ee74	@ 0003ed9c 6ae0
.org 0x3ed9e
	ldr r0, [pc, #36]	@ 0003ed9e 0948
.org 0x3eda0
	adds r1, r0, #0	@ 0003eda0 011c
.org 0x3eda2
	ldrb r3, [r4, #19]	@ 0003eda2 e37c
.org 0x3eda4
	adds r1, r1, r3	@ 0003eda4 c918
.org 0x3eda6
	lsls r1, r1, #16	@ 0003eda6 0904
.org 0x3eda8
	lsrs r1, r1, #16	@ 0003eda8 090c
.org 0x3edaa
	adds r0, r4, #0	@ 0003edaa 201c
.org 0x3edac
	bl 0x1cf00	@ 0003edac def7a8f8
.org 0x3edb0
	ldrb r0, [r4, #19]	@ 0003edb0 e07c
.org 0x3edb2
	cmp r0, #0	@ 0003edb2 0028
.org 0x3edb4
	beq.n 0x3edc8	@ 0003edb4 08d0
.org 0x3edb6
	adds r2, r0, #0	@ 0003edb6 021c
.org 0x3edb8
	adds r0, r5, #0	@ 0003edb8 281c
.org 0x3edba
	adds r1, r4, #0	@ 0003edba 211c
.org 0x3edbc
	bl 0x491fc	@ 0003edbc 0af01efa
.org 0x3edc0
	b.n 0x3edf2	@ 0003edc0 17e0
.org 0x3edc2
	.byte 0x00	@ 0003edc2 data
.org 0x3edc3
	.byte 0x00	@ 0003edc3 data
.org 0x3edc4
	.byte 0x33,0x80,0x00,0x00	@ 0003edc4 data
.org 0x3edc8
	adds r2, r5, #0	@ 0003edc8 2a1c
.org 0x3edca
	adds r2, #230	@ 0003edca e632
.org 0x3edcc
	ldrb r0, [r2, #0]	@ 0003edcc 1078
.org 0x3edce
	adds r1, r0, #0	@ 0003edce 011c
.org 0x3edd0
	cmp r1, #0	@ 0003edd0 0029
.org 0x3edd2
	beq.n 0x3edee	@ 0003edd2 0cd0
.org 0x3edd4
	cmp r1, #255	@ 0003edd4 ff29
.org 0x3edd6
	beq.n 0x3eddc	@ 0003edd6 01d0
.org 0x3edd8
	subs r0, #1	@ 0003edd8 0138
.org 0x3edda
	strb r0, [r2, #0]	@ 0003edda 1070
.org 0x3eddc
	ldrb r2, [r4, #19]	@ 0003eddc e27c
.org 0x3edde
	adds r0, r5, #0	@ 0003edde 281c
.org 0x3ede0
	adds r1, r4, #0	@ 0003ede0 211c
.org 0x3ede2
	bl 0x491fc	@ 0003ede2 0af00bfa
.org 0x3ede6
	movs r0, #110	@ 0003ede6 6e20
.org 0x3ede8
	bl 0x2b10	@ 0003ede8 c3f792fe
.org 0x3edec
	b.n 0x3edf2	@ 0003edec 01e0
.org 0x3edee
	movs r0, #3	@ 0003edee 0320
.org 0x3edf0
	strb r0, [r4, #19]	@ 0003edf0 e074
.org 0x3edf2
	movs r0, #170	@ 0003edf2 aa20
.org 0x3edf4
	lsls r0, r0, #1	@ 0003edf4 4000
.org 0x3edf6
	adds r1, r5, r0	@ 0003edf6 2918
.org 0x3edf8
	movs r0, #0	@ 0003edf8 0020
.org 0x3edfa
	strb r0, [r1, #0]	@ 0003edfa 0870
.org 0x3edfc
	movs r0, #2	@ 0003edfc 0220
.org 0x3edfe
	strb r0, [r4, #18]	@ 0003edfe a074
.org 0x3ee00
	ldrb r0, [r4, #13]	@ 0003ee00 607b
.org 0x3ee02
	adds r0, #1	@ 0003ee02 0130
.org 0x3ee04
	strb r0, [r4, #13]	@ 0003ee04 6073
.org 0x3ee06
	ldrb r0, [r4, #18]	@ 0003ee06 a07c
.org 0x3ee08
	subs r0, #1	@ 0003ee08 0138
.org 0x3ee0a
	strb r0, [r4, #18]	@ 0003ee0a a074
.org 0x3ee0c
	lsls r0, r0, #24	@ 0003ee0c 0006
.org 0x3ee0e
	cmp r0, #0	@ 0003ee0e 0028
.org 0x3ee10
	bne.n 0x3ee74	@ 0003ee10 30d1
.org 0x3ee12
	movs r3, #170	@ 0003ee12 aa23
.org 0x3ee14
	lsls r3, r3, #1	@ 0003ee14 5b00
.org 0x3ee16
	adds r1, r5, r3	@ 0003ee16 e918
.org 0x3ee18
	movs r0, #1	@ 0003ee18 0120
.org 0x3ee1a
	strb r0, [r1, #0]	@ 0003ee1a 0870
.org 0x3ee1c
	movs r0, #2	@ 0003ee1c 0220
.org 0x3ee1e
	strb r0, [r4, #18]	@ 0003ee1e a074
.org 0x3ee20
	b.n 0x3ee6e	@ 0003ee20 25e0
.org 0x3ee22
	ldrb r0, [r4, #18]	@ 0003ee22 a07c
.org 0x3ee24
	subs r0, #1	@ 0003ee24 0138
.org 0x3ee26
	strb r0, [r4, #18]	@ 0003ee26 a074
.org 0x3ee28
	movs r3, #255	@ 0003ee28 ff23
.org 0x3ee2a
	lsls r0, r0, #24	@ 0003ee2a 0006
.org 0x3ee2c
	lsrs r1, r0, #24	@ 0003ee2c 010e
.org 0x3ee2e
	cmp r1, #0	@ 0003ee2e 0029
.org 0x3ee30
	bne.n 0x3ee74	@ 0003ee30 20d1
.org 0x3ee32
	ldrb r0, [r4, #19]	@ 0003ee32 e07c
.org 0x3ee34
	adds r0, #1	@ 0003ee34 0130
.org 0x3ee36
	strb r0, [r4, #19]	@ 0003ee36 e074
.org 0x3ee38
	ands r0, r3	@ 0003ee38 1840
.org 0x3ee3a
	cmp r0, #2	@ 0003ee3a 0228
.org 0x3ee3c
	bhi.n 0x3ee4a	@ 0003ee3c 05d8
.org 0x3ee3e
	movs r3, #170	@ 0003ee3e aa23
.org 0x3ee40
	lsls r3, r3, #1	@ 0003ee40 5b00
.org 0x3ee42
	adds r0, r5, r3	@ 0003ee42 e818
.org 0x3ee44
	strb r2, [r0, #0]	@ 0003ee44 0270
.org 0x3ee46
	strb r1, [r4, #13]	@ 0003ee46 6173
.org 0x3ee48
	b.n 0x3ee74	@ 0003ee48 14e0
.org 0x3ee4a
	movs r0, #170	@ 0003ee4a aa20
.org 0x3ee4c
	lsls r0, r0, #1	@ 0003ee4c 4000
.org 0x3ee4e
	adds r1, r5, r0	@ 0003ee4e 2918
.org 0x3ee50
	movs r0, #3	@ 0003ee50 0320
.org 0x3ee52
	strb r0, [r1, #0]	@ 0003ee52 0870
.org 0x3ee54
	strb r2, [r4, #18]	@ 0003ee54 a274
.org 0x3ee56
	b.n 0x3ee6e	@ 0003ee56 0ae0
.org 0x3ee58
	ldrb r0, [r4, #18]	@ 0003ee58 a07c
.org 0x3ee5a
	subs r0, #1	@ 0003ee5a 0138
.org 0x3ee5c
	strb r0, [r4, #18]	@ 0003ee5c a074
.org 0x3ee5e
	lsls r0, r0, #24	@ 0003ee5e 0006
.org 0x3ee60
	cmp r0, #0	@ 0003ee60 0028
.org 0x3ee62
	bne.n 0x3ee74	@ 0003ee62 07d1
.org 0x3ee64
	movs r3, #170	@ 0003ee64 aa23
.org 0x3ee66
	lsls r3, r3, #1	@ 0003ee66 5b00
.org 0x3ee68
	adds r1, r5, r3	@ 0003ee68 e918
.org 0x3ee6a
	movs r0, #4	@ 0003ee6a 0420
.org 0x3ee6c
	strb r0, [r1, #0]	@ 0003ee6c 0870
.org 0x3ee6e
	ldrb r0, [r4, #13]	@ 0003ee6e 607b
.org 0x3ee70
	adds r0, #1	@ 0003ee70 0130
.org 0x3ee72
	strb r0, [r4, #13]	@ 0003ee72 6073
