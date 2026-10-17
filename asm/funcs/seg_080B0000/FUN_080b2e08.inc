@ FUN_080b2e08  entry 0x080b2e08  size 128
.thumb
.org 0xb2e08
FUN_080b2e08:
	push {r4, lr}	@ 000b2e08 10b5
.org 0xb2e0a
	sub sp, #8	@ 000b2e0a 82b0
.org 0xb2e0c
	adds r4, r0, #0	@ 000b2e0c 041c
.org 0xb2e0e
	ldr r0, [pc, #44]	@ 000b2e0e 0b48
.org 0xb2e10
	ldr r1, [r0, #4]	@ 000b2e10 4168
.org 0xb2e12
	ldr r0, [r0, #0]	@ 000b2e12 0068
.org 0xb2e14
	str r0, [sp, #0]	@ 000b2e14 0090
.org 0xb2e16
	str r1, [sp, #4]	@ 000b2e16 0191
.org 0xb2e18
	ldr r0, [r4, #84]	@ 000b2e18 606d
.org 0xb2e1a
	ldr r1, [r4, #88]	@ 000b2e1a a16d
.org 0xb2e1c
	movs r2, #128	@ 000b2e1c 8022
.org 0xb2e1e
	lsls r2, r2, #4	@ 000b2e1e 1201
.org 0xb2e20
	adds r1, r1, r2	@ 000b2e20 8918
.org 0xb2e22
	bl 0x7c7c	@ 000b2e22 54f72bff
.org 0xb2e26
	lsls r0, r0, #16	@ 000b2e26 0004
.org 0xb2e28
	lsrs r1, r0, #16	@ 000b2e28 010c
.org 0xb2e2a
	movs r0, #128	@ 000b2e2a 8020
.org 0xb2e2c
	lsls r0, r0, #7	@ 000b2e2c c001
.org 0xb2e2e
	ands r0, r1	@ 000b2e2e 0840
.org 0xb2e30
	cmp r0, #0	@ 000b2e30 0028
.org 0xb2e32
	beq.n 0xb2e40	@ 000b2e32 05d0
.org 0xb2e34
	adds r1, r4, #0	@ 000b2e34 211c
.org 0xb2e36
	adds r1, #182	@ 000b2e36 b631
.org 0xb2e38
	movs r0, #0	@ 000b2e38 0020
.org 0xb2e3a
	b.n 0xb2e50	@ 000b2e3a 09e0
.org 0xb2e3c
	.byte 0x2c,0x9e,0x12,0x08	@ 000b2e3c data
.org 0xb2e40
	movs r0, #128	@ 000b2e40 8020
.org 0xb2e42
	lsls r0, r0, #6	@ 000b2e42 8001
.org 0xb2e44
	ands r0, r1	@ 000b2e44 0840
.org 0xb2e46
	cmp r0, #0	@ 000b2e46 0028
.org 0xb2e48
	beq.n 0xb2e84	@ 000b2e48 1cd0
.org 0xb2e4a
	adds r1, r4, #0	@ 000b2e4a 211c
.org 0xb2e4c
	adds r1, #182	@ 000b2e4c b631
.org 0xb2e4e
	movs r0, #1	@ 000b2e4e 0120
.org 0xb2e50
	strb r0, [r1, #0]	@ 000b2e50 0870
.org 0xb2e52
	ldrb r0, [r1, #0]	@ 000b2e52 0878
.org 0xb2e54
	lsls r0, r0, #2	@ 000b2e54 8000
.org 0xb2e56
	add r0, sp	@ 000b2e56 6844
.org 0xb2e58
	ldr r1, [r0, #0]	@ 000b2e58 0168
.org 0xb2e5a
	lsls r1, r1, #8	@ 000b2e5a 0902
.org 0xb2e5c
	ldr r0, [r4, #84]	@ 000b2e5c 606d
.org 0xb2e5e
	adds r0, r0, r1	@ 000b2e5e 4018
.org 0xb2e60
	ldr r1, [r4, #88]	@ 000b2e60 a16d
.org 0xb2e62
	ldr r2, [pc, #40]	@ 000b2e62 0a4a
.org 0xb2e64
	adds r1, r1, r2	@ 000b2e64 8918
.org 0xb2e66
	bl 0x7c7c	@ 000b2e66 54f709ff
.org 0xb2e6a
	lsls r0, r0, #16	@ 000b2e6a 0004
.org 0xb2e6c
	cmp r0, #0	@ 000b2e6c 0028
.org 0xb2e6e
	bne.n 0xb2e84	@ 000b2e6e 09d1
.org 0xb2e70
	ldr r0, [r4, #84]	@ 000b2e70 606d
.org 0xb2e72
	ldr r1, [r4, #88]	@ 000b2e72 a16d
.org 0xb2e74
	movs r2, #128	@ 000b2e74 8022
.org 0xb2e76
	lsls r2, r2, #3	@ 000b2e76 d200
.org 0xb2e78
	adds r1, r1, r2	@ 000b2e78 8918
.org 0xb2e7a
	bl 0x8aa4	@ 000b2e7a 55f713fe
.org 0xb2e7e
	ldr r1, [r4, #84]	@ 000b2e7e 616d
.org 0xb2e80
	adds r1, r1, r0	@ 000b2e80 0918
.org 0xb2e82
	str r1, [r4, #84]	@ 000b2e82 6165
.org 0xb2e84
	add sp, #8	@ 000b2e84 02b0
.org 0xb2e86
	pop {r4}	@ 000b2e86 10bc
