@ FUN_0803ea58  entry 0x0803ea58  size 198
.thumb
.org 0x3ea58
FUN_0803ea58:
	push {r4, r5, lr}	@ 0003ea58 30b5
.org 0x3ea5a
	adds r4, r0, #0	@ 0003ea5a 041c
.org 0x3ea5c
	adds r0, #180	@ 0003ea5c b430
.org 0x3ea5e
	ldr r5, [r0, #0]	@ 0003ea5e 0568
.org 0x3ea60
	ldrb r0, [r4, #13]	@ 0003ea60 607b
.org 0x3ea62
	cmp r0, #1	@ 0003ea62 0128
.org 0x3ea64
	beq.n 0x3eac4	@ 0003ea64 2ed0
.org 0x3ea66
	cmp r0, #1	@ 0003ea66 0128
.org 0x3ea68
	bgt.n 0x3ea70	@ 0003ea68 02dc
.org 0x3ea6a
	cmp r0, #0	@ 0003ea6a 0028
.org 0x3ea6c
	beq.n 0x3ea7a	@ 0003ea6c 05d0
.org 0x3ea6e
	b.n 0x3eb1c	@ 0003ea6e 55e0
.org 0x3ea70
	cmp r0, #2	@ 0003ea70 0228
.org 0x3ea72
	beq.n 0x3eae4	@ 0003ea72 37d0
.org 0x3ea74
	cmp r0, #3	@ 0003ea74 0328
.org 0x3ea76
	beq.n 0x3eb00	@ 0003ea76 43d0
.org 0x3ea78
	b.n 0x3eb1c	@ 0003ea78 50e0
.org 0x3ea7a
	ldr r1, [pc, #100]	@ 0003ea7a 1949
.org 0x3ea7c
	adds r0, r4, #0	@ 0003ea7c 201c
.org 0x3ea7e
	bl 0x1cf00	@ 0003ea7e def73ffa
.org 0x3ea82
	adds r2, r5, #0	@ 0003ea82 2a1c
.org 0x3ea84
	adds r2, #230	@ 0003ea84 e632
.org 0x3ea86
	ldrb r0, [r2, #0]	@ 0003ea86 1078
.org 0x3ea88
	adds r1, r0, #0	@ 0003ea88 011c
.org 0x3ea8a
	cmp r1, #0	@ 0003ea8a 0029
.org 0x3ea8c
	beq.n 0x3eab0	@ 0003ea8c 10d0
.org 0x3ea8e
	cmp r1, #255	@ 0003ea8e ff29
.org 0x3ea90
	beq.n 0x3ea96	@ 0003ea90 01d0
.org 0x3ea92
	subs r0, #1	@ 0003ea92 0138
.org 0x3ea94
	strb r0, [r2, #0]	@ 0003ea94 1070
.org 0x3ea96
	adds r0, r5, #0	@ 0003ea96 281c
.org 0x3ea98
	adds r1, r4, #0	@ 0003ea98 211c
.org 0x3ea9a
	movs r2, #0	@ 0003ea9a 0022
.org 0x3ea9c
	bl 0x443ec	@ 0003ea9c 05f0a6fc
.org 0x3eaa0
	adds r0, r5, #0	@ 0003eaa0 281c
.org 0x3eaa2
	adds r1, r4, #0	@ 0003eaa2 211c
.org 0x3eaa4
	movs r2, #1	@ 0003eaa4 0122
.org 0x3eaa6
	bl 0x443ec	@ 0003eaa6 05f0a1fc
.org 0x3eaaa
	movs r0, #72	@ 0003eaaa 4820
.org 0x3eaac
	bl 0x2b10	@ 0003eaac c4f730f8
.org 0x3eab0
	movs r0, #170	@ 0003eab0 aa20
.org 0x3eab2
	lsls r0, r0, #1	@ 0003eab2 4000
.org 0x3eab4
	adds r1, r5, r0	@ 0003eab4 2918
.org 0x3eab6
	movs r0, #0	@ 0003eab6 0020
.org 0x3eab8
	strb r0, [r1, #0]	@ 0003eab8 0870
.org 0x3eaba
	movs r0, #2	@ 0003eaba 0220
.org 0x3eabc
	strb r0, [r4, #18]	@ 0003eabc a074
.org 0x3eabe
	ldrb r0, [r4, #13]	@ 0003eabe 607b
.org 0x3eac0
	adds r0, #1	@ 0003eac0 0130
.org 0x3eac2
	strb r0, [r4, #13]	@ 0003eac2 6073
.org 0x3eac4
	ldrb r0, [r4, #18]	@ 0003eac4 a07c
.org 0x3eac6
	subs r0, #1	@ 0003eac6 0138
.org 0x3eac8
	strb r0, [r4, #18]	@ 0003eac8 a074
.org 0x3eaca
	lsls r0, r0, #24	@ 0003eaca 0006
.org 0x3eacc
	cmp r0, #0	@ 0003eacc 0028
.org 0x3eace
	bne.n 0x3eb1c	@ 0003eace 25d1
.org 0x3ead0
	movs r0, #170	@ 0003ead0 aa20
.org 0x3ead2
	lsls r0, r0, #1	@ 0003ead2 4000
.org 0x3ead4
	adds r1, r5, r0	@ 0003ead4 2918
.org 0x3ead6
	movs r0, #1	@ 0003ead6 0120
.org 0x3ead8
	strb r0, [r1, #0]	@ 0003ead8 0870
.org 0x3eada
	movs r0, #16	@ 0003eada 1020
.org 0x3eadc
	strb r0, [r4, #18]	@ 0003eadc a074
.org 0x3eade
	b.n 0x3eb16	@ 0003eade 1ae0
.org 0x3eae0
	.byte 0x01,0x84,0x00,0x00	@ 0003eae0 data
.org 0x3eae4
	ldrb r0, [r4, #18]	@ 0003eae4 a07c
.org 0x3eae6
	subs r0, #1	@ 0003eae6 0138
.org 0x3eae8
	strb r0, [r4, #18]	@ 0003eae8 a074
.org 0x3eaea
	lsls r0, r0, #24	@ 0003eaea 0006
.org 0x3eaec
	cmp r0, #0	@ 0003eaec 0028
.org 0x3eaee
	bne.n 0x3eb1c	@ 0003eaee 15d1
.org 0x3eaf0
	movs r0, #170	@ 0003eaf0 aa20
.org 0x3eaf2
	lsls r0, r0, #1	@ 0003eaf2 4000
.org 0x3eaf4
	adds r1, r5, r0	@ 0003eaf4 2918
.org 0x3eaf6
	movs r0, #3	@ 0003eaf6 0320
.org 0x3eaf8
	strb r0, [r1, #0]	@ 0003eaf8 0870
.org 0x3eafa
	movs r0, #16	@ 0003eafa 1020
.org 0x3eafc
	strb r0, [r4, #18]	@ 0003eafc a074
.org 0x3eafe
	b.n 0x3eb16	@ 0003eafe 0ae0
.org 0x3eb00
	ldrb r0, [r4, #18]	@ 0003eb00 a07c
.org 0x3eb02
	subs r0, #1	@ 0003eb02 0138
.org 0x3eb04
	strb r0, [r4, #18]	@ 0003eb04 a074
.org 0x3eb06
	lsls r0, r0, #24	@ 0003eb06 0006
.org 0x3eb08
	cmp r0, #0	@ 0003eb08 0028
.org 0x3eb0a
	bne.n 0x3eb1c	@ 0003eb0a 07d1
.org 0x3eb0c
	movs r0, #170	@ 0003eb0c aa20
.org 0x3eb0e
	lsls r0, r0, #1	@ 0003eb0e 4000
.org 0x3eb10
	adds r1, r5, r0	@ 0003eb10 2918
.org 0x3eb12
	movs r0, #4	@ 0003eb12 0420
.org 0x3eb14
	strb r0, [r1, #0]	@ 0003eb14 0870
.org 0x3eb16
	ldrb r0, [r4, #13]	@ 0003eb16 607b
.org 0x3eb18
	adds r0, #1	@ 0003eb18 0130
.org 0x3eb1a
	strb r0, [r4, #13]	@ 0003eb1a 6073
.org 0x3eb1c
	pop {r4, r5}	@ 0003eb1c 30bc
