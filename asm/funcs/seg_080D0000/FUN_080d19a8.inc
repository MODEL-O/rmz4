@ FUN_080d19a8  entry 0x080d19a8  size 192
.thumb
.org 0xd19a8
FUN_080d19a8:
	push {r4, r5, r6, r7, lr}	@ 000d19a8 f0b5
.org 0xd19aa
	mov r7, sl	@ 000d19aa 5746
.org 0xd19ac
	mov r6, r9	@ 000d19ac 4e46
.org 0xd19ae
	mov r5, r8	@ 000d19ae 4546
.org 0xd19b0
	push {r5, r6, r7}	@ 000d19b0 e0b4
.org 0xd19b2
	mov r8, r0	@ 000d19b2 8046
.org 0xd19b4
	mov sl, r1	@ 000d19b4 8a46
.org 0xd19b6
	lsls r2, r2, #24	@ 000d19b6 1206
.org 0xd19b8
	lsrs r6, r2, #24	@ 000d19b8 160e
.org 0xd19ba
	movs r5, #0	@ 000d19ba 0025
.org 0xd19bc
	mov r9, r5	@ 000d19bc a946
.org 0xd19be
	ldr r0, [pc, #56]	@ 000d19be 0e48
.org 0xd19c0
	ldr r0, [r0, #0]	@ 000d19c0 0068
.org 0xd19c2
	bl 0x5500	@ 000d19c2 33f79dfd
.org 0xd19c6
	adds r3, r0, #0	@ 000d19c6 031c
.org 0xd19c8
	cmp r3, #0	@ 000d19c8 002b
.org 0xd19ca
	beq.n 0xd1a5e	@ 000d19ca 48d0
.org 0xd19cc
	adds r0, #37	@ 000d19cc 2530
.org 0xd19ce
	movs r2, #1	@ 000d19ce 0122
.org 0xd19d0
	strb r2, [r0, #0]	@ 000d19d0 0270
.org 0xd19d2
	ldr r1, [pc, #40]	@ 000d19d2 0a49
.org 0xd19d4
	movs r0, #4	@ 000d19d4 0420
.org 0xd19d6
	strb r0, [r3, #9]	@ 000d19d6 5872
.org 0xd19d8
	ldr r0, [r1, #16]	@ 000d19d8 0869
.org 0xd19da
	ldr r0, [r0, #0]	@ 000d19da 0068
.org 0xd19dc
	str r0, [r3, #20]	@ 000d19dc 5861
.org 0xd19de
	mov r0, r9	@ 000d19de 4846
.org 0xd19e0
	strh r0, [r3, #32]	@ 000d19e0 1884
.org 0xd19e2
	adds r0, r3, #0	@ 000d19e2 181c
.org 0xd19e4
	adds r0, #34	@ 000d19e4 2230
.org 0xd19e6
	mov r1, r9	@ 000d19e6 4946
.org 0xd19e8
	strb r1, [r0, #0]	@ 000d19e8 0170
.org 0xd19ea
	strb r1, [r3, #16]	@ 000d19ea 1974
.org 0xd19ec
	cmp r5, #0	@ 000d19ec 002d
.org 0xd19ee
	bne.n 0xd1a00	@ 000d19ee 07d1
.org 0xd19f0
	adds r0, r6, #0	@ 000d19f0 301c
.org 0xd19f2
	ands r0, r2	@ 000d19f2 1040
.org 0xd19f4
	b.n 0xd1a02	@ 000d19f4 05e0
.org 0xd19f6
	.byte 0x00	@ 000d19f6 data
.org 0xd19f7
	.byte 0x00	@ 000d19f7 data
.org 0xd19f8
	.byte 0x9c,0xed,0x02,0x02	@ 000d19f8 data
.org 0xd19fc
	.byte 0x64,0x6f,0x86,0x08	@ 000d19fc data
.org 0xd1a00
	movs r0, #0	@ 000d1a00 0020
.org 0xd1a02
	adds r1, r0, #0	@ 000d1a02 011c
.org 0xd1a04
	strb r1, [r3, #17]	@ 000d1a04 5974
.org 0xd1a06
	cmp r1, #0	@ 000d1a06 0029
.org 0xd1a08
	beq.n 0xd1a12	@ 000d1a08 03d0
.org 0xd1a0a
	mov r2, r8	@ 000d1a0a 4246
.org 0xd1a0c
	str r2, [r3, #116]	@ 000d1a0c 5a67
.org 0xd1a0e
	mov r7, sl	@ 000d1a0e 5746
.org 0xd1a10
	str r7, [r3, #120]	@ 000d1a10 9f67
.org 0xd1a12
	movs r0, #1	@ 000d1a12 0120
.org 0xd1a14
	adds r1, r6, #0	@ 000d1a14 311c
.org 0xd1a16
	eors r1, r0	@ 000d1a16 4140
.org 0xd1a18
	ldr r4, [pc, #88]	@ 000d1a18 164c
.org 0xd1a1a
	lsls r0, r5, #29	@ 000d1a1a 6807
.org 0xd1a1c
	movs r2, #128	@ 000d1a1c 8022
.org 0xd1a1e
	lsls r2, r2, #23	@ 000d1a1e d205
.org 0xd1a20
	adds r0, r0, r2	@ 000d1a20 8018
.org 0xd1a22
	lsrs r0, r0, #23	@ 000d1a22 c00d
.org 0xd1a24
	adds r0, r0, r4	@ 000d1a24 0019
.org 0xd1a26
	movs r7, #0	@ 000d1a26 0027
.org 0xd1a28
	ldrsh r2, [r0, r7]	@ 000d1a28 c25f
.org 0xd1a2a
	lsls r1, r1, #6	@ 000d1a2a 8901
.org 0xd1a2c
	movs r0, #128	@ 000d1a2c 8020
.org 0xd1a2e
	lsls r0, r0, #2	@ 000d1a2e 8000
.org 0xd1a30
	subs r1, r0, r1	@ 000d1a30 411a
.org 0xd1a32
	adds r0, r2, #0	@ 000d1a32 101c
.org 0xd1a34
	muls r0, r1	@ 000d1a34 4843
.org 0xd1a36
	cmp r0, #0	@ 000d1a36 0028
.org 0xd1a38
	bge.n 0xd1a3c	@ 000d1a38 00da
.org 0xd1a3a
	adds r0, #255	@ 000d1a3a ff30
.org 0xd1a3c
	asrs r0, r0, #8	@ 000d1a3c 0012
.org 0xd1a3e
	str r0, [r3, #92]	@ 000d1a3e d865
.org 0xd1a40
	lsls r0, r5, #29	@ 000d1a40 6807
.org 0xd1a42
	lsrs r0, r0, #23	@ 000d1a42 c00d
.org 0xd1a44
	adds r0, r0, r4	@ 000d1a44 0019
.org 0xd1a46
	movs r2, #0	@ 000d1a46 0022
.org 0xd1a48
	ldrsh r0, [r0, r2]	@ 000d1a48 805e
.org 0xd1a4a
	muls r0, r1	@ 000d1a4a 4843
.org 0xd1a4c
	cmp r0, #0	@ 000d1a4c 0028
.org 0xd1a4e
	bge.n 0xd1a52	@ 000d1a4e 00da
.org 0xd1a50
	adds r0, #255	@ 000d1a50 ff30
.org 0xd1a52
	asrs r0, r0, #8	@ 000d1a52 0012
.org 0xd1a54
	str r0, [r3, #96]	@ 000d1a54 1866
.org 0xd1a56
	mov r7, r8	@ 000d1a56 4746
.org 0xd1a58
	str r7, [r3, #84]	@ 000d1a58 5f65
.org 0xd1a5a
	mov r0, sl	@ 000d1a5a 5046
.org 0xd1a5c
	str r0, [r3, #88]	@ 000d1a5c 9865
.org 0xd1a5e
	adds r5, #1	@ 000d1a5e 0135
.org 0xd1a60
	cmp r5, #7	@ 000d1a60 072d
.org 0xd1a62
	ble.n 0xd19be	@ 000d1a62 acdd
.org 0xd1a64
	pop {r3, r4, r5}	@ 000d1a64 38bc
.org 0xd1a66
	mov r8, r3	@ 000d1a66 9846
