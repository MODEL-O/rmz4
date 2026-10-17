@ FUN_080e65e4  entry 0x080e65e4  size 68
.thumb
.org 0xe65e4
FUN_080e65e4:
	push {r4, lr}	@ 000e65e4 10b5
.org 0xe65e6
	sub sp, #8	@ 000e65e6 82b0
.org 0xe65e8
	adds r4, r0, #0	@ 000e65e8 041c
.org 0xe65ea
	ldr r0, [r4, #84]	@ 000e65ea 606d
.org 0xe65ec
	str r0, [sp, #0]	@ 000e65ec 0090
.org 0xe65ee
	ldr r0, [r4, #88]	@ 000e65ee a06d
.org 0xe65f0
	ldr r1, [pc, #52]	@ 000e65f0 0d49
.org 0xe65f2
	adds r0, r0, r1	@ 000e65f2 4018
.org 0xe65f4
	str r0, [sp, #4]	@ 000e65f4 0190
.org 0xe65f6
	movs r0, #1	@ 000e65f6 0120
.org 0xe65f8
	mov r1, sp	@ 000e65f8 6946
.org 0xe65fa
	bl 0xd0c88	@ 000e65fa eaf745fb
.org 0xe65fe
	movs r0, #42	@ 000e65fe 2a20
.org 0xe6600
	bl 0x2b10	@ 000e6600 1cf786fa
.org 0xe6604
	movs r3, #1	@ 000e6604 0123
.org 0xe6606
	strb r3, [r4, #17]	@ 000e6606 6374
.org 0xe6608
	adds r0, r4, #0	@ 000e6608 201c
.org 0xe660a
	adds r0, #84	@ 000e660a 5430
.org 0xe660c
	movs r1, #129	@ 000e660c 8121
.org 0xe660e
	lsls r1, r1, #1	@ 000e660e 4900
.org 0xe6610
	ldrb r2, [r4, #10]	@ 000e6610 a27a
.org 0xe6612
	lsrs r2, r2, #4	@ 000e6612 1209
.org 0xe6614
	ands r2, r3	@ 000e6614 1a40
.org 0xe6616
	bl 0xe6270	@ 000e6616 fff72bfe
.org 0xe661a
	adds r0, r4, #0	@ 000e661a 201c
.org 0xe661c
	bl 0xe6480	@ 000e661c fff730ff
.org 0xe6620
	add sp, #8	@ 000e6620 02b0
.org 0xe6622
	pop {r4}	@ 000e6622 10bc
.org 0xe6624
	pop {r0}	@ 000e6624 01bc
.org 0xe6626
	bx r0	@ 000e6626 0047
