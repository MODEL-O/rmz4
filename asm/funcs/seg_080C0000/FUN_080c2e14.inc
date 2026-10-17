@ FUN_080c2e14  entry 0x080c2e14  size 118
.thumb
.org 0xc2e14
FUN_080c2e14:
	push {lr}	@ 000c2e14 00b5
.org 0xc2e16
	adds r3, r0, #0	@ 000c2e16 031c
.org 0xc2e18
	ldrb r1, [r3, #15]	@ 000c2e18 d97b
.org 0xc2e1a
	cmp r1, #0	@ 000c2e1a 0029
.org 0xc2e1c
	bne.n 0xc2e3c	@ 000c2e1c 0ed1
.org 0xc2e1e
	adds r0, #140	@ 000c2e1e 8c30
.org 0xc2e20
	str r1, [r0, #0]	@ 000c2e20 0160
.org 0xc2e22
	adds r0, #4	@ 000c2e22 0430
.org 0xc2e24
	str r1, [r0, #0]	@ 000c2e24 0160
.org 0xc2e26
	adds r0, #4	@ 000c2e26 0430
.org 0xc2e28
	strb r1, [r0, #0]	@ 000c2e28 0170
.org 0xc2e2a
	ldrb r1, [r3, #10]	@ 000c2e2a 997a
.org 0xc2e2c
	movs r0, #251	@ 000c2e2c fb20
.org 0xc2e2e
	ands r0, r1	@ 000c2e2e 0840
.org 0xc2e30
	movs r1, #254	@ 000c2e30 fe21
.org 0xc2e32
	ands r0, r1	@ 000c2e32 0840
.org 0xc2e34
	strb r0, [r3, #10]	@ 000c2e34 9872
.org 0xc2e36
	ldrb r0, [r3, #15]	@ 000c2e36 d87b
.org 0xc2e38
	adds r0, #1	@ 000c2e38 0130
.org 0xc2e3a
	strb r0, [r3, #15]	@ 000c2e3a d873
.org 0xc2e3c
	adds r0, r3, #0	@ 000c2e3c 181c
.org 0xc2e3e
	adds r0, #182	@ 000c2e3e b630
.org 0xc2e40
	ldrb r0, [r0, #0]	@ 000c2e40 0078
.org 0xc2e42
	cmp r0, #0	@ 000c2e42 0028
.org 0xc2e44
	bne.n 0xc2e50	@ 000c2e44 04d1
.org 0xc2e46
	adds r0, r3, #0	@ 000c2e46 181c
.org 0xc2e48
	adds r0, #181	@ 000c2e48 b530
.org 0xc2e4a
	ldrb r0, [r0, #0]	@ 000c2e4a 0078
.org 0xc2e4c
	cmp r0, #0	@ 000c2e4c 0028
.org 0xc2e4e
	bne.n 0xc2e86	@ 000c2e4e 1ad1
.org 0xc2e50
	ldrb r1, [r3, #10]	@ 000c2e50 997a
.org 0xc2e52
	movs r0, #254	@ 000c2e52 fe20
.org 0xc2e54
	ands r0, r1	@ 000c2e54 0840
.org 0xc2e56
	movs r2, #0	@ 000c2e56 0022
.org 0xc2e58
	movs r1, #253	@ 000c2e58 fd21
.org 0xc2e5a
	ands r0, r1	@ 000c2e5a 0840
.org 0xc2e5c
	strb r0, [r3, #10]	@ 000c2e5c 9872
.org 0xc2e5e
	adds r0, r3, #0	@ 000c2e5e 181c
.org 0xc2e60
	adds r0, #140	@ 000c2e60 8c30
.org 0xc2e62
	str r2, [r0, #0]	@ 000c2e62 0260
.org 0xc2e64
	adds r0, #4	@ 000c2e64 0430
.org 0xc2e66
	str r2, [r0, #0]	@ 000c2e66 0260
.org 0xc2e68
	adds r0, #4	@ 000c2e68 0430
.org 0xc2e6a
	strb r2, [r0, #0]	@ 000c2e6a 0270
.org 0xc2e6c
	ldrb r1, [r3, #10]	@ 000c2e6c 997a
.org 0xc2e6e
	movs r0, #251	@ 000c2e6e fb20
.org 0xc2e70
	ands r0, r1	@ 000c2e70 0840
.org 0xc2e72
	strb r0, [r3, #10]	@ 000c2e72 9872
.org 0xc2e74
	ldr r1, [pc, #20]	@ 000c2e74 0549
.org 0xc2e76
	ldrb r0, [r3, #9]	@ 000c2e76 587a
.org 0xc2e78
	lsls r0, r0, #2	@ 000c2e78 8000
.org 0xc2e7a
	adds r0, r0, r1	@ 000c2e7a 4018
.org 0xc2e7c
	movs r1, #3	@ 000c2e7c 0321
.org 0xc2e7e
	str r1, [r3, #12]	@ 000c2e7e d960
.org 0xc2e80
	ldr r0, [r0, #0]	@ 000c2e80 0068
.org 0xc2e82
	ldr r0, [r0, #12]	@ 000c2e82 c068
.org 0xc2e84
	str r0, [r3, #20]	@ 000c2e84 5861
.org 0xc2e86
	pop {r0}	@ 000c2e86 01bc
.org 0xc2e88
	bx r0	@ 000c2e88 0047
