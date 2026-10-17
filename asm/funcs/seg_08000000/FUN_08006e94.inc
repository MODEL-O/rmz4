@ FUN_08006e94  entry 0x08006e94  size 152
.thumb
.org 0x6e94
FUN_08006e94:
	push {r4, r5, r6, lr}	@ 00006e94 70b5
.org 0x6e96
	sub sp, #8	@ 00006e96 82b0
.org 0x6e98
	ldr r4, [pc, #36]	@ 00006e98 094c
.org 0x6e9a
	ldrh r0, [r4, #8]	@ 00006e9a 2089
.org 0x6e9c
	cmp r0, #4	@ 00006e9c 0428
.org 0x6e9e
	bne.n 0x6ec8	@ 00006e9e 13d1
.org 0x6ea0
	ldr r0, [r4, #0]	@ 00006ea0 2068
.org 0x6ea2
	ldr r1, [pc, #32]	@ 00006ea2 0849
.org 0x6ea4
	adds r0, r0, r1	@ 00006ea4 4018
.org 0x6ea6
	movs r1, #240	@ 00006ea6 f021
.org 0x6ea8
	lsls r1, r1, #10	@ 00006ea8 8902
.org 0x6eaa
	bl 0x129050	@ 00006eaa 22f1d1f8
.org 0x6eae
	movs r2, #240	@ 00006eae f022
.org 0x6eb0
	lsls r2, r2, #8	@ 00006eb0 1202
.org 0x6eb2
	adds r1, r0, r2	@ 00006eb2 8118
.org 0x6eb4
	str r1, [r4, #0]	@ 00006eb4 2160
.org 0x6eb6
	movs r1, #240	@ 00006eb6 f021
.org 0x6eb8
	lsls r1, r1, #7	@ 00006eb8 c901
.org 0x6eba
	adds r0, r0, r1	@ 00006eba 4018
.org 0x6ebc
	b.n 0x6ed0	@ 00006ebc 08e0
.org 0x6ebe
	.byte 0x00	@ 00006ebe data
.org 0x6ebf
	.byte 0x00	@ 00006ebf data
.org 0x6ec0
	.byte 0x78,0x0c,0x00,0x02	@ 00006ec0 data
.org 0x6ec4
	.byte 0x00,0x10,0xff,0xff	@ 00006ec4 data
.org 0x6ec8
	ldr r0, [r4, #0]	@ 00006ec8 2068
.org 0x6eca
	asrs r0, r0, #8	@ 00006eca 0012
.org 0x6ecc
	subs r0, #120	@ 00006ecc 7838
.org 0x6ece
	lsls r0, r0, #8	@ 00006ece 0002
.org 0x6ed0
	str r0, [sp, #0]	@ 00006ed0 0090
.org 0x6ed2
	ldr r0, [r4, #4]	@ 00006ed2 6068
.org 0x6ed4
	asrs r0, r0, #8	@ 00006ed4 0012
.org 0x6ed6
	subs r0, #80	@ 00006ed6 5038
.org 0x6ed8
	lsls r0, r0, #8	@ 00006ed8 0002
.org 0x6eda
	str r0, [sp, #4]	@ 00006eda 0190
.org 0x6edc
	ldr r2, [pc, #88]	@ 00006edc 164a
.org 0x6ede
	movs r1, #232	@ 00006ede e821
.org 0x6ee0
	lsls r1, r1, #1	@ 00006ee0 4900
.org 0x6ee2
	adds r0, r2, r1	@ 00006ee2 5018
.org 0x6ee4
	ldrh r0, [r0, #0]	@ 00006ee4 0088
.org 0x6ee6
	movs r1, #127	@ 00006ee6 7f21
.org 0x6ee8
	ands r1, r0	@ 00006ee8 0140
.org 0x6eea
	ldr r3, [pc, #80]	@ 00006eea 144b
.org 0x6eec
	ldr r0, [pc, #80]	@ 00006eec 1448
.org 0x6eee
	adds r2, r2, r0	@ 00006eee 1218
.org 0x6ef0
	ldrb r0, [r2, #0]	@ 00006ef0 1078
.org 0x6ef2
	lsrs r0, r0, #4	@ 00006ef2 0009
.org 0x6ef4
	lsls r0, r0, #2	@ 00006ef4 8000
.org 0x6ef6
	lsls r1, r1, #3	@ 00006ef6 c900
.org 0x6ef8
	adds r0, r0, r1	@ 00006ef8 4018
.org 0x6efa
	adds r0, r0, r3	@ 00006efa c018
.org 0x6efc
	ldr r6, [r0, #0]	@ 00006efc 0668
.org 0x6efe
	ldr r0, [r6, #4]	@ 00006efe 7068
.org 0x6f00
	ldr r1, [r0, #12]	@ 00006f00 c168
.org 0x6f02
	mov r0, sp	@ 00006f02 6846
.org 0x6f04
	bl 0x128f80	@ 00006f04 22f13cf8
.org 0x6f08
	movs r5, #0	@ 00006f08 0025
.org 0x6f0a
	movs r4, #2	@ 00006f0a 0224
.org 0x6f0c
	ldr r0, [pc, #52]	@ 00006f0c 0d48
.org 0x6f0e
	adds r0, r5, r0	@ 00006f0e 2818
.org 0x6f10
	ldr r2, [r0, #8]	@ 00006f10 8268
.org 0x6f12
	cmp r2, #0	@ 00006f12 002a
.org 0x6f14
	beq.n 0x6f1c	@ 00006f14 02d0
.org 0x6f16
	adds r1, r6, #0	@ 00006f16 311c
.org 0x6f18
	bl 0x128f84	@ 00006f18 22f134f8
.org 0x6f1c
	adds r5, #136	@ 00006f1c 8835
.org 0x6f1e
	subs r4, #1	@ 00006f1e 013c
.org 0x6f20
	cmp r4, #0	@ 00006f20 002c
.org 0x6f22
	bge.n 0x6f0c	@ 00006f22 f3da
.org 0x6f24
	ldr r2, [pc, #32]	@ 00006f24 084a
.org 0x6f26
	ldrh r1, [r2, #0]	@ 00006f26 1188
.org 0x6f28
	ldr r0, [pc, #32]	@ 00006f28 0848
.org 0x6f2a
	ands r0, r1	@ 00006f2a 0840
