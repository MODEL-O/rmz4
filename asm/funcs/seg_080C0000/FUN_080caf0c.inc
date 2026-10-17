@ FUN_080caf0c  entry 0x080caf0c  size 220
.thumb
.org 0xcaf0c
FUN_080caf0c:
	push {r4, r5, r6, lr}	@ 000caf0c 70b5
.org 0xcaf0e
	adds r6, r0, #0	@ 000caf0e 061c
.org 0xcaf10
	bl 0x1cc9c	@ 000caf10 51f7c4fe
.org 0xcaf14
	ldrb r1, [r6, #10]	@ 000caf14 b17a
.org 0xcaf16
	movs r0, #1	@ 000caf16 0120
.org 0xcaf18
	movs r4, #0	@ 000caf18 0024
.org 0xcaf1a
	orrs r0, r1	@ 000caf1a 0843
.org 0xcaf1c
	movs r1, #2	@ 000caf1c 0221
.org 0xcaf1e
	orrs r0, r1	@ 000caf1e 0843
.org 0xcaf20
	strb r0, [r6, #10]	@ 000caf20 b072
.org 0xcaf22
	ldr r1, [pc, #28]	@ 000caf22 0749
.org 0xcaf24
	adds r0, r6, #0	@ 000caf24 301c
.org 0xcaf26
	bl 0x1cf00	@ 000caf26 51f7ebff
.org 0xcaf2a
	adds r0, r6, #0	@ 000caf2a 301c
.org 0xcaf2c
	bl 0x1cff0	@ 000caf2c 52f760f8
.org 0xcaf30
	ldrb r2, [r6, #17]	@ 000caf30 727c
.org 0xcaf32
	cmp r2, #0	@ 000caf32 002a
.org 0xcaf34
	beq.n 0xcaf44	@ 000caf34 06d0
.org 0xcaf36
	ldrb r0, [r6, #10]	@ 000caf36 b07a
.org 0xcaf38
	movs r1, #16	@ 000caf38 1021
.org 0xcaf3a
	orrs r0, r1	@ 000caf3a 0843
.org 0xcaf3c
	b.n 0xcaf4a	@ 000caf3c 05e0
.org 0xcaf3e
	.byte 0x00	@ 000caf3e data
.org 0xcaf3f
	.byte 0x00	@ 000caf3f data
.org 0xcaf40
	.byte 0x0a,0x8c,0x00,0x00	@ 000caf40 data
.org 0xcaf44
	ldrb r1, [r6, #10]	@ 000caf44 b17a
.org 0xcaf46
	movs r0, #239	@ 000caf46 ef20
.org 0xcaf48
	ands r0, r1	@ 000caf48 0840
.org 0xcaf4a
	strb r0, [r6, #10]	@ 000caf4a b072
.org 0xcaf4c
	movs r1, #1	@ 000caf4c 0121
.org 0xcaf4e
	ands r1, r2	@ 000caf4e 1140
.org 0xcaf50
	adds r0, r6, #0	@ 000caf50 301c
.org 0xcaf52
	adds r0, #76	@ 000caf52 4c30
.org 0xcaf54
	movs r5, #0	@ 000caf54 0025
.org 0xcaf56
	strb r1, [r0, #0]	@ 000caf56 0170
.org 0xcaf58
	adds r3, r6, #0	@ 000caf58 331c
.org 0xcaf5a
	adds r3, #74	@ 000caf5a 4a33
.org 0xcaf5c
	lsls r1, r1, #4	@ 000caf5c 0901
.org 0xcaf5e
	ldrb r2, [r3, #0]	@ 000caf5e 1a78
.org 0xcaf60
	movs r0, #17	@ 000caf60 1120
.org 0xcaf62
	negs r0, r0	@ 000caf62 4042
.org 0xcaf64
	ands r0, r2	@ 000caf64 1040
.org 0xcaf66
	orrs r0, r1	@ 000caf66 0843
.org 0xcaf68
	strb r0, [r3, #0]	@ 000caf68 1870
.org 0xcaf6a
	ldrb r1, [r6, #10]	@ 000caf6a b17a
.org 0xcaf6c
	movs r0, #4	@ 000caf6c 0420
.org 0xcaf6e
	orrs r0, r1	@ 000caf6e 0843
.org 0xcaf70
	strb r0, [r6, #10]	@ 000caf70 b072
.org 0xcaf72
	adds r4, r6, #0	@ 000caf72 341c
.org 0xcaf74
	adds r4, #116	@ 000caf74 7434
.org 0xcaf76
	ldr r1, [pc, #48]	@ 000caf76 0c49
.org 0xcaf78
	adds r2, r6, #0	@ 000caf78 321c
.org 0xcaf7a
	adds r2, #84	@ 000caf7a 5432
.org 0xcaf7c
	adds r0, r4, #0	@ 000caf7c 201c
.org 0xcaf7e
	movs r3, #8	@ 000caf7e 0823
.org 0xcaf80
	bl 0x5760	@ 000caf80 3af7eefb
.org 0xcaf84
	str r6, [r4, #44]	@ 000caf84 e662
.org 0xcaf86
	str r5, [r4, #36]	@ 000caf86 6562
.org 0xcaf88
	ldrb r1, [r6, #10]	@ 000caf88 b17a
.org 0xcaf8a
	movs r0, #16	@ 000caf8a 1020
.org 0xcaf8c
	ands r0, r1	@ 000caf8c 0840
.org 0xcaf8e
	cmp r0, #0	@ 000caf8e 0028
.org 0xcaf90
	beq.n 0xcafac	@ 000caf90 0cd0
.org 0xcaf92
	ldr r0, [r6, #84]	@ 000caf92 706d
.org 0xcaf94
	movs r1, #200	@ 000caf94 c821
.org 0xcaf96
	lsls r1, r1, #5	@ 000caf96 4901
.org 0xcaf98
	adds r0, r0, r1	@ 000caf98 4018
.org 0xcaf9a
	str r0, [r6, #84]	@ 000caf9a 7065
.org 0xcaf9c
	ldrb r1, [r6, #16]	@ 000caf9c 317c
.org 0xcaf9e
	lsls r1, r1, #6	@ 000caf9e 8901
.org 0xcafa0
	movs r0, #176	@ 000cafa0 b020
.org 0xcafa2
	lsls r0, r0, #2	@ 000cafa2 8000
.org 0xcafa4
	subs r0, r0, r1	@ 000cafa4 401a
.org 0xcafa6
	b.n 0xcafbc	@ 000cafa6 09e0
.org 0xcafa8
	.byte 0x58,0x64,0x86,0x08	@ 000cafa8 data
.org 0xcafac
	ldr r0, [r6, #84]	@ 000cafac 706d
.org 0xcafae
	ldr r1, [pc, #68]	@ 000cafae 1149
.org 0xcafb0
	adds r0, r0, r1	@ 000cafb0 4018
.org 0xcafb2
	str r0, [r6, #84]	@ 000cafb2 7065
.org 0xcafb4
	ldrb r0, [r6, #16]	@ 000cafb4 307c
.org 0xcafb6
	lsls r0, r0, #6	@ 000cafb6 8001
.org 0xcafb8
	ldr r1, [pc, #60]	@ 000cafb8 0f49
.org 0xcafba
	adds r0, r0, r1	@ 000cafba 4018
.org 0xcafbc
	str r0, [r6, #92]	@ 000cafbc f065
.org 0xcafbe
	ldr r0, [r6, #88]	@ 000cafbe b06d
.org 0xcafc0
	ldr r1, [pc, #56]	@ 000cafc0 0e49
.org 0xcafc2
	adds r0, r0, r1	@ 000cafc2 4018
.org 0xcafc4
	str r0, [r6, #88]	@ 000cafc4 b065
.org 0xcafc6
	movs r1, #32	@ 000cafc6 2021
.org 0xcafc8
	str r1, [r6, #104]	@ 000cafc8 b166
.org 0xcafca
	negs r0, r1	@ 000cafca 4842
.org 0xcafcc
	lsls r0, r0, #1	@ 000cafcc 4000
.org 0xcafce
	subs r0, r0, r1	@ 000cafce 401a
.org 0xcafd0
	lsls r0, r0, #2	@ 000cafd0 8000
.org 0xcafd2
	str r0, [r6, #96]	@ 000cafd2 3066
.org 0xcafd4
	ldr r1, [pc, #40]	@ 000cafd4 0a49
.org 0xcafd6
	ldrb r0, [r6, #9]	@ 000cafd6 707a
.org 0xcafd8
	lsls r0, r0, #2	@ 000cafd8 8000
.org 0xcafda
	adds r0, r0, r1	@ 000cafda 4018
.org 0xcafdc
	movs r1, #1	@ 000cafdc 0121
.org 0xcafde
	str r1, [r6, #12]	@ 000cafde f160
.org 0xcafe0
	ldr r0, [r0, #0]	@ 000cafe0 0068
.org 0xcafe2
	ldr r0, [r0, #4]	@ 000cafe2 4068
.org 0xcafe4
	str r0, [r6, #20]	@ 000cafe4 7061
.org 0xcafe6
	adds r0, r6, #0	@ 000cafe6 301c
