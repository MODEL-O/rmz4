@ FUN_08007f8c  entry 0x08007f8c  size 218
.thumb
.org 0x7f8c
FUN_08007f8c:
	push {r4, r5, r6, r7, lr}	@ 00007f8c f0b5
.org 0x7f8e
	mov r7, sl	@ 00007f8e 5746
.org 0x7f90
	mov r6, r9	@ 00007f90 4e46
.org 0x7f92
	mov r5, r8	@ 00007f92 4546
.org 0x7f94
	push {r5, r6, r7}	@ 00007f94 e0b4
.org 0x7f96
	sub sp, #4	@ 00007f96 81b0
.org 0x7f98
	adds r7, r0, #0	@ 00007f98 071c
.org 0x7f9a
	mov r9, r1	@ 00007f9a 8946
.org 0x7f9c
	mov r4, r9	@ 00007f9c 4c46
.org 0x7f9e
	ldr r6, [pc, #112]	@ 00007f9e 1c4e
.org 0x7fa0
	movs r1, #232	@ 00007fa0 e821
.org 0x7fa2
	lsls r1, r1, #1	@ 00007fa2 4900
.org 0x7fa4
	adds r0, r6, r1	@ 00007fa4 7018
.org 0x7fa6
	ldrh r0, [r0, #0]	@ 00007fa6 0088
.org 0x7fa8
	cmp r0, #4	@ 00007fa8 0428
.org 0x7faa
	bne.n 0x7fbe	@ 00007faa 08d1
.org 0x7fac
	ldr r2, [pc, #100]	@ 00007fac 194a
.org 0x7fae
	adds r0, r7, r2	@ 00007fae b818
.org 0x7fb0
	movs r1, #240	@ 00007fb0 f021
.org 0x7fb2
	lsls r1, r1, #10	@ 00007fb2 8902
.org 0x7fb4
	bl 0x129050	@ 00007fb4 21f14cf8
.org 0x7fb8
	movs r1, #240	@ 00007fb8 f021
.org 0x7fba
	lsls r1, r1, #8	@ 00007fba 0902
.org 0x7fbc
	adds r7, r0, r1	@ 00007fbc 4718
.org 0x7fbe
	movs r5, #0	@ 00007fbe 0025
.org 0x7fc0
	asrs r2, r7, #12	@ 00007fc0 3a13
.org 0x7fc2
	mov r8, r2	@ 00007fc2 9046
.org 0x7fc4
	movs r0, #220	@ 00007fc4 dc20
.org 0x7fc6
	lsls r0, r0, #1	@ 00007fc6 4000
.org 0x7fc8
	adds r0, r0, r6	@ 00007fc8 8019
.org 0x7fca
	mov sl, r0	@ 00007fca 8246
.org 0x7fcc
	ldr r3, [pc, #72]	@ 00007fcc 124b
.org 0x7fce
	ldr r2, [pc, #76]	@ 00007fce 134a
.org 0x7fd0
	ldrh r1, [r2, #0]	@ 00007fd0 1188
.org 0x7fd2
	asrs r0, r4, #12	@ 00007fd2 2013
.org 0x7fd4
	muls r0, r1	@ 00007fd4 4843
.org 0x7fd6
	add r0, r8	@ 00007fd6 4044
.org 0x7fd8
	adds r0, #2	@ 00007fd8 0230
.org 0x7fda
	lsls r0, r0, #1	@ 00007fda 4000
.org 0x7fdc
	adds r0, r0, r2	@ 00007fdc 8018
.org 0x7fde
	ldrh r0, [r0, #0]	@ 00007fde 0088
.org 0x7fe0
	mov r6, sl	@ 00007fe0 5646
.org 0x7fe2
	ldr r1, [r6, #0]	@ 00007fe2 3168
.org 0x7fe4
	lsls r0, r0, #1	@ 00007fe4 4000
.org 0x7fe6
	adds r0, r0, r1	@ 00007fe6 4018
.org 0x7fe8
	ldrh r1, [r0, #0]	@ 00007fe8 0188
.org 0x7fea
	movs r2, #15	@ 00007fea 0f22
.org 0x7fec
	ands r2, r1	@ 00007fec 0a40
.org 0x7fee
	cmp r2, #0	@ 00007fee 002a
.org 0x7ff0
	beq.n 0x8056	@ 00007ff0 31d0
.org 0x7ff2
	movs r6, #132	@ 00007ff2 8426
.org 0x7ff4
	lsls r6, r6, #8	@ 00007ff4 3602
.org 0x7ff6
	adds r0, r6, #0	@ 00007ff6 301c
.org 0x7ff8
	ands r1, r0	@ 00007ff8 0140
.org 0x7ffa
	cmp r1, #0	@ 00007ffa 0029
.org 0x7ffc
	bne.n 0x8056	@ 00007ffc 2bd1
.org 0x7ffe
	cmp r2, #1	@ 00007ffe 012a
.org 0x8000
	bne.n 0x8024	@ 00008000 10d1
.org 0x8002
	movs r0, #128	@ 00008002 8020
.org 0x8004
	lsls r0, r0, #5	@ 00008004 4001
.org 0x8006
	adds r4, r4, r0	@ 00008006 2418
.org 0x8008
	ldr r0, [pc, #20]	@ 00008008 0548
.org 0x800a
	ands r4, r0	@ 0000800a 0440
.org 0x800c
	b.n 0x8050	@ 0000800c 20e0
.org 0x800e
	.byte 0x00	@ 0000800e data
.org 0x800f
	.byte 0x00	@ 0000800f data
.org 0x8010
	.byte 0xb0,0x0a,0x00,0x02	@ 00008010 data
.org 0x8014
	.byte 0x00,0x10,0xff,0xff	@ 00008014 data
.org 0x8018
	.byte 0xff,0x0f,0x00,0x00	@ 00008018 data
.org 0x801c
	.byte 0x90,0x12,0x00,0x02	@ 0000801c data
.org 0x8020
	.byte 0x00,0xf0,0xff,0xff	@ 00008020 data
.org 0x8024
	ldr r1, [pc, #64]	@ 00008024 1049
.org 0x8026
	lsls r0, r2, #2	@ 00008026 9000
.org 0x8028
	adds r0, r0, r1	@ 00008028 4018
.org 0x802a
	adds r1, r3, #0	@ 0000802a 191c
.org 0x802c
	bics r1, r4	@ 0000802c a143
.org 0x802e
	ldr r2, [r0, #0]	@ 0000802e 0268
.org 0x8030
	adds r0, r7, #0	@ 00008030 381c
.org 0x8032
	ands r0, r3	@ 00008032 1840
.org 0x8034
	str r3, [sp, #0]	@ 00008034 0093
.org 0x8036
	bl 0x128f84	@ 00008036 20f1a5ff
.org 0x803a
	ldr r3, [sp, #0]	@ 0000803a 009b
.org 0x803c
	cmp r0, #0	@ 0000803c 0028
.org 0x803e
	beq.n 0x8056	@ 0000803e 0ad0
.org 0x8040
	adds r1, r4, #0	@ 00008040 211c
.org 0x8042
	subs r4, r4, r0	@ 00008042 241a
.org 0x8044
	eors r1, r4	@ 00008044 6140
.org 0x8046
	movs r0, #128	@ 00008046 8020
.org 0x8048
	lsls r0, r0, #5	@ 00008048 4001
.org 0x804a
	ands r1, r0	@ 0000804a 0140
.org 0x804c
	cmp r1, #0	@ 0000804c 0029
.org 0x804e
	beq.n 0x8056	@ 0000804e 02d0
.org 0x8050
	adds r5, #1	@ 00008050 0135
.org 0x8052
	cmp r5, #15	@ 00008052 0f2d
.org 0x8054
	ble.n 0x7fce	@ 00008054 bbdd
.org 0x8056
	cmp r5, #15	@ 00008056 0f2d
.org 0x8058
	bgt.n 0x806c	@ 00008058 08dc
.org 0x805a
	adds r0, r7, #0	@ 0000805a 381c
.org 0x805c
	adds r1, r4, #0	@ 0000805c 211c
.org 0x805e
	bl 0x94a8	@ 0000805e 01f023fa
.org 0x8062
	mov r1, r9	@ 00008062 4946
.org 0x8064
	subs r0, r0, r1	@ 00008064 401a
