@ FUN_0803e988  entry 0x0803e988  size 204
.thumb
.org 0x3e988
FUN_0803e988:
	push {r4, r5, lr}	@ 0003e988 30b5
.org 0x3e98a
	adds r4, r0, #0	@ 0003e98a 041c
.org 0x3e98c
	adds r0, #180	@ 0003e98c b430
.org 0x3e98e
	ldr r5, [r0, #0]	@ 0003e98e 0568
.org 0x3e990
	ldrb r0, [r4, #13]	@ 0003e990 607b
.org 0x3e992
	cmp r0, #1	@ 0003e992 0128
.org 0x3e994
	beq.n 0x3e9f0	@ 0003e994 2cd0
.org 0x3e996
	cmp r0, #1	@ 0003e996 0128
.org 0x3e998
	bgt.n 0x3e9a0	@ 0003e998 02dc
.org 0x3e99a
	cmp r0, #0	@ 0003e99a 0028
.org 0x3e99c
	beq.n 0x3e9aa	@ 0003e99c 05d0
.org 0x3e99e
	b.n 0x3ea52	@ 0003e99e 58e0
.org 0x3e9a0
	cmp r0, #2	@ 0003e9a0 0228
.org 0x3e9a2
	beq.n 0x3ea10	@ 0003e9a2 35d0
.org 0x3e9a4
	cmp r0, #3	@ 0003e9a4 0328
.org 0x3e9a6
	beq.n 0x3ea36	@ 0003e9a6 46d0
.org 0x3e9a8
	b.n 0x3ea52	@ 0003e9a8 53e0
.org 0x3e9aa
	ldr r1, [pc, #96]	@ 0003e9aa 1849
.org 0x3e9ac
	adds r0, r4, #0	@ 0003e9ac 201c
.org 0x3e9ae
	bl 0x1cf00	@ 0003e9ae def7a7fa
.org 0x3e9b2
	adds r0, r4, #0	@ 0003e9b2 201c
.org 0x3e9b4
	movs r1, #0	@ 0003e9b4 0021
.org 0x3e9b6
	bl 0x3ad84	@ 0003e9b6 fcf7e5f9
.org 0x3e9ba
	adds r2, r5, #0	@ 0003e9ba 2a1c
.org 0x3e9bc
	adds r2, #230	@ 0003e9bc e632
.org 0x3e9be
	ldrb r0, [r2, #0]	@ 0003e9be 1078
.org 0x3e9c0
	adds r1, r0, #0	@ 0003e9c0 011c
.org 0x3e9c2
	cmp r1, #0	@ 0003e9c2 0029
.org 0x3e9c4
	beq.n 0x3e9dc	@ 0003e9c4 0ad0
.org 0x3e9c6
	cmp r1, #255	@ 0003e9c6 ff29
.org 0x3e9c8
	beq.n 0x3e9ce	@ 0003e9c8 01d0
.org 0x3e9ca
	subs r0, #1	@ 0003e9ca 0138
.org 0x3e9cc
	strb r0, [r2, #0]	@ 0003e9cc 1070
.org 0x3e9ce
	adds r0, r5, #0	@ 0003e9ce 281c
.org 0x3e9d0
	adds r1, r4, #0	@ 0003e9d0 211c
.org 0x3e9d2
	bl 0x440c4	@ 0003e9d2 05f077fb
.org 0x3e9d6
	movs r0, #112	@ 0003e9d6 7020
.org 0x3e9d8
	bl 0x2b10	@ 0003e9d8 c4f79af8
.org 0x3e9dc
	movs r0, #170	@ 0003e9dc aa20
.org 0x3e9de
	lsls r0, r0, #1	@ 0003e9de 4000
.org 0x3e9e0
	adds r1, r5, r0	@ 0003e9e0 2918
.org 0x3e9e2
	movs r0, #0	@ 0003e9e2 0020
.org 0x3e9e4
	strb r0, [r1, #0]	@ 0003e9e4 0870
.org 0x3e9e6
	movs r0, #2	@ 0003e9e6 0220
.org 0x3e9e8
	strb r0, [r4, #18]	@ 0003e9e8 a074
.org 0x3e9ea
	ldrb r0, [r4, #13]	@ 0003e9ea 607b
.org 0x3e9ec
	adds r0, #1	@ 0003e9ec 0130
.org 0x3e9ee
	strb r0, [r4, #13]	@ 0003e9ee 6073
.org 0x3e9f0
	ldrb r0, [r4, #18]	@ 0003e9f0 a07c
.org 0x3e9f2
	subs r0, #1	@ 0003e9f2 0138
.org 0x3e9f4
	strb r0, [r4, #18]	@ 0003e9f4 a074
.org 0x3e9f6
	lsls r0, r0, #24	@ 0003e9f6 0006
.org 0x3e9f8
	cmp r0, #0	@ 0003e9f8 0028
.org 0x3e9fa
	bne.n 0x3ea52	@ 0003e9fa 2ad1
.org 0x3e9fc
	movs r0, #170	@ 0003e9fc aa20
.org 0x3e9fe
	lsls r0, r0, #1	@ 0003e9fe 4000
.org 0x3ea00
	adds r1, r5, r0	@ 0003ea00 2918
.org 0x3ea02
	movs r0, #1	@ 0003ea02 0120
.org 0x3ea04
	strb r0, [r1, #0]	@ 0003ea04 0870
.org 0x3ea06
	movs r0, #16	@ 0003ea06 1020
.org 0x3ea08
	strb r0, [r4, #18]	@ 0003ea08 a074
.org 0x3ea0a
	b.n 0x3ea4c	@ 0003ea0a 1fe0
.org 0x3ea0c
	.byte 0x01,0x83,0x00,0x00	@ 0003ea0c data
.org 0x3ea10
	ldrb r0, [r4, #18]	@ 0003ea10 a07c
.org 0x3ea12
	subs r0, #1	@ 0003ea12 0138
.org 0x3ea14
	strb r0, [r4, #18]	@ 0003ea14 a074
.org 0x3ea16
	lsls r0, r0, #24	@ 0003ea16 0006
.org 0x3ea18
	cmp r0, #0	@ 0003ea18 0028
.org 0x3ea1a
	bne.n 0x3ea52	@ 0003ea1a 1ad1
.org 0x3ea1c
	movs r1, #131	@ 0003ea1c 8321
.org 0x3ea1e
	lsls r1, r1, #8	@ 0003ea1e 0902
.org 0x3ea20
	adds r0, r4, #0	@ 0003ea20 201c
.org 0x3ea22
	bl 0x1cf00	@ 0003ea22 def76dfa
.org 0x3ea26
	movs r0, #170	@ 0003ea26 aa20
.org 0x3ea28
	lsls r0, r0, #1	@ 0003ea28 4000
.org 0x3ea2a
	adds r1, r5, r0	@ 0003ea2a 2918
.org 0x3ea2c
	movs r0, #3	@ 0003ea2c 0320
.org 0x3ea2e
	strb r0, [r1, #0]	@ 0003ea2e 0870
.org 0x3ea30
	movs r0, #16	@ 0003ea30 1020
.org 0x3ea32
	strb r0, [r4, #18]	@ 0003ea32 a074
.org 0x3ea34
	b.n 0x3ea4c	@ 0003ea34 0ae0
.org 0x3ea36
	ldrb r0, [r4, #18]	@ 0003ea36 a07c
.org 0x3ea38
	subs r0, #1	@ 0003ea38 0138
.org 0x3ea3a
	strb r0, [r4, #18]	@ 0003ea3a a074
.org 0x3ea3c
	lsls r0, r0, #24	@ 0003ea3c 0006
.org 0x3ea3e
	cmp r0, #0	@ 0003ea3e 0028
.org 0x3ea40
	bne.n 0x3ea52	@ 0003ea40 07d1
.org 0x3ea42
	movs r0, #170	@ 0003ea42 aa20
.org 0x3ea44
	lsls r0, r0, #1	@ 0003ea44 4000
.org 0x3ea46
	adds r1, r5, r0	@ 0003ea46 2918
.org 0x3ea48
	movs r0, #4	@ 0003ea48 0420
.org 0x3ea4a
	strb r0, [r1, #0]	@ 0003ea4a 0870
.org 0x3ea4c
	ldrb r0, [r4, #13]	@ 0003ea4c 607b
.org 0x3ea4e
	adds r0, #1	@ 0003ea4e 0130
.org 0x3ea50
	strb r0, [r4, #13]	@ 0003ea50 6073
.org 0x3ea52
	pop {r4, r5}	@ 0003ea52 30bc
