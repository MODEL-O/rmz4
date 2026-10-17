@ FUN_08088ba4  entry 0x08088ba4  size 216
.thumb
.org 0x88ba4
FUN_08088ba4:
	push {r4, r5, lr}	@ 00088ba4 30b5
.org 0x88ba6
	adds r3, r0, #0	@ 00088ba6 031c
.org 0x88ba8
	ldr r4, [r3, #44]	@ 00088ba8 dc6a
.org 0x88baa
	ldr r0, [r3, #12]	@ 00088baa d868
.org 0x88bac
	ldr r2, [r0, #44]	@ 00088bac c26a
.org 0x88bae
	ldr r1, [r3, #20]	@ 00088bae 5969
.org 0x88bb0
	movs r0, #8	@ 00088bb0 0820
.org 0x88bb2
	ands r0, r1	@ 00088bb2 0840
.org 0x88bb4
	cmp r0, #0	@ 00088bb4 0028
.org 0x88bb6
	beq.n 0x88bd2	@ 00088bb6 0cd0
.org 0x88bb8
	movs r0, #128	@ 00088bb8 8020
.org 0x88bba
	lsls r0, r0, #9	@ 00088bba 4002
.org 0x88bbc
	ands r1, r0	@ 00088bbc 0140
.org 0x88bbe
	cmp r1, #0	@ 00088bbe 0029
.org 0x88bc0
	bne.n 0x88bca	@ 00088bc0 03d1
.org 0x88bc2
	ldrh r1, [r2, #8]	@ 00088bc2 1189
.org 0x88bc4
	ldr r0, [pc, #40]	@ 00088bc4 0a48
.org 0x88bc6
	cmp r1, r0	@ 00088bc6 8142
.org 0x88bc8
	bne.n 0x88bd2	@ 00088bc8 03d1
.org 0x88bca
	adds r1, r4, #0	@ 00088bca 211c
.org 0x88bcc
	adds r1, #185	@ 00088bcc b931
.org 0x88bce
	movs r0, #1	@ 00088bce 0120
.org 0x88bd0
	strb r0, [r1, #0]	@ 00088bd0 0870
.org 0x88bd2
	ldr r0, [r3, #20]	@ 00088bd2 5869
.org 0x88bd4
	movs r1, #1	@ 00088bd4 0121
.org 0x88bd6
	ands r0, r1	@ 00088bd6 0840
.org 0x88bd8
	cmp r0, #0	@ 00088bd8 0028
.org 0x88bda
	beq.n 0x88c8a	@ 00088bda 56d0
.org 0x88bdc
	ldr r0, [r2, #84]	@ 00088bdc 506d
.org 0x88bde
	ldr r2, [r4, #84]	@ 00088bde 626d
.org 0x88be0
	cmp r0, r2	@ 00088be0 9042
.org 0x88be2
	bge.n 0x88bf8	@ 00088be2 09da
.org 0x88be4
	adds r1, r4, #0	@ 00088be4 211c
.org 0x88be6
	adds r1, #182	@ 00088be6 b631
.org 0x88be8
	movs r0, #0	@ 00088be8 0020
.org 0x88bea
	strb r0, [r1, #0]	@ 00088bea 0870
.org 0x88bec
	ldr r0, [pc, #4]	@ 00088bec 0148
.org 0x88bee
	b.n 0x88c20	@ 00088bee 17e0
.org 0x88bf0
	.byte 0x01,0x01,0x00,0x00	@ 00088bf0 data
.org 0x88bf4
	.byte 0xf0,0xdb,0x02,0x02	@ 00088bf4 data
.org 0x88bf8
	cmp r2, r0	@ 00088bf8 8242
.org 0x88bfa
	bge.n 0x88c0c	@ 00088bfa 07da
.org 0x88bfc
	adds r0, r4, #0	@ 00088bfc 201c
.org 0x88bfe
	adds r0, #182	@ 00088bfe b630
.org 0x88c00
	strb r1, [r0, #0]	@ 00088c00 0170
.org 0x88c02
	ldr r0, [pc, #4]	@ 00088c02 0148
.org 0x88c04
	b.n 0x88c20	@ 00088c04 0ce0
.org 0x88c06
	.byte 0x00	@ 00088c06 data
.org 0x88c07
	.byte 0x00	@ 00088c07 data
.org 0x88c08
	.byte 0xf0,0xdb,0x02,0x02	@ 00088c08 data
.org 0x88c0c
	movs r5, #0	@ 00088c0c 0025
.org 0x88c0e
	ldr r0, [pc, #64]	@ 00088c0e 1048
.org 0x88c10
	ldr r1, [r0, #0]	@ 00088c10 0168
.org 0x88c12
	ldr r1, [r1, #84]	@ 00088c12 496d
.org 0x88c14
	cmp r2, r1	@ 00088c14 8a42
.org 0x88c16
	bge.n 0x88c1a	@ 00088c16 00da
.org 0x88c18
	movs r5, #1	@ 00088c18 0125
.org 0x88c1a
	adds r1, r4, #0	@ 00088c1a 211c
.org 0x88c1c
	adds r1, #182	@ 00088c1c b631
.org 0x88c1e
	strb r5, [r1, #0]	@ 00088c1e 0d70
.org 0x88c20
	ldr r2, [r0, #0]	@ 00088c20 0268
.org 0x88c22
	ldr r1, [r3, #20]	@ 00088c22 5969
.org 0x88c24
	movs r5, #128	@ 00088c24 8025
.org 0x88c26
	lsls r5, r5, #2	@ 00088c26 ad00
.org 0x88c28
	ands r5, r1	@ 00088c28 0d40
.org 0x88c2a
	cmp r5, #0	@ 00088c2a 002d
.org 0x88c2c
	beq.n 0x88c54	@ 00088c2c 12d0
.org 0x88c2e
	movs r0, #128	@ 00088c2e 8020
.org 0x88c30
	lsls r0, r0, #10	@ 00088c30 8002
.org 0x88c32
	ands r1, r0	@ 00088c32 0140
.org 0x88c34
	cmp r1, #0	@ 00088c34 0029
.org 0x88c36
	beq.n 0x88c8a	@ 00088c36 28d0
.org 0x88c38
	cmp r2, #0	@ 00088c38 002a
.org 0x88c3a
	beq.n 0x88c8a	@ 00088c3a 26d0
.org 0x88c3c
	adds r0, r2, #0	@ 00088c3c 101c
.org 0x88c3e
	movs r1, #3	@ 00088c3e 0321
.org 0x88c40
	movs r2, #6	@ 00088c40 0622
.org 0x88c42
	bl 0x3a578	@ 00088c42 b1f799fc
.org 0x88c46
	adds r1, r4, #0	@ 00088c46 211c
.org 0x88c48
	adds r1, #183	@ 00088c48 b731
.org 0x88c4a
	strb r0, [r1, #0]	@ 00088c4a 0870
.org 0x88c4c
	b.n 0x88c8a	@ 00088c4c 1de0
.org 0x88c4e
	.byte 0x00	@ 00088c4e data
.org 0x88c4f
	.byte 0x00	@ 00088c4f data
.org 0x88c50
	.byte 0xf0,0xdb,0x02,0x02	@ 00088c50 data
.org 0x88c54
	adds r0, r4, #0	@ 00088c54 201c
.org 0x88c56
	adds r0, #181	@ 00088c56 b530
.org 0x88c58
	ldrb r0, [r0, #0]	@ 00088c58 0078
.org 0x88c5a
	cmp r0, #0	@ 00088c5a 0028
.org 0x88c5c
	beq.n 0x88c8a	@ 00088c5c 15d0
.org 0x88c5e
	movs r0, #128	@ 00088c5e 8020
.org 0x88c60
	lsls r0, r0, #10	@ 00088c60 8002
.org 0x88c62
	ands r1, r0	@ 00088c62 0140
.org 0x88c64
	cmp r1, #0	@ 00088c64 0029
.org 0x88c66
	beq.n 0x88c8a	@ 00088c66 10d0
.org 0x88c68
	cmp r2, #0	@ 00088c68 002a
.org 0x88c6a
	beq.n 0x88c8a	@ 00088c6a 0ed0
.org 0x88c6c
	adds r0, r2, #0	@ 00088c6c 101c
.org 0x88c6e
	movs r1, #4	@ 00088c6e 0421
.org 0x88c70
	movs r2, #4	@ 00088c70 0422
.org 0x88c72
	bl 0x3a578	@ 00088c72 b1f781fc
.org 0x88c76
	adds r1, r4, #0	@ 00088c76 211c
.org 0x88c78
	adds r1, #184	@ 00088c78 b831
.org 0x88c7a
	strb r0, [r1, #0]	@ 00088c7a 0870
