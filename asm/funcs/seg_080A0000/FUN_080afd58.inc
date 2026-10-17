@ FUN_080afd58  entry 0x080afd58  size 236
.thumb
.org 0xafd58
FUN_080afd58:
	push {r4, lr}	@ 000afd58 10b5
.org 0xafd5a
	adds r4, r0, #0	@ 000afd5a 041c
.org 0xafd5c
	ldrb r0, [r4, #14]	@ 000afd5c a07b
.org 0xafd5e
	cmp r0, #0	@ 000afd5e 0028
.org 0xafd60
	bne.n 0xafdc6	@ 000afd60 31d1
.org 0xafd62
	ldrb r0, [r4, #30]	@ 000afd62 a07f
.org 0xafd64
	lsls r1, r0, #8	@ 000afd64 0102
.org 0xafd66
	adds r0, r4, #0	@ 000afd66 201c
.org 0xafd68
	adds r0, #112	@ 000afd68 7030
.org 0xafd6a
	ldrb r0, [r0, #0]	@ 000afd6a 0078
.org 0xafd6c
	orrs r1, r0	@ 000afd6c 0143
.org 0xafd6e
	movs r0, #166	@ 000afd6e a620
.org 0xafd70
	lsls r0, r0, #8	@ 000afd70 0002
.org 0xafd72
	cmp r1, r0	@ 000afd72 8142
.org 0xafd74
	beq.n 0xafd7c	@ 000afd74 02d0
.org 0xafd76
	adds r0, #6	@ 000afd76 0630
.org 0xafd78
	cmp r1, r0	@ 000afd78 8142
.org 0xafd7a
	bne.n 0xafdb0	@ 000afd7a 19d1
.org 0xafd7c
	adds r0, r4, #0	@ 000afd7c 201c
.org 0xafd7e
	adds r0, #113	@ 000afd7e 7130
.org 0xafd80
	ldrb r2, [r0, #0]	@ 000afd80 0278
.org 0xafd82
	cmp r2, #0	@ 000afd82 002a
.org 0xafd84
	bne.n 0xafd8a	@ 000afd84 01d1
.org 0xafd86
	movs r2, #1	@ 000afd86 0122
.org 0xafd88
	b.n 0xafd98	@ 000afd88 06e0
.org 0xafd8a
	subs r0, r2, #1	@ 000afd8a 501e
.org 0xafd8c
	lsls r0, r0, #24	@ 000afd8c 0006
.org 0xafd8e
	lsrs r0, r0, #24	@ 000afd8e 000e
.org 0xafd90
	movs r2, #0	@ 000afd90 0022
.org 0xafd92
	cmp r0, #1	@ 000afd92 0128
.org 0xafd94
	bhi.n 0xafd98	@ 000afd94 00d8
.org 0xafd96
	movs r2, #6	@ 000afd96 0622
.org 0xafd98
	adds r0, r4, #0	@ 000afd98 201c
.org 0xafd9a
	adds r0, #183	@ 000afd9a b730
.org 0xafd9c
	ldr r3, [pc, #164]	@ 000afd9c 294b
.org 0xafd9e
	adds r1, r3, #0	@ 000afd9e 191c
.org 0xafda0
	ldrb r0, [r0, #0]	@ 000afda0 0078
.org 0xafda2
	adds r1, r1, r0	@ 000afda2 0918
.org 0xafda4
	lsls r1, r1, #16	@ 000afda4 0904
.org 0xafda6
	lsrs r1, r1, #16	@ 000afda6 090c
.org 0xafda8
	adds r0, r4, #0	@ 000afda8 201c
.org 0xafdaa
	movs r3, #1	@ 000afdaa 0123
.org 0xafdac
	bl 0x1cfc8	@ 000afdac 6df70cf9
.org 0xafdb0
	ldr r2, [r4, #44]	@ 000afdb0 e26a
.org 0xafdb2
	cmp r2, #0	@ 000afdb2 002a
.org 0xafdb4
	beq.n 0xafdc0	@ 000afdb4 04d0
.org 0xafdb6
	movs r0, #0	@ 000afdb6 0020
.org 0xafdb8
	movs r1, #1	@ 000afdb8 0121
.org 0xafdba
	strb r1, [r2, #13]	@ 000afdba 5173
.org 0xafdbc
	ldr r1, [r4, #44]	@ 000afdbc e16a
.org 0xafdbe
	strb r0, [r1, #14]	@ 000afdbe 8873
.org 0xafdc0
	ldrb r0, [r4, #14]	@ 000afdc0 a07b
.org 0xafdc2
	adds r0, #1	@ 000afdc2 0130
.org 0xafdc4
	strb r0, [r4, #14]	@ 000afdc4 a073
.org 0xafdc6
	ldrb r0, [r4, #16]	@ 000afdc6 207c
.org 0xafdc8
	cmp r0, #0	@ 000afdc8 0028
.org 0xafdca
	bne.n 0xafe3e	@ 000afdca 38d1
.org 0xafdcc
	ldrb r0, [r4, #17]	@ 000afdcc 607c
.org 0xafdce
	cmp r0, #0	@ 000afdce 0028
.org 0xafdd0
	bne.n 0xafe0a	@ 000afdd0 1bd1
.org 0xafdd2
	ldr r0, [r4, #84]	@ 000afdd2 606d
.org 0xafdd4
	ldr r1, [r4, #88]	@ 000afdd4 a16d
.org 0xafdd6
	ldr r2, [pc, #112]	@ 000afdd6 1c4a
.org 0xafdd8
	adds r1, r1, r2	@ 000afdd8 8918
.org 0xafdda
	bl 0x7c7c	@ 000afdda 57f74fff
.org 0xafdde
	lsls r0, r0, #16	@ 000afdde 0004
.org 0xafde0
	cmp r0, #0	@ 000afde0 0028
.org 0xafde2
	bne.n 0xafe0a	@ 000afde2 12d1
.org 0xafde4
	ldr r0, [r4, #84]	@ 000afde4 606d
.org 0xafde6
	ldr r1, [r4, #88]	@ 000afde6 a16d
.org 0xafde8
	ldr r3, [pc, #92]	@ 000afde8 174b
.org 0xafdea
	adds r1, r1, r3	@ 000afdea c918
.org 0xafdec
	bl 0x7020	@ 000afdec 57f718f9
.org 0xafdf0
	movs r1, #128	@ 000afdf0 8021
.org 0xafdf2
	lsls r1, r1, #8	@ 000afdf2 0902
.org 0xafdf4
	ands r1, r0	@ 000afdf4 0140
.org 0xafdf6
	cmp r1, #0	@ 000afdf6 0029
.org 0xafdf8
	bne.n 0xafe0a	@ 000afdf8 07d1
.org 0xafdfa
	ldr r0, [r4, #96]	@ 000afdfa 206e
.org 0xafdfc
	lsls r0, r0, #8	@ 000afdfc 0002
.org 0xafdfe
	negs r0, r0	@ 000afdfe 4042
.org 0xafe00
	cmp r0, #0	@ 000afe00 0028
.org 0xafe02
	bge.n 0xafe06	@ 000afe02 00da
.org 0xafe04
	adds r0, #255	@ 000afe04 ff30
.org 0xafe06
	asrs r0, r0, #8	@ 000afe06 0012
.org 0xafe08
	str r0, [r4, #96]	@ 000afe08 2066
.org 0xafe0a
	ldr r0, [r4, #84]	@ 000afe0a 606d
.org 0xafe0c
	ldr r2, [r4, #92]	@ 000afe0c e26d
.org 0xafe0e
	adds r0, r0, r2	@ 000afe0e 8018
.org 0xafe10
	str r0, [r4, #84]	@ 000afe10 6065
.org 0xafe12
	ldr r0, [r4, #88]	@ 000afe12 a06d
.org 0xafe14
	ldr r1, [r4, #96]	@ 000afe14 216e
.org 0xafe16
	adds r0, r0, r1	@ 000afe16 4018
.org 0xafe18
	str r0, [r4, #88]	@ 000afe18 a065
.org 0xafe1a
	ldr r0, [r4, #104]	@ 000afe1a a06e
.org 0xafe1c
	adds r1, r1, r0	@ 000afe1c 0918
.org 0xafe1e
	str r1, [r4, #96]	@ 000afe1e 2166
.org 0xafe20
	adds r0, r2, #0	@ 000afe20 101c
.org 0xafe22
	cmp r2, #0	@ 000afe22 002a
.org 0xafe24
	bge.n 0xafe28	@ 000afe24 00da
.org 0xafe26
	negs r0, r2	@ 000afe26 5042
.org 0xafe28
	cmp r0, #76	@ 000afe28 4c28
.org 0xafe2a
	ble.n 0xafe32	@ 000afe2a 02dd
.org 0xafe2c
	ldr r0, [r4, #100]	@ 000afe2c 606e
.org 0xafe2e
	adds r0, r2, r0	@ 000afe2e 1018
.org 0xafe30
	str r0, [r4, #92]	@ 000afe30 e065
.org 0xafe32
	ldr r0, [r4, #96]	@ 000afe32 206e
.org 0xafe34
	cmp r0, #0	@ 000afe34 0028
.org 0xafe36
	ble.n 0xafe3e	@ 000afe36 02dd
.org 0xafe38
	adds r0, r4, #0	@ 000afe38 201c
.org 0xafe3a
	bl 0xb0064	@ 000afe3a 00f013f9
.org 0xafe3e
	pop {r4}	@ 000afe3e 10bc
.org 0xafe40
	pop {r0}	@ 000afe40 01bc
.org 0xafe42
	bx r0	@ 000afe42 0047
