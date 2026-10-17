@ FUN_080b6ee4  entry 0x080b6ee4  size 186
.thumb
.org 0xb6ee4
FUN_080b6ee4:
	push {r4, r5, r6, r7, lr}	@ 000b6ee4 f0b5
.org 0xb6ee6
	mov r7, sl	@ 000b6ee6 5746
.org 0xb6ee8
	mov r6, r9	@ 000b6ee8 4e46
.org 0xb6eea
	mov r5, r8	@ 000b6eea 4546
.org 0xb6eec
	push {r5, r6, r7}	@ 000b6eec e0b4
.org 0xb6eee
	sub sp, #8	@ 000b6eee 82b0
.org 0xb6ef0
	adds r4, r0, #0	@ 000b6ef0 041c
.org 0xb6ef2
	ldrb r0, [r4, #15]	@ 000b6ef2 e07b
.org 0xb6ef4
	cmp r0, #0	@ 000b6ef4 0028
.org 0xb6ef6
	bne.n 0xb6f10	@ 000b6ef6 0bd1
.org 0xb6ef8
	adds r0, r4, #0	@ 000b6ef8 201c
.org 0xb6efa
	adds r0, #116	@ 000b6efa 7430
.org 0xb6efc
	ldr r1, [pc, #160]	@ 000b6efc 2849
.org 0xb6efe
	bl 0x5784	@ 000b6efe 4ef741fc
.org 0xb6f02
	ldr r1, [pc, #160]	@ 000b6f02 2849
.org 0xb6f04
	adds r0, r4, #0	@ 000b6f04 201c
.org 0xb6f06
	bl 0x1cf00	@ 000b6f06 65f7fbff
.org 0xb6f0a
	ldrb r0, [r4, #15]	@ 000b6f0a e07b
.org 0xb6f0c
	adds r0, #1	@ 000b6f0c 0130
.org 0xb6f0e
	strb r0, [r4, #15]	@ 000b6f0e e073
.org 0xb6f10
	adds r0, r4, #0	@ 000b6f10 201c
.org 0xb6f12
	bl 0x1cff0	@ 000b6f12 66f76df8
.org 0xb6f16
	adds r0, r4, #0	@ 000b6f16 201c
.org 0xb6f18
	adds r0, #115	@ 000b6f18 7330
.org 0xb6f1a
	ldrb r0, [r0, #0]	@ 000b6f1a 0078
.org 0xb6f1c
	cmp r0, #3	@ 000b6f1c 0328
.org 0xb6f1e
	bne.n 0xb6f8e	@ 000b6f1e 36d1
.org 0xb6f20
	ldr r0, [r4, #84]	@ 000b6f20 606d
.org 0xb6f22
	str r0, [sp, #0]	@ 000b6f22 0090
.org 0xb6f24
	movs r5, #0	@ 000b6f24 0025
.org 0xb6f26
	movs r0, #140	@ 000b6f26 8c20
.org 0xb6f28
	adds r0, r0, r4	@ 000b6f28 0019
.org 0xb6f2a
	mov r8, r0	@ 000b6f2a 8046
.org 0xb6f2c
	movs r0, #144	@ 000b6f2c 9020
.org 0xb6f2e
	adds r0, r0, r4	@ 000b6f2e 0019
.org 0xb6f30
	mov r9, r0	@ 000b6f30 8146
.org 0xb6f32
	movs r0, #148	@ 000b6f32 9420
.org 0xb6f34
	adds r0, r0, r4	@ 000b6f34 0019
.org 0xb6f36
	mov sl, r0	@ 000b6f36 8246
.org 0xb6f38
	mov r7, sp	@ 000b6f38 6f46
.org 0xb6f3a
	ldr r6, [pc, #108]	@ 000b6f3a 1b4e
.org 0xb6f3c
	ldr r0, [r4, #88]	@ 000b6f3c a06d
.org 0xb6f3e
	adds r0, r0, r6	@ 000b6f3e 8019
.org 0xb6f40
	str r0, [r7, #4]	@ 000b6f40 7860
.org 0xb6f42
	lsls r2, r5, #24	@ 000b6f42 2a06
.org 0xb6f44
	lsrs r2, r2, #24	@ 000b6f44 120e
.org 0xb6f46
	adds r0, r4, #0	@ 000b6f46 201c
.org 0xb6f48
	mov r1, sp	@ 000b6f48 6946
.org 0xb6f4a
	bl 0xb6b54	@ 000b6f4a fff703fe
.org 0xb6f4e
	movs r0, #192	@ 000b6f4e c020
.org 0xb6f50
	lsls r0, r0, #5	@ 000b6f50 4001
.org 0xb6f52
	adds r6, r6, r0	@ 000b6f52 3618
.org 0xb6f54
	adds r5, #1	@ 000b6f54 0135
.org 0xb6f56
	cmp r5, #2	@ 000b6f56 022d
.org 0xb6f58
	ble.n 0xb6f3c	@ 000b6f58 f0dd
.org 0xb6f5a
	movs r2, #0	@ 000b6f5a 0022
.org 0xb6f5c
	ldrb r1, [r4, #10]	@ 000b6f5c a17a
.org 0xb6f5e
	movs r0, #254	@ 000b6f5e fe20
.org 0xb6f60
	ands r0, r1	@ 000b6f60 0840
.org 0xb6f62
	movs r1, #253	@ 000b6f62 fd21
.org 0xb6f64
	ands r0, r1	@ 000b6f64 0840
.org 0xb6f66
	strb r0, [r4, #10]	@ 000b6f66 a072
.org 0xb6f68
	mov r0, r8	@ 000b6f68 4046
.org 0xb6f6a
	str r2, [r0, #0]	@ 000b6f6a 0260
.org 0xb6f6c
	mov r0, r9	@ 000b6f6c 4846
.org 0xb6f6e
	str r2, [r0, #0]	@ 000b6f6e 0260
.org 0xb6f70
	mov r0, sl	@ 000b6f70 5046
.org 0xb6f72
	strb r2, [r0, #0]	@ 000b6f72 0270
.org 0xb6f74
	ldrb r1, [r4, #10]	@ 000b6f74 a17a
.org 0xb6f76
	movs r0, #251	@ 000b6f76 fb20
.org 0xb6f78
	ands r0, r1	@ 000b6f78 0840
.org 0xb6f7a
	strb r0, [r4, #10]	@ 000b6f7a a072
.org 0xb6f7c
	ldr r1, [pc, #44]	@ 000b6f7c 0b49
.org 0xb6f7e
	ldrb r0, [r4, #9]	@ 000b6f7e 607a
.org 0xb6f80
	lsls r0, r0, #2	@ 000b6f80 8000
.org 0xb6f82
	adds r0, r0, r1	@ 000b6f82 4018
.org 0xb6f84
	movs r1, #3	@ 000b6f84 0321
.org 0xb6f86
	str r1, [r4, #12]	@ 000b6f86 e160
.org 0xb6f88
	ldr r0, [r0, #0]	@ 000b6f88 0068
.org 0xb6f8a
	ldr r0, [r0, #12]	@ 000b6f8a c068
.org 0xb6f8c
	str r0, [r4, #20]	@ 000b6f8c 6061
.org 0xb6f8e
	add sp, #8	@ 000b6f8e 02b0
.org 0xb6f90
	pop {r3, r4, r5}	@ 000b6f90 38bc
.org 0xb6f92
	mov r8, r3	@ 000b6f92 9846
.org 0xb6f94
	mov r9, r4	@ 000b6f94 a146
.org 0xb6f96
	mov sl, r5	@ 000b6f96 aa46
.org 0xb6f98
	pop {r4, r5, r6, r7}	@ 000b6f98 f0bc
.org 0xb6f9a
	pop {r0}	@ 000b6f9a 01bc
.org 0xb6f9c
	bx r0	@ 000b6f9c 0047
