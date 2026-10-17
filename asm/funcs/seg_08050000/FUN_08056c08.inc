@ FUN_08056c08  entry 0x08056c08  size 198
.thumb
.org 0x56c08
FUN_08056c08:
	push {r4, r5, r6, lr}	@ 00056c08 70b5
.org 0x56c0a
	adds r4, r0, #0	@ 00056c0a 041c
.org 0x56c0c
	ldrb r0, [r4, #10]	@ 00056c0c a07a
.org 0x56c0e
	lsrs r5, r0, #4	@ 00056c0e 0509
.org 0x56c10
	movs r6, #1	@ 00056c10 0126
.org 0x56c12
	ands r5, r6	@ 00056c12 3540
.org 0x56c14
	ldrb r0, [r4, #15]	@ 00056c14 e07b
.org 0x56c16
	cmp r0, #0	@ 00056c16 0028
.org 0x56c18
	bne.n 0x56c36	@ 00056c18 0dd1
.org 0x56c1a
	movs r0, #248	@ 00056c1a f820
.org 0x56c1c
	bl 0x2b10	@ 00056c1c abf778ff
.org 0x56c20
	ldr r1, [pc, #172]	@ 00056c20 2b49
.org 0x56c22
	adds r0, r4, #0	@ 00056c22 201c
.org 0x56c24
	bl 0x1cf00	@ 00056c24 c6f76cf9
.org 0x56c28
	adds r0, r5, #1	@ 00056c28 681c
.org 0x56c2a
	ands r0, r6	@ 00056c2a 3040
.org 0x56c2c
	lsls r0, r0, #7	@ 00056c2c c001
.org 0x56c2e
	strb r0, [r4, #18]	@ 00056c2e a074
.org 0x56c30
	ldrb r0, [r4, #15]	@ 00056c30 e07b
.org 0x56c32
	adds r0, #1	@ 00056c32 0130
.org 0x56c34
	strb r0, [r4, #15]	@ 00056c34 e073
.org 0x56c36
	adds r0, r4, #0	@ 00056c36 201c
.org 0x56c38
	bl 0x1cff0	@ 00056c38 c6f7daf9
.org 0x56c3c
	adds r0, r4, #0	@ 00056c3c 201c
.org 0x56c3e
	adds r0, #116	@ 00056c3e 7430
.org 0x56c40
	ldr r3, [pc, #144]	@ 00056c40 244b
.org 0x56c42
	ldrb r1, [r4, #30]	@ 00056c42 a17f
.org 0x56c44
	lsls r1, r1, #8	@ 00056c44 0902
.org 0x56c46
	adds r2, r4, #0	@ 00056c46 221c
.org 0x56c48
	adds r2, #112	@ 00056c48 7032
.org 0x56c4a
	ldrb r2, [r2, #0]	@ 00056c4a 1278
.org 0x56c4c
	orrs r1, r2	@ 00056c4c 1143
.org 0x56c4e
	ldr r2, [pc, #136]	@ 00056c4e 224a
.org 0x56c50
	adds r1, r1, r2	@ 00056c50 8918
.org 0x56c52
	lsls r1, r1, #2	@ 00056c52 8900
.org 0x56c54
	adds r1, r1, r3	@ 00056c54 c918
.org 0x56c56
	adds r2, r4, #0	@ 00056c56 221c
.org 0x56c58
	adds r2, #113	@ 00056c58 7132
.org 0x56c5a
	ldrb r2, [r2, #0]	@ 00056c5a 1278
.org 0x56c5c
	lsls r2, r2, #24	@ 00056c5c 1206
.org 0x56c5e
	asrs r2, r2, #24	@ 00056c5e 1216
.org 0x56c60
	ldr r1, [r1, #0]	@ 00056c60 0968
.org 0x56c62
	lsls r2, r2, #2	@ 00056c62 9200
.org 0x56c64
	adds r2, r2, r1	@ 00056c64 5218
.org 0x56c66
	ldr r1, [r2, #0]	@ 00056c66 1168
.org 0x56c68
	ldrb r2, [r1, #0]	@ 00056c68 0a78
.org 0x56c6a
	lsls r1, r2, #1	@ 00056c6a 5100
.org 0x56c6c
	adds r1, r1, r2	@ 00056c6c 8918
.org 0x56c6e
	lsls r1, r1, #3	@ 00056c6e c900
.org 0x56c70
	ldr r2, [pc, #104]	@ 00056c70 1a4a
.org 0x56c72
	adds r1, r1, r2	@ 00056c72 8918
.org 0x56c74
	bl 0x5784	@ 00056c74 aef786fd
.org 0x56c78
	ldr r0, [r4, #92]	@ 00056c78 e06d
.org 0x56c7a
	ldr r1, [r4, #100]	@ 00056c7a 616e
.org 0x56c7c
	adds r0, r0, r1	@ 00056c7c 4018
.org 0x56c7e
	str r0, [r4, #92]	@ 00056c7e e065
.org 0x56c80
	ldr r1, [r4, #104]	@ 00056c80 a16e
.org 0x56c82
	cmp r0, r1	@ 00056c82 8842
.org 0x56c84
	ble.n 0x56c88	@ 00056c84 00dd
.org 0x56c86
	str r1, [r4, #92]	@ 00056c86 e165
.org 0x56c88
	ldrb r0, [r4, #18]	@ 00056c88 a07c
.org 0x56c8a
	ldr r2, [r4, #84]	@ 00056c8a 626d
.org 0x56c8c
	ldr r1, [pc, #80]	@ 00056c8c 1449
.org 0x56c8e
	adds r0, #64	@ 00056c8e 4030
.org 0x56c90
	lsls r0, r0, #24	@ 00056c90 0006
.org 0x56c92
	lsrs r0, r0, #23	@ 00056c92 c00d
.org 0x56c94
	adds r0, r0, r1	@ 00056c94 4018
.org 0x56c96
	movs r3, #0	@ 00056c96 0023
.org 0x56c98
	ldrsh r1, [r0, r3]	@ 00056c98 c15e
.org 0x56c9a
	ldr r0, [r4, #92]	@ 00056c9a e06d
.org 0x56c9c
	muls r0, r1	@ 00056c9c 4843
.org 0x56c9e
	cmp r0, #0	@ 00056c9e 0028
.org 0x56ca0
	bge.n 0x56ca4	@ 00056ca0 00da
.org 0x56ca2
	adds r0, #255	@ 00056ca2 ff30
.org 0x56ca4
	asrs r0, r0, #8	@ 00056ca4 0012
.org 0x56ca6
	adds r2, r2, r0	@ 00056ca6 1218
.org 0x56ca8
	str r2, [r4, #84]	@ 00056ca8 6265
.org 0x56caa
	adds r0, r4, #0	@ 00056caa 201c
.org 0x56cac
	adds r0, #204	@ 00056cac cc30
.org 0x56cae
	ldr r0, [r0, #0]	@ 00056cae 0068
.org 0x56cb0
	subs r0, r2, r0	@ 00056cb0 101a
.org 0x56cb2
	movs r1, #160	@ 00056cb2 a021
.org 0x56cb4
	lsls r1, r1, #7	@ 00056cb4 c901
.org 0x56cb6
	adds r0, r0, r1	@ 00056cb6 4018
.org 0x56cb8
	movs r1, #160	@ 00056cb8 a021
.org 0x56cba
	lsls r1, r1, #10	@ 00056cba 8902
.org 0x56cbc
	cmp r0, r1	@ 00056cbc 8842
.org 0x56cbe
	bls.n 0x56cc8	@ 00056cbe 03d9
.org 0x56cc0
	movs r1, #0	@ 00056cc0 0021
.org 0x56cc2
	movs r0, #5	@ 00056cc2 0520
.org 0x56cc4
	strb r0, [r4, #14]	@ 00056cc4 a073
.org 0x56cc6
	strb r1, [r4, #15]	@ 00056cc6 e173
.org 0x56cc8
	pop {r4, r5, r6}	@ 00056cc8 70bc
.org 0x56cca
	pop {r0}	@ 00056cca 01bc
.org 0x56ccc
	bx r0	@ 00056ccc 0047
