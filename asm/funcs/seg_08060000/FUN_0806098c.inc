@ FUN_0806098c  entry 0x0806098c  size 136
.thumb
.org 0x6098c
FUN_0806098c:
	push {r4, lr}	@ 0006098c 10b5
.org 0x6098e
	adds r4, r0, #0	@ 0006098e 041c
.org 0x60990
	ldrb r0, [r4, #14]	@ 00060990 a07b
.org 0x60992
	cmp r0, #0	@ 00060992 0028
.org 0x60994
	bne.n 0x609bc	@ 00060994 12d1
.org 0x60996
	ldr r1, [pc, #60]	@ 00060996 0f49
.org 0x60998
	adds r0, r4, #0	@ 00060998 201c
.org 0x6099a
	bl 0x1cf00	@ 0006099a bcf7b1fa
.org 0x6099e
	movs r0, #128	@ 0006099e 8020
.org 0x609a0
	lsls r0, r0, #2	@ 000609a0 8000
.org 0x609a2
	str r0, [r4, #92]	@ 000609a2 e065
.org 0x609a4
	movs r0, #40	@ 000609a4 2820
.org 0x609a6
	str r0, [r4, #100]	@ 000609a6 6066
.org 0x609a8
	movs r0, #16	@ 000609a8 1020
.org 0x609aa
	strb r0, [r4, #18]	@ 000609aa a074
.org 0x609ac
	adds r0, r4, #0	@ 000609ac 201c
.org 0x609ae
	movs r1, #0	@ 000609ae 0021
.org 0x609b0
	bl 0xc62fc	@ 000609b0 65f0a4fc
.org 0x609b4
	str r0, [r4, #44]	@ 000609b4 e062
.org 0x609b6
	ldrb r0, [r4, #14]	@ 000609b6 a07b
.org 0x609b8
	adds r0, #1	@ 000609b8 0130
.org 0x609ba
	strb r0, [r4, #14]	@ 000609ba a073
.org 0x609bc
	adds r0, r4, #0	@ 000609bc 201c
.org 0x609be
	bl 0x1cff0	@ 000609be bcf717fb
.org 0x609c2
	ldrb r1, [r4, #10]	@ 000609c2 a17a
.org 0x609c4
	movs r0, #16	@ 000609c4 1020
.org 0x609c6
	ands r0, r1	@ 000609c6 0840
.org 0x609c8
	cmp r0, #0	@ 000609c8 0028
.org 0x609ca
	beq.n 0x609d8	@ 000609ca 05d0
.org 0x609cc
	ldr r0, [r4, #84]	@ 000609cc 606d
.org 0x609ce
	ldr r1, [r4, #92]	@ 000609ce e16d
.org 0x609d0
	adds r0, r0, r1	@ 000609d0 4018
.org 0x609d2
	b.n 0x609de	@ 000609d2 04e0
.org 0x609d4
	.byte 0x0f,0xa5,0x00,0x00	@ 000609d4 data
.org 0x609d8
	ldr r0, [r4, #84]	@ 000609d8 606d
.org 0x609da
	ldr r1, [r4, #92]	@ 000609da e16d
.org 0x609dc
	subs r0, r0, r1	@ 000609dc 401a
.org 0x609de
	str r0, [r4, #84]	@ 000609de 6065
.org 0x609e0
	ldr r0, [r4, #100]	@ 000609e0 606e
.org 0x609e2
	adds r0, r1, r0	@ 000609e2 0818
.org 0x609e4
	str r0, [r4, #92]	@ 000609e4 e065
.org 0x609e6
	ldr r0, [r4, #44]	@ 000609e6 e06a
.org 0x609e8
	ldrb r1, [r0, #13]	@ 000609e8 417b
.org 0x609ea
	cmp r1, #0	@ 000609ea 0029
.org 0x609ec
	beq.n 0x609fc	@ 000609ec 06d0
.org 0x609ee
	movs r0, #0	@ 000609ee 0020
.org 0x609f0
	movs r1, #16	@ 000609f0 1021
.org 0x609f2
	strb r1, [r4, #13]	@ 000609f2 6173
.org 0x609f4
	strb r0, [r4, #14]	@ 000609f4 a073
.org 0x609f6
	movs r0, #1	@ 000609f6 0120
.org 0x609f8
	strb r0, [r4, #15]	@ 000609f8 e073
.org 0x609fa
	b.n 0x60a12	@ 000609fa 0ae0
.org 0x609fc
	ldrb r0, [r4, #18]	@ 000609fc a07c
.org 0x609fe
	subs r0, #1	@ 000609fe 0138
.org 0x60a00
	strb r0, [r4, #18]	@ 00060a00 a074
.org 0x60a02
	lsls r0, r0, #24	@ 00060a02 0006
.org 0x60a04
	lsrs r0, r0, #24	@ 00060a04 000e
.org 0x60a06
	cmp r0, #255	@ 00060a06 ff28
.org 0x60a08
	bne.n 0x60a12	@ 00060a08 03d1
.org 0x60a0a
	movs r0, #16	@ 00060a0a 1020
.org 0x60a0c
	strb r0, [r4, #13]	@ 00060a0c 6073
.org 0x60a0e
	strb r1, [r4, #14]	@ 00060a0e a173
.org 0x60a10
	strb r1, [r4, #15]	@ 00060a10 e173
.org 0x60a12
	pop {r4}	@ 00060a12 10bc
