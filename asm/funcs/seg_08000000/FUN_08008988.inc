@ FUN_08008988  entry 0x08008988  size 240
.thumb
.org 0x8988
FUN_08008988:
	push {r4, r5, r6, r7, lr}	@ 00008988 f0b5
.org 0x898a
	mov r7, sl	@ 0000898a 5746
.org 0x898c
	mov r6, r9	@ 0000898c 4e46
.org 0x898e
	mov r5, r8	@ 0000898e 4546
.org 0x8990
	push {r5, r6, r7}	@ 00008990 e0b4
.org 0x8992
	adds r4, r0, #0	@ 00008992 041c
.org 0x8994
	adds r6, r1, #0	@ 00008994 0e1c
.org 0x8996
	mov r8, r4	@ 00008996 a046
.org 0x8998
	movs r0, #0	@ 00008998 0020
.org 0x899a
	mov sl, r0	@ 0000899a 8246
.org 0x899c
	ldr r1, [pc, #56]	@ 0000899c 0e49
.org 0x899e
	mov r9, r1	@ 0000899e 8946
.org 0x89a0
	movs r0, #232	@ 000089a0 e820
.org 0x89a2
	lsls r0, r0, #1	@ 000089a2 4000
.org 0x89a4
	add r0, r9	@ 000089a4 4844
.org 0x89a6
	ldrh r0, [r0, #0]	@ 000089a6 0088
.org 0x89a8
	cmp r0, #4	@ 000089a8 0428
.org 0x89aa
	bne.n 0x89c6	@ 000089aa 0cd1
.org 0x89ac
	ldr r0, [pc, #44]	@ 000089ac 0b48
.org 0x89ae
	add r0, r8	@ 000089ae 4044
.org 0x89b0
	movs r1, #240	@ 000089b0 f021
.org 0x89b2
	lsls r1, r1, #10	@ 000089b2 8902
.org 0x89b4
	bl 0x129050	@ 000089b4 20f14cfb
.org 0x89b8
	movs r2, #240	@ 000089b8 f022
.org 0x89ba
	lsls r2, r2, #8	@ 000089ba 1202
.org 0x89bc
	adds r4, r0, r2	@ 000089bc 8418
.org 0x89be
	mov r0, r8	@ 000089be 4046
.org 0x89c0
	subs r0, r0, r4	@ 000089c0 001b
.org 0x89c2
	mov sl, r0	@ 000089c2 8246
.org 0x89c4
	mov r8, r4	@ 000089c4 a046
.org 0x89c6
	asrs r2, r4, #12	@ 000089c6 2213
.org 0x89c8
	asrs r7, r6, #12	@ 000089c8 3713
.org 0x89ca
	ldr r0, [pc, #20]	@ 000089ca 0548
.org 0x89cc
	cmp r7, r0	@ 000089cc 8742
.org 0x89ce
	bls.n 0x89e4	@ 000089ce 09d9
.org 0x89d0
	movs r0, #1	@ 000089d0 0120
.org 0x89d2
	negs r0, r0	@ 000089d2 4042
.org 0x89d4
	b.n 0x8a92	@ 000089d4 5de0
.org 0x89d6
	.byte 0x00	@ 000089d6 data
.org 0x89d7
	.byte 0x00	@ 000089d7 data
.org 0x89d8
	.byte 0xb0,0x0a,0x00,0x02	@ 000089d8 data
.org 0x89dc
	.byte 0x00,0x10,0xff,0xff	@ 000089dc data
.org 0x89e0
	.byte 0xff,0x04,0x00,0x00	@ 000089e0 data
.org 0x89e4
	movs r5, #0	@ 000089e4 0025
.org 0x89e6
	ldr r0, [pc, #84]	@ 000089e6 1548
.org 0x89e8
	cmp r2, r0	@ 000089e8 8242
.org 0x89ea
	bhi.n 0x8a62	@ 000089ea 3ad8
.org 0x89ec
	movs r1, #252	@ 000089ec fc21
.org 0x89ee
	lsls r1, r1, #3	@ 000089ee c900
.org 0x89f0
	add r9, r1	@ 000089f0 8944
.org 0x89f2
	mov r1, r9	@ 000089f2 4946
.org 0x89f4
	ldrh r0, [r1, #0]	@ 000089f4 0888
.org 0x89f6
	muls r0, r7	@ 000089f6 7843
.org 0x89f8
	adds r0, r0, r2	@ 000089f8 8018
.org 0x89fa
	adds r0, #2	@ 000089fa 0230
.org 0x89fc
	lsls r0, r0, #1	@ 000089fc 4000
.org 0x89fe
	add r0, r9	@ 000089fe 4844
.org 0x8a00
	ldrh r0, [r0, #0]	@ 00008a00 0088
.org 0x8a02
	ldr r2, [pc, #60]	@ 00008a02 0f4a
.org 0x8a04
	ldr r1, [r2, #0]	@ 00008a04 1168
.org 0x8a06
	lsls r0, r0, #1	@ 00008a06 4000
.org 0x8a08
	adds r0, r0, r1	@ 00008a08 4018
.org 0x8a0a
	ldrh r2, [r0, #0]	@ 00008a0a 0288
.org 0x8a0c
	ldr r0, [pc, #52]	@ 00008a0c 0d48
.org 0x8a0e
	cmp r2, r0	@ 00008a0e 8242
.org 0x8a10
	beq.n 0x8a30	@ 00008a10 0ed0
.org 0x8a12
	ldr r1, [pc, #52]	@ 00008a12 0d49
.org 0x8a14
	movs r0, #15	@ 00008a14 0f20
.org 0x8a16
	ands r2, r0	@ 00008a16 0240
.org 0x8a18
	lsls r0, r2, #2	@ 00008a18 9000
.org 0x8a1a
	adds r0, r0, r1	@ 00008a1a 4018
.org 0x8a1c
	ldr r2, [pc, #44]	@ 00008a1c 0b4a
.org 0x8a1e
	adds r1, r2, #0	@ 00008a1e 111c
.org 0x8a20
	bics r1, r4	@ 00008a20 a143
.org 0x8a22
	ldr r3, [r0, #0]	@ 00008a22 0368
.org 0x8a24
	adds r0, r6, #0	@ 00008a24 301c
.org 0x8a26
	ands r0, r2	@ 00008a26 1040
.org 0x8a28
	bl 0x128f88	@ 00008a28 20f1aefa
.org 0x8a2c
	cmp r0, #0	@ 00008a2c 0028
.org 0x8a2e
	bne.n 0x8a62	@ 00008a2e 18d1
.org 0x8a30
	movs r0, #1	@ 00008a30 0120
.org 0x8a32
	ands r0, r5	@ 00008a32 2840
.org 0x8a34
	cmp r0, #0	@ 00008a34 0028
.org 0x8a36
	beq.n 0x8a50	@ 00008a36 0bd0
.org 0x8a38
	subs r4, #1	@ 00008a38 013c
.org 0x8a3a
	b.n 0x8a54	@ 00008a3a 0be0
.org 0x8a3c
	.byte 0x7f,0x07,0x00,0x00	@ 00008a3c data
.org 0x8a40
	.byte 0x68,0x0c,0x00,0x02	@ 00008a40 data
.org 0x8a44
	.byte 0x0f,0x80,0x00,0x00	@ 00008a44 data
.org 0x8a48
	.byte 0x94,0xb1,0x82,0x08	@ 00008a48 data
.org 0x8a4c
	.byte 0xff,0x0f,0x00,0x00	@ 00008a4c data
.org 0x8a50
	asrs r0, r4, #12	@ 00008a50 2013
.org 0x8a52
	lsls r4, r0, #12	@ 00008a52 0403
.org 0x8a54
	asrs r2, r4, #12	@ 00008a54 2213
.org 0x8a56
	adds r5, #1	@ 00008a56 0135
.org 0x8a58
	cmp r5, #127	@ 00008a58 7f2d
.org 0x8a5a
	bgt.n 0x8a66	@ 00008a5a 04dc
.org 0x8a5c
	ldr r0, [pc, #16]	@ 00008a5c 0448
.org 0x8a5e
	cmp r2, r0	@ 00008a5e 8242
.org 0x8a60
	bls.n 0x89f2	@ 00008a60 c7d9
.org 0x8a62
	cmp r5, #127	@ 00008a62 7f2d
.org 0x8a64
	ble.n 0x8a74	@ 00008a64 06dd
.org 0x8a66
	mov r0, r8	@ 00008a66 4046
.org 0x8a68
	adds r1, r6, #0	@ 00008a68 311c
.org 0x8a6a
	movs r2, #0	@ 00008a6a 0022
.org 0x8a6c
	b.n 0x8a88	@ 00008a6c 0ce0
.org 0x8a6e
	.byte 0x00	@ 00008a6e data
.org 0x8a6f
	.byte 0x00	@ 00008a6f data
.org 0x8a70
	.byte 0x7f,0x07,0x00,0x00	@ 00008a70 data
.org 0x8a74
	adds r0, r4, #0	@ 00008a74 201c
.org 0x8a76
	adds r1, r6, #0	@ 00008a76 311c
