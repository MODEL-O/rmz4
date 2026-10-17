@ FUN_08103c10  entry 0x08103c10  size 94
.thumb
.org 0x103c10
FUN_08103c10:
	push {r4, r5, r6, lr}	@ 00103c10 70b5
.org 0x103c12
	adds r5, r0, #0	@ 00103c12 051c
.org 0x103c14
	ldr r0, [r5, #88]	@ 00103c14 a86d
.org 0x103c16
	ldr r1, [pc, #88]	@ 00103c16 1649
.org 0x103c18
	adds r0, r0, r1	@ 00103c18 4018
.org 0x103c1a
	str r0, [r5, #88]	@ 00103c1a a865
.org 0x103c1c
	movs r4, #0	@ 00103c1c 0024
.org 0x103c1e
	adds r6, r5, #0	@ 00103c1e 2e1c
.org 0x103c20
	adds r6, #84	@ 00103c20 5436
.org 0x103c22
	lsls r1, r4, #3	@ 00103c22 e100
.org 0x103c24
	subs r1, r1, r4	@ 00103c24 091b
.org 0x103c26
	lsls r1, r1, #2	@ 00103c26 8900
.org 0x103c28
	ldr r0, [pc, #72]	@ 00103c28 1248
.org 0x103c2a
	adds r1, r1, r0	@ 00103c2a 0918
.org 0x103c2c
	adds r0, r5, #0	@ 00103c2c 281c
.org 0x103c2e
	adds r0, #84	@ 00103c2e 5430
.org 0x103c30
	movs r2, #0	@ 00103c30 0022
.org 0x103c32
	movs r3, #0	@ 00103c32 0023
.org 0x103c34
	bl 0xe3db4	@ 00103c34 e0f7bef8
.org 0x103c38
	adds r0, r4, #1	@ 00103c38 601c
.org 0x103c3a
	lsls r0, r0, #24	@ 00103c3a 0006
.org 0x103c3c
	lsrs r4, r0, #24	@ 00103c3c 040e
.org 0x103c3e
	cmp r4, #6	@ 00103c3e 062c
.org 0x103c40
	bls.n 0x103c22	@ 00103c40 efd9
.org 0x103c42
	bl 0x19764	@ 00103c42 15f78ffd
.org 0x103c46
	movs r0, #4	@ 00103c46 0420
.org 0x103c48
	adds r1, r6, #0	@ 00103c48 311c
.org 0x103c4a
	bl 0x1fe64	@ 00103c4a 1cf70bf9
.org 0x103c4e
	movs r0, #193	@ 00103c4e c120
.org 0x103c50
	lsls r0, r0, #1	@ 00103c50 4000
.org 0x103c52
	bl 0x2b10	@ 00103c52 fef65dff
.org 0x103c56
	ldr r1, [pc, #32]	@ 00103c56 0849
.org 0x103c58
	ldrb r0, [r5, #9]	@ 00103c58 687a
.org 0x103c5a
	lsls r0, r0, #2	@ 00103c5a 8000
.org 0x103c5c
	adds r0, r0, r1	@ 00103c5c 4018
.org 0x103c5e
	movs r1, #4	@ 00103c5e 0421
.org 0x103c60
	str r1, [r5, #12]	@ 00103c60 e960
.org 0x103c62
	ldr r0, [r0, #0]	@ 00103c62 0068
.org 0x103c64
	ldr r0, [r0, #16]	@ 00103c64 0069
.org 0x103c66
	str r0, [r5, #20]	@ 00103c66 6861
.org 0x103c68
	pop {r4, r5, r6}	@ 00103c68 70bc
.org 0x103c6a
	pop {r0}	@ 00103c6a 01bc
.org 0x103c6c
	bx r0	@ 00103c6c 0047
