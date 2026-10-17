@ FUN_080f9df0  entry 0x080f9df0  size 120
.thumb
.org 0xf9df0
FUN_080f9df0:
	push {r4, r5, r6, r7, lr}	@ 000f9df0 f0b5
.org 0xf9df2
	mov r7, sl	@ 000f9df2 5746
.org 0xf9df4
	mov r6, r9	@ 000f9df4 4e46
.org 0xf9df6
	mov r5, r8	@ 000f9df6 4546
.org 0xf9df8
	push {r5, r6, r7}	@ 000f9df8 e0b4
.org 0xf9dfa
	sub sp, #12	@ 000f9dfa 83b0
.org 0xf9dfc
	adds r5, r0, #0	@ 000f9dfc 051c
.org 0xf9dfe
	ldrb r0, [r5, #10]	@ 000f9dfe a87a
.org 0xf9e00
	lsrs r0, r0, #4	@ 000f9e00 0009
.org 0xf9e02
	movs r1, #1	@ 000f9e02 0121
.org 0xf9e04
	ands r0, r1	@ 000f9e04 0840
.org 0xf9e06
	lsls r1, r0, #1	@ 000f9e06 4100
.org 0xf9e08
	subs r1, #1	@ 000f9e08 0139
.org 0xf9e0a
	mov sl, r1	@ 000f9e0a 8a46
.org 0xf9e0c
	movs r1, #0	@ 000f9e0c 0021
.org 0xf9e0e
	str r1, [sp, #8]	@ 000f9e0e 0291
.org 0xf9e10
	ldr r4, [pc, #84]	@ 000f9e10 154c
.org 0xf9e12
	mov r9, sp	@ 000f9e12 e946
.org 0xf9e14
	lsls r1, r0, #4	@ 000f9e14 0101
.org 0xf9e16
	orrs r0, r1	@ 000f9e16 0843
.org 0xf9e18
	lsls r0, r0, #24	@ 000f9e18 0006
.org 0xf9e1a
	mov r8, r0	@ 000f9e1a 8046
.org 0xf9e1c
	movs r6, #2	@ 000f9e1c 0226
.org 0xf9e1e
	movs r7, #0	@ 000f9e1e 0027
.org 0xf9e20
	ldrsh r0, [r4, r7]	@ 000f9e20 e05f
.org 0xf9e22
	mov r1, sl	@ 000f9e22 5146
.org 0xf9e24
	muls r1, r0	@ 000f9e24 4143
.org 0xf9e26
	ldr r0, [r5, #84]	@ 000f9e26 686d
.org 0xf9e28
	adds r0, r0, r1	@ 000f9e28 4018
.org 0xf9e2a
	str r0, [sp, #0]	@ 000f9e2a 0090
.org 0xf9e2c
	movs r0, #2	@ 000f9e2c 0220
.org 0xf9e2e
	ldrsh r1, [r4, r0]	@ 000f9e2e 215e
.org 0xf9e30
	ldr r0, [r5, #88]	@ 000f9e30 a86d
.org 0xf9e32
	adds r0, r0, r1	@ 000f9e32 4018
.org 0xf9e34
	mov r1, r9	@ 000f9e34 4946
.org 0xf9e36
	str r0, [r1, #4]	@ 000f9e36 4860
.org 0xf9e38
	ldr r1, [pc, #48]	@ 000f9e38 0c49
.org 0xf9e3a
	ldr r7, [sp, #8]	@ 000f9e3a 029f
.org 0xf9e3c
	adds r1, r7, r1	@ 000f9e3c 7918
.org 0xf9e3e
	mov r0, sp	@ 000f9e3e 6846
.org 0xf9e40
	movs r2, #0	@ 000f9e40 0022
.org 0xf9e42
	mov r7, r8	@ 000f9e42 4746
.org 0xf9e44
	lsrs r3, r7, #24	@ 000f9e44 3b0e
.org 0xf9e46
	bl 0xd4c8c	@ 000f9e46 daf721ff
.org 0xf9e4a
	ldr r0, [sp, #8]	@ 000f9e4a 0298
.org 0xf9e4c
	adds r0, #28	@ 000f9e4c 1c30
.org 0xf9e4e
	str r0, [sp, #8]	@ 000f9e4e 0290
.org 0xf9e50
	adds r4, #4	@ 000f9e50 0434
.org 0xf9e52
	subs r6, #1	@ 000f9e52 013e
.org 0xf9e54
	cmp r6, #0	@ 000f9e54 002e
.org 0xf9e56
	bge.n 0xf9e1e	@ 000f9e56 e2da
.org 0xf9e58
	add sp, #12	@ 000f9e58 03b0
.org 0xf9e5a
	pop {r3, r4, r5}	@ 000f9e5a 38bc
.org 0xf9e5c
	mov r8, r3	@ 000f9e5c 9846
.org 0xf9e5e
	mov r9, r4	@ 000f9e5e a146
.org 0xf9e60
	mov sl, r5	@ 000f9e60 aa46
.org 0xf9e62
	pop {r4, r5, r6, r7}	@ 000f9e62 f0bc
.org 0xf9e64
	pop {r0}	@ 000f9e64 01bc
.org 0xf9e66
	bx r0	@ 000f9e66 0047
