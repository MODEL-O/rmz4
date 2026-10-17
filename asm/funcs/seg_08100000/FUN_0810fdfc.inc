@ FUN_0810fdfc  entry 0x0810fdfc  size 388
.thumb
.org 0x10fdfc
FUN_0810fdfc:
	push {r4, r5, r6, r7, lr}	@ 0010fdfc f0b5
.org 0x10fdfe
	mov r7, r9	@ 0010fdfe 4f46
.org 0x10fe00
	mov r6, r8	@ 0010fe00 4646
.org 0x10fe02
	push {r6, r7}	@ 0010fe02 c0b4
.org 0x10fe04
	sub sp, #4	@ 0010fe04 81b0
.org 0x10fe06
	mov r8, r0	@ 0010fe06 8046
.org 0x10fe08
	ldrh r0, [r0, #8]	@ 0010fe08 0089
.org 0x10fe0a
	lsls r0, r0, #16	@ 0010fe0a 0004
.org 0x10fe0c
	asrs r0, r0, #18	@ 0010fe0c 8014
.org 0x10fe0e
	lsls r0, r0, #16	@ 0010fe0e 0004
.org 0x10fe10
	lsrs r0, r0, #16	@ 0010fe10 000c
.org 0x10fe12
	mov r9, r0	@ 0010fe12 8146
.org 0x10fe14
	movs r0, #160	@ 0010fe14 a020
.org 0x10fe16
	lsls r0, r0, #1	@ 0010fe16 4000
.org 0x10fe18
	bl 0xa70	@ 0010fe18 f0f62afe
.org 0x10fe1c
	adds r6, r0, #0	@ 0010fe1c 061c
.org 0x10fe1e
	cmp r6, #0	@ 0010fe1e 002e
.org 0x10fe20
	beq.n 0x10fec6	@ 0010fe20 51d0
.org 0x10fe22
	ldr r2, [pc, #260]	@ 0010fe22 414a
.org 0x10fe24
	movs r1, #186	@ 0010fe24 ba21
.org 0x10fe26
	lsls r1, r1, #1	@ 0010fe26 4900
.org 0x10fe28
	adds r0, r2, r1	@ 0010fe28 5018
.org 0x10fe2a
	str r6, [r0, #0]	@ 0010fe2a 0660
.org 0x10fe2c
	movs r0, #188	@ 0010fe2c bc20
.org 0x10fe2e
	lsls r0, r0, #1	@ 0010fe2e 4000
.org 0x10fe30
	adds r1, r2, r0	@ 0010fe30 1118
.org 0x10fe32
	ldr r0, [pc, #248]	@ 0010fe32 3e48
.org 0x10fe34
	str r0, [r1, #0]	@ 0010fe34 0860
.org 0x10fe36
	movs r0, #190	@ 0010fe36 be20
.org 0x10fe38
	lsls r0, r0, #1	@ 0010fe38 4000
.org 0x10fe3a
	adds r1, r2, r0	@ 0010fe3a 1118
.org 0x10fe3c
	ldr r0, [pc, #240]	@ 0010fe3c 3c48
.org 0x10fe3e
	str r0, [r1, #0]	@ 0010fe3e 0860
.org 0x10fe40
	movs r2, #128	@ 0010fe40 8022
.org 0x10fe42
	lsls r2, r2, #5	@ 0010fe42 5201
.org 0x10fe44
	adds r1, r2, #0	@ 0010fe44 111c
.org 0x10fe46
	adds r0, r6, #0	@ 0010fe46 301c
.org 0x10fe48
	adds r0, #30	@ 0010fe48 1e30
.org 0x10fe4a
	strh r1, [r0, #0]	@ 0010fe4a 0180
.org 0x10fe4c
	subs r0, #2	@ 0010fe4c 0238
.org 0x10fe4e
	cmp r0, r6	@ 0010fe4e b042
.org 0x10fe50
	bge.n 0x10fe4a	@ 0010fe50 fbda
.org 0x10fe52
	movs r4, #16	@ 0010fe52 1024
.org 0x10fe54
	movs r0, #128	@ 0010fe54 8020
.org 0x10fe56
	lsls r0, r0, #5	@ 0010fe56 4001
.org 0x10fe58
	adds r7, r0, #0	@ 0010fe58 071c
.org 0x10fe5a
	adds r5, r6, #0	@ 0010fe5a 351c
.org 0x10fe5c
	adds r5, #32	@ 0010fe5c 2035
.org 0x10fe5e
	adds r0, r4, #0	@ 0010fe5e 201c
.org 0x10fe60
	subs r0, #16	@ 0010fe60 1038
.org 0x10fe62
	movs r1, #3	@ 0010fe62 0321
.org 0x10fe64
	bl 0x128fb8	@ 0010fe64 19f0a8f8
.org 0x10fe68
	orrs r0, r7	@ 0010fe68 3843
.org 0x10fe6a
	strh r0, [r5, #0]	@ 0010fe6a 2880
.org 0x10fe6c
	adds r5, #2	@ 0010fe6c 0235
.org 0x10fe6e
	adds r4, #1	@ 0010fe6e 0134
.org 0x10fe70
	cmp r4, #63	@ 0010fe70 3f2c
.org 0x10fe72
	ble.n 0x10fe5e	@ 0010fe72 f4dd
.org 0x10fe74
	cmp r4, #95	@ 0010fe74 5f2c
.org 0x10fe76
	bgt.n 0x10fe8a	@ 0010fe76 08dc
.org 0x10fe78
	ldr r2, [pc, #184]	@ 0010fe78 2e4a
.org 0x10fe7a
	adds r1, r2, #0	@ 0010fe7a 111c
.org 0x10fe7c
	lsls r0, r4, #1	@ 0010fe7c 6000
.org 0x10fe7e
	adds r0, r0, r6	@ 0010fe7e 8019
.org 0x10fe80
	strh r1, [r0, #0]	@ 0010fe80 0180
.org 0x10fe82
	adds r0, #2	@ 0010fe82 0230
.org 0x10fe84
	adds r4, #1	@ 0010fe84 0134
.org 0x10fe86
	cmp r4, #95	@ 0010fe86 5f2c
.org 0x10fe88
	ble.n 0x10fe80	@ 0010fe88 fadd
.org 0x10fe8a
	cmp r4, #143	@ 0010fe8a 8f2c
.org 0x10fe8c
	bgt.n 0x10feae	@ 0010fe8c 0fdc
.org 0x10fe8e
	lsls r0, r4, #1	@ 0010fe8e 6000
.org 0x10fe90
	adds r5, r0, r6	@ 0010fe90 8519
.org 0x10fe92
	movs r7, #144	@ 0010fe92 9027
.org 0x10fe94
	subs r0, r7, r4	@ 0010fe94 381b
.org 0x10fe96
	movs r1, #3	@ 0010fe96 0321
.org 0x10fe98
	bl 0x128fb8	@ 0010fe98 19f08ef8
.org 0x10fe9c
	movs r2, #128	@ 0010fe9c 8022
.org 0x10fe9e
	lsls r2, r2, #5	@ 0010fe9e 5201
.org 0x10fea0
	adds r1, r2, #0	@ 0010fea0 111c
.org 0x10fea2
	orrs r0, r1	@ 0010fea2 0843
.org 0x10fea4
	strh r0, [r5, #0]	@ 0010fea4 2880
.org 0x10fea6
	adds r5, #2	@ 0010fea6 0235
.org 0x10fea8
	adds r4, #1	@ 0010fea8 0134
.org 0x10feaa
	cmp r4, #143	@ 0010feaa 8f2c
.org 0x10feac
	ble.n 0x10fe94	@ 0010feac f2dd
.org 0x10feae
	cmp r4, #159	@ 0010feae 9f2c
.org 0x10feb0
	bgt.n 0x10fec6	@ 0010feb0 09dc
.org 0x10feb2
	movs r0, #128	@ 0010feb2 8020
.org 0x10feb4
	lsls r0, r0, #5	@ 0010feb4 4001
.org 0x10feb6
	adds r1, r0, #0	@ 0010feb6 011c
.org 0x10feb8
	lsls r0, r4, #1	@ 0010feb8 6000
.org 0x10feba
	adds r0, r0, r6	@ 0010feba 8019
.org 0x10febc
	strh r1, [r0, #0]	@ 0010febc 0180
.org 0x10febe
	adds r0, #2	@ 0010febe 0230
.org 0x10fec0
	adds r4, #1	@ 0010fec0 0134
.org 0x10fec2
	cmp r4, #159	@ 0010fec2 9f2c
.org 0x10fec4
	ble.n 0x10febc	@ 0010fec4 fadd
.org 0x10fec6
	mov r2, r8	@ 0010fec6 4246
.org 0x10fec8
	ldrh r1, [r2, #8]	@ 0010fec8 1189
.org 0x10feca
	ldr r6, [pc, #108]	@ 0010feca 1b4e
.org 0x10fecc
	ands r6, r1	@ 0010fecc 0e40
.org 0x10fece
	mov r0, r9	@ 0010fece 4846
.org 0x10fed0
	lsls r7, r0, #16	@ 0010fed0 0704
.org 0x10fed2
	cmp r6, #0	@ 0010fed2 002e
.org 0x10fed4
	bne.n 0x10ff8c	@ 0010fed4 5ad1
.org 0x10fed6
	lsls r0, r1, #16	@ 0010fed6 0804
.org 0x10fed8
	asrs r0, r0, #26	@ 0010fed8 8016
.org 0x10feda
	cmp r0, #5	@ 0010feda 0528
.org 0x10fedc
	bgt.n 0x10ff8c	@ 0010fedc 56dc
.org 0x10fede
	movs r0, #128	@ 0010fede 8020
.org 0x10fee0
	lsls r0, r0, #3	@ 0010fee0 c000
.org 0x10fee2
	ands r0, r1	@ 0010fee2 0840
.org 0x10fee4
	cmp r0, #0	@ 0010fee4 0028
.org 0x10fee6
	beq.n 0x10ff4c	@ 0010fee6 31d0
.org 0x10fee8
	asrs r5, r7, #25	@ 0010fee8 7d16
.org 0x10feea
	lsls r4, r5, #2	@ 0010feea ac00
.org 0x10feec
	adds r4, r4, r5	@ 0010feec 6419
.org 0x10feee
	lsls r4, r4, #3	@ 0010feee e400
.org 0x10fef0
	ldr r1, [pc, #72]	@ 0010fef0 1249
.org 0x10fef2
	adds r0, r4, r1	@ 0010fef2 6018
.org 0x10fef4
	ldr r1, [pc, #72]	@ 0010fef4 1249
.org 0x10fef6
	ldrh r2, [r1, #0]	@ 0010fef6 0a88
.org 0x10fef8
	movs r1, #12	@ 0010fef8 0c21
.org 0x10fefa
	ands r1, r2	@ 0010fefa 1140
.org 0x10fefc
	lsls r1, r1, #12	@ 0010fefc 0903
.org 0x10fefe
	bl 0x1d30	@ 0010fefe f1f617ff
.org 0x10ff02
	ldr r2, [pc, #64]	@ 0010ff02 104a
.org 0x10ff04
	adds r4, r4, r2	@ 0010ff04 a418
.org 0x10ff06
	adds r0, r4, #0	@ 0010ff06 201c
.org 0x10ff08
	movs r1, #0	@ 0010ff08 0021
.org 0x10ff0a
	bl 0x2208	@ 0010ff0a f2f67df9
.org 0x10ff0e
	ldr r1, [pc, #56]	@ 0010ff0e 0e49
.org 0x10ff10
	lsls r5, r5, #25	@ 0010ff10 6d06
.org 0x10ff12
	movs r0, #169	@ 0010ff12 a920
.org 0x10ff14
	lsls r0, r0, #24	@ 0010ff14 0006
.org 0x10ff16
	adds r5, r5, r0	@ 0010ff16 2d18
.org 0x10ff18
	lsrs r5, r5, #24	@ 0010ff18 2d0e
.org 0x10ff1a
	str r6, [sp, #0]	@ 0010ff1a 0096
.org 0x10ff1c
	movs r0, #18	@ 0010ff1c 1220
.org 0x10ff1e
	adds r2, r5, #0	@ 0010ff1e 2a1c
.org 0x10ff20
	movs r3, #0	@ 0010ff20 0023
.org 0x10ff22
	bl 0x2734	@ 0010ff22 f2f607fc
.org 0x10ff26
	b.n 0x10ff8c	@ 0010ff26 31e0
.org 0x10ff28
	.byte 0x90,0x15,0x00,0x03	@ 0010ff28 data
.org 0x10ff2c
	.byte 0x52,0x00,0x00,0x04	@ 0010ff2c data
.org 0x10ff30
	.byte 0x01,0x00,0x60,0xa2	@ 0010ff30 data
.org 0x10ff34
	.byte 0x10,0x10,0x00,0x00	@ 0010ff34 data
.org 0x10ff38
	.byte 0xff,0x03,0x00,0x00	@ 0010ff38 data
.org 0x10ff3c
	.byte 0x34,0xcd,0xb6,0x08	@ 0010ff3c data
.org 0x10ff40
	.byte 0x06,0x0a,0x00,0x02	@ 0010ff40 data
.org 0x10ff44
	.byte 0x40,0xcd,0xb6,0x08	@ 0010ff44 data
.org 0x10ff48
	.byte 0x00,0xc0,0xb2,0x08	@ 0010ff48 data
.org 0x10ff4c
	asrs r5, r7, #25	@ 0010ff4c 7d16
.org 0x10ff4e
	lsls r4, r5, #2	@ 0010ff4e ac00
.org 0x10ff50
	adds r4, r4, r5	@ 0010ff50 6419
.org 0x10ff52
	lsls r4, r4, #3	@ 0010ff52 e400
.org 0x10ff54
	ldr r1, [pc, #76]	@ 0010ff54 1349
.org 0x10ff56
	adds r0, r4, r1	@ 0010ff56 6018
.org 0x10ff58
	ldr r1, [pc, #76]	@ 0010ff58 1349
.org 0x10ff5a
	ldrh r2, [r1, #0]	@ 0010ff5a 0a88
.org 0x10ff5c
	movs r1, #12	@ 0010ff5c 0c21
.org 0x10ff5e
	ands r1, r2	@ 0010ff5e 1140
.org 0x10ff60
	lsls r1, r1, #12	@ 0010ff60 0903
.org 0x10ff62
	bl 0x1d30	@ 0010ff62 f1f6e5fe
.org 0x10ff66
	ldr r2, [pc, #68]	@ 0010ff66 114a
.org 0x10ff68
	adds r4, r4, r2	@ 0010ff68 a418
.org 0x10ff6a
	adds r0, r4, #0	@ 0010ff6a 201c
.org 0x10ff6c
	movs r1, #0	@ 0010ff6c 0021
.org 0x10ff6e
	bl 0x2208	@ 0010ff6e f2f64bf9
.org 0x10ff72
	ldr r1, [pc, #60]	@ 0010ff72 0f49
.org 0x10ff74
	lsls r5, r5, #25	@ 0010ff74 6d06
.org 0x10ff76
	movs r0, #168	@ 0010ff76 a820
.org 0x10ff78
	lsls r0, r0, #24	@ 0010ff78 0006
.org 0x10ff7a
	adds r5, r5, r0	@ 0010ff7a 2d18
.org 0x10ff7c
	lsrs r5, r5, #24	@ 0010ff7c 2d0e
.org 0x10ff7e
	movs r0, #32	@ 0010ff7e 2020
