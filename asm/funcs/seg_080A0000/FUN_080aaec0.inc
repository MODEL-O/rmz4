@ FUN_080aaec0  entry 0x080aaec0  size 374
.thumb
.org 0xaaec0
FUN_080aaec0:
	push {r4, r5, r6, r7, lr}	@ 000aaec0 f0b5
.org 0xaaec2
	mov r7, r8	@ 000aaec2 4746
.org 0xaaec4
	push {r7}	@ 000aaec4 80b4
.org 0xaaec6
	adds r6, r0, #0	@ 000aaec6 061c
.org 0xaaec8
	ldrb r0, [r6, #10]	@ 000aaec8 b07a
.org 0xaaeca
	lsrs r7, r0, #4	@ 000aaeca 0709
.org 0xaaecc
	movs r0, #1	@ 000aaecc 0120
.org 0xaaece
	ands r7, r0	@ 000aaece 0740
.org 0xaaed0
	ldrb r3, [r6, #15]	@ 000aaed0 f37b
.org 0xaaed2
	adds r2, r3, #0	@ 000aaed2 1a1c
.org 0xaaed4
	cmp r2, #0	@ 000aaed4 002a
.org 0xaaed6
	bne.n 0xaaef0	@ 000aaed6 0bd1
.org 0xaaed8
	lsls r0, r7, #1	@ 000aaed8 7800
.org 0xaaeda
	subs r0, #1	@ 000aaeda 0138
.org 0xaaedc
	lsls r1, r0, #2	@ 000aaedc 8100
.org 0xaaede
	adds r1, r1, r0	@ 000aaede 0918
.org 0xaaee0
	lsls r1, r1, #7	@ 000aaee0 c901
.org 0xaaee2
	negs r1, r1	@ 000aaee2 4942
.org 0xaaee4
	str r1, [r6, #92]	@ 000aaee4 f165
.org 0xaaee6
	lsls r0, r0, #4	@ 000aaee6 0001
.org 0xaaee8
	str r0, [r6, #100]	@ 000aaee8 7066
.org 0xaaeea
	str r2, [r6, #96]	@ 000aaeea 3266
.org 0xaaeec
	adds r0, r3, #1	@ 000aaeec 581c
.org 0xaaeee
	strb r0, [r6, #15]	@ 000aaeee f073
.org 0xaaef0
	adds r0, r6, #0	@ 000aaef0 301c
.org 0xaaef2
	bl 0x1cff0	@ 000aaef2 72f77df8
.org 0xaaef6
	adds r0, r6, #0	@ 000aaef6 301c
.org 0xaaef8
	adds r0, #116	@ 000aaef8 7430
.org 0xaaefa
	ldr r1, [pc, #72]	@ 000aaefa 1249
.org 0xaaefc
	bl 0x5784	@ 000aaefc 5af742fc
.org 0xaaf00
	ldr r5, [r6, #84]	@ 000aaf00 756d
.org 0xaaf02
	ldr r0, [r6, #88]	@ 000aaf02 b06d
.org 0xaaf04
	adds r4, r0, #1	@ 000aaf04 441c
.org 0xaaf06
	adds r0, r5, #0	@ 000aaf06 281c
.org 0xaaf08
	adds r1, r4, #0	@ 000aaf08 211c
.org 0xaaf0a
	bl 0x7c7c	@ 000aaf0a 5cf7b7fe
.org 0xaaf0e
	lsls r0, r0, #16	@ 000aaf0e 0004
.org 0xaaf10
	lsrs r0, r0, #16	@ 000aaf10 000c
.org 0xaaf12
	mov r8, r0	@ 000aaf12 8046
.org 0xaaf14
	cmp r0, #0	@ 000aaf14 0028
.org 0xaaf16
	bne.n 0xaaf5a	@ 000aaf16 20d1
.org 0xaaf18
	ldr r0, [r6, #88]	@ 000aaf18 b06d
.org 0xaaf1a
	ldr r1, [r6, #96]	@ 000aaf1a 316e
.org 0xaaf1c
	adds r0, r0, r1	@ 000aaf1c 4018
.org 0xaaf1e
	str r0, [r6, #88]	@ 000aaf1e b065
.org 0xaaf20
	ldr r4, [r6, #84]	@ 000aaf20 746d
.org 0xaaf22
	adds r5, r0, #1	@ 000aaf22 451c
.org 0xaaf24
	adds r0, r4, #0	@ 000aaf24 201c
.org 0xaaf26
	adds r1, r5, #0	@ 000aaf26 291c
.org 0xaaf28
	bl 0x7c7c	@ 000aaf28 5cf7a8fe
.org 0xaaf2c
	lsls r0, r0, #16	@ 000aaf2c 0004
.org 0xaaf2e
	cmp r0, #0	@ 000aaf2e 0028
.org 0xaaf30
	beq.n 0xaaf48	@ 000aaf30 0ad0
.org 0xaaf32
	adds r0, r4, #0	@ 000aaf32 201c
.org 0xaaf34
	adds r1, r5, #0	@ 000aaf34 291c
.org 0xaaf36
	bl 0x8534	@ 000aaf36 5df7fdfa
.org 0xaaf3a
	subs r0, #1	@ 000aaf3a 0138
.org 0xaaf3c
	str r0, [r6, #88]	@ 000aaf3c b065
.org 0xaaf3e
	mov r0, r8	@ 000aaf3e 4046
.org 0xaaf40
	b.n 0xaaf68	@ 000aaf40 12e0
.org 0xaaf42
	.byte 0x00	@ 000aaf42 data
.org 0xaaf43
	.byte 0x00	@ 000aaf43 data
.org 0xaaf44
	.byte 0xb4,0x2b,0x86,0x08	@ 000aaf44 data
.org 0xaaf48
	ldr r0, [r6, #96]	@ 000aaf48 306e
.org 0xaaf4a
	adds r0, #64	@ 000aaf4a 4030
.org 0xaaf4c
	str r0, [r6, #96]	@ 000aaf4c 3066
.org 0xaaf4e
	movs r1, #224	@ 000aaf4e e021
.org 0xaaf50
	lsls r1, r1, #3	@ 000aaf50 c900
.org 0xaaf52
	cmp r0, r1	@ 000aaf52 8842
.org 0xaaf54
	ble.n 0xaaf6a	@ 000aaf54 09dd
.org 0xaaf56
	str r1, [r6, #96]	@ 000aaf56 3166
.org 0xaaf58
	b.n 0xaaf6a	@ 000aaf58 07e0
.org 0xaaf5a
	adds r0, r5, #0	@ 000aaf5a 281c
.org 0xaaf5c
	adds r1, r4, #0	@ 000aaf5c 211c
.org 0xaaf5e
	bl 0x8534	@ 000aaf5e 5df7e9fa
.org 0xaaf62
	subs r0, #1	@ 000aaf62 0138
.org 0xaaf64
	str r0, [r6, #88]	@ 000aaf64 b065
.org 0xaaf66
	movs r0, #0	@ 000aaf66 0020
.org 0xaaf68
	str r0, [r6, #96]	@ 000aaf68 3066
.org 0xaaf6a
	ldr r0, [r6, #84]	@ 000aaf6a 706d
.org 0xaaf6c
	ldr r1, [r6, #92]	@ 000aaf6c f16d
.org 0xaaf6e
	adds r0, r0, r1	@ 000aaf6e 4018
.org 0xaaf70
	str r0, [r6, #84]	@ 000aaf70 7065
.org 0xaaf72
	cmp r1, #0	@ 000aaf72 0029
.org 0xaaf74
	bge.n 0xaafa6	@ 000aaf74 17da
.org 0xaaf76
	ldr r4, [r6, #84]	@ 000aaf76 746d
.org 0xaaf78
	ldr r5, [r6, #88]	@ 000aaf78 b56d
.org 0xaaf7a
	adds r0, r4, #0	@ 000aaf7a 201c
.org 0xaaf7c
	adds r1, r5, #0	@ 000aaf7c 291c
.org 0xaaf7e
	bl 0x7c7c	@ 000aaf7e 5cf77dfe
.org 0xaaf82
	lsls r0, r0, #16	@ 000aaf82 0004
.org 0xaaf84
	cmp r0, #0	@ 000aaf84 0028
.org 0xaaf86
	beq.n 0xab006	@ 000aaf86 3ed0
.org 0xaaf88
	adds r0, r4, #0	@ 000aaf88 201c
.org 0xaaf8a
	adds r1, r5, #0	@ 000aaf8a 291c
.org 0xaaf8c
	bl 0x8988	@ 000aaf8c 5df7fcfc
.org 0xaaf90
	str r0, [r6, #84]	@ 000aaf90 7065
.org 0xaaf92
	adds r7, #1	@ 000aaf92 0137
.org 0xaaf94
	movs r0, #1	@ 000aaf94 0120
.org 0xaaf96
	ands r7, r0	@ 000aaf96 0740
.org 0xaaf98
	adds r2, r7, #0	@ 000aaf98 3a1c
.org 0xaaf9a
	cmp r7, #0	@ 000aaf9a 002f
.org 0xaaf9c
	beq.n 0xaafd6	@ 000aaf9c 1bd0
.org 0xaaf9e
	ldrb r1, [r6, #10]	@ 000aaf9e b17a
.org 0xaafa0
	movs r0, #16	@ 000aafa0 1020
.org 0xaafa2
	orrs r0, r1	@ 000aafa2 0843
.org 0xaafa4
	b.n 0xaafdc	@ 000aafa4 1ae0
.org 0xaafa6
	ldr r4, [r6, #84]	@ 000aafa6 746d
.org 0xaafa8
	ldr r5, [r6, #88]	@ 000aafa8 b56d
.org 0xaafaa
	adds r0, r4, #0	@ 000aafaa 201c
.org 0xaafac
	adds r1, r5, #0	@ 000aafac 291c
.org 0xaafae
	bl 0x7c7c	@ 000aafae 5cf765fe
.org 0xaafb2
	lsls r0, r0, #16	@ 000aafb2 0004
.org 0xaafb4
	cmp r0, #0	@ 000aafb4 0028
.org 0xaafb6
	beq.n 0xab006	@ 000aafb6 26d0
.org 0xaafb8
	adds r0, r4, #0	@ 000aafb8 201c
.org 0xaafba
	adds r1, r5, #0	@ 000aafba 291c
.org 0xaafbc
	bl 0x8868	@ 000aafbc 5df754fc
.org 0xaafc0
	str r0, [r6, #84]	@ 000aafc0 7065
.org 0xaafc2
	adds r7, #1	@ 000aafc2 0137
.org 0xaafc4
	movs r0, #1	@ 000aafc4 0120
.org 0xaafc6
	ands r7, r0	@ 000aafc6 0740
.org 0xaafc8
	adds r2, r7, #0	@ 000aafc8 3a1c
.org 0xaafca
	cmp r7, #0	@ 000aafca 002f
.org 0xaafcc
	beq.n 0xaafd6	@ 000aafcc 03d0
.org 0xaafce
	ldrb r1, [r6, #10]	@ 000aafce b17a
.org 0xaafd0
	movs r0, #16	@ 000aafd0 1020
.org 0xaafd2
	orrs r0, r1	@ 000aafd2 0843
.org 0xaafd4
	b.n 0xaafdc	@ 000aafd4 02e0
.org 0xaafd6
	ldrb r1, [r6, #10]	@ 000aafd6 b17a
.org 0xaafd8
	movs r0, #239	@ 000aafd8 ef20
.org 0xaafda
	ands r0, r1	@ 000aafda 0840
.org 0xaafdc
	strb r0, [r6, #10]	@ 000aafdc b072
.org 0xaafde
	movs r1, #1	@ 000aafde 0121
.org 0xaafe0
	ands r1, r2	@ 000aafe0 1140
.org 0xaafe2
	adds r0, r6, #0	@ 000aafe2 301c
.org 0xaafe4
	adds r0, #76	@ 000aafe4 4c30
.org 0xaafe6
	strb r1, [r0, #0]	@ 000aafe6 0170
.org 0xaafe8
	adds r3, r6, #0	@ 000aafe8 331c
.org 0xaafea
	adds r3, #74	@ 000aafea 4a33
.org 0xaafec
	lsls r1, r1, #4	@ 000aafec 0901
.org 0xaafee
	ldrb r2, [r3, #0]	@ 000aafee 1a78
.org 0xaaff0
	movs r0, #17	@ 000aaff0 1120
.org 0xaaff2
	negs r0, r0	@ 000aaff2 4042
.org 0xaaff4
	ands r0, r2	@ 000aaff4 1040
.org 0xaaff6
	orrs r0, r1	@ 000aaff6 0843
.org 0xaaff8
	strb r0, [r3, #0]	@ 000aaff8 1870
.org 0xaaffa
	ldr r0, [r6, #92]	@ 000aaffa f06d
.org 0xaaffc
	negs r0, r0	@ 000aaffc 4042
.org 0xaaffe
	str r0, [r6, #92]	@ 000aaffe f065
.org 0xab000
	ldr r0, [r6, #100]	@ 000ab000 706e
.org 0xab002
	negs r0, r0	@ 000ab002 4042
.org 0xab004
	str r0, [r6, #100]	@ 000ab004 7066
.org 0xab006
	ldr r1, [r6, #92]	@ 000ab006 f16d
.org 0xab008
	ldr r0, [r6, #100]	@ 000ab008 706e
.org 0xab00a
	adds r1, r1, r0	@ 000ab00a 0918
.org 0xab00c
	str r1, [r6, #92]	@ 000ab00c f165
.org 0xab00e
	lsls r2, r7, #1	@ 000ab00e 7a00
.org 0xab010
	movs r0, #1	@ 000ab010 0120
.org 0xab012
	subs r0, r0, r2	@ 000ab012 801a
.org 0xab014
	muls r0, r1	@ 000ab014 4843
.org 0xab016
	cmp r0, #0	@ 000ab016 0028
.org 0xab018
	bge.n 0xab01e	@ 000ab018 01da
.org 0xab01a
	movs r0, #0	@ 000ab01a 0020
.org 0xab01c
	str r0, [r6, #92]	@ 000ab01c f065
.org 0xab01e
	ldr r0, [r6, #92]	@ 000ab01e f06d
.org 0xab020
	cmp r0, #0	@ 000ab020 0028
.org 0xab022
	bne.n 0xab032	@ 000ab022 06d1
.org 0xab024
	ldr r1, [r6, #96]	@ 000ab024 316e
.org 0xab026
	cmp r1, #0	@ 000ab026 0029
.org 0xab028
	bne.n 0xab032	@ 000ab028 03d1
.org 0xab02a
	movs r0, #2	@ 000ab02a 0220
.org 0xab02c
	strb r0, [r6, #13]	@ 000ab02c 7073
.org 0xab02e
	strb r1, [r6, #14]	@ 000ab02e b173
.org 0xab030
	strb r1, [r6, #15]	@ 000ab030 f173
.org 0xab032
	pop {r3}	@ 000ab032 08bc
.org 0xab034
	mov r8, r3	@ 000ab034 9846
