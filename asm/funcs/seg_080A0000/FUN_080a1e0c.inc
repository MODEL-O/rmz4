@ FUN_080a1e0c  entry 0x080a1e0c  size 124
.thumb
.org 0xa1e0c
FUN_080a1e0c:
	push {r4, r5, lr}	@ 000a1e0c 30b5
.org 0xa1e0e
	adds r5, r0, #0	@ 000a1e0e 051c
.org 0xa1e10
	adds r0, #182	@ 000a1e10 b630
.org 0xa1e12
	ldrb r0, [r0, #0]	@ 000a1e12 0078
.org 0xa1e14
	cmp r0, #0	@ 000a1e14 0028
.org 0xa1e16
	bne.n 0xa1e42	@ 000a1e16 14d1
.org 0xa1e18
	adds r0, r5, #0	@ 000a1e18 281c
.org 0xa1e1a
	adds r0, #140	@ 000a1e1a 8c30
.org 0xa1e1c
	ldr r0, [r0, #0]	@ 000a1e1c 0068
.org 0xa1e1e
	movs r1, #128	@ 000a1e1e 8021
.org 0xa1e20
	lsls r1, r1, #9	@ 000a1e20 4902
.org 0xa1e22
	ands r0, r1	@ 000a1e22 0840
.org 0xa1e24
	cmp r0, #0	@ 000a1e24 0028
.org 0xa1e26
	beq.n 0xa1e32	@ 000a1e26 04d0
.org 0xa1e28
	adds r4, r5, #0	@ 000a1e28 2c1c
.org 0xa1e2a
	adds r4, #84	@ 000a1e2a 5434
.org 0xa1e2c
	adds r0, r4, #0	@ 000a1e2c 201c
.org 0xa1e2e
	movs r1, #0	@ 000a1e2e 0021
.org 0xa1e30
	b.n 0xa1e3a	@ 000a1e30 03e0
.org 0xa1e32
	adds r4, r5, #0	@ 000a1e32 2c1c
.org 0xa1e34
	adds r4, #84	@ 000a1e34 5434
.org 0xa1e36
	adds r0, r4, #0	@ 000a1e36 201c
.org 0xa1e38
	movs r1, #1	@ 000a1e38 0121
.org 0xa1e3a
	movs r2, #0	@ 000a1e3a 0022
.org 0xa1e3c
	bl 0xe1508	@ 000a1e3c 3ff064fb
.org 0xa1e40
	b.n 0xa1e50	@ 000a1e40 06e0
.org 0xa1e42
	adds r4, r5, #0	@ 000a1e42 2c1c
.org 0xa1e44
	adds r4, #84	@ 000a1e44 5434
.org 0xa1e46
	adds r0, r4, #0	@ 000a1e46 201c
.org 0xa1e48
	movs r1, #2	@ 000a1e48 0221
.org 0xa1e4a
	movs r2, #0	@ 000a1e4a 0022
.org 0xa1e4c
	bl 0xe1508	@ 000a1e4c 3ff05cfb
.org 0xa1e50
	ldr r2, [pc, #52]	@ 000a1e50 0d4a
.org 0xa1e52
	ldrh r1, [r2, #12]	@ 000a1e52 9189
.org 0xa1e54
	ldr r0, [pc, #52]	@ 000a1e54 0d48
.org 0xa1e56
	cmp r1, r0	@ 000a1e56 8142
.org 0xa1e58
	bhi.n 0xa1e5e	@ 000a1e58 01d8
.org 0xa1e5a
	adds r0, r1, #1	@ 000a1e5a 481c
.org 0xa1e5c
	strh r0, [r2, #12]	@ 000a1e5c 9081
.org 0xa1e5e
	adds r0, r5, #0	@ 000a1e5e 281c
.org 0xa1e60
	adds r1, r4, #0	@ 000a1e60 211c
.org 0xa1e62
	bl 0x2abe0	@ 000a1e62 88f7bdfe
.org 0xa1e66
	movs r0, #2	@ 000a1e66 0220
.org 0xa1e68
	movs r1, #7	@ 000a1e68 0721
.org 0xa1e6a
	adds r2, r4, #0	@ 000a1e6a 221c
.org 0xa1e6c
	bl 0x2ab88	@ 000a1e6c 88f78cfe
.org 0xa1e70
	ldr r1, [pc, #28]	@ 000a1e70 0749
.org 0xa1e72
	ldrb r0, [r5, #9]	@ 000a1e72 687a
.org 0xa1e74
	lsls r0, r0, #2	@ 000a1e74 8000
.org 0xa1e76
	adds r0, r0, r1	@ 000a1e76 4018
.org 0xa1e78
	movs r1, #4	@ 000a1e78 0421
.org 0xa1e7a
	str r1, [r5, #12]	@ 000a1e7a e960
.org 0xa1e7c
	ldr r0, [r0, #0]	@ 000a1e7c 0068
.org 0xa1e7e
	ldr r0, [r0, #16]	@ 000a1e7e 0069
.org 0xa1e80
	str r0, [r5, #20]	@ 000a1e80 6861
.org 0xa1e82
	pop {r4, r5}	@ 000a1e82 30bc
.org 0xa1e84
	pop {r0}	@ 000a1e84 01bc
.org 0xa1e86
	bx r0	@ 000a1e86 0047
