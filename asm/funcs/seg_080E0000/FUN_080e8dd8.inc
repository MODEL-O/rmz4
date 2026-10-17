@ FUN_080e8dd8  entry 0x080e8dd8  size 134
.thumb
.org 0xe8dd8
FUN_080e8dd8:
	push {r4, r5, r6, r7, lr}	@ 000e8dd8 f0b5
.org 0xe8dda
	mov r7, r8	@ 000e8dda 4746
.org 0xe8ddc
	push {r7}	@ 000e8ddc 80b4
.org 0xe8dde
	adds r6, r0, #0	@ 000e8dde 061c
.org 0xe8de0
	lsls r5, r1, #16	@ 000e8de0 0d04
.org 0xe8de2
	lsrs r4, r5, #16	@ 000e8de2 2c0c
.org 0xe8de4
	lsls r2, r2, #16	@ 000e8de4 1204
.org 0xe8de6
	lsrs r2, r2, #16	@ 000e8de6 120c
.org 0xe8de8
	mov r8, r2	@ 000e8de8 9046
.org 0xe8dea
	ldr r0, [pc, #92]	@ 000e8dea 1748
.org 0xe8dec
	ldr r0, [r0, #0]	@ 000e8dec 0068
.org 0xe8dee
	bl 0x5500	@ 000e8dee 1cf787fb
.org 0xe8df2
	adds r3, r0, #0	@ 000e8df2 031c
.org 0xe8df4
	cmp r3, #0	@ 000e8df4 002b
.org 0xe8df6
	beq.n 0xe8e5e	@ 000e8df6 32d0
.org 0xe8df8
	adds r1, r3, #0	@ 000e8df8 191c
.org 0xe8dfa
	adds r1, #37	@ 000e8dfa 2531
.org 0xe8dfc
	movs r2, #0	@ 000e8dfc 0022
.org 0xe8dfe
	movs r0, #1	@ 000e8dfe 0120
.org 0xe8e00
	strb r0, [r1, #0]	@ 000e8e00 0870
.org 0xe8e02
	ldr r0, [pc, #72]	@ 000e8e02 1248
.org 0xe8e04
	movs r1, #92	@ 000e8e04 5c21
.org 0xe8e06
	strb r1, [r3, #9]	@ 000e8e06 5972
.org 0xe8e08
	movs r1, #184	@ 000e8e08 b821
.org 0xe8e0a
	lsls r1, r1, #1	@ 000e8e0a 4900
.org 0xe8e0c
	adds r0, r0, r1	@ 000e8e0c 4018
.org 0xe8e0e
	ldr r0, [r0, #0]	@ 000e8e0e 0068
.org 0xe8e10
	ldr r0, [r0, #0]	@ 000e8e10 0068
.org 0xe8e12
	str r0, [r3, #20]	@ 000e8e12 5861
.org 0xe8e14
	movs r7, #0	@ 000e8e14 0027
.org 0xe8e16
	strh r2, [r3, #32]	@ 000e8e16 1a84
.org 0xe8e18
	adds r0, r3, #0	@ 000e8e18 181c
.org 0xe8e1a
	adds r0, #34	@ 000e8e1a 2230
.org 0xe8e1c
	strb r7, [r0, #0]	@ 000e8e1c 0770
.org 0xe8e1e
	ldr r0, [r6, #0]	@ 000e8e1e 3068
.org 0xe8e20
	ldr r1, [r6, #4]	@ 000e8e20 7168
.org 0xe8e22
	str r0, [r3, #84]	@ 000e8e22 5865
.org 0xe8e24
	str r1, [r3, #88]	@ 000e8e24 9965
.org 0xe8e26
	lsrs r0, r5, #24	@ 000e8e26 280e
.org 0xe8e28
	strb r0, [r3, #16]	@ 000e8e28 1874
.org 0xe8e2a
	strb r4, [r3, #17]	@ 000e8e2a 5c74
.org 0xe8e2c
	adds r0, r3, #0	@ 000e8e2c 181c
.org 0xe8e2e
	adds r0, #116	@ 000e8e2e 7430
.org 0xe8e30
	mov r1, r8	@ 000e8e30 4146
.org 0xe8e32
	strh r1, [r0, #0]	@ 000e8e32 0180
.org 0xe8e34
	str r6, [r3, #40]	@ 000e8e34 9e62
.org 0xe8e36
	ldr r0, [pc, #24]	@ 000e8e36 0648
.org 0xe8e38
	cmp r4, r0	@ 000e8e38 8442
.org 0xe8e3a
	beq.n 0xe8e42	@ 000e8e3a 02d0
.org 0xe8e3c
	adds r0, #253	@ 000e8e3c fd30
.org 0xe8e3e
	cmp r4, r0	@ 000e8e3e 8442
.org 0xe8e40
	bne.n 0xe8e54	@ 000e8e40 08d1
.org 0xe8e42
	movs r0, #30	@ 000e8e42 1e20
.org 0xe8e44
	strb r0, [r3, #18]	@ 000e8e44 9874
.org 0xe8e46
	b.n 0xe8e56	@ 000e8e46 06e0
.org 0xe8e48
	.byte 0x9c,0xed,0x02,0x02	@ 000e8e48 data
.org 0xe8e4c
	.byte 0x64,0x6f,0x86,0x08	@ 000e8e4c data
.org 0xe8e50
	.byte 0x03,0x01,0x00,0x00	@ 000e8e50 data
.org 0xe8e54
	strb r7, [r3, #18]	@ 000e8e54 9f74
.org 0xe8e56
	adds r1, r3, #0	@ 000e8e56 191c
.org 0xe8e58
	adds r1, #124	@ 000e8e58 7c31
.org 0xe8e5a
	movs r0, #0	@ 000e8e5a 0020
.org 0xe8e5c
	strb r0, [r1, #0]	@ 000e8e5c 0870
