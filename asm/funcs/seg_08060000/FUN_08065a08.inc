@ FUN_08065a08  entry 0x08065a08  size 124
.thumb
.org 0x65a08
FUN_08065a08:
	push {r4, r5, lr}	@ 00065a08 30b5
.org 0x65a0a
	adds r3, r0, #0	@ 00065a0a 031c
.org 0x65a0c
	ldr r4, [r3, #44]	@ 00065a0c dc6a
.org 0x65a0e
	ldr r0, [r3, #12]	@ 00065a0e d868
.org 0x65a10
	ldr r1, [r0, #44]	@ 00065a10 c16a
.org 0x65a12
	ldr r0, [r3, #20]	@ 00065a12 5869
.org 0x65a14
	movs r5, #1	@ 00065a14 0125
.org 0x65a16
	ands r0, r5	@ 00065a16 2840
.org 0x65a18
	cmp r0, #0	@ 00065a18 0028
.org 0x65a1a
	beq.n 0x65a88	@ 00065a1a 35d0
.org 0x65a1c
	ldr r0, [r1, #84]	@ 00065a1c 486d
.org 0x65a1e
	ldr r2, [r4, #84]	@ 00065a1e 626d
.org 0x65a20
	cmp r0, r2	@ 00065a20 9042
.org 0x65a22
	bge.n 0x65a34	@ 00065a22 07da
.org 0x65a24
	adds r1, r4, #0	@ 00065a24 211c
.org 0x65a26
	adds r1, #182	@ 00065a26 b631
.org 0x65a28
	movs r0, #0	@ 00065a28 0020
.org 0x65a2a
	strb r0, [r1, #0]	@ 00065a2a 0870
.org 0x65a2c
	ldr r0, [pc, #0]	@ 00065a2c 0048
.org 0x65a2e
	b.n 0x65a5c	@ 00065a2e 15e0
.org 0x65a30
	.byte 0xf0,0xdb,0x02,0x02	@ 00065a30 data
.org 0x65a34
	cmp r2, r0	@ 00065a34 8242
.org 0x65a36
	bge.n 0x65a48	@ 00065a36 07da
.org 0x65a38
	adds r0, r4, #0	@ 00065a38 201c
.org 0x65a3a
	adds r0, #182	@ 00065a3a b630
.org 0x65a3c
	strb r5, [r0, #0]	@ 00065a3c 0570
.org 0x65a3e
	ldr r0, [pc, #4]	@ 00065a3e 0148
.org 0x65a40
	b.n 0x65a5c	@ 00065a40 0ce0
.org 0x65a42
	.byte 0x00	@ 00065a42 data
.org 0x65a43
	.byte 0x00	@ 00065a43 data
.org 0x65a44
	.byte 0xf0,0xdb,0x02,0x02	@ 00065a44 data
.org 0x65a48
	movs r5, #0	@ 00065a48 0025
.org 0x65a4a
	ldr r0, [pc, #68]	@ 00065a4a 1148
.org 0x65a4c
	ldr r1, [r0, #0]	@ 00065a4c 0168
.org 0x65a4e
	ldr r1, [r1, #84]	@ 00065a4e 496d
.org 0x65a50
	cmp r2, r1	@ 00065a50 8a42
.org 0x65a52
	bge.n 0x65a56	@ 00065a52 00da
.org 0x65a54
	movs r5, #1	@ 00065a54 0125
.org 0x65a56
	adds r1, r4, #0	@ 00065a56 211c
.org 0x65a58
	adds r1, #182	@ 00065a58 b631
.org 0x65a5a
	strb r5, [r1, #0]	@ 00065a5a 0d70
.org 0x65a5c
	ldr r2, [r0, #0]	@ 00065a5c 0268
.org 0x65a5e
	ldr r0, [r3, #20]	@ 00065a5e 5869
.org 0x65a60
	movs r1, #128	@ 00065a60 8021
.org 0x65a62
	lsls r1, r1, #10	@ 00065a62 8902
.org 0x65a64
	ands r0, r1	@ 00065a64 0840
.org 0x65a66
	cmp r0, #0	@ 00065a66 0028
.org 0x65a68
	beq.n 0x65a88	@ 00065a68 0ed0
.org 0x65a6a
	cmp r2, #0	@ 00065a6a 002a
.org 0x65a6c
	beq.n 0x65a88	@ 00065a6c 0cd0
.org 0x65a6e
	adds r0, r4, #0	@ 00065a6e 201c
.org 0x65a70
	adds r0, #180	@ 00065a70 b430
.org 0x65a72
	ldrb r0, [r0, #0]	@ 00065a72 0078
.org 0x65a74
	cmp r0, #8	@ 00065a74 0828
.org 0x65a76
	bne.n 0x65a88	@ 00065a76 07d1
.org 0x65a78
	adds r0, r2, #0	@ 00065a78 101c
.org 0x65a7a
	movs r1, #8	@ 00065a7a 0821
.org 0x65a7c
	movs r2, #0	@ 00065a7c 0022
.org 0x65a7e
	bl 0x3a578	@ 00065a7e d4f77bfd
.org 0x65a82
	adds r1, r4, #0	@ 00065a82 211c
