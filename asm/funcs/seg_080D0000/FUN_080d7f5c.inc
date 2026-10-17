@ FUN_080d7f5c  entry 0x080d7f5c  size 212
.thumb
.org 0xd7f5c
FUN_080d7f5c:
	push {r4, r5, r6, lr}	@ 000d7f5c 70b5
.org 0xd7f5e
	adds r4, r0, #0	@ 000d7f5e 041c
.org 0xd7f60
	ldr r0, [r4, #40]	@ 000d7f60 a06a
.org 0xd7f62
	ldrb r0, [r0, #10]	@ 000d7f62 807a
.org 0xd7f64
	lsls r0, r0, #24	@ 000d7f64 0006
.org 0xd7f66
	lsrs r3, r0, #28	@ 000d7f66 030f
.org 0xd7f68
	movs r1, #1	@ 000d7f68 0121
.org 0xd7f6a
	ands r3, r1	@ 000d7f6a 0b40
.org 0xd7f6c
	lsrs r5, r0, #29	@ 000d7f6c 450f
.org 0xd7f6e
	ands r5, r1	@ 000d7f6e 0d40
.org 0xd7f70
	ldrb r0, [r4, #14]	@ 000d7f70 a07b
.org 0xd7f72
	cmp r0, #0	@ 000d7f72 0028
.org 0xd7f74
	beq.n 0xd7f7c	@ 000d7f74 02d0
.org 0xd7f76
	cmp r0, #1	@ 000d7f76 0128
.org 0xd7f78
	beq.n 0xd7ff0	@ 000d7f78 3ad0
.org 0xd7f7a
	b.n 0xd802a	@ 000d7f7a 56e0
.org 0xd7f7c
	ldrb r1, [r4, #10]	@ 000d7f7c a17a
.org 0xd7f7e
	movs r0, #1	@ 000d7f7e 0120
.org 0xd7f80
	movs r6, #0	@ 000d7f80 0026
.org 0xd7f82
	adds r2, r0, #0	@ 000d7f82 021c
.org 0xd7f84
	orrs r2, r1	@ 000d7f84 0a43
.org 0xd7f86
	strb r2, [r4, #10]	@ 000d7f86 a272
.org 0xd7f88
	adds r1, r3, #0	@ 000d7f88 191c
.org 0xd7f8a
	cmp r1, #0	@ 000d7f8a 0029
.org 0xd7f8c
	beq.n 0xd7f94	@ 000d7f8c 02d0
.org 0xd7f8e
	movs r0, #16	@ 000d7f8e 1020
.org 0xd7f90
	orrs r2, r0	@ 000d7f90 0243
.org 0xd7f92
	b.n 0xd7f98	@ 000d7f92 01e0
.org 0xd7f94
	movs r0, #239	@ 000d7f94 ef20
.org 0xd7f96
	ands r2, r0	@ 000d7f96 0240
.org 0xd7f98
	strb r2, [r4, #10]	@ 000d7f98 a272
.org 0xd7f9a
	adds r0, r4, #0	@ 000d7f9a 201c
.org 0xd7f9c
	adds r0, #76	@ 000d7f9c 4c30
.org 0xd7f9e
	strb r1, [r0, #0]	@ 000d7f9e 0170
.org 0xd7fa0
	adds r2, r4, #0	@ 000d7fa0 221c
.org 0xd7fa2
	adds r2, #74	@ 000d7fa2 4a32
.org 0xd7fa4
	lsls r1, r1, #4	@ 000d7fa4 0901
.org 0xd7fa6
	ldrb r3, [r2, #0]	@ 000d7fa6 1378
.org 0xd7fa8
	movs r0, #17	@ 000d7fa8 1120
.org 0xd7faa
	negs r0, r0	@ 000d7faa 4042
.org 0xd7fac
	ands r0, r3	@ 000d7fac 1840
.org 0xd7fae
	orrs r0, r1	@ 000d7fae 0843
.org 0xd7fb0
	strb r0, [r2, #0]	@ 000d7fb0 1070
.org 0xd7fb2
	adds r3, r5, #0	@ 000d7fb2 2b1c
.org 0xd7fb4
	adds r5, r2, #0	@ 000d7fb4 151c
.org 0xd7fb6
	cmp r3, #0	@ 000d7fb6 002b
.org 0xd7fb8
	beq.n 0xd7fc2	@ 000d7fb8 03d0
.org 0xd7fba
	ldrb r0, [r4, #10]	@ 000d7fba a07a
.org 0xd7fbc
	movs r1, #32	@ 000d7fbc 2021
.org 0xd7fbe
	orrs r0, r1	@ 000d7fbe 0843
.org 0xd7fc0
	b.n 0xd7fc8	@ 000d7fc0 02e0
.org 0xd7fc2
	ldrb r1, [r4, #10]	@ 000d7fc2 a17a
.org 0xd7fc4
	movs r0, #223	@ 000d7fc4 df20
.org 0xd7fc6
	ands r0, r1	@ 000d7fc6 0840
.org 0xd7fc8
	strb r0, [r4, #10]	@ 000d7fc8 a072
.org 0xd7fca
	adds r1, r3, #0	@ 000d7fca 191c
.org 0xd7fcc
	adds r2, r4, #0	@ 000d7fcc 221c
.org 0xd7fce
	adds r2, #77	@ 000d7fce 4d32
.org 0xd7fd0
	strb r1, [r2, #0]	@ 000d7fd0 1170
.org 0xd7fd2
	lsls r1, r1, #5	@ 000d7fd2 4901
.org 0xd7fd4
	ldrb r2, [r5, #0]	@ 000d7fd4 2a78
.org 0xd7fd6
	movs r0, #33	@ 000d7fd6 2120
.org 0xd7fd8
	negs r0, r0	@ 000d7fd8 4042
.org 0xd7fda
	ands r0, r2	@ 000d7fda 1040
.org 0xd7fdc
	orrs r0, r1	@ 000d7fdc 0843
.org 0xd7fde
	strb r0, [r5, #0]	@ 000d7fde 2870
.org 0xd7fe0
	ldr r0, [r4, #116]	@ 000d7fe0 606f
.org 0xd7fe2
	ldrh r1, [r0, #0]	@ 000d7fe2 0188
.org 0xd7fe4
	adds r0, r4, #0	@ 000d7fe4 201c
.org 0xd7fe6
	bl 0x1cf00	@ 000d7fe6 44f78bff
.org 0xd7fea
	ldrb r0, [r4, #14]	@ 000d7fea a07b
.org 0xd7fec
	adds r0, #1	@ 000d7fec 0130
.org 0xd7fee
	strb r0, [r4, #14]	@ 000d7fee a073
.org 0xd7ff0
	ldr r0, [r4, #84]	@ 000d7ff0 606d
.org 0xd7ff2
	ldr r1, [r4, #92]	@ 000d7ff2 e16d
.org 0xd7ff4
	adds r0, r0, r1	@ 000d7ff4 4018
.org 0xd7ff6
	str r0, [r4, #84]	@ 000d7ff6 6065
.org 0xd7ff8
	ldr r0, [r4, #88]	@ 000d7ff8 a06d
.org 0xd7ffa
	ldr r1, [r4, #96]	@ 000d7ffa 216e
.org 0xd7ffc
	adds r0, r0, r1	@ 000d7ffc 4018
.org 0xd7ffe
	str r0, [r4, #88]	@ 000d7ffe a065
.org 0xd8000
	ldr r0, [r4, #104]	@ 000d8000 a06e
.org 0xd8002
	adds r1, r1, r0	@ 000d8002 0918
.org 0xd8004
	str r1, [r4, #96]	@ 000d8004 2166
.org 0xd8006
	ldrb r0, [r4, #18]	@ 000d8006 a07c
.org 0xd8008
	subs r0, #1	@ 000d8008 0138
.org 0xd800a
	strb r0, [r4, #18]	@ 000d800a a074
.org 0xd800c
	lsls r0, r0, #24	@ 000d800c 0006
.org 0xd800e
	cmp r0, #0	@ 000d800e 0028
.org 0xd8010
	bne.n 0xd8024	@ 000d8010 08d1
.org 0xd8012
	ldr r1, [pc, #28]	@ 000d8012 0749
.org 0xd8014
	ldrb r0, [r4, #9]	@ 000d8014 607a
.org 0xd8016
	lsls r0, r0, #2	@ 000d8016 8000
.org 0xd8018
	adds r0, r0, r1	@ 000d8018 4018
.org 0xd801a
	movs r1, #2	@ 000d801a 0221
.org 0xd801c
	str r1, [r4, #12]	@ 000d801c e160
.org 0xd801e
	ldr r0, [r0, #0]	@ 000d801e 0068
.org 0xd8020
	ldr r0, [r0, #8]	@ 000d8020 8068
.org 0xd8022
	str r0, [r4, #20]	@ 000d8022 6061
.org 0xd8024
	adds r0, r4, #0	@ 000d8024 201c
.org 0xd8026
	bl 0x1cff0	@ 000d8026 44f7e3ff
.org 0xd802a
	pop {r4, r5, r6}	@ 000d802a 70bc
.org 0xd802c
	pop {r0}	@ 000d802c 01bc
.org 0xd802e
	bx r0	@ 000d802e 0047
