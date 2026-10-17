@ FUN_08007e98  entry 0x08007e98  size 214
.thumb
.org 0x7e98
FUN_08007e98:
	push {r4, r5, r6, r7, lr}	@ 00007e98 f0b5
.org 0x7e9a
	mov r7, sl	@ 00007e9a 5746
.org 0x7e9c
	mov r6, r9	@ 00007e9c 4e46
.org 0x7e9e
	mov r5, r8	@ 00007e9e 4546
.org 0x7ea0
	push {r5, r6, r7}	@ 00007ea0 e0b4
.org 0x7ea2
	adds r7, r0, #0	@ 00007ea2 071c
.org 0x7ea4
	adds r4, r1, #0	@ 00007ea4 0c1c
.org 0x7ea6
	adds r5, r4, #0	@ 00007ea6 251c
.org 0x7ea8
	ldr r6, [pc, #92]	@ 00007ea8 174e
.org 0x7eaa
	movs r1, #232	@ 00007eaa e821
.org 0x7eac
	lsls r1, r1, #1	@ 00007eac 4900
.org 0x7eae
	adds r0, r6, r1	@ 00007eae 7018
.org 0x7eb0
	ldrh r0, [r0, #0]	@ 00007eb0 0088
.org 0x7eb2
	cmp r0, #4	@ 00007eb2 0428
.org 0x7eb4
	bne.n 0x7ec8	@ 00007eb4 08d1
.org 0x7eb6
	ldr r2, [pc, #84]	@ 00007eb6 154a
.org 0x7eb8
	adds r0, r7, r2	@ 00007eb8 b818
.org 0x7eba
	movs r1, #240	@ 00007eba f021
.org 0x7ebc
	lsls r1, r1, #10	@ 00007ebc 8902
.org 0x7ebe
	bl 0x129050	@ 00007ebe 21f1c7f8
.org 0x7ec2
	movs r1, #240	@ 00007ec2 f021
.org 0x7ec4
	lsls r1, r1, #8	@ 00007ec4 0902
.org 0x7ec6
	adds r7, r0, r1	@ 00007ec6 4718
.org 0x7ec8
	movs r2, #0	@ 00007ec8 0022
.org 0x7eca
	mov r8, r2	@ 00007eca 9046
.org 0x7ecc
	asrs r0, r7, #12	@ 00007ecc 3813
.org 0x7ece
	mov r9, r0	@ 00007ece 8146
.org 0x7ed0
	movs r1, #220	@ 00007ed0 dc21
.org 0x7ed2
	lsls r1, r1, #1	@ 00007ed2 4900
.org 0x7ed4
	adds r1, r1, r6	@ 00007ed4 8919
.org 0x7ed6
	mov sl, r1	@ 00007ed6 8a46
.org 0x7ed8
	movs r2, #252	@ 00007ed8 fc22
.org 0x7eda
	lsls r2, r2, #3	@ 00007eda d200
.org 0x7edc
	adds r6, r6, r2	@ 00007edc b618
.org 0x7ede
	ldrh r1, [r6, #0]	@ 00007ede 3188
.org 0x7ee0
	asrs r0, r4, #12	@ 00007ee0 2013
.org 0x7ee2
	muls r0, r1	@ 00007ee2 4843
.org 0x7ee4
	add r0, r9	@ 00007ee4 4844
.org 0x7ee6
	adds r0, #2	@ 00007ee6 0230
.org 0x7ee8
	lsls r0, r0, #1	@ 00007ee8 4000
.org 0x7eea
	adds r0, r0, r6	@ 00007eea 8019
.org 0x7eec
	ldrh r0, [r0, #0]	@ 00007eec 0088
.org 0x7eee
	mov r2, sl	@ 00007eee 5246
.org 0x7ef0
	ldr r1, [r2, #0]	@ 00007ef0 1168
.org 0x7ef2
	lsls r0, r0, #1	@ 00007ef2 4000
.org 0x7ef4
	adds r0, r0, r1	@ 00007ef4 4018
.org 0x7ef6
	ldrh r0, [r0, #0]	@ 00007ef6 0088
.org 0x7ef8
	adds r1, r0, #0	@ 00007ef8 011c
.org 0x7efa
	movs r2, #15	@ 00007efa 0f22
.org 0x7efc
	ands r2, r1	@ 00007efc 0a40
.org 0x7efe
	cmp r2, #0	@ 00007efe 002a
.org 0x7f00
	bne.n 0x7f10	@ 00007f00 06d1
.org 0x7f02
	subs r0, r4, r5	@ 00007f02 601b
.org 0x7f04
	b.n 0x7f7e	@ 00007f04 3be0
.org 0x7f06
	.byte 0x00	@ 00007f06 data
.org 0x7f07
	.byte 0x00	@ 00007f07 data
.org 0x7f08
	.byte 0xb0,0x0a,0x00,0x02	@ 00007f08 data
.org 0x7f0c
	.byte 0x00,0x10,0xff,0xff	@ 00007f0c data
.org 0x7f10
	cmp r2, #15	@ 00007f10 0f2a
.org 0x7f12
	bne.n 0x7f18	@ 00007f12 01d1
.org 0x7f14
	subs r0, r4, r5	@ 00007f14 601b
.org 0x7f16
	b.n 0x7f7e	@ 00007f16 32e0
.org 0x7f18
	ldr r0, [pc, #8]	@ 00007f18 0248
.org 0x7f1a
	cmp r1, r0	@ 00007f1a 8142
.org 0x7f1c
	bne.n 0x7f28	@ 00007f1c 04d1
.org 0x7f1e
	subs r0, r4, r5	@ 00007f1e 601b
.org 0x7f20
	b.n 0x7f7e	@ 00007f20 2de0
.org 0x7f22
	.byte 0x00	@ 00007f22 data
.org 0x7f23
	.byte 0x00	@ 00007f23 data
.org 0x7f24
	.byte 0x0f,0x80,0x00,0x00	@ 00007f24 data
.org 0x7f28
	cmp r2, #1	@ 00007f28 012a
.org 0x7f2a
	bne.n 0x7f38	@ 00007f2a 05d1
.org 0x7f2c
	ldr r0, [pc, #4]	@ 00007f2c 0148
.org 0x7f2e
	ands r0, r4	@ 00007f2e 2040
.org 0x7f30
	subs r4, r0, #1	@ 00007f30 441e
.org 0x7f32
	b.n 0x7f74	@ 00007f32 1fe0
.org 0x7f34
	.byte 0x00,0xf0,0xff,0xff	@ 00007f34 data
.org 0x7f38
	ldr r1, [pc, #28]	@ 00007f38 0749
.org 0x7f3a
	lsls r0, r2, #2	@ 00007f3a 9000
.org 0x7f3c
	adds r0, r0, r1	@ 00007f3c 4018
.org 0x7f3e
	ldr r2, [pc, #28]	@ 00007f3e 074a
.org 0x7f40
	adds r1, r4, #0	@ 00007f40 211c
.org 0x7f42
	ands r1, r2	@ 00007f42 1140
.org 0x7f44
	ldr r3, [r0, #0]	@ 00007f44 0368
.org 0x7f46
	adds r0, r7, #0	@ 00007f46 381c
.org 0x7f48
	ands r0, r2	@ 00007f48 1040
.org 0x7f4a
	bl 0x128f88	@ 00007f4a 21f11df8
.org 0x7f4e
	cmp r0, #0	@ 00007f4e 0028
.org 0x7f50
	bne.n 0x7f60	@ 00007f50 06d1
.org 0x7f52
	subs r0, r4, r5	@ 00007f52 601b
.org 0x7f54
	b.n 0x7f7e	@ 00007f54 13e0
.org 0x7f56
	.byte 0x00	@ 00007f56 data
.org 0x7f57
	.byte 0x00	@ 00007f57 data
.org 0x7f58
	.byte 0xd4,0xb0,0x82,0x08	@ 00007f58 data
.org 0x7f5c
	.byte 0xff,0x0f,0x00,0x00	@ 00007f5c data
.org 0x7f60
	adds r1, r4, #0	@ 00007f60 211c
.org 0x7f62
	adds r4, r4, r0	@ 00007f62 2418
.org 0x7f64
	eors r1, r4	@ 00007f64 6140
.org 0x7f66
	movs r0, #128	@ 00007f66 8020
.org 0x7f68
	lsls r0, r0, #5	@ 00007f68 4001
.org 0x7f6a
	ands r1, r0	@ 00007f6a 0140
.org 0x7f6c
	cmp r1, #0	@ 00007f6c 0029
