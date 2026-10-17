@ FUN_08006c58  entry 0x08006c58  size 194
.thumb
.org 0x6c58
FUN_08006c58:
	push {r4, r5, r6, r7, lr}	@ 00006c58 f0b5
.org 0x6c5a
	sub sp, #8	@ 00006c5a 82b0
.org 0x6c5c
	adds r5, r0, #0	@ 00006c5c 051c
.org 0x6c5e
	ldr r4, [pc, #64]	@ 00006c5e 104c
.org 0x6c60
	movs r1, #232	@ 00006c60 e821
.org 0x6c62
	lsls r1, r1, #1	@ 00006c62 4900
.org 0x6c64
	adds r0, r4, r1	@ 00006c64 6018
.org 0x6c66
	ldrh r0, [r0, #0]	@ 00006c66 0088
.org 0x6c68
	cmp r0, #4	@ 00006c68 0428
.org 0x6c6a
	bne.n 0x6ca8	@ 00006c6a 1dd1
.org 0x6c6c
	ldr r0, [r5, #0]	@ 00006c6c 2868
.org 0x6c6e
	ldr r2, [pc, #52]	@ 00006c6e 0d4a
.org 0x6c70
	adds r0, r0, r2	@ 00006c70 8018
.org 0x6c72
	movs r1, #240	@ 00006c72 f021
.org 0x6c74
	lsls r1, r1, #10	@ 00006c74 8902
.org 0x6c76
	bl 0x129050	@ 00006c76 22f1ebf9
.org 0x6c7a
	movs r3, #240	@ 00006c7a f023
.org 0x6c7c
	lsls r3, r3, #8	@ 00006c7c 1b02
.org 0x6c7e
	adds r1, r0, r3	@ 00006c7e c118
.org 0x6c80
	movs r3, #228	@ 00006c80 e423
.org 0x6c82
	lsls r3, r3, #1	@ 00006c82 5b00
.org 0x6c84
	adds r2, r4, r3	@ 00006c84 e218
.org 0x6c86
	str r1, [r2, #0]	@ 00006c86 1160
.org 0x6c88
	ldr r1, [r5, #4]	@ 00006c88 6968
.org 0x6c8a
	str r1, [r2, #4]	@ 00006c8a 5160
.org 0x6c8c
	movs r2, #240	@ 00006c8c f022
.org 0x6c8e
	lsls r2, r2, #7	@ 00006c8e d201
.org 0x6c90
	adds r0, r0, r2	@ 00006c90 8018
.org 0x6c92
	str r0, [sp, #0]	@ 00006c92 0090
.org 0x6c94
	asrs r1, r1, #8	@ 00006c94 0912
.org 0x6c96
	subs r1, #80	@ 00006c96 5039
.org 0x6c98
	lsls r1, r1, #8	@ 00006c98 0902
.org 0x6c9a
	str r1, [sp, #4]	@ 00006c9a 0191
.org 0x6c9c
	b.n 0x6cc6	@ 00006c9c 13e0
.org 0x6c9e
	.byte 0x00	@ 00006c9e data
.org 0x6c9f
	.byte 0x00	@ 00006c9f data
.org 0x6ca0
	.byte 0xb0,0x0a,0x00,0x02	@ 00006ca0 data
.org 0x6ca4
	.byte 0x00,0x10,0xff,0xff	@ 00006ca4 data
.org 0x6ca8
	movs r3, #228	@ 00006ca8 e423
.org 0x6caa
	lsls r3, r3, #1	@ 00006caa 5b00
.org 0x6cac
	adds r0, r4, r3	@ 00006cac e018
.org 0x6cae
	ldr r1, [r5, #0]	@ 00006cae 2968
.org 0x6cb0
	str r1, [r0, #0]	@ 00006cb0 0160
.org 0x6cb2
	ldr r2, [r5, #4]	@ 00006cb2 6a68
.org 0x6cb4
	str r2, [r0, #4]	@ 00006cb4 4260
.org 0x6cb6
	asrs r1, r1, #8	@ 00006cb6 0912
.org 0x6cb8
	subs r1, #120	@ 00006cb8 7839
.org 0x6cba
	lsls r1, r1, #8	@ 00006cba 0902
.org 0x6cbc
	str r1, [sp, #0]	@ 00006cbc 0091
.org 0x6cbe
	asrs r2, r2, #8	@ 00006cbe 1212
.org 0x6cc0
	subs r2, #80	@ 00006cc0 503a
.org 0x6cc2
	lsls r2, r2, #8	@ 00006cc2 1202
.org 0x6cc4
	str r2, [sp, #4]	@ 00006cc4 0192
.org 0x6cc6
	mov r0, sp	@ 00006cc6 6846
.org 0x6cc8
	bl 0x7830	@ 00006cc8 00f0b2fd
.org 0x6ccc
	adds r5, r0, #0	@ 00006ccc 051c
.org 0x6cce
	ldr r0, [pc, #84]	@ 00006cce 1548
.org 0x6cd0
	movs r1, #232	@ 00006cd0 e821
.org 0x6cd2
	lsls r1, r1, #1	@ 00006cd2 4900
.org 0x6cd4
	adds r2, r0, r1	@ 00006cd4 4218
.org 0x6cd6
	ldrh r0, [r2, #0]	@ 00006cd6 1088
.org 0x6cd8
	ldr r1, [r5, #0]	@ 00006cd8 2968
.org 0x6cda
	cmp r0, r1	@ 00006cda 8842
.org 0x6cdc
	beq.n 0x6cea	@ 00006cdc 05d0
.org 0x6cde
	strh r1, [r2, #0]	@ 00006cde 1180
.org 0x6ce0
	ldr r0, [r5, #4]	@ 00006ce0 6868
.org 0x6ce2
	ldr r1, [r0, #0]	@ 00006ce2 0168
.org 0x6ce4
	mov r0, sp	@ 00006ce4 6846
.org 0x6ce6
	bl 0x128f80	@ 00006ce6 22f14bf9
.org 0x6cea
	ldr r0, [r5, #4]	@ 00006cea 6868
.org 0x6cec
	ldr r1, [r0, #4]	@ 00006cec 4168
.org 0x6cee
	mov r0, sp	@ 00006cee 6846
.org 0x6cf0
	bl 0x128f80	@ 00006cf0 22f146f9
.org 0x6cf4
	movs r7, #0	@ 00006cf4 0027
.org 0x6cf6
	movs r6, #2	@ 00006cf6 0226
.org 0x6cf8
	ldr r0, [pc, #44]	@ 00006cf8 0b48
.org 0x6cfa
	adds r4, r7, r0	@ 00006cfa 3c18
.org 0x6cfc
	adds r0, r4, #0	@ 00006cfc 201c
.org 0x6cfe
	adds r1, r5, #0	@ 00006cfe 291c
.org 0x6d00
	mov r2, sp	@ 00006d00 6a46
.org 0x6d02
	bl 0x7a34	@ 00006d02 00f097fe
.org 0x6d06
	ldr r2, [r4, #0]	@ 00006d06 2268
.org 0x6d08
	cmp r2, #0	@ 00006d08 002a
.org 0x6d0a
	beq.n 0x6d14	@ 00006d0a 03d0
.org 0x6d0c
	adds r0, r4, #0	@ 00006d0c 201c
.org 0x6d0e
	adds r1, r5, #0	@ 00006d0e 291c
.org 0x6d10
	bl 0x128f84	@ 00006d10 22f138f9
.org 0x6d14
	adds r7, #136	@ 00006d14 8837
.org 0x6d16
	subs r6, #1	@ 00006d16 013e
.org 0x6d18
	cmp r6, #0	@ 00006d18 002e
