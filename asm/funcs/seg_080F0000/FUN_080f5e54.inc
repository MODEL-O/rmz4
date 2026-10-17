@ FUN_080f5e54  entry 0x080f5e54  size 106
.thumb
.org 0xf5e54
FUN_080f5e54:
	push {r4, r5, r6, lr}	@ 000f5e54 70b5
.org 0xf5e56
	adds r4, r0, #0	@ 000f5e56 041c
.org 0xf5e58
	bl 0x1cc9c	@ 000f5e58 26f720ff
.org 0xf5e5c
	ldrb r1, [r4, #10]	@ 000f5e5c a17a
.org 0xf5e5e
	movs r0, #1	@ 000f5e5e 0120
.org 0xf5e60
	movs r6, #0	@ 000f5e60 0026
.org 0xf5e62
	orrs r0, r1	@ 000f5e62 0843
.org 0xf5e64
	movs r1, #2	@ 000f5e64 0221
.org 0xf5e66
	orrs r0, r1	@ 000f5e66 0843
.org 0xf5e68
	strb r0, [r4, #10]	@ 000f5e68 a072
.org 0xf5e6a
	movs r1, #186	@ 000f5e6a ba21
.org 0xf5e6c
	lsls r1, r1, #7	@ 000f5e6c c901
.org 0xf5e6e
	adds r0, r4, #0	@ 000f5e6e 201c
.org 0xf5e70
	bl 0x1cf00	@ 000f5e70 27f746f8
.org 0xf5e74
	ldrb r0, [r4, #10]	@ 000f5e74 a07a
.org 0xf5e76
	movs r1, #4	@ 000f5e76 0421
.org 0xf5e78
	orrs r0, r1	@ 000f5e78 0843
.org 0xf5e7a
	strb r0, [r4, #10]	@ 000f5e7a a072
.org 0xf5e7c
	adds r5, r4, #0	@ 000f5e7c 251c
.org 0xf5e7e
	adds r5, #116	@ 000f5e7e 7435
.org 0xf5e80
	ldr r1, [pc, #60]	@ 000f5e80 0f49
.org 0xf5e82
	adds r2, r4, #0	@ 000f5e82 221c
.org 0xf5e84
	adds r2, #84	@ 000f5e84 5432
.org 0xf5e86
	adds r0, r5, #0	@ 000f5e86 281c
.org 0xf5e88
	movs r3, #0	@ 000f5e88 0023
.org 0xf5e8a
	bl 0x5760	@ 000f5e8a 0ff769fc
.org 0xf5e8e
	str r4, [r5, #44]	@ 000f5e8e ec62
.org 0xf5e90
	str r6, [r5, #36]	@ 000f5e90 6e62
.org 0xf5e92
	ldrb r1, [r4, #11]	@ 000f5e92 e17a
.org 0xf5e94
	movs r0, #8	@ 000f5e94 0820
.org 0xf5e96
	orrs r0, r1	@ 000f5e96 0843
.org 0xf5e98
	strb r0, [r4, #11]	@ 000f5e98 e072
.org 0xf5e9a
	ldr r0, [pc, #40]	@ 000f5e9a 0a48
.org 0xf5e9c
	str r0, [r4, #48]	@ 000f5e9c 2063
.org 0xf5e9e
	ldr r0, [pc, #40]	@ 000f5e9e 0a48
.org 0xf5ea0
	strh r0, [r4, #38]	@ 000f5ea0 e084
.org 0xf5ea2
	ldr r0, [r4, #84]	@ 000f5ea2 606d
.org 0xf5ea4
	ldr r1, [r4, #88]	@ 000f5ea4 a16d
.org 0xf5ea6
	bl 0x8534	@ 000f5ea6 12f745fb
.org 0xf5eaa
	ldr r1, [pc, #32]	@ 000f5eaa 0849
.org 0xf5eac
	adds r0, r0, r1	@ 000f5eac 4018
.org 0xf5eae
	str r0, [r4, #88]	@ 000f5eae a065
.org 0xf5eb0
	str r6, [r4, #100]	@ 000f5eb0 6666
.org 0xf5eb2
	str r6, [r4, #104]	@ 000f5eb2 a666
.org 0xf5eb4
	adds r4, #180	@ 000f5eb4 b434
.org 0xf5eb6
	strh r6, [r4, #0]	@ 000f5eb6 2680
.org 0xf5eb8
	pop {r4, r5, r6}	@ 000f5eb8 70bc
.org 0xf5eba
	pop {r0}	@ 000f5eba 01bc
.org 0xf5ebc
	bx r0	@ 000f5ebc 0047
