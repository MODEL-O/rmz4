@ FUN_080e09f4  entry 0x080e09f4  size 106
.thumb
.org 0xe09f4
FUN_080e09f4:
	push {r4, r5, r6, lr}	@ 000e09f4 70b5
.org 0xe09f6
	sub sp, #8	@ 000e09f6 82b0
.org 0xe09f8
	adds r6, r0, #0	@ 000e09f8 061c
.org 0xe09fa
	ldrb r1, [r6, #10]	@ 000e09fa b17a
.org 0xe09fc
	movs r0, #16	@ 000e09fc 1020
.org 0xe09fe
	ands r0, r1	@ 000e09fe 0840
.org 0xe0a00
	cmp r0, #0	@ 000e0a00 0028
.org 0xe0a02
	bne.n 0xe0a10	@ 000e0a02 05d1
.org 0xe0a04
	ldr r0, [r6, #84]	@ 000e0a04 706d
.org 0xe0a06
	ldr r1, [pc, #4]	@ 000e0a06 0149
.org 0xe0a08
	b.n 0xe0a16	@ 000e0a08 05e0
.org 0xe0a0a
	.byte 0x00	@ 000e0a0a data
.org 0xe0a0b
	.byte 0x00	@ 000e0a0b data
.org 0xe0a0c
	.byte 0x00,0xf6,0xff,0xff	@ 000e0a0c data
.org 0xe0a10
	ldr r0, [r6, #84]	@ 000e0a10 706d
.org 0xe0a12
	movs r1, #160	@ 000e0a12 a021
.org 0xe0a14
	lsls r1, r1, #4	@ 000e0a14 0901
.org 0xe0a16
	adds r0, r0, r1	@ 000e0a16 4018
.org 0xe0a18
	str r0, [sp, #0]	@ 000e0a18 0090
.org 0xe0a1a
	ldr r0, [r6, #88]	@ 000e0a1a b06d
.org 0xe0a1c
	movs r1, #128	@ 000e0a1c 8021
.org 0xe0a1e
	lsls r1, r1, #3	@ 000e0a1e c900
.org 0xe0a20
	adds r0, r0, r1	@ 000e0a20 4018
.org 0xe0a22
	str r0, [sp, #4]	@ 000e0a22 0190
.org 0xe0a24
	movs r0, #1	@ 000e0a24 0120
.org 0xe0a26
	mov r1, sp	@ 000e0a26 6946
.org 0xe0a28
	bl 0xd0c88	@ 000e0a28 f0f72ef9
.org 0xe0a2c
	movs r0, #42	@ 000e0a2c 2a20
.org 0xe0a2e
	bl 0x2b10	@ 000e0a2e 22f76ff8
.org 0xe0a32
	movs r0, #2	@ 000e0a32 0220
.org 0xe0a34
	strb r0, [r6, #17]	@ 000e0a34 7074
.org 0xe0a36
	adds r5, r6, #0	@ 000e0a36 351c
.org 0xe0a38
	adds r5, #84	@ 000e0a38 5435
.org 0xe0a3a
	ldrb r3, [r6, #10]	@ 000e0a3a b37a
.org 0xe0a3c
	lsrs r3, r3, #4	@ 000e0a3c 1b09
.org 0xe0a3e
	movs r4, #1	@ 000e0a3e 0124
.org 0xe0a40
	ands r3, r4	@ 000e0a40 2340
.org 0xe0a42
	adds r0, r5, #0	@ 000e0a42 281c
.org 0xe0a44
	movs r1, #3	@ 000e0a44 0321
.org 0xe0a46
	movs r2, #3	@ 000e0a46 0322
.org 0xe0a48
	bl 0xe08bc	@ 000e0a48 fff738ff
.org 0xe0a4c
	ldrb r3, [r6, #10]	@ 000e0a4c b37a
.org 0xe0a4e
	lsrs r3, r3, #4	@ 000e0a4e 1b09
.org 0xe0a50
	ands r3, r4	@ 000e0a50 2340
.org 0xe0a52
	adds r0, r5, #0	@ 000e0a52 281c
.org 0xe0a54
	movs r1, #3	@ 000e0a54 0321
.org 0xe0a56
	movs r2, #4	@ 000e0a56 0422
.org 0xe0a58
	bl 0xe08bc	@ 000e0a58 fff730ff
.org 0xe0a5c
	add sp, #8	@ 000e0a5c 02b0
