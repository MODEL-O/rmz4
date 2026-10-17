@ FUN_080a2c24  entry 0x080a2c24  size 136
.thumb
.org 0xa2c24
FUN_080a2c24:
	push {r4, r5, r6, r7, lr}	@ 000a2c24 f0b5
.org 0xa2c26
	adds r5, r0, #0	@ 000a2c26 051c
.org 0xa2c28
	ldrb r7, [r5, #16]	@ 000a2c28 2f7c
.org 0xa2c2a
	ldrb r6, [r5, #15]	@ 000a2c2a ee7b
.org 0xa2c2c
	cmp r6, #0	@ 000a2c2c 002e
.org 0xa2c2e
	bne.n 0xa2c74	@ 000a2c2e 21d1
.org 0xa2c30
	movs r0, #42	@ 000a2c30 2a20
.org 0xa2c32
	bl 0x2b10	@ 000a2c32 5ff76dff
.org 0xa2c36
	adds r4, r5, #0	@ 000a2c36 2c1c
.org 0xa2c38
	adds r4, #84	@ 000a2c38 5434
.org 0xa2c3a
	movs r0, #2	@ 000a2c3a 0220
.org 0xa2c3c
	adds r1, r4, #0	@ 000a2c3c 211c
.org 0xa2c3e
	bl 0xd0c88	@ 000a2c3e 2ef023f8
.org 0xa2c42
	movs r0, #4	@ 000a2c42 0420
.org 0xa2c44
	movs r1, #33	@ 000a2c44 2121
.org 0xa2c46
	adds r2, r4, #0	@ 000a2c46 221c
.org 0xa2c48
	bl 0x2ab88	@ 000a2c48 87f79eff
.org 0xa2c4c
	ldrb r1, [r5, #10]	@ 000a2c4c a97a
.org 0xa2c4e
	movs r0, #254	@ 000a2c4e fe20
.org 0xa2c50
	ands r0, r1	@ 000a2c50 0840
.org 0xa2c52
	strb r0, [r5, #10]	@ 000a2c52 a872
.org 0xa2c54
	adds r0, r5, #0	@ 000a2c54 281c
.org 0xa2c56
	adds r0, #140	@ 000a2c56 8c30
.org 0xa2c58
	str r6, [r0, #0]	@ 000a2c58 0660
.org 0xa2c5a
	adds r0, #4	@ 000a2c5a 0430
.org 0xa2c5c
	str r6, [r0, #0]	@ 000a2c5c 0660
.org 0xa2c5e
	adds r0, #4	@ 000a2c5e 0430
.org 0xa2c60
	strb r6, [r0, #0]	@ 000a2c60 0670
.org 0xa2c62
	ldrb r1, [r5, #10]	@ 000a2c62 a97a
.org 0xa2c64
	movs r0, #251	@ 000a2c64 fb20
.org 0xa2c66
	ands r0, r1	@ 000a2c66 0840
.org 0xa2c68
	strb r0, [r5, #10]	@ 000a2c68 a872
.org 0xa2c6a
	movs r0, #2	@ 000a2c6a 0220
.org 0xa2c6c
	strb r0, [r5, #18]	@ 000a2c6c a874
.org 0xa2c6e
	ldrb r0, [r5, #15]	@ 000a2c6e e87b
.org 0xa2c70
	adds r0, #1	@ 000a2c70 0130
.org 0xa2c72
	strb r0, [r5, #15]	@ 000a2c72 e873
.org 0xa2c74
	ldrb r0, [r5, #18]	@ 000a2c74 a87c
.org 0xa2c76
	subs r0, #1	@ 000a2c76 0138
.org 0xa2c78
	strb r0, [r5, #18]	@ 000a2c78 a874
.org 0xa2c7a
	lsls r0, r0, #24	@ 000a2c7a 0006
.org 0xa2c7c
	cmp r0, #0	@ 000a2c7c 0028
.org 0xa2c7e
	bne.n 0xa2ca6	@ 000a2c7e 12d1
.org 0xa2c80
	cmp r7, #1	@ 000a2c80 012f
.org 0xa2c82
	bne.n 0xa2c94	@ 000a2c82 07d1
.org 0xa2c84
	ldr r0, [pc, #36]	@ 000a2c84 0948
.org 0xa2c86
	adds r1, r0, #0	@ 000a2c86 011c
.org 0xa2c88
	adds r1, #38	@ 000a2c88 2631
.org 0xa2c8a
	ldrb r0, [r1, #0]	@ 000a2c8a 0878
.org 0xa2c8c
	cmp r0, #0	@ 000a2c8c 0028
.org 0xa2c8e
	beq.n 0xa2c94	@ 000a2c8e 01d0
.org 0xa2c90
	adds r0, #255	@ 000a2c90 ff30
.org 0xa2c92
	strb r0, [r1, #0]	@ 000a2c92 0870
.org 0xa2c94
	ldr r1, [pc, #24]	@ 000a2c94 0649
.org 0xa2c96
	ldrb r0, [r5, #9]	@ 000a2c96 687a
.org 0xa2c98
	lsls r0, r0, #2	@ 000a2c98 8000
.org 0xa2c9a
	adds r0, r0, r1	@ 000a2c9a 4018
.org 0xa2c9c
	movs r1, #4	@ 000a2c9c 0421
.org 0xa2c9e
	str r1, [r5, #12]	@ 000a2c9e e960
.org 0xa2ca0
	ldr r0, [r0, #0]	@ 000a2ca0 0068
.org 0xa2ca2
	ldr r0, [r0, #16]	@ 000a2ca2 0069
.org 0xa2ca4
	str r0, [r5, #20]	@ 000a2ca4 6861
.org 0xa2ca6
	pop {r4, r5, r6, r7}	@ 000a2ca6 f0bc
.org 0xa2ca8
	pop {r0}	@ 000a2ca8 01bc
.org 0xa2caa
	bx r0	@ 000a2caa 0047
