@ FUN_080bfd1c  entry 0x080bfd1c  size 116
.thumb
.org 0xbfd1c
FUN_080bfd1c:
	push {r4, lr}	@ 000bfd1c 10b5
.org 0xbfd1e
	adds r4, r0, #0	@ 000bfd1e 041c
.org 0xbfd20
	ldr r3, [r4, #40]	@ 000bfd20 a36a
.org 0xbfd22
	ldrb r2, [r4, #15]	@ 000bfd22 e27b
.org 0xbfd24
	cmp r2, #0	@ 000bfd24 002a
.org 0xbfd26
	bne.n 0xbfd34	@ 000bfd26 05d1
.org 0xbfd28
	ldrb r0, [r4, #10]	@ 000bfd28 a07a
.org 0xbfd2a
	movs r1, #254	@ 000bfd2a fe21
.org 0xbfd2c
	ands r1, r0	@ 000bfd2c 0140
.org 0xbfd2e
	strb r1, [r4, #10]	@ 000bfd2e a172
.org 0xbfd30
	adds r0, r2, #1	@ 000bfd30 501c
.org 0xbfd32
	strb r0, [r4, #15]	@ 000bfd32 e073
.org 0xbfd34
	ldrb r0, [r3, #12]	@ 000bfd34 187b
.org 0xbfd36
	cmp r0, #1	@ 000bfd36 0128
.org 0xbfd38
	bls.n 0xbfd78	@ 000bfd38 1ed9
.org 0xbfd3a
	ldrb r1, [r4, #10]	@ 000bfd3a a17a
.org 0xbfd3c
	movs r0, #254	@ 000bfd3c fe20
.org 0xbfd3e
	ands r0, r1	@ 000bfd3e 0840
.org 0xbfd40
	movs r2, #0	@ 000bfd40 0022
.org 0xbfd42
	movs r1, #253	@ 000bfd42 fd21
.org 0xbfd44
	ands r0, r1	@ 000bfd44 0840
.org 0xbfd46
	strb r0, [r4, #10]	@ 000bfd46 a072
.org 0xbfd48
	adds r0, r4, #0	@ 000bfd48 201c
.org 0xbfd4a
	adds r0, #140	@ 000bfd4a 8c30
.org 0xbfd4c
	str r2, [r0, #0]	@ 000bfd4c 0260
.org 0xbfd4e
	adds r0, #4	@ 000bfd4e 0430
.org 0xbfd50
	str r2, [r0, #0]	@ 000bfd50 0260
.org 0xbfd52
	adds r0, #4	@ 000bfd52 0430
.org 0xbfd54
	strb r2, [r0, #0]	@ 000bfd54 0270
.org 0xbfd56
	ldrb r1, [r4, #10]	@ 000bfd56 a17a
.org 0xbfd58
	movs r0, #251	@ 000bfd58 fb20
.org 0xbfd5a
	ands r0, r1	@ 000bfd5a 0840
.org 0xbfd5c
	strb r0, [r4, #10]	@ 000bfd5c a072
.org 0xbfd5e
	ldr r1, [pc, #20]	@ 000bfd5e 0549
.org 0xbfd60
	ldrb r0, [r4, #9]	@ 000bfd60 607a
.org 0xbfd62
	lsls r0, r0, #2	@ 000bfd62 8000
.org 0xbfd64
	adds r0, r0, r1	@ 000bfd64 4018
.org 0xbfd66
	movs r1, #3	@ 000bfd66 0321
.org 0xbfd68
	str r1, [r4, #12]	@ 000bfd68 e160
.org 0xbfd6a
	ldr r0, [r0, #0]	@ 000bfd6a 0068
.org 0xbfd6c
	ldr r0, [r0, #12]	@ 000bfd6c c068
.org 0xbfd6e
	str r0, [r4, #20]	@ 000bfd6e 6061
.org 0xbfd70
	b.n 0xbfd90	@ 000bfd70 0ee0
.org 0xbfd72
	.byte 0x00	@ 000bfd72 data
.org 0xbfd73
	.byte 0x00	@ 000bfd73 data
.org 0xbfd74
	.byte 0xf4,0x49,0x86,0x08	@ 000bfd74 data
.org 0xbfd78
	adds r0, r4, #0	@ 000bfd78 201c
.org 0xbfd7a
	bl 0x1cff0	@ 000bfd7a 5df739f9
.org 0xbfd7e
	adds r0, r4, #0	@ 000bfd7e 201c
.org 0xbfd80
	adds r0, #188	@ 000bfd80 bc30
.org 0xbfd82
	ldr r1, [r0, #0]	@ 000bfd82 0168
.org 0xbfd84
	cmp r1, #0	@ 000bfd84 0029
.org 0xbfd86
	bne.n 0xbfd90	@ 000bfd86 03d1
.org 0xbfd88
	movs r0, #2	@ 000bfd88 0220
.org 0xbfd8a
	strb r0, [r4, #13]	@ 000bfd8a 6073
.org 0xbfd8c
	strb r1, [r4, #14]	@ 000bfd8c a173
.org 0xbfd8e
	strb r1, [r4, #15]	@ 000bfd8e e173
