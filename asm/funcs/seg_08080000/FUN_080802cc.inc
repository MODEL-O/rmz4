@ FUN_080802cc  entry 0x080802cc  size 84
.thumb
.org 0x802cc
FUN_080802cc:
	push {r4, lr}	@ 000802cc 10b5
.org 0x802ce
	adds r4, r0, #0	@ 000802ce 041c
.org 0x802d0
	ldrb r0, [r4, #14]	@ 000802d0 a07b
.org 0x802d2
	cmp r0, #0	@ 000802d2 0028
.org 0x802d4
	bne.n 0x802f0	@ 000802d4 0cd1
.org 0x802d6
	ldr r1, [pc, #72]	@ 000802d6 1249
.org 0x802d8
	adds r0, r4, #0	@ 000802d8 201c
.org 0x802da
	bl 0x1cf00	@ 000802da 9cf711fe
.org 0x802de
	ldr r0, [pc, #68]	@ 000802de 1148
.org 0x802e0
	str r0, [r4, #96]	@ 000802e0 2066
.org 0x802e2
	adds r1, r4, #0	@ 000802e2 211c
.org 0x802e4
	adds r1, #194	@ 000802e4 c231
.org 0x802e6
	movs r0, #1	@ 000802e6 0120
.org 0x802e8
	strb r0, [r1, #0]	@ 000802e8 0870
.org 0x802ea
	ldrb r0, [r4, #14]	@ 000802ea a07b
.org 0x802ec
	adds r0, #1	@ 000802ec 0130
.org 0x802ee
	strb r0, [r4, #14]	@ 000802ee a073
.org 0x802f0
	adds r0, r4, #0	@ 000802f0 201c
.org 0x802f2
	bl 0x1cff0	@ 000802f2 9cf77dfe
.org 0x802f6
	ldr r0, [r4, #84]	@ 000802f6 606d
.org 0x802f8
	ldr r1, [r4, #92]	@ 000802f8 e16d
.org 0x802fa
	adds r0, r0, r1	@ 000802fa 4018
.org 0x802fc
	str r0, [r4, #84]	@ 000802fc 6065
.org 0x802fe
	ldr r0, [r4, #88]	@ 000802fe a06d
.org 0x80300
	ldr r1, [r4, #96]	@ 00080300 216e
.org 0x80302
	adds r0, r0, r1	@ 00080302 4018
.org 0x80304
	str r0, [r4, #88]	@ 00080304 a065
.org 0x80306
	adds r1, #64	@ 00080306 4031
.org 0x80308
	str r1, [r4, #96]	@ 00080308 2166
.org 0x8030a
	movs r0, #224	@ 0008030a e020
.org 0x8030c
	lsls r0, r0, #3	@ 0008030c c000
.org 0x8030e
	cmp r1, r0	@ 0008030e 8142
.org 0x80310
	ble.n 0x80314	@ 00080310 00dd
.org 0x80312
	str r0, [r4, #96]	@ 00080312 2066
.org 0x80314
	adds r0, r4, #0	@ 00080314 201c
.org 0x80316
	bl 0x806b0	@ 00080316 00f0cbf9
.org 0x8031a
	pop {r4}	@ 0008031a 10bc
.org 0x8031c
	pop {r0}	@ 0008031c 01bc
.org 0x8031e
	bx r0	@ 0008031e 0047
