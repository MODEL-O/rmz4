@ FUN_0807cf78  entry 0x0807cf78  size 156
.thumb
.org 0x7cf78
FUN_0807cf78:
	push {r4, r5, lr}	@ 0007cf78 30b5
.org 0x7cf7a
	adds r4, r0, #0	@ 0007cf7a 041c
.org 0x7cf7c
	ldrb r3, [r4, #15]	@ 0007cf7c e37b
.org 0x7cf7e
	cmp r3, #0	@ 0007cf7e 002b
.org 0x7cf80
	bne.n 0x7cfa6	@ 0007cf80 11d1
.org 0x7cf82
	adds r2, r4, #0	@ 0007cf82 221c
.org 0x7cf84
	adds r2, #208	@ 0007cf84 d032
.org 0x7cf86
	ldr r1, [r2, #0]	@ 0007cf86 1168
.org 0x7cf88
	cmp r1, #0	@ 0007cf88 0029
.org 0x7cf8a
	beq.n 0x7cf94	@ 0007cf8a 03d0
.org 0x7cf8c
	adds r1, #188	@ 0007cf8c bc31
.org 0x7cf8e
	movs r0, #1	@ 0007cf8e 0120
.org 0x7cf90
	strb r0, [r1, #0]	@ 0007cf90 0870
.org 0x7cf92
	str r3, [r2, #0]	@ 0007cf92 1360
.org 0x7cf94
	adds r0, r4, #0	@ 0007cf94 201c
.org 0x7cf96
	movs r1, #0	@ 0007cf96 0021
.org 0x7cf98
	bl 0x7e8c8	@ 0007cf98 01f096fc
.org 0x7cf9c
	movs r0, #80	@ 0007cf9c 5020
.org 0x7cf9e
	str r0, [r4, #104]	@ 0007cf9e a066
.org 0x7cfa0
	ldrb r0, [r4, #15]	@ 0007cfa0 e07b
.org 0x7cfa2
	adds r0, #1	@ 0007cfa2 0130
.org 0x7cfa4
	strb r0, [r4, #15]	@ 0007cfa4 e073
.org 0x7cfa6
	adds r5, r4, #0	@ 0007cfa6 251c
.org 0x7cfa8
	adds r5, #188	@ 0007cfa8 bc35
.org 0x7cfaa
	ldrb r0, [r5, #0]	@ 0007cfaa 2878
.org 0x7cfac
	cmp r0, #0	@ 0007cfac 0028
.org 0x7cfae
	beq.n 0x7cfb6	@ 0007cfae 02d0
.org 0x7cfb0
	adds r0, r4, #0	@ 0007cfb0 201c
.org 0x7cfb2
	bl 0x1cff0	@ 0007cfb2 a0f71df8
.org 0x7cfb6
	adds r0, r4, #0	@ 0007cfb6 201c
.org 0x7cfb8
	adds r0, #116	@ 0007cfb8 7430
.org 0x7cfba
	ldr r3, [pc, #88]	@ 0007cfba 164b
.org 0x7cfbc
	ldr r2, [pc, #88]	@ 0007cfbc 164a
.org 0x7cfbe
	ldrb r1, [r5, #0]	@ 0007cfbe 2978
.org 0x7cfc0
	lsls r1, r1, #1	@ 0007cfc0 4900
.org 0x7cfc2
	adds r1, r1, r2	@ 0007cfc2 8918
.org 0x7cfc4
	ldrh r2, [r1, #0]	@ 0007cfc4 0a88
.org 0x7cfc6
	lsls r2, r2, #2	@ 0007cfc6 9200
.org 0x7cfc8
	adds r2, r2, r3	@ 0007cfc8 d218
.org 0x7cfca
	adds r1, r4, #0	@ 0007cfca 211c
.org 0x7cfcc
	adds r1, #113	@ 0007cfcc 7131
.org 0x7cfce
	ldrb r1, [r1, #0]	@ 0007cfce 0978
.org 0x7cfd0
	lsls r1, r1, #24	@ 0007cfd0 0906
.org 0x7cfd2
	asrs r1, r1, #24	@ 0007cfd2 0916
.org 0x7cfd4
	ldr r2, [r2, #0]	@ 0007cfd4 1268
.org 0x7cfd6
	lsls r1, r1, #2	@ 0007cfd6 8900
.org 0x7cfd8
	adds r1, r1, r2	@ 0007cfd8 8918
.org 0x7cfda
	ldr r1, [r1, #0]	@ 0007cfda 0968
.org 0x7cfdc
	bl 0x5784	@ 0007cfdc 88f7d2fb
.org 0x7cfe0
	ldr r0, [r4, #104]	@ 0007cfe0 a06e
.org 0x7cfe2
	cmp r0, #0	@ 0007cfe2 0028
.org 0x7cfe4
	beq.n 0x7cffa	@ 0007cfe4 09d0
.org 0x7cfe6
	subs r0, #1	@ 0007cfe6 0138
.org 0x7cfe8
	str r0, [r4, #104]	@ 0007cfe8 a066
.org 0x7cfea
	cmp r0, #0	@ 0007cfea 0028
.org 0x7cfec
	bne.n 0x7cffa	@ 0007cfec 05d1
.org 0x7cfee
	adds r2, r4, #0	@ 0007cfee 221c
.org 0x7cff0
	adds r2, #191	@ 0007cff0 bf32
.org 0x7cff2
	ldrb r1, [r2, #0]	@ 0007cff2 1178
.org 0x7cff4
	movs r0, #1	@ 0007cff4 0120
.org 0x7cff6
	orrs r0, r1	@ 0007cff6 0843
.org 0x7cff8
	strb r0, [r2, #0]	@ 0007cff8 1070
.org 0x7cffa
	adds r0, r4, #0	@ 0007cffa 201c
.org 0x7cffc
	adds r0, #204	@ 0007cffc cc30
.org 0x7cffe
	movs r2, #0	@ 0007cffe 0022
.org 0x7d000
	ldrsh r1, [r0, r2]	@ 0007d000 815e
.org 0x7d002
	cmp r1, #0	@ 0007d002 0029
.org 0x7d004
	bne.n 0x7d00e	@ 0007d004 03d1
.org 0x7d006
	ldrb r0, [r4, #14]	@ 0007d006 a07b
.org 0x7d008
	adds r0, #1	@ 0007d008 0130
.org 0x7d00a
	strb r0, [r4, #14]	@ 0007d00a a073
.org 0x7d00c
	strb r1, [r4, #15]	@ 0007d00c e173
.org 0x7d00e
	pop {r4, r5}	@ 0007d00e 30bc
.org 0x7d010
	pop {r0}	@ 0007d010 01bc
.org 0x7d012
	bx r0	@ 0007d012 0047
