@ FUN_080863c0  entry 0x080863c0  size 62
.thumb
.org 0x863c0
FUN_080863c0:
	push {lr}	@ 000863c0 00b5
.org 0x863c2
	adds r2, r0, #0	@ 000863c2 021c
.org 0x863c4
	ldr r0, [pc, #56]	@ 000863c4 0e48
.org 0x863c6
	ldr r3, [r0, #0]	@ 000863c6 0368
.org 0x863c8
	ldr r0, [r2, #100]	@ 000863c8 506e
.org 0x863ca
	ldr r1, [r3, #84]	@ 000863ca 596d
.org 0x863cc
	subs r0, r0, r1	@ 000863cc 401a
.org 0x863ce
	movs r1, #240	@ 000863ce f021
.org 0x863d0
	lsls r1, r1, #8	@ 000863d0 0902
.org 0x863d2
	adds r0, r0, r1	@ 000863d2 4018
.org 0x863d4
	movs r1, #240	@ 000863d4 f021
.org 0x863d6
	lsls r1, r1, #9	@ 000863d6 4902
.org 0x863d8
	cmp r0, r1	@ 000863d8 8842
.org 0x863da
	bhi.n 0x863fa	@ 000863da 0ed8
.org 0x863dc
	ldr r0, [r2, #104]	@ 000863dc 906e
.org 0x863de
	ldr r1, [r3, #88]	@ 000863de 996d
.org 0x863e0
	subs r0, r0, r1	@ 000863e0 401a
.org 0x863e2
	movs r1, #196	@ 000863e2 c421
.org 0x863e4
	lsls r1, r1, #8	@ 000863e4 0902
.org 0x863e6
	adds r0, r0, r1	@ 000863e6 4018
.org 0x863e8
	movs r1, #160	@ 000863e8 a021
.org 0x863ea
	lsls r1, r1, #9	@ 000863ea 4902
.org 0x863ec
	cmp r0, r1	@ 000863ec 8842
.org 0x863ee
	bhi.n 0x863fa	@ 000863ee 04d8
.org 0x863f0
	movs r1, #0	@ 000863f0 0021
.org 0x863f2
	movs r0, #2	@ 000863f2 0220
.org 0x863f4
	strb r0, [r2, #13]	@ 000863f4 5073
.org 0x863f6
	strb r1, [r2, #14]	@ 000863f6 9173
.org 0x863f8
	strb r1, [r2, #15]	@ 000863f8 d173
.org 0x863fa
	pop {r0}	@ 000863fa 01bc
.org 0x863fc
	bx r0	@ 000863fc 0047
