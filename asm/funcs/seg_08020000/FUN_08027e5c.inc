@ FUN_08027e5c  entry 0x08027e5c  size 216
.thumb
.org 0x27e5c
FUN_08027e5c:
	push {r4, r5, r6, r7, lr}	@ 00027e5c f0b5
.org 0x27e5e
	mov r7, r9	@ 00027e5e 4f46
.org 0x27e60
	mov r6, r8	@ 00027e60 4646
.org 0x27e62
	push {r6, r7}	@ 00027e62 c0b4
.org 0x27e64
	sub sp, #44	@ 00027e64 8bb0
.org 0x27e66
	mov r8, r0	@ 00027e66 8046
.org 0x27e68
	ldr r0, [r0, #12]	@ 00027e68 c068
.org 0x27e6a
	mov r1, sp	@ 00027e6a 6946
.org 0x27e6c
	ldr r0, [r0, #4]	@ 00027e6c 4068
.org 0x27e6e
	ldmia r0!, {r2, r3, r4}	@ 00027e6e 1cc8
.org 0x27e70
	stmia r1!, {r2, r3, r4}	@ 00027e70 1cc1
.org 0x27e72
	ldmia r0!, {r2, r3, r4}	@ 00027e72 1cc8
.org 0x27e74
	stmia r1!, {r2, r3, r4}	@ 00027e74 1cc1
.org 0x27e76
	ldmia r0!, {r2, r3, r4}	@ 00027e76 1cc8
.org 0x27e78
	stmia r1!, {r2, r3, r4}	@ 00027e78 1cc1
.org 0x27e7a
	ldmia r0!, {r2, r3}	@ 00027e7a 0cc8
.org 0x27e7c
	stmia r1!, {r2, r3}	@ 00027e7c 0cc1
.org 0x27e7e
	ldr r4, [pc, #180]	@ 00027e7e 2d4c
.org 0x27e80
	mov r9, r4	@ 00027e80 a146
.org 0x27e82
	movs r0, #24	@ 00027e82 1820
.org 0x27e84
	ldrsb r0, [r4, r0]	@ 00027e84 2056
.org 0x27e86
	cmp r0, #0	@ 00027e86 0028
.org 0x27e88
	bne.n 0x27e8e	@ 00027e88 01d1
.org 0x27e8a
	bl 0x6d80	@ 00027e8a def779ff
.org 0x27e8e
	ldr r0, [pc, #168]	@ 00027e8e 2a48
.org 0x27e90
	movs r1, #232	@ 00027e90 e821
.org 0x27e92
	lsls r1, r1, #1	@ 00027e92 4900
.org 0x27e94
	adds r0, r0, r1	@ 00027e94 4018
.org 0x27e96
	ldrh r1, [r0, #0]	@ 00027e96 0188
.org 0x27e98
	movs r0, #127	@ 00027e98 7f20
.org 0x27e9a
	ands r0, r1	@ 00027e9a 0840
.org 0x27e9c
	cmp r0, #4	@ 00027e9c 0428
.org 0x27e9e
	bne.n 0x27ee8	@ 00027e9e 23d1
.org 0x27ea0
	mov r0, sp	@ 00027ea0 6846
.org 0x27ea2
	ldrb r0, [r0, #2]	@ 00027ea2 8078
.org 0x27ea4
	lsls r0, r0, #4	@ 00027ea4 0001
.org 0x27ea6
	adds r0, #16	@ 00027ea6 1030
.org 0x27ea8
	add r0, r8	@ 00027ea8 4044
.org 0x27eaa
	ldr r6, [r0, #0]	@ 00027eaa 0668
.org 0x27eac
	cmp r6, #0	@ 00027eac 002e
.org 0x27eae
	beq.n 0x27ee8	@ 00027eae 1bd0
.org 0x27eb0
	ldr r7, [sp, #32]	@ 00027eb0 089f
.org 0x27eb2
	ldr r0, [pc, #136]	@ 00027eb2 2248
.org 0x27eb4
	cmp r7, r0	@ 00027eb4 8742
.org 0x27eb6
	bgt.n 0x27ee8	@ 00027eb6 17dc
.org 0x27eb8
	ldr r0, [r6, #84]	@ 00027eb8 706d
.org 0x27eba
	ldr r4, [pc, #132]	@ 00027eba 214c
.org 0x27ebc
	adds r0, r0, r4	@ 00027ebc 0019
.org 0x27ebe
	movs r5, #240	@ 00027ebe f025
.org 0x27ec0
	lsls r5, r5, #10	@ 00027ec0 ad02
.org 0x27ec2
	adds r1, r5, #0	@ 00027ec2 291c
.org 0x27ec4
	bl 0x128fb8	@ 00027ec4 01f178f8
.org 0x27ec8
	lsls r1, r0, #4	@ 00027ec8 0101
.org 0x27eca
	subs r1, r1, r0	@ 00027eca 091a
.org 0x27ecc
	lsls r1, r1, #14	@ 00027ecc 8903
.org 0x27ece
	ldr r0, [sp, #28]	@ 00027ece 0798
.org 0x27ed0
	adds r1, r1, r0	@ 00027ed0 0918
.org 0x27ed2
	str r1, [sp, #28]	@ 00027ed2 0791
.org 0x27ed4
	ldr r0, [r6, #84]	@ 00027ed4 706d
.org 0x27ed6
	adds r0, r0, r4	@ 00027ed6 0019
.org 0x27ed8
	adds r1, r5, #0	@ 00027ed8 291c
.org 0x27eda
	bl 0x128fb8	@ 00027eda 01f16df8
.org 0x27ede
	lsls r1, r0, #4	@ 00027ede 0101
.org 0x27ee0
	subs r1, r1, r0	@ 00027ee0 091a
.org 0x27ee2
	lsls r1, r1, #14	@ 00027ee2 8903
.org 0x27ee4
	adds r1, r1, r7	@ 00027ee4 c919
.org 0x27ee6
	str r1, [sp, #32]	@ 00027ee6 0891
.org 0x27ee8
	mov r0, r9	@ 00027ee8 4846
.org 0x27eea
	mov r1, sp	@ 00027eea 6946
.org 0x27eec
	bl 0x1f924	@ 00027eec f7f71afd
.org 0x27ef0
	mov r0, sp	@ 00027ef0 6846
.org 0x27ef2
	ldrb r0, [r0, #0]	@ 00027ef2 0078
.org 0x27ef4
	cmp r0, #1	@ 00027ef4 0128
.org 0x27ef6
	beq.n 0x27f24	@ 00027ef6 15d0
.org 0x27ef8
	mov r0, sp	@ 00027ef8 6846
.org 0x27efa
	ldrb r0, [r0, #2]	@ 00027efa 8078
.org 0x27efc
	lsls r0, r0, #4	@ 00027efc 0001
.org 0x27efe
	adds r0, #16	@ 00027efe 1030
.org 0x27f00
	add r0, r8	@ 00027f00 4044
.org 0x27f02
	ldr r2, [r0, #0]	@ 00027f02 0268
.org 0x27f04
	cmp r2, #0	@ 00027f04 002a
.org 0x27f06
	beq.n 0x27f24	@ 00027f06 0dd0
.org 0x27f08
	adds r0, r2, #0	@ 00027f08 101c
.org 0x27f0a
	adds r0, #84	@ 00027f0a 5430
.org 0x27f0c
	mov r3, r9	@ 00027f0c 4b46
.org 0x27f0e
	str r0, [r3, #72]	@ 00027f0e 9864
.org 0x27f10
	mov r0, sp	@ 00027f10 6846
.org 0x27f12
	ldrb r1, [r0, #1]	@ 00027f12 4178
.org 0x27f14
	movs r0, #8	@ 00027f14 0820
.org 0x27f16
	ands r0, r1	@ 00027f16 0840
.org 0x27f18
	cmp r0, #0	@ 00027f18 0028
.org 0x27f1a
	beq.n 0x27f24	@ 00027f1a 03d0
.org 0x27f1c
	ldr r0, [r2, #84]	@ 00027f1c 506d
.org 0x27f1e
	str r0, [r3, #48]	@ 00027f1e 1863
.org 0x27f20
	ldr r0, [r2, #88]	@ 00027f20 906d
.org 0x27f22
	str r0, [r3, #52]	@ 00027f22 5863
.org 0x27f24
	movs r0, #0	@ 00027f24 0020
.org 0x27f26
	add sp, #44	@ 00027f26 0bb0
.org 0x27f28
	pop {r3, r4}	@ 00027f28 18bc
.org 0x27f2a
	mov r8, r3	@ 00027f2a 9846
.org 0x27f2c
	mov r9, r4	@ 00027f2c a146
.org 0x27f2e
	pop {r4, r5, r6, r7}	@ 00027f2e f0bc
.org 0x27f30
	pop {r1}	@ 00027f30 02bc
.org 0x27f32
	bx r1	@ 00027f32 0847
