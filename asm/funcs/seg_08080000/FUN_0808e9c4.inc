@ FUN_0808e9c4  entry 0x0808e9c4  size 192
.thumb
.org 0x8e9c4
FUN_0808e9c4:
	push {r4, r5, r6, lr}	@ 0008e9c4 70b5
.org 0x8e9c6
	adds r5, r0, #0	@ 0008e9c6 051c
.org 0x8e9c8
	movs r6, #0	@ 0008e9c8 0026
.org 0x8e9ca
	ldr r0, [pc, #92]	@ 0008e9ca 1748
.org 0x8e9cc
	ldr r0, [r0, #0]	@ 0008e9cc 0068
.org 0x8e9ce
	ldr r3, [r5, #84]	@ 0008e9ce 6b6d
.org 0x8e9d0
	ldr r0, [r0, #84]	@ 0008e9d0 406d
.org 0x8e9d2
	cmp r3, r0	@ 0008e9d2 8342
.org 0x8e9d4
	bge.n 0x8e9d8	@ 0008e9d4 00da
.org 0x8e9d6
	movs r6, #1	@ 0008e9d6 0126
.org 0x8e9d8
	ldr r1, [pc, #80]	@ 0008e9d8 1449
.org 0x8e9da
	ldrb r0, [r5, #9]	@ 0008e9da 687a
.org 0x8e9dc
	lsls r0, r0, #2	@ 0008e9dc 8000
.org 0x8e9de
	adds r0, r0, r1	@ 0008e9de 4018
.org 0x8e9e0
	movs r1, #1	@ 0008e9e0 0121
.org 0x8e9e2
	str r1, [r5, #12]	@ 0008e9e2 e960
.org 0x8e9e4
	ldr r0, [r0, #0]	@ 0008e9e4 0068
.org 0x8e9e6
	ldr r0, [r0, #4]	@ 0008e9e6 4068
.org 0x8e9e8
	str r0, [r5, #20]	@ 0008e9e8 6861
.org 0x8e9ea
	movs r2, #0	@ 0008e9ea 0022
.org 0x8e9ec
	strb r2, [r5, #13]	@ 0008e9ec 6a73
.org 0x8e9ee
	strb r2, [r5, #14]	@ 0008e9ee aa73
.org 0x8e9f0
	strb r2, [r5, #15]	@ 0008e9f0 ea73
.org 0x8e9f2
	ldrb r0, [r5, #10]	@ 0008e9f2 a87a
.org 0x8e9f4
	movs r4, #0	@ 0008e9f4 0024
.org 0x8e9f6
	orrs r0, r1	@ 0008e9f6 0843
.org 0x8e9f8
	movs r1, #2	@ 0008e9f8 0221
.org 0x8e9fa
	orrs r0, r1	@ 0008e9fa 0843
.org 0x8e9fc
	strb r0, [r5, #10]	@ 0008e9fc a872
.org 0x8e9fe
	adds r0, r5, #0	@ 0008e9fe 281c
.org 0x8ea00
	adds r0, #180	@ 0008ea00 b430
.org 0x8ea02
	str r3, [r0, #0]	@ 0008ea02 0360
.org 0x8ea04
	adds r0, #12	@ 0008ea04 0c30
.org 0x8ea06
	str r2, [r0, #0]	@ 0008ea06 0260
.org 0x8ea08
	subs r0, #7	@ 0008ea08 0738
.org 0x8ea0a
	strb r2, [r0, #0]	@ 0008ea0a 0270
.org 0x8ea0c
	adds r0, #1	@ 0008ea0c 0130
.org 0x8ea0e
	strb r2, [r0, #0]	@ 0008ea0e 0270
.org 0x8ea10
	str r2, [r5, #44]	@ 0008ea10 ea62
.org 0x8ea12
	adds r0, r5, #0	@ 0008ea12 281c
.org 0x8ea14
	bl 0x1cc9c	@ 0008ea14 8ef742f9
.org 0x8ea18
	adds r2, r6, #0	@ 0008ea18 321c
.org 0x8ea1a
	cmp r2, #0	@ 0008ea1a 002a
.org 0x8ea1c
	beq.n 0x8ea30	@ 0008ea1c 08d0
.org 0x8ea1e
	ldrb r0, [r5, #10]	@ 0008ea1e a87a
.org 0x8ea20
	movs r1, #16	@ 0008ea20 1021
.org 0x8ea22
	orrs r0, r1	@ 0008ea22 0843
.org 0x8ea24
	b.n 0x8ea36	@ 0008ea24 07e0
.org 0x8ea26
	.byte 0x00	@ 0008ea26 data
.org 0x8ea27
	.byte 0x00	@ 0008ea27 data
.org 0x8ea28
	.byte 0xf0,0xdb,0x02,0x02	@ 0008ea28 data
.org 0x8ea2c
	.byte 0x40,0xdb,0x85,0x08	@ 0008ea2c data
.org 0x8ea30
	ldrb r1, [r5, #10]	@ 0008ea30 a97a
.org 0x8ea32
	movs r0, #239	@ 0008ea32 ef20
.org 0x8ea34
	ands r0, r1	@ 0008ea34 0840
.org 0x8ea36
	strb r0, [r5, #10]	@ 0008ea36 a872
.org 0x8ea38
	adds r1, r2, #0	@ 0008ea38 111c
.org 0x8ea3a
	adds r0, r5, #0	@ 0008ea3a 281c
.org 0x8ea3c
	adds r0, #76	@ 0008ea3c 4c30
.org 0x8ea3e
	strb r1, [r0, #0]	@ 0008ea3e 0170
.org 0x8ea40
	adds r3, r5, #0	@ 0008ea40 2b1c
.org 0x8ea42
	adds r3, #74	@ 0008ea42 4a33
.org 0x8ea44
	lsls r1, r1, #4	@ 0008ea44 0901
.org 0x8ea46
	ldrb r2, [r3, #0]	@ 0008ea46 1a78
.org 0x8ea48
	movs r0, #17	@ 0008ea48 1120
.org 0x8ea4a
	negs r0, r0	@ 0008ea4a 4042
.org 0x8ea4c
	ands r0, r2	@ 0008ea4c 1040
.org 0x8ea4e
	orrs r0, r1	@ 0008ea4e 0843
.org 0x8ea50
	strb r0, [r3, #0]	@ 0008ea50 1870
.org 0x8ea52
	movs r1, #228	@ 0008ea52 e421
.org 0x8ea54
	lsls r1, r1, #6	@ 0008ea54 8901
.org 0x8ea56
	adds r0, r5, #0	@ 0008ea56 281c
.org 0x8ea58
	bl 0x1cf00	@ 0008ea58 8ef752fa
.org 0x8ea5c
	adds r0, r5, #0	@ 0008ea5c 281c
.org 0x8ea5e
	bl 0x1cff0	@ 0008ea5e 8ef7c7fa
.org 0x8ea62
	ldrb r1, [r5, #10]	@ 0008ea62 a97a
.org 0x8ea64
	movs r0, #4	@ 0008ea64 0420
.org 0x8ea66
	orrs r0, r1	@ 0008ea66 0843
.org 0x8ea68
	strb r0, [r5, #10]	@ 0008ea68 a872
.org 0x8ea6a
	adds r4, r5, #0	@ 0008ea6a 2c1c
.org 0x8ea6c
	adds r4, #116	@ 0008ea6c 7434
.org 0x8ea6e
	ldr r1, [pc, #32]	@ 0008ea6e 0849
.org 0x8ea70
	adds r2, r5, #0	@ 0008ea70 2a1c
.org 0x8ea72
	adds r2, #84	@ 0008ea72 5432
.org 0x8ea74
	adds r0, r4, #0	@ 0008ea74 201c
.org 0x8ea76
	movs r3, #8	@ 0008ea76 0823
.org 0x8ea78
	bl 0x5760	@ 0008ea78 76f772fe
.org 0x8ea7c
	str r5, [r4, #44]	@ 0008ea7c e562
.org 0x8ea7e
	ldr r0, [pc, #20]	@ 0008ea7e 0548
.org 0x8ea80
	str r0, [r4, #36]	@ 0008ea80 6062
.org 0x8ea82
	adds r0, r5, #0	@ 0008ea82 281c
