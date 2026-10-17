@ FUN_08002e0c  entry 0x08002e0c  size 84
.thumb
.org 0x2e0c
FUN_08002e0c:
	push {r4, r5, r6, lr}	@ 00002e0c 70b5
.org 0x2e0e
	sub sp, #8	@ 00002e0e 82b0
.org 0x2e10
	adds r4, r0, #0	@ 00002e10 041c
.org 0x2e12
	adds r5, r1, #0	@ 00002e12 0d1c
.org 0x2e14
	adds r6, r2, #0	@ 00002e14 161c
.org 0x2e16
	movs r0, #0	@ 00002e16 0020
.org 0x2e18
	str r0, [sp, #0]	@ 00002e18 0090
.org 0x2e1a
	ldr r2, [pc, #68]	@ 00002e1a 114a
.org 0x2e1c
	mov r0, sp	@ 00002e1c 6846
.org 0x2e1e
	adds r1, r4, #0	@ 00002e1e 211c
.org 0x2e20
	bl 0x128be0	@ 00002e20 25f1defe
.org 0x2e24
	ldr r1, [pc, #60]	@ 00002e24 0f49
.org 0x2e26
	adds r0, r4, #0	@ 00002e26 201c
.org 0x2e28
	bl 0x2c94	@ 00002e28 fff734ff
.org 0x2e2c
	ldrb r2, [r4, #17]	@ 00002e2c 627c
.org 0x2e2e
	movs r0, #16	@ 00002e2e 1020
.org 0x2e30
	orrs r2, r0	@ 00002e30 0243
.org 0x2e32
	ldrb r1, [r4, #21]	@ 00002e32 617d
.org 0x2e34
	movs r0, #13	@ 00002e34 0d20
.org 0x2e36
	negs r0, r0	@ 00002e36 4042
.org 0x2e38
	ands r0, r1	@ 00002e38 0840
.org 0x2e3a
	movs r1, #8	@ 00002e3a 0821
.org 0x2e3c
	orrs r0, r1	@ 00002e3c 0843
.org 0x2e3e
	strb r0, [r4, #21]	@ 00002e3e 6075
.org 0x2e40
	str r5, [r4, #8]	@ 00002e40 a560
.org 0x2e42
	str r6, [r4, #12]	@ 00002e42 e660
.org 0x2e44
	movs r0, #128	@ 00002e44 8020
.org 0x2e46
	lsls r0, r0, #1	@ 00002e46 4000
.org 0x2e48
	strh r0, [r4, #28]	@ 00002e48 a083
.org 0x2e4a
	strh r0, [r4, #30]	@ 00002e4a e083
.org 0x2e4c
	movs r0, #4	@ 00002e4c 0420
.org 0x2e4e
	negs r0, r0	@ 00002e4e 4042
.org 0x2e50
	ands r2, r0	@ 00002e50 0240
.org 0x2e52
	movs r0, #1	@ 00002e52 0120
.org 0x2e54
	orrs r2, r0	@ 00002e54 0243
.org 0x2e56
	strb r2, [r4, #17]	@ 00002e56 6274
.org 0x2e58
	add sp, #8	@ 00002e58 02b0
.org 0x2e5a
	pop {r4, r5, r6}	@ 00002e5a 70bc
.org 0x2e5c
	pop {r0}	@ 00002e5c 01bc
.org 0x2e5e
	bx r0	@ 00002e5e 0047
