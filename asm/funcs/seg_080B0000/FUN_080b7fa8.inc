@ FUN_080b7fa8  entry 0x080b7fa8  size 171
.thumb
.org 0xb7fa8
FUN_080b7fa8:
	lsls r0, r0, #24	@ 000b7fa8 0006
.org 0xb7faa
	cmp r0, #0	@ 000b7faa 0028
.org 0xb7fac
	beq.n 0xb800c	@ 000b7fac 2ed0
.org 0xb7fae
	ldr r0, [r7, #100]	@ 000b7fae 786e
.org 0xb7fb0
	movs r1, #3	@ 000b7fb0 0321
.org 0xb7fb2
	ands r1, r0	@ 000b7fb2 0140
.org 0xb7fb4
	adds r0, #1	@ 000b7fb4 0130
.org 0xb7fb6
	str r0, [r7, #100]	@ 000b7fb6 7866
.org 0xb7fb8
	cmp r1, #0	@ 000b7fb8 0029
.org 0xb7fba
	bne.n 0xb7fc8	@ 000b7fba 05d1
.org 0xb7fbc
	adds r0, r7, #0	@ 000b7fbc 381c
.org 0xb7fbe
	adds r0, #84	@ 000b7fbe 5430
.org 0xb7fc0
	movs r1, #3	@ 000b7fc0 0321
.org 0xb7fc2
	movs r2, #0	@ 000b7fc2 0022
.org 0xb7fc4
	bl 0xe41b8	@ 000b7fc4 2cf0f8f8
.org 0xb7fc8
	ldr r1, [r7, #40]	@ 000b7fc8 b96a
.org 0xb7fca
	mov r8, r1	@ 000b7fca 8846
.org 0xb7fcc
	ldr r2, [r7, #84]	@ 000b7fcc 7a6d
.org 0xb7fce
	mov r9, r2	@ 000b7fce 9146
.org 0xb7fd0
	ldr r1, [pc, #48]	@ 000b7fd0 0c49
.org 0xb7fd2
	add r1, r9	@ 000b7fd2 4944
.org 0xb7fd4
	mov r2, r8	@ 000b7fd4 4246
.org 0xb7fd6
	ldr r0, [r2, #84]	@ 000b7fd6 506d
.org 0xb7fd8
	subs r0, r0, r1	@ 000b7fd8 401a
.org 0xb7fda
	ldrb r1, [r7, #19]	@ 000b7fda f97c
.org 0xb7fdc
	bl 0x128fb8	@ 000b7fdc 70f0ecff
.org 0xb7fe0
	adds r5, r0, #0	@ 000b7fe0 051c
.org 0xb7fe2
	str r5, [r7, #92]	@ 000b7fe2 fd65
.org 0xb7fe4
	ldr r4, [r7, #88]	@ 000b7fe4 bc6d
.org 0xb7fe6
	ldr r0, [pc, #32]	@ 000b7fe6 0848
.org 0xb7fe8
	adds r1, r4, r0	@ 000b7fe8 2118
.org 0xb7fea
	mov r2, r8	@ 000b7fea 4246
.org 0xb7fec
	ldr r0, [r2, #88]	@ 000b7fec 906d
.org 0xb7fee
	subs r0, r0, r1	@ 000b7fee 401a
.org 0xb7ff0
	ldrb r1, [r7, #19]	@ 000b7ff0 f97c
.org 0xb7ff2
	bl 0x128fb8	@ 000b7ff2 70f0e1ff
.org 0xb7ff6
	str r0, [r7, #96]	@ 000b7ff6 3866
.org 0xb7ff8
	add r5, r9	@ 000b7ff8 4d44
.org 0xb7ffa
	str r5, [r7, #84]	@ 000b7ffa 7d65
.org 0xb7ffc
	adds r4, r4, r0	@ 000b7ffc 2418
.org 0xb7ffe
	str r4, [r7, #88]	@ 000b7ffe bc65
.org 0xb8000
	b.n 0xb8022	@ 000b8000 0fe0
.org 0xb8002
	.byte 0x00	@ 000b8002 data
.org 0xb8003
	.byte 0x00	@ 000b8003 data
.org 0xb8004
	.byte 0x00,0xf2,0xff,0xff	@ 000b8004 data
.org 0xb8008
	.byte 0x00,0xd8,0xff,0xff	@ 000b8008 data
.org 0xb800c
	ldr r0, [r7, #40]	@ 000b800c b86a
.org 0xb800e
	ldr r1, [r0, #84]	@ 000b800e 416d
.org 0xb8010
	movs r2, #224	@ 000b8010 e022
.org 0xb8012
	lsls r2, r2, #4	@ 000b8012 1201
.org 0xb8014
	adds r1, r1, r2	@ 000b8014 8918
.org 0xb8016
	str r1, [r7, #84]	@ 000b8016 7965
.org 0xb8018
	ldr r0, [r0, #88]	@ 000b8018 806d
.org 0xb801a
	movs r1, #160	@ 000b801a a021
.org 0xb801c
	lsls r1, r1, #6	@ 000b801c 8901
.org 0xb801e
	adds r0, r0, r1	@ 000b801e 4018
.org 0xb8020
	str r0, [r7, #88]	@ 000b8020 b865
.org 0xb8022
	ldrb r0, [r7, #18]	@ 000b8022 b87c
.org 0xb8024
	adds r0, #1	@ 000b8024 0130
.org 0xb8026
	strb r0, [r7, #18]	@ 000b8026 b874
.org 0xb8028
	lsls r0, r0, #24	@ 000b8028 0006
.org 0xb802a
	lsrs r0, r0, #24	@ 000b802a 000e
.org 0xb802c
	cmp r0, #34	@ 000b802c 2228
.org 0xb802e
	bls.n 0xb8034	@ 000b802e 01d9
.org 0xb8030
	movs r0, #34	@ 000b8030 2220
.org 0xb8032
	strb r0, [r7, #18]	@ 000b8032 b874
.org 0xb8034
	ldrb r0, [r7, #18]	@ 000b8034 b87c
.org 0xb8036
	negs r0, r0	@ 000b8036 4042
.org 0xb8038
	adds r1, r7, #0	@ 000b8038 391c
.org 0xb803a
	adds r1, #36	@ 000b803a 2431
.org 0xb803c
	strb r0, [r1, #0]	@ 000b803c 0870
.org 0xb803e
	mov r0, sl	@ 000b803e 5046
.org 0xb8040
	adds r0, #214	@ 000b8040 d630
.org 0xb8042
	ldrb r1, [r0, #0]	@ 000b8042 0178
.org 0xb8044
	cmp r1, #0	@ 000b8044 0029
.org 0xb8046
	bne.n 0xb8050	@ 000b8046 03d1
.org 0xb8048
	ldrb r0, [r7, #13]	@ 000b8048 787b
.org 0xb804a
	adds r0, #1	@ 000b804a 0130
.org 0xb804c
	strb r0, [r7, #13]	@ 000b804c 7873
.org 0xb804e
	strb r1, [r7, #14]	@ 000b804e b973
.org 0xb8050
	pop {r3, r4, r5}	@ 000b8050 38bc
.org 0xb8052
	mov r8, r3	@ 000b8052 9846
