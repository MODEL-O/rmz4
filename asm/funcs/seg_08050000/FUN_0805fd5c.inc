@ FUN_0805fd5c  entry 0x0805fd5c  size 242
.thumb
.org 0x5fd5c
FUN_0805fd5c:
	push {r4, lr}	@ 0005fd5c 10b5
.org 0x5fd5e
	adds r4, r0, #0	@ 0005fd5e 041c
.org 0x5fd60
	ldrb r0, [r4, #14]	@ 0005fd60 a07b
.org 0x5fd62
	cmp r0, #0	@ 0005fd62 0028
.org 0x5fd64
	bne.n 0x5fe0e	@ 0005fd64 53d1
.org 0x5fd66
	adds r1, r4, #0	@ 0005fd66 211c
.org 0x5fd68
	adds r1, #180	@ 0005fd68 b431
.org 0x5fd6a
	movs r0, #4	@ 0005fd6a 0420
.org 0x5fd6c
	strb r0, [r1, #28]	@ 0005fd6c 0877
.org 0x5fd6e
	ldr r1, [pc, #84]	@ 0005fd6e 1549
.org 0x5fd70
	adds r0, r4, #0	@ 0005fd70 201c
.org 0x5fd72
	bl 0x1cf00	@ 0005fd72 bdf7c5f8
.org 0x5fd76
	adds r0, r4, #0	@ 0005fd76 201c
.org 0x5fd78
	bl 0xde5d0	@ 0005fd78 7ef02afc
.org 0x5fd7c
	str r0, [r4, #44]	@ 0005fd7c e062
.org 0x5fd7e
	movs r3, #0	@ 0005fd7e 0023
.org 0x5fd80
	ldr r0, [pc, #68]	@ 0005fd80 1148
.org 0x5fd82
	ldr r2, [r0, #0]	@ 0005fd82 0268
.org 0x5fd84
	ldr r1, [r4, #84]	@ 0005fd84 616d
.org 0x5fd86
	ldr r0, [r2, #84]	@ 0005fd86 506d
.org 0x5fd88
	cmp r1, r0	@ 0005fd88 8142
.org 0x5fd8a
	bge.n 0x5fd8e	@ 0005fd8a 00da
.org 0x5fd8c
	movs r3, #1	@ 0005fd8c 0123
.org 0x5fd8e
	adds r0, r4, #0	@ 0005fd8e 201c
.org 0x5fd90
	adds r0, #76	@ 0005fd90 4c30
.org 0x5fd92
	strb r3, [r0, #0]	@ 0005fd92 0370
.org 0x5fd94
	movs r3, #0	@ 0005fd94 0023
.org 0x5fd96
	ldr r1, [r4, #84]	@ 0005fd96 616d
.org 0x5fd98
	ldr r0, [r2, #84]	@ 0005fd98 506d
.org 0x5fd9a
	cmp r1, r0	@ 0005fd9a 8142
.org 0x5fd9c
	bge.n 0x5fda0	@ 0005fd9c 00da
.org 0x5fd9e
	movs r3, #1	@ 0005fd9e 0123
.org 0x5fda0
	movs r0, #74	@ 0005fda0 4a20
.org 0x5fda2
	adds r0, r0, r4	@ 0005fda2 0019
.org 0x5fda4
	mov ip, r0	@ 0005fda4 8446
.org 0x5fda6
	lsls r2, r3, #4	@ 0005fda6 1a01
.org 0x5fda8
	ldrb r1, [r0, #0]	@ 0005fda8 0178
.org 0x5fdaa
	movs r0, #17	@ 0005fdaa 1120
.org 0x5fdac
	negs r0, r0	@ 0005fdac 4042
.org 0x5fdae
	ands r0, r1	@ 0005fdae 0840
.org 0x5fdb0
	orrs r0, r2	@ 0005fdb0 1043
.org 0x5fdb2
	mov r1, ip	@ 0005fdb2 6146
.org 0x5fdb4
	strb r0, [r1, #0]	@ 0005fdb4 0870
.org 0x5fdb6
	cmp r3, #0	@ 0005fdb6 002b
.org 0x5fdb8
	beq.n 0x5fdcc	@ 0005fdb8 08d0
.org 0x5fdba
	ldrb r0, [r4, #10]	@ 0005fdba a07a
.org 0x5fdbc
	movs r1, #16	@ 0005fdbc 1021
.org 0x5fdbe
	orrs r0, r1	@ 0005fdbe 0843
.org 0x5fdc0
	b.n 0x5fdd2	@ 0005fdc0 07e0
.org 0x5fdc2
	.byte 0x00	@ 0005fdc2 data
.org 0x5fdc3
	.byte 0x00	@ 0005fdc3 data
.org 0x5fdc4
	.byte 0x04,0xa5,0x00,0x00	@ 0005fdc4 data
.org 0x5fdc8
	.byte 0xf0,0xdb,0x02,0x02	@ 0005fdc8 data
.org 0x5fdcc
	ldrb r1, [r4, #10]	@ 0005fdcc a17a
.org 0x5fdce
	movs r0, #239	@ 0005fdce ef20
.org 0x5fdd0
	ands r0, r1	@ 0005fdd0 0840
.org 0x5fdd2
	strb r0, [r4, #10]	@ 0005fdd2 a072
.org 0x5fdd4
	adds r0, r4, #0	@ 0005fdd4 201c
.org 0x5fdd6
	adds r0, #116	@ 0005fdd6 7430
.org 0x5fdd8
	ldr r1, [pc, #20]	@ 0005fdd8 0549
.org 0x5fdda
	bl 0x5784	@ 0005fdda a5f7d3fc
.org 0x5fdde
	ldrb r1, [r4, #10]	@ 0005fdde a17a
.org 0x5fde0
	movs r0, #16	@ 0005fde0 1020
.org 0x5fde2
	ands r0, r1	@ 0005fde2 0840
.org 0x5fde4
	cmp r0, #0	@ 0005fde4 0028
.org 0x5fde6
	beq.n 0x5fdf4	@ 0005fde6 05d0
.org 0x5fde8
	movs r0, #128	@ 0005fde8 8020
.org 0x5fdea
	lsls r0, r0, #3	@ 0005fdea c000
.org 0x5fdec
	b.n 0x5fdf6	@ 0005fdec 03e0
.org 0x5fdee
	.byte 0x00	@ 0005fdee data
.org 0x5fdef
	.byte 0x00	@ 0005fdef data
.org 0x5fdf0
	.byte 0x84,0xaa,0x85,0x08	@ 0005fdf0 data
.org 0x5fdf4
	ldr r0, [pc, #68]	@ 0005fdf4 1148
.org 0x5fdf6
	str r0, [r4, #92]	@ 0005fdf6 e065
.org 0x5fdf8
	ldr r0, [pc, #68]	@ 0005fdf8 1148
.org 0x5fdfa
	str r0, [r4, #96]	@ 0005fdfa 2066
.org 0x5fdfc
	movs r0, #16	@ 0005fdfc 1020
.org 0x5fdfe
	strb r0, [r4, #18]	@ 0005fdfe a074
.org 0x5fe00
	movs r0, #139	@ 0005fe00 8b20
.org 0x5fe02
	lsls r0, r0, #1	@ 0005fe02 4000
.org 0x5fe04
	bl 0x2b10	@ 0005fe04 a2f784fe
.org 0x5fe08
	ldrb r0, [r4, #14]	@ 0005fe08 a07b
.org 0x5fe0a
	adds r0, #1	@ 0005fe0a 0130
.org 0x5fe0c
	strb r0, [r4, #14]	@ 0005fe0c a073
.org 0x5fe0e
	adds r0, r4, #0	@ 0005fe0e 201c
.org 0x5fe10
	bl 0x1cff0	@ 0005fe10 bdf7eef8
.org 0x5fe14
	ldr r0, [r4, #84]	@ 0005fe14 606d
.org 0x5fe16
	ldr r1, [r4, #92]	@ 0005fe16 e16d
.org 0x5fe18
	adds r0, r0, r1	@ 0005fe18 4018
.org 0x5fe1a
	str r0, [r4, #84]	@ 0005fe1a 6065
.org 0x5fe1c
	ldr r0, [r4, #88]	@ 0005fe1c a06d
.org 0x5fe1e
	ldr r1, [r4, #96]	@ 0005fe1e 216e
.org 0x5fe20
	adds r0, r0, r1	@ 0005fe20 4018
.org 0x5fe22
	str r0, [r4, #88]	@ 0005fe22 a065
.org 0x5fe24
	adds r1, #64	@ 0005fe24 4031
.org 0x5fe26
	str r1, [r4, #96]	@ 0005fe26 2166
.org 0x5fe28
	ldrb r1, [r4, #18]	@ 0005fe28 a17c
.org 0x5fe2a
	movs r0, #1	@ 0005fe2a 0120
.org 0x5fe2c
	ands r0, r1	@ 0005fe2c 0840
.org 0x5fe2e
	cmp r0, #0	@ 0005fe2e 0028
.org 0x5fe30
	beq.n 0x5fe44	@ 0005fe30 08d0
.org 0x5fe32
	ldrb r1, [r4, #10]	@ 0005fe32 a17a
.org 0x5fe34
	movs r0, #254	@ 0005fe34 fe20
.org 0x5fe36
	ands r0, r1	@ 0005fe36 0840
.org 0x5fe38
	b.n 0x5fe4a	@ 0005fe38 07e0
.org 0x5fe3a
	.byte 0x00	@ 0005fe3a data
.org 0x5fe3b
	.byte 0x00	@ 0005fe3b data
.org 0x5fe3c
	.byte 0x00,0xfc,0xff,0xff	@ 0005fe3c data
.org 0x5fe40
	.byte 0x00,0xfe,0xff,0xff	@ 0005fe40 data
.org 0x5fe44
	ldrb r0, [r4, #10]	@ 0005fe44 a07a
.org 0x5fe46
	movs r1, #1	@ 0005fe46 0121
.org 0x5fe48
	orrs r0, r1	@ 0005fe48 0843
.org 0x5fe4a
	strb r0, [r4, #10]	@ 0005fe4a a072
.org 0x5fe4c
	ldrb r0, [r4, #18]	@ 0005fe4c a07c
