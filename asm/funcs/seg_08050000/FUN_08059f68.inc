@ FUN_08059f68  entry 0x08059f68  size 200
.thumb
.org 0x59f68
FUN_08059f68:
	push {r4, lr}	@ 00059f68 10b5
.org 0x59f6a
	adds r4, r0, #0	@ 00059f6a 041c
.org 0x59f6c
	ldrb r0, [r4, #15]	@ 00059f6c e07b
.org 0x59f6e
	cmp r0, #1	@ 00059f6e 0128
.org 0x59f70
	beq.n 0x59fdc	@ 00059f70 34d0
.org 0x59f72
	cmp r0, #1	@ 00059f72 0128
.org 0x59f74
	bgt.n 0x59f7c	@ 00059f74 02dc
.org 0x59f76
	cmp r0, #0	@ 00059f76 0028
.org 0x59f78
	beq.n 0x59f82	@ 00059f78 03d0
.org 0x59f7a
	b.n 0x5a03c	@ 00059f7a 5fe0
.org 0x59f7c
	cmp r0, #2	@ 00059f7c 0228
.org 0x59f7e
	beq.n 0x5a00e	@ 00059f7e 46d0
.org 0x59f80
	b.n 0x5a03c	@ 00059f80 5ce0
.org 0x59f82
	adds r0, r4, #0	@ 00059f82 201c
.org 0x59f84
	adds r0, #116	@ 00059f84 7430
.org 0x59f86
	ldr r1, [pc, #112]	@ 00059f86 1c49
.org 0x59f88
	bl 0x5784	@ 00059f88 abf7fcfb
.org 0x59f8c
	ldrb r0, [r4, #30]	@ 00059f8c a07f
.org 0x59f8e
	lsls r0, r0, #8	@ 00059f8e 0002
.org 0x59f90
	adds r1, r4, #0	@ 00059f90 211c
.org 0x59f92
	adds r1, #112	@ 00059f92 7031
.org 0x59f94
	ldrb r1, [r1, #0]	@ 00059f94 0978
.org 0x59f96
	orrs r0, r1	@ 00059f96 0843
.org 0x59f98
	ldr r1, [pc, #96]	@ 00059f98 1849
.org 0x59f9a
	cmp r0, r1	@ 00059f9a 8842
.org 0x59f9c
	beq.n 0x59fac	@ 00059f9c 06d0
.org 0x59f9e
	adds r0, r4, #0	@ 00059f9e 201c
.org 0x59fa0
	bl 0x1cf00	@ 00059fa0 c2f7aeff
.org 0x59fa4
	adds r1, r4, #0	@ 00059fa4 211c
.org 0x59fa6
	adds r1, #189	@ 00059fa6 bd31
.org 0x59fa8
	movs r0, #1	@ 00059fa8 0120
.org 0x59faa
	strb r0, [r1, #0]	@ 00059faa 0870
.org 0x59fac
	adds r1, r4, #0	@ 00059fac 211c
.org 0x59fae
	adds r1, #180	@ 00059fae b431
.org 0x59fb0
	ldr r0, [r1, #0]	@ 00059fb0 0868
.org 0x59fb2
	ldr r2, [pc, #76]	@ 00059fb2 134a
.org 0x59fb4
	adds r0, r0, r2	@ 00059fb4 8018
.org 0x59fb6
	str r0, [r4, #88]	@ 00059fb6 a065
.org 0x59fb8
	movs r0, #128	@ 00059fb8 8020
.org 0x59fba
	lsls r0, r0, #2	@ 00059fba 8000
.org 0x59fbc
	str r0, [r4, #96]	@ 00059fbc 2066
.org 0x59fbe
	movs r0, #8	@ 00059fbe 0820
.org 0x59fc0
	negs r0, r0	@ 00059fc0 4042
.org 0x59fc2
	str r0, [r4, #104]	@ 00059fc2 a066
.org 0x59fc4
	ldr r0, [r1, #0]	@ 00059fc4 0868
.org 0x59fc6
	ldr r1, [pc, #60]	@ 00059fc6 0f49
.org 0x59fc8
	adds r0, r0, r1	@ 00059fc8 4018
.org 0x59fca
	str r0, [r4, #92]	@ 00059fca e065
.org 0x59fcc
	movs r1, #65	@ 00059fcc 4121
.org 0x59fce
	movs r0, #130	@ 00059fce 8220
.org 0x59fd0
	lsls r0, r0, #7	@ 00059fd0 c001
.org 0x59fd2
	str r0, [r4, #100]	@ 00059fd2 6066
.org 0x59fd4
	strb r1, [r4, #18]	@ 00059fd4 a174
.org 0x59fd6
	ldrb r0, [r4, #15]	@ 00059fd6 e07b
.org 0x59fd8
	adds r0, #1	@ 00059fd8 0130
.org 0x59fda
	strb r0, [r4, #15]	@ 00059fda e073
.org 0x59fdc
	adds r0, r4, #0	@ 00059fdc 201c
.org 0x59fde
	bl 0x1cff0	@ 00059fde c3f707f8
.org 0x59fe2
	ldr r0, [r4, #92]	@ 00059fe2 e06d
.org 0x59fe4
	ldr r2, [r4, #88]	@ 00059fe4 a26d
.org 0x59fe6
	subs r0, r0, r2	@ 00059fe6 801a
.org 0x59fe8
	ldr r1, [r4, #100]	@ 00059fe8 616e
.org 0x59fea
	cmp r0, r1	@ 00059fea 8842
.org 0x59fec
	ble.n 0x5a008	@ 00059fec 0cdd
.org 0x59fee
	ldr r0, [r4, #96]	@ 00059fee 206e
.org 0x59ff0
	adds r0, r2, r0	@ 00059ff0 1018
.org 0x59ff2
	str r0, [r4, #88]	@ 00059ff2 a065
.org 0x59ff4
	b.n 0x5a03c	@ 00059ff4 22e0
.org 0x59ff6
	.byte 0x00	@ 00059ff6 data
.org 0x59ff7
	.byte 0x00	@ 00059ff7 data
.org 0x59ff8
	.byte 0xe4,0x88,0x85,0x08	@ 00059ff8 data
.org 0x59ffc
	.byte 0x01,0xa3,0x00,0x00	@ 00059ffc data
.org 0x5a000
	.byte 0x01,0x20,0xff,0xff	@ 0005a000 data
.org 0x5a004
	.byte 0x00,0xf0,0xff,0xff	@ 0005a004 data
.org 0x5a008
	ldrb r0, [r4, #15]	@ 0005a008 e07b
.org 0x5a00a
	adds r0, #1	@ 0005a00a 0130
.org 0x5a00c
	strb r0, [r4, #15]	@ 0005a00c e073
.org 0x5a00e
	adds r0, r4, #0	@ 0005a00e 201c
.org 0x5a010
	bl 0x1cff0	@ 0005a010 c2f7eeff
.org 0x5a014
	ldr r0, [r4, #88]	@ 0005a014 a06d
.org 0x5a016
	ldr r2, [r4, #96]	@ 0005a016 226e
.org 0x5a018
	adds r0, r0, r2	@ 0005a018 8018
.org 0x5a01a
	str r0, [r4, #88]	@ 0005a01a a065
.org 0x5a01c
	ldrb r0, [r4, #18]	@ 0005a01c a07c
.org 0x5a01e
	subs r0, #1	@ 0005a01e 0138
.org 0x5a020
	strb r0, [r4, #18]	@ 0005a020 a074
.org 0x5a022
	lsls r0, r0, #24	@ 0005a022 0006
.org 0x5a024
	lsrs r1, r0, #24	@ 0005a024 010e
.org 0x5a026
	cmp r1, #0	@ 0005a026 0029
.org 0x5a028
	bne.n 0x5a036	@ 0005a028 05d1
.org 0x5a02a
	ldr r0, [r4, #92]	@ 0005a02a e06d
.org 0x5a02c
	str r0, [r4, #88]	@ 0005a02c a065
.org 0x5a02e
	movs r0, #1	@ 0005a02e 0120
