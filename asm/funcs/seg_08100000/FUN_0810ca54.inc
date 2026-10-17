@ FUN_0810ca54  entry 0x0810ca54  size 170
.thumb
.org 0x10ca54
FUN_0810ca54:
	push {r4, r5, r6, lr}	@ 0010ca54 70b5
.org 0x10ca56
	adds r5, r0, #0	@ 0010ca56 051c
.org 0x10ca58
	ldr r1, [pc, #84]	@ 0010ca58 1549
.org 0x10ca5a
	ldrb r0, [r5, #9]	@ 0010ca5a 687a
.org 0x10ca5c
	lsls r0, r0, #2	@ 0010ca5c 8000
.org 0x10ca5e
	adds r0, r0, r1	@ 0010ca5e 4018
.org 0x10ca60
	movs r4, #1	@ 0010ca60 0124
.org 0x10ca62
	str r4, [r5, #12]	@ 0010ca62 ec60
.org 0x10ca64
	ldr r0, [r0, #0]	@ 0010ca64 0068
.org 0x10ca66
	ldr r0, [r0, #4]	@ 0010ca66 4068
.org 0x10ca68
	str r0, [r5, #20]	@ 0010ca68 6861
.org 0x10ca6a
	adds r0, r5, #0	@ 0010ca6a 281c
.org 0x10ca6c
	bl 0x1cc9c	@ 0010ca6c 10f716f9
.org 0x10ca70
	ldrb r1, [r5, #10]	@ 0010ca70 a97a
.org 0x10ca72
	movs r0, #2	@ 0010ca72 0220
.org 0x10ca74
	movs r6, #0	@ 0010ca74 0026
.org 0x10ca76
	orrs r0, r1	@ 0010ca76 0843
.org 0x10ca78
	strb r0, [r5, #10]	@ 0010ca78 a872
.org 0x10ca7a
	ldr r1, [pc, #56]	@ 0010ca7a 0e49
.org 0x10ca7c
	adds r0, r5, #0	@ 0010ca7c 281c
.org 0x10ca7e
	bl 0x1cf00	@ 0010ca7e 10f73ffa
.org 0x10ca82
	ldrb r1, [r5, #16]	@ 0010ca82 297c
.org 0x10ca84
	adds r0, r4, #0	@ 0010ca84 201c
.org 0x10ca86
	ands r0, r1	@ 0010ca86 0840
.org 0x10ca88
	adds r1, r5, #0	@ 0010ca88 291c
.org 0x10ca8a
	adds r1, #76	@ 0010ca8a 4c31
.org 0x10ca8c
	strb r0, [r1, #0]	@ 0010ca8c 0870
.org 0x10ca8e
	ldrb r0, [r5, #16]	@ 0010ca8e 287c
.org 0x10ca90
	ands r4, r0	@ 0010ca90 0440
.org 0x10ca92
	adds r3, r5, #0	@ 0010ca92 2b1c
.org 0x10ca94
	adds r3, #74	@ 0010ca94 4a33
.org 0x10ca96
	lsls r2, r4, #4	@ 0010ca96 2201
.org 0x10ca98
	ldrb r1, [r3, #0]	@ 0010ca98 1978
.org 0x10ca9a
	movs r0, #17	@ 0010ca9a 1120
.org 0x10ca9c
	negs r0, r0	@ 0010ca9c 4042
.org 0x10ca9e
	ands r0, r1	@ 0010ca9e 0840
.org 0x10caa0
	orrs r0, r2	@ 0010caa0 1043
.org 0x10caa2
	strb r0, [r3, #0]	@ 0010caa2 1870
.org 0x10caa4
	cmp r4, #0	@ 0010caa4 002c
.org 0x10caa6
	beq.n 0x10cab8	@ 0010caa6 07d0
.org 0x10caa8
	ldrb r0, [r5, #10]	@ 0010caa8 a87a
.org 0x10caaa
	movs r1, #16	@ 0010caaa 1021
.org 0x10caac
	orrs r0, r1	@ 0010caac 0843
.org 0x10caae
	b.n 0x10cabe	@ 0010caae 06e0
.org 0x10cab0
	.byte 0xf8,0xca,0x86,0x08	@ 0010cab0 data
.org 0x10cab4
	.byte 0x0a,0x43,0x00,0x00	@ 0010cab4 data
.org 0x10cab8
	ldrb r1, [r5, #10]	@ 0010cab8 a97a
.org 0x10caba
	movs r0, #239	@ 0010caba ef20
.org 0x10cabc
	ands r0, r1	@ 0010cabc 0840
.org 0x10cabe
	strb r0, [r5, #10]	@ 0010cabe a872
.org 0x10cac0
	ldrb r0, [r5, #16]	@ 0010cac0 287c
.org 0x10cac2
	lsrs r0, r0, #1	@ 0010cac2 4008
.org 0x10cac4
	movs r2, #1	@ 0010cac4 0122
.org 0x10cac6
	ands r0, r2	@ 0010cac6 1040
.org 0x10cac8
	adds r1, r5, #0	@ 0010cac8 291c
.org 0x10caca
	adds r1, #77	@ 0010caca 4d31
.org 0x10cacc
	strb r0, [r1, #0]	@ 0010cacc 0870
.org 0x10cace
	ldrb r1, [r5, #16]	@ 0010cace 297c
.org 0x10cad0
	lsrs r1, r1, #1	@ 0010cad0 4908
.org 0x10cad2
	adds r4, r5, #0	@ 0010cad2 2c1c
.org 0x10cad4
	adds r4, #74	@ 0010cad4 4a34
.org 0x10cad6
	ands r1, r2	@ 0010cad6 1140
.org 0x10cad8
	lsls r3, r1, #5	@ 0010cad8 4b01
.org 0x10cada
	ldrb r2, [r4, #0]	@ 0010cada 2278
.org 0x10cadc
	movs r0, #33	@ 0010cadc 2120
.org 0x10cade
	negs r0, r0	@ 0010cade 4042
.org 0x10cae0
	ands r0, r2	@ 0010cae0 1040
.org 0x10cae2
	orrs r0, r3	@ 0010cae2 1843
.org 0x10cae4
	strb r0, [r4, #0]	@ 0010cae4 2070
.org 0x10cae6
	cmp r1, #0	@ 0010cae6 0029
.org 0x10cae8
	beq.n 0x10caf2	@ 0010cae8 03d0
.org 0x10caea
	ldrb r0, [r5, #10]	@ 0010caea a87a
.org 0x10caec
	movs r1, #32	@ 0010caec 2021
.org 0x10caee
	orrs r0, r1	@ 0010caee 0843
.org 0x10caf0
	b.n 0x10caf8	@ 0010caf0 02e0
.org 0x10caf2
	ldrb r1, [r5, #10]	@ 0010caf2 a97a
.org 0x10caf4
	movs r0, #223	@ 0010caf4 df20
.org 0x10caf6
	ands r0, r1	@ 0010caf6 0840
.org 0x10caf8
	strb r0, [r5, #10]	@ 0010caf8 a872
.org 0x10cafa
	adds r0, r5, #0	@ 0010cafa 281c
.org 0x10cafc
	bl 0x10cb08	@ 0010cafc 00f004f8
