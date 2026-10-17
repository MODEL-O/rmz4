@ FUN_080e0d04  entry 0x080e0d04  size 180
.thumb
.org 0xe0d04
FUN_080e0d04:
	push {r4, r5, r6, lr}	@ 000e0d04 70b5
.org 0xe0d06
	sub sp, #8	@ 000e0d06 82b0
.org 0xe0d08
	adds r6, r0, #0	@ 000e0d08 061c
.org 0xe0d0a
	ldrb r0, [r6, #17]	@ 000e0d0a 707c
.org 0xe0d0c
	cmp r0, #1	@ 000e0d0c 0128
.org 0xe0d0e
	bls.n 0xe0d1c	@ 000e0d0e 05d9
.org 0xe0d10
	adds r1, r6, #0	@ 000e0d10 311c
.org 0xe0d12
	adds r1, #84	@ 000e0d12 5431
.org 0xe0d14
	movs r0, #3	@ 000e0d14 0320
.org 0xe0d16
	bl 0xd0c88	@ 000e0d16 eff7b7ff
.org 0xe0d1a
	b.n 0xe0da2	@ 000e0d1a 42e0
.org 0xe0d1c
	ldrb r1, [r6, #10]	@ 000e0d1c b17a
.org 0xe0d1e
	movs r0, #16	@ 000e0d1e 1020
.org 0xe0d20
	ands r0, r1	@ 000e0d20 0840
.org 0xe0d22
	cmp r0, #0	@ 000e0d22 0028
.org 0xe0d24
	beq.n 0xe0d2e	@ 000e0d24 03d0
.org 0xe0d26
	ldr r0, [r6, #84]	@ 000e0d26 706d
.org 0xe0d28
	movs r1, #160	@ 000e0d28 a021
.org 0xe0d2a
	lsls r1, r1, #4	@ 000e0d2a 0901
.org 0xe0d2c
	b.n 0xe0d32	@ 000e0d2c 01e0
.org 0xe0d2e
	ldr r0, [r6, #84]	@ 000e0d2e 706d
.org 0xe0d30
	ldr r1, [pc, #72]	@ 000e0d30 1249
.org 0xe0d32
	adds r0, r0, r1	@ 000e0d32 4018
.org 0xe0d34
	str r0, [sp, #0]	@ 000e0d34 0090
.org 0xe0d36
	ldr r0, [r6, #88]	@ 000e0d36 b06d
.org 0xe0d38
	movs r1, #128	@ 000e0d38 8021
.org 0xe0d3a
	lsls r1, r1, #3	@ 000e0d3a c900
.org 0xe0d3c
	adds r0, r0, r1	@ 000e0d3c 4018
.org 0xe0d3e
	str r0, [sp, #4]	@ 000e0d3e 0190
.org 0xe0d40
	ldrb r0, [r6, #17]	@ 000e0d40 707c
.org 0xe0d42
	cmp r0, #0	@ 000e0d42 0028
.org 0xe0d44
	beq.n 0xe0d80	@ 000e0d44 1cd0
.org 0xe0d46
	movs r0, #1	@ 000e0d46 0120
.org 0xe0d48
	mov r1, sp	@ 000e0d48 6946
.org 0xe0d4a
	bl 0xd0c88	@ 000e0d4a eff79dff
.org 0xe0d4e
	movs r0, #42	@ 000e0d4e 2a20
.org 0xe0d50
	bl 0x2b10	@ 000e0d50 21f7defe
.org 0xe0d54
	adds r5, r6, #0	@ 000e0d54 351c
.org 0xe0d56
	adds r5, #84	@ 000e0d56 5435
.org 0xe0d58
	ldrb r3, [r6, #10]	@ 000e0d58 b37a
.org 0xe0d5a
	lsrs r3, r3, #4	@ 000e0d5a 1b09
.org 0xe0d5c
	movs r4, #1	@ 000e0d5c 0124
.org 0xe0d5e
	ands r3, r4	@ 000e0d5e 2340
.org 0xe0d60
	adds r0, r5, #0	@ 000e0d60 281c
.org 0xe0d62
	movs r1, #3	@ 000e0d62 0321
.org 0xe0d64
	movs r2, #3	@ 000e0d64 0322
.org 0xe0d66
	bl 0xe08bc	@ 000e0d66 fff7a9fd
.org 0xe0d6a
	ldrb r3, [r6, #10]	@ 000e0d6a b37a
.org 0xe0d6c
	lsrs r3, r3, #4	@ 000e0d6c 1b09
.org 0xe0d6e
	ands r3, r4	@ 000e0d6e 2340
.org 0xe0d70
	adds r0, r5, #0	@ 000e0d70 281c
.org 0xe0d72
	movs r1, #3	@ 000e0d72 0321
.org 0xe0d74
	movs r2, #4	@ 000e0d74 0422
.org 0xe0d76
	bl 0xe08bc	@ 000e0d76 fff7a1fd
.org 0xe0d7a
	b.n 0xe0da2	@ 000e0d7a 12e0
.org 0xe0d7c
	.byte 0x00,0xf6,0xff,0xff	@ 000e0d7c data
.org 0xe0d80
	movs r0, #2	@ 000e0d80 0220
.org 0xe0d82
	mov r1, sp	@ 000e0d82 6946
.org 0xe0d84
	bl 0xd0c88	@ 000e0d84 eff780ff
.org 0xe0d88
	movs r0, #42	@ 000e0d88 2a20
.org 0xe0d8a
	bl 0x2b10	@ 000e0d8a 21f7c1fe
.org 0xe0d8e
	adds r0, r6, #0	@ 000e0d8e 301c
.org 0xe0d90
	adds r0, #84	@ 000e0d90 5430
.org 0xe0d92
	ldrb r3, [r6, #10]	@ 000e0d92 b37a
.org 0xe0d94
	lsrs r3, r3, #4	@ 000e0d94 1b09
.org 0xe0d96
	movs r1, #1	@ 000e0d96 0121
.org 0xe0d98
	ands r3, r1	@ 000e0d98 0b40
.org 0xe0d9a
	movs r1, #3	@ 000e0d9a 0321
.org 0xe0d9c
	movs r2, #2	@ 000e0d9c 0222
.org 0xe0d9e
	bl 0xe08bc	@ 000e0d9e fff78dfd
.org 0xe0da2
	ldr r1, [pc, #24]	@ 000e0da2 0649
.org 0xe0da4
	ldrb r0, [r6, #9]	@ 000e0da4 707a
.org 0xe0da6
	lsls r0, r0, #2	@ 000e0da6 8000
.org 0xe0da8
	adds r0, r0, r1	@ 000e0da8 4018
.org 0xe0daa
	movs r1, #4	@ 000e0daa 0421
.org 0xe0dac
	str r1, [r6, #12]	@ 000e0dac f160
.org 0xe0dae
	ldr r0, [r0, #0]	@ 000e0dae 0068
.org 0xe0db0
	ldr r0, [r0, #16]	@ 000e0db0 0069
.org 0xe0db2
	str r0, [r6, #20]	@ 000e0db2 7061
.org 0xe0db4
	add sp, #8	@ 000e0db4 02b0
.org 0xe0db6
	pop {r4, r5, r6}	@ 000e0db6 70bc
