@ FUN_08043958  entry 0x08043958  size 152
.thumb
.org 0x43958
FUN_08043958:
	push {r4, r5, r6, r7, lr}	@ 00043958 f0b5
.org 0x4395a
	sub sp, #8	@ 0004395a 82b0
.org 0x4395c
	adds r7, r0, #0	@ 0004395c 071c
.org 0x4395e
	ldr r1, [pc, #128]	@ 0004395e 2049
.org 0x43960
	ldrb r0, [r7, #9]	@ 00043960 787a
.org 0x43962
	lsls r0, r0, #2	@ 00043962 8000
.org 0x43964
	adds r0, r0, r1	@ 00043964 4018
.org 0x43966
	movs r1, #1	@ 00043966 0121
.org 0x43968
	str r1, [r7, #12]	@ 00043968 f960
.org 0x4396a
	ldr r0, [r0, #0]	@ 0004396a 0068
.org 0x4396c
	ldr r0, [r0, #4]	@ 0004396c 4068
.org 0x4396e
	str r0, [r7, #20]	@ 0004396e 7861
.org 0x43970
	adds r0, r7, #0	@ 00043970 381c
.org 0x43972
	bl 0x1cc9c	@ 00043972 d9f793f9
.org 0x43976
	adds r0, r7, #0	@ 00043976 381c
.org 0x43978
	bl 0x1ceec	@ 00043978 d9f7b8fa
.org 0x4397c
	ldrb r1, [r7, #10]	@ 0004397c b97a
.org 0x4397e
	movs r0, #1	@ 0004397e 0120
.org 0x43980
	movs r6, #0	@ 00043980 0026
.org 0x43982
	orrs r0, r1	@ 00043982 0843
.org 0x43984
	movs r1, #2	@ 00043984 0221
.org 0x43986
	orrs r0, r1	@ 00043986 0843
.org 0x43988
	strb r0, [r7, #10]	@ 00043988 b872
.org 0x4398a
	ldr r1, [pc, #88]	@ 0004398a 1649
.org 0x4398c
	adds r0, r7, #0	@ 0004398c 381c
.org 0x4398e
	bl 0x1cf00	@ 0004398e d9f7b7fa
.org 0x43992
	adds r0, r7, #0	@ 00043992 381c
.org 0x43994
	bl 0x1cff0	@ 00043994 d9f72cfb
.org 0x43998
	ldrb r1, [r7, #10]	@ 00043998 b97a
.org 0x4399a
	movs r0, #4	@ 0004399a 0420
.org 0x4399c
	orrs r0, r1	@ 0004399c 0843
.org 0x4399e
	strb r0, [r7, #10]	@ 0004399e b872
.org 0x439a0
	adds r4, r7, #0	@ 000439a0 3c1c
.org 0x439a2
	adds r4, #116	@ 000439a2 7434
.org 0x439a4
	ldr r5, [pc, #64]	@ 000439a4 104d
.org 0x439a6
	adds r2, r7, #0	@ 000439a6 3a1c
.org 0x439a8
	adds r2, #84	@ 000439a8 5432
.org 0x439aa
	adds r0, r4, #0	@ 000439aa 201c
.org 0x439ac
	adds r1, r5, #0	@ 000439ac 291c
.org 0x439ae
	movs r3, #8	@ 000439ae 0823
.org 0x439b0
	bl 0x5760	@ 000439b0 c1f7d6fe
.org 0x439b4
	str r7, [r4, #44]	@ 000439b4 e762
.org 0x439b6
	str r6, [r4, #36]	@ 000439b6 6662
.org 0x439b8
	movs r3, #1	@ 000439b8 0123
.org 0x439ba
	negs r3, r3	@ 000439ba 5b42
.org 0x439bc
	str r3, [sp, #0]	@ 000439bc 0093
.org 0x439be
	str r3, [sp, #4]	@ 000439be 0193
.org 0x439c0
	adds r0, r4, #0	@ 000439c0 201c
.org 0x439c2
	adds r1, r5, #0	@ 000439c2 291c
.org 0x439c4
	movs r2, #4	@ 000439c4 0422
.org 0x439c6
	bl 0x5794	@ 000439c6 c1f7e5fe
.org 0x439ca
	ldr r0, [pc, #32]	@ 000439ca 0848
.org 0x439cc
	str r0, [r4, #36]	@ 000439cc 6062
.org 0x439ce
	ldrb r1, [r7, #10]	@ 000439ce b97a
.org 0x439d0
	movs r0, #16	@ 000439d0 1020
.org 0x439d2
	ands r0, r1	@ 000439d2 0840
.org 0x439d4
	cmp r0, #0	@ 000439d4 0028
.org 0x439d6
	beq.n 0x439f0	@ 000439d6 0bd0
.org 0x439d8
	movs r0, #128	@ 000439d8 8020
.org 0x439da
	lsls r0, r0, #3	@ 000439da c000
.org 0x439dc
	b.n 0x439f2	@ 000439dc 09e0
.org 0x439de
	.byte 0x00	@ 000439de data
.org 0x439df
	.byte 0x00	@ 000439df data
.org 0x439e0
	.byte 0xf8,0x39,0x85,0x08	@ 000439e0 data
.org 0x439e4
	.byte 0x10,0x81,0x00,0x00	@ 000439e4 data
.org 0x439e8
	.byte 0xd0,0x5c,0x85,0x08	@ 000439e8 data
.org 0x439ec
	.byte 0x69,0x3b,0x04,0x08	@ 000439ec data
