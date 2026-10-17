@ FUN_080e4de4  entry 0x080e4de4  size 154
.thumb
.org 0xe4de4
FUN_080e4de4:
	push {r4, r5, r6, lr}	@ 000e4de4 70b5
.org 0xe4de6
	adds r5, r0, #0	@ 000e4de6 051c
.org 0xe4de8
	ldr r0, [r5, #84]	@ 000e4de8 686d
.org 0xe4dea
	ldr r1, [r5, #92]	@ 000e4dea e96d
.org 0xe4dec
	adds r0, r0, r1	@ 000e4dec 4018
.org 0xe4dee
	str r0, [r5, #84]	@ 000e4dee 6865
.org 0xe4df0
	ldr r1, [r5, #88]	@ 000e4df0 a96d
.org 0xe4df2
	ldr r2, [r5, #96]	@ 000e4df2 2a6e
.org 0xe4df4
	adds r1, r1, r2	@ 000e4df4 8918
.org 0xe4df6
	str r1, [r5, #88]	@ 000e4df6 a965
.org 0xe4df8
	adds r2, #64	@ 000e4df8 4032
.org 0xe4dfa
	str r2, [r5, #96]	@ 000e4dfa 2a66
.org 0xe4dfc
	bl 0x7c7c	@ 000e4dfc 22f73eff
.org 0xe4e00
	lsls r0, r0, #16	@ 000e4e00 0004
.org 0xe4e02
	lsrs r0, r0, #16	@ 000e4e02 000c
.org 0xe4e04
	cmp r0, #0	@ 000e4e04 0028
.org 0xe4e06
	beq.n 0xe4e0c	@ 000e4e06 01d0
.org 0xe4e08
	cmp r0, #15	@ 000e4e08 0f28
.org 0xe4e0a
	bne.n 0xe4e12	@ 000e4e0a 02d1
.org 0xe4e0c
	ldrb r0, [r5, #18]	@ 000e4e0c a87c
.org 0xe4e0e
	cmp r0, #0	@ 000e4e0e 0028
.org 0xe4e10
	bne.n 0xe4e74	@ 000e4e10 30d1
.org 0xe4e12
	adds r6, r5, #0	@ 000e4e12 2e1c
.org 0xe4e14
	adds r6, #84	@ 000e4e14 5436
.org 0xe4e16
	movs r0, #2	@ 000e4e16 0220
.org 0xe4e18
	adds r1, r6, #0	@ 000e4e18 311c
.org 0xe4e1a
	bl 0xd0c88	@ 000e4e1a ebf735ff
.org 0xe4e1e
	movs r0, #42	@ 000e4e1e 2a20
.org 0xe4e20
	bl 0x2b10	@ 000e4e20 1df776fe
.org 0xe4e24
	ldrb r0, [r5, #17]	@ 000e4e24 687c
.org 0xe4e26
	cmp r0, #0	@ 000e4e26 0028
.org 0xe4e28
	bne.n 0xe4e3a	@ 000e4e28 07d1
.org 0xe4e2a
	ldr r1, [pc, #84]	@ 000e4e2a 1549
.org 0xe4e2c
	ldrb r2, [r5, #10]	@ 000e4e2c aa7a
.org 0xe4e2e
	lsrs r2, r2, #4	@ 000e4e2e 1209
.org 0xe4e30
	movs r0, #1	@ 000e4e30 0120
.org 0xe4e32
	ands r2, r0	@ 000e4e32 0240
.org 0xe4e34
	adds r0, r6, #0	@ 000e4e34 301c
.org 0xe4e36
	bl 0xe4a54	@ 000e4e36 fff70dfe
.org 0xe4e3a
	ldrb r0, [r5, #17]	@ 000e4e3a 687c
.org 0xe4e3c
	cmp r0, #2	@ 000e4e3c 0228
.org 0xe4e3e
	bne.n 0xe4e60	@ 000e4e3e 0fd1
.org 0xe4e40
	movs r1, #129	@ 000e4e40 8121
.org 0xe4e42
	lsls r1, r1, #1	@ 000e4e42 4900
.org 0xe4e44
	ldrb r2, [r5, #10]	@ 000e4e44 aa7a
.org 0xe4e46
	lsrs r2, r2, #4	@ 000e4e46 1209
.org 0xe4e48
	movs r4, #1	@ 000e4e48 0124
.org 0xe4e4a
	ands r2, r4	@ 000e4e4a 2240
.org 0xe4e4c
	adds r0, r6, #0	@ 000e4e4c 301c
.org 0xe4e4e
	bl 0xe4a54	@ 000e4e4e fff701fe
.org 0xe4e52
	ldr r1, [pc, #48]	@ 000e4e52 0c49
.org 0xe4e54
	ldrb r2, [r5, #10]	@ 000e4e54 aa7a
.org 0xe4e56
	lsrs r2, r2, #4	@ 000e4e56 1209
.org 0xe4e58
	ands r2, r4	@ 000e4e58 2240
.org 0xe4e5a
	adds r0, r6, #0	@ 000e4e5a 301c
.org 0xe4e5c
	bl 0xe4a54	@ 000e4e5c fff7fafd
.org 0xe4e60
	ldr r1, [pc, #36]	@ 000e4e60 0949
.org 0xe4e62
	ldrb r0, [r5, #9]	@ 000e4e62 687a
.org 0xe4e64
	lsls r0, r0, #2	@ 000e4e64 8000
.org 0xe4e66
	adds r0, r0, r1	@ 000e4e66 4018
.org 0xe4e68
	movs r1, #2	@ 000e4e68 0221
.org 0xe4e6a
	str r1, [r5, #12]	@ 000e4e6a e960
.org 0xe4e6c
	ldr r0, [r0, #0]	@ 000e4e6c 0068
.org 0xe4e6e
	ldr r0, [r0, #8]	@ 000e4e6e 8068
.org 0xe4e70
	str r0, [r5, #20]	@ 000e4e70 6861
.org 0xe4e72
	ldrb r0, [r5, #18]	@ 000e4e72 a87c
.org 0xe4e74
	subs r0, #1	@ 000e4e74 0138
.org 0xe4e76
	strb r0, [r5, #18]	@ 000e4e76 a874
.org 0xe4e78
	pop {r4, r5, r6}	@ 000e4e78 70bc
.org 0xe4e7a
	pop {r0}	@ 000e4e7a 01bc
.org 0xe4e7c
	bx r0	@ 000e4e7c 0047
