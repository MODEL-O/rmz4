@ FUN_0803ebe4  entry 0x0803ebe4  size 192
.thumb
.org 0x3ebe4
FUN_0803ebe4:
	push {r4, r5, r6, lr}	@ 0003ebe4 70b5
.org 0x3ebe6
	adds r4, r0, #0	@ 0003ebe6 041c
.org 0x3ebe8
	adds r0, #180	@ 0003ebe8 b430
.org 0x3ebea
	ldr r6, [r0, #0]	@ 0003ebea 0668
.org 0x3ebec
	ldrb r5, [r4, #13]	@ 0003ebec 657b
.org 0x3ebee
	cmp r5, #1	@ 0003ebee 012d
.org 0x3ebf0
	beq.n 0x3ec20	@ 0003ebf0 16d0
.org 0x3ebf2
	cmp r5, #1	@ 0003ebf2 012d
.org 0x3ebf4
	bgt.n 0x3ebfc	@ 0003ebf4 02dc
.org 0x3ebf6
	cmp r5, #0	@ 0003ebf6 002d
.org 0x3ebf8
	beq.n 0x3ec06	@ 0003ebf8 05d0
.org 0x3ebfa
	b.n 0x3eca8	@ 0003ebfa 55e0
.org 0x3ebfc
	cmp r5, #2	@ 0003ebfc 022d
.org 0x3ebfe
	beq.n 0x3ec64	@ 0003ebfe 31d0
.org 0x3ec00
	cmp r5, #3	@ 0003ec00 032d
.org 0x3ec02
	beq.n 0x3ec8c	@ 0003ec02 43d0
.org 0x3ec04
	b.n 0x3eca8	@ 0003ec04 50e0
.org 0x3ec06
	ldr r1, [pc, #88]	@ 0003ec06 1649
.org 0x3ec08
	adds r0, r4, #0	@ 0003ec08 201c
.org 0x3ec0a
	bl 0x1cf00	@ 0003ec0a def779f9
.org 0x3ec0e
	movs r1, #170	@ 0003ec0e aa21
.org 0x3ec10
	lsls r1, r1, #1	@ 0003ec10 4900
.org 0x3ec12
	adds r0, r6, r1	@ 0003ec12 7018
.org 0x3ec14
	strb r5, [r0, #0]	@ 0003ec14 0570
.org 0x3ec16
	movs r0, #6	@ 0003ec16 0620
.org 0x3ec18
	strb r0, [r4, #18]	@ 0003ec18 a074
.org 0x3ec1a
	ldrb r0, [r4, #13]	@ 0003ec1a 607b
.org 0x3ec1c
	adds r0, #1	@ 0003ec1c 0130
.org 0x3ec1e
	strb r0, [r4, #13]	@ 0003ec1e 6073
.org 0x3ec20
	ldrb r0, [r4, #18]	@ 0003ec20 a07c
.org 0x3ec22
	subs r0, #1	@ 0003ec22 0138
.org 0x3ec24
	strb r0, [r4, #18]	@ 0003ec24 a074
.org 0x3ec26
	lsls r0, r0, #24	@ 0003ec26 0006
.org 0x3ec28
	cmp r0, #0	@ 0003ec28 0028
.org 0x3ec2a
	bne.n 0x3eca8	@ 0003ec2a 3dd1
.org 0x3ec2c
	adds r2, r6, #0	@ 0003ec2c 321c
.org 0x3ec2e
	adds r2, #230	@ 0003ec2e e632
.org 0x3ec30
	ldrb r0, [r2, #0]	@ 0003ec30 1078
.org 0x3ec32
	adds r1, r0, #0	@ 0003ec32 011c
.org 0x3ec34
	cmp r1, #0	@ 0003ec34 0029
.org 0x3ec36
	beq.n 0x3ec4e	@ 0003ec36 0ad0
.org 0x3ec38
	cmp r1, #255	@ 0003ec38 ff29
.org 0x3ec3a
	beq.n 0x3ec40	@ 0003ec3a 01d0
.org 0x3ec3c
	subs r0, #1	@ 0003ec3c 0138
.org 0x3ec3e
	strb r0, [r2, #0]	@ 0003ec3e 1070
.org 0x3ec40
	adds r0, r6, #0	@ 0003ec40 301c
.org 0x3ec42
	adds r1, r4, #0	@ 0003ec42 211c
.org 0x3ec44
	bl 0x454c8	@ 0003ec44 06f040fc
.org 0x3ec48
	movs r0, #18	@ 0003ec48 1220
.org 0x3ec4a
	bl 0x2b10	@ 0003ec4a c3f761ff
.org 0x3ec4e
	movs r0, #170	@ 0003ec4e aa20
.org 0x3ec50
	lsls r0, r0, #1	@ 0003ec50 4000
.org 0x3ec52
	adds r1, r6, r0	@ 0003ec52 3118
.org 0x3ec54
	movs r0, #1	@ 0003ec54 0120
.org 0x3ec56
	strb r0, [r1, #0]	@ 0003ec56 0870
.org 0x3ec58
	movs r0, #24	@ 0003ec58 1820
.org 0x3ec5a
	strb r0, [r4, #18]	@ 0003ec5a a074
.org 0x3ec5c
	b.n 0x3eca2	@ 0003ec5c 21e0
.org 0x3ec5e
	.byte 0x00	@ 0003ec5e data
.org 0x3ec5f
	.byte 0x00	@ 0003ec5f data
.org 0x3ec60
	.byte 0x04,0x84,0x00,0x00	@ 0003ec60 data
.org 0x3ec64
	ldrb r0, [r4, #18]	@ 0003ec64 a07c
.org 0x3ec66
	subs r0, #1	@ 0003ec66 0138
.org 0x3ec68
	strb r0, [r4, #18]	@ 0003ec68 a074
.org 0x3ec6a
	lsls r0, r0, #24	@ 0003ec6a 0006
.org 0x3ec6c
	cmp r0, #0	@ 0003ec6c 0028
.org 0x3ec6e
	bne.n 0x3eca8	@ 0003ec6e 1bd1
.org 0x3ec70
	ldr r1, [pc, #20]	@ 0003ec70 0549
.org 0x3ec72
	adds r0, r4, #0	@ 0003ec72 201c
.org 0x3ec74
	bl 0x1cf00	@ 0003ec74 def744f9
.org 0x3ec78
	movs r0, #170	@ 0003ec78 aa20
.org 0x3ec7a
	lsls r0, r0, #1	@ 0003ec7a 4000
.org 0x3ec7c
	adds r1, r6, r0	@ 0003ec7c 3118
.org 0x3ec7e
	movs r0, #3	@ 0003ec7e 0320
.org 0x3ec80
	strb r0, [r1, #0]	@ 0003ec80 0870
.org 0x3ec82
	movs r0, #16	@ 0003ec82 1020
.org 0x3ec84
	strb r0, [r4, #18]	@ 0003ec84 a074
.org 0x3ec86
	b.n 0x3eca2	@ 0003ec86 0ce0
.org 0x3ec88
	.byte 0x05,0x84,0x00,0x00	@ 0003ec88 data
.org 0x3ec8c
	ldrb r0, [r4, #18]	@ 0003ec8c a07c
.org 0x3ec8e
	subs r0, #1	@ 0003ec8e 0138
.org 0x3ec90
	strb r0, [r4, #18]	@ 0003ec90 a074
.org 0x3ec92
	lsls r0, r0, #24	@ 0003ec92 0006
.org 0x3ec94
	cmp r0, #0	@ 0003ec94 0028
.org 0x3ec96
	bne.n 0x3eca8	@ 0003ec96 07d1
.org 0x3ec98
	movs r0, #170	@ 0003ec98 aa20
.org 0x3ec9a
	lsls r0, r0, #1	@ 0003ec9a 4000
.org 0x3ec9c
	adds r1, r6, r0	@ 0003ec9c 3118
.org 0x3ec9e
	movs r0, #4	@ 0003ec9e 0420
.org 0x3eca0
	strb r0, [r1, #0]	@ 0003eca0 0870
.org 0x3eca2
	ldrb r0, [r4, #13]	@ 0003eca2 607b
