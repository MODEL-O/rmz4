@ FUN_080bcddc  entry 0x080bcddc  size 228
.thumb
.org 0xbcddc
FUN_080bcddc:
	push {r4, r5, r6, lr}	@ 000bcddc 70b5
.org 0xbcdde
	adds r6, r0, #0	@ 000bcdde 061c
.org 0xbcde0
	bl 0x1cc9c	@ 000bcde0 5ff75cff
.org 0xbcde4
	ldrb r1, [r6, #10]	@ 000bcde4 b17a
.org 0xbcde6
	movs r0, #1	@ 000bcde6 0120
.org 0xbcde8
	movs r4, #0	@ 000bcde8 0024
.org 0xbcdea
	orrs r0, r1	@ 000bcdea 0843
.org 0xbcdec
	movs r1, #2	@ 000bcdec 0221
.org 0xbcdee
	orrs r0, r1	@ 000bcdee 0843
.org 0xbcdf0
	strb r0, [r6, #10]	@ 000bcdf0 b072
.org 0xbcdf2
	ldrb r0, [r6, #16]	@ 000bcdf2 307c
.org 0xbcdf4
	cmp r0, #0	@ 000bcdf4 0028
.org 0xbcdf6
	bne.n 0xbce2c	@ 000bcdf6 19d1
.org 0xbcdf8
	movs r1, #238	@ 000bcdf8 ee21
.org 0xbcdfa
	lsls r1, r1, #8	@ 000bcdfa 0902
.org 0xbcdfc
	adds r0, r6, #0	@ 000bcdfc 301c
.org 0xbcdfe
	bl 0x1cf00	@ 000bcdfe 60f77ff8
.org 0xbce02
	ldrb r0, [r6, #10]	@ 000bce02 b07a
.org 0xbce04
	movs r1, #4	@ 000bce04 0421
.org 0xbce06
	orrs r0, r1	@ 000bce06 0843
.org 0xbce08
	strb r0, [r6, #10]	@ 000bce08 b072
.org 0xbce0a
	adds r4, r6, #0	@ 000bce0a 341c
.org 0xbce0c
	adds r4, #116	@ 000bce0c 7434
.org 0xbce0e
	ldr r1, [pc, #20]	@ 000bce0e 0549
.org 0xbce10
	adds r2, r6, #0	@ 000bce10 321c
.org 0xbce12
	adds r2, #84	@ 000bce12 5432
.org 0xbce14
	adds r0, r4, #0	@ 000bce14 201c
.org 0xbce16
	movs r3, #1	@ 000bce16 0123
.org 0xbce18
	bl 0x5760	@ 000bce18 48f7a2fc
.org 0xbce1c
	str r6, [r4, #44]	@ 000bce1c e662
.org 0xbce1e
	ldr r0, [pc, #8]	@ 000bce1e 0248
.org 0xbce20
	b.n 0xbce52	@ 000bce20 17e0
.org 0xbce22
	.byte 0x00	@ 000bce22 data
.org 0xbce23
	.byte 0x00	@ 000bce23 data
.org 0xbce24
	.byte 0x50,0x49,0x86,0x08	@ 000bce24 data
.org 0xbce28
	.byte 0x61,0xd0,0x0b,0x08	@ 000bce28 data
.org 0xbce2c
	ldr r1, [pc, #156]	@ 000bce2c 2749
.org 0xbce2e
	adds r0, r6, #0	@ 000bce2e 301c
.org 0xbce30
	bl 0x1cf00	@ 000bce30 60f766f8
.org 0xbce34
	ldrb r0, [r6, #10]	@ 000bce34 b07a
.org 0xbce36
	movs r1, #4	@ 000bce36 0421
.org 0xbce38
	orrs r0, r1	@ 000bce38 0843
.org 0xbce3a
	strb r0, [r6, #10]	@ 000bce3a b072
.org 0xbce3c
	adds r4, r6, #0	@ 000bce3c 341c
.org 0xbce3e
	adds r4, #116	@ 000bce3e 7434
.org 0xbce40
	ldr r1, [pc, #140]	@ 000bce40 2349
.org 0xbce42
	adds r2, r6, #0	@ 000bce42 321c
.org 0xbce44
	adds r2, #84	@ 000bce44 5432
.org 0xbce46
	adds r0, r4, #0	@ 000bce46 201c
.org 0xbce48
	movs r3, #120	@ 000bce48 7823
.org 0xbce4a
	bl 0x5760	@ 000bce4a 48f789fc
.org 0xbce4e
	str r6, [r4, #44]	@ 000bce4e e662
.org 0xbce50
	movs r0, #0	@ 000bce50 0020
.org 0xbce52
	str r0, [r4, #36]	@ 000bce52 6062
.org 0xbce54
	adds r0, r6, #0	@ 000bce54 301c
.org 0xbce56
	bl 0x1cff0	@ 000bce56 60f7cbf8
.org 0xbce5a
	movs r4, #0	@ 000bce5a 0024
.org 0xbce5c
	ldrb r1, [r6, #10]	@ 000bce5c b17a
.org 0xbce5e
	movs r0, #239	@ 000bce5e ef20
.org 0xbce60
	ands r0, r1	@ 000bce60 0840
.org 0xbce62
	strb r0, [r6, #10]	@ 000bce62 b072
.org 0xbce64
	movs r5, #1	@ 000bce64 0125
.org 0xbce66
	adds r0, r6, #0	@ 000bce66 301c
.org 0xbce68
	adds r0, #76	@ 000bce68 4c30
.org 0xbce6a
	strb r4, [r0, #0]	@ 000bce6a 0470
.org 0xbce6c
	adds r2, r6, #0	@ 000bce6c 321c
.org 0xbce6e
	adds r2, #74	@ 000bce6e 4a32
.org 0xbce70
	ldrb r1, [r2, #0]	@ 000bce70 1178
.org 0xbce72
	movs r0, #17	@ 000bce72 1120
.org 0xbce74
	negs r0, r0	@ 000bce74 4042
.org 0xbce76
	ands r0, r1	@ 000bce76 0840
.org 0xbce78
	strb r0, [r2, #0]	@ 000bce78 1070
.org 0xbce7a
	adds r0, r6, #0	@ 000bce7a 301c
.org 0xbce7c
	adds r0, #189	@ 000bce7c bd30
.org 0xbce7e
	strb r4, [r0, #0]	@ 000bce7e 0470
.org 0xbce80
	ldr r0, [r6, #84]	@ 000bce80 706d
.org 0xbce82
	ldr r1, [r6, #88]	@ 000bce82 b16d
.org 0xbce84
	bl 0x8534	@ 000bce84 4bf756fb
.org 0xbce88
	adds r2, r6, #0	@ 000bce88 321c
.org 0xbce8a
	adds r2, #184	@ 000bce8a b832
.org 0xbce8c
	str r0, [r2, #0]	@ 000bce8c 1060
.org 0xbce8e
	adds r1, r6, #0	@ 000bce8e 311c
.org 0xbce90
	adds r1, #180	@ 000bce90 b431
.org 0xbce92
	ldr r0, [r6, #84]	@ 000bce92 706d
.org 0xbce94
	str r0, [r1, #0]	@ 000bce94 0860
.org 0xbce96
	ldr r0, [r2, #0]	@ 000bce96 1068
.org 0xbce98
	ldr r1, [pc, #56]	@ 000bce98 0e49
.org 0xbce9a
	adds r0, r0, r1	@ 000bce9a 4018
.org 0xbce9c
	str r0, [r6, #88]	@ 000bce9c b065
.org 0xbce9e
	ldrb r0, [r6, #17]	@ 000bce9e 707c
.org 0xbcea0
	lsls r1, r0, #1	@ 000bcea0 4100
.org 0xbcea2
	adds r1, r1, r0	@ 000bcea2 0918
.org 0xbcea4
	lsls r1, r1, #1	@ 000bcea4 4900
.org 0xbcea6
	ldr r0, [pc, #48]	@ 000bcea6 0c48
.org 0xbcea8
	subs r0, r0, r1	@ 000bcea8 401a
.org 0xbceaa
	str r0, [r6, #92]	@ 000bceaa f065
.org 0xbceac
	str r4, [r6, #96]	@ 000bceac 3466
.org 0xbceae
	ldr r1, [pc, #44]	@ 000bceae 0b49
.org 0xbceb0
	ldrb r0, [r6, #9]	@ 000bceb0 707a
.org 0xbceb2
	lsls r0, r0, #2	@ 000bceb2 8000
.org 0xbceb4
	adds r0, r0, r1	@ 000bceb4 4018
.org 0xbceb6
	str r5, [r6, #12]	@ 000bceb6 f560
.org 0xbceb8
	ldr r0, [r0, #0]	@ 000bceb8 0068
.org 0xbceba
	ldr r0, [r0, #4]	@ 000bceba 4068
.org 0xbcebc
	str r0, [r6, #20]	@ 000bcebc 7061
.org 0xbcebe
	adds r0, r6, #0	@ 000bcebe 301c
