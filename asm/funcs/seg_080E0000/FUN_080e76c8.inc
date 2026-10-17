@ FUN_080e76c8  entry 0x080e76c8  size 82
.thumb
.org 0xe76c8
FUN_080e76c8:
	push {r4, r5, r6, lr}	@ 000e76c8 70b5
.org 0xe76ca
	sub sp, #8	@ 000e76ca 82b0
.org 0xe76cc
	adds r4, r0, #0	@ 000e76cc 041c
.org 0xe76ce
	ldr r0, [r4, #84]	@ 000e76ce 606d
.org 0xe76d0
	str r0, [sp, #0]	@ 000e76d0 0090
.org 0xe76d2
	ldr r0, [r4, #88]	@ 000e76d2 a06d
.org 0xe76d4
	ldr r1, [pc, #68]	@ 000e76d4 1149
.org 0xe76d6
	adds r0, r0, r1	@ 000e76d6 4018
.org 0xe76d8
	str r0, [sp, #4]	@ 000e76d8 0190
.org 0xe76da
	movs r0, #1	@ 000e76da 0120
.org 0xe76dc
	mov r1, sp	@ 000e76dc 6946
.org 0xe76de
	bl 0xd0c88	@ 000e76de e9f7d3fa
.org 0xe76e2
	movs r0, #42	@ 000e76e2 2a20
.org 0xe76e4
	bl 0x2b10	@ 000e76e4 1bf714fa
.org 0xe76e8
	movs r5, #1	@ 000e76e8 0125
.org 0xe76ea
	strb r5, [r4, #17]	@ 000e76ea 6574
.org 0xe76ec
	adds r6, r4, #0	@ 000e76ec 261c
.org 0xe76ee
	adds r6, #84	@ 000e76ee 5436
.org 0xe76f0
	ldr r1, [pc, #44]	@ 000e76f0 0b49
.org 0xe76f2
	ldrb r2, [r4, #10]	@ 000e76f2 a27a
.org 0xe76f4
	lsrs r2, r2, #4	@ 000e76f4 1209
.org 0xe76f6
	ands r2, r5	@ 000e76f6 2a40
.org 0xe76f8
	adds r0, r6, #0	@ 000e76f8 301c
.org 0xe76fa
	bl 0xe70d4	@ 000e76fa fff7ebfc
.org 0xe76fe
	ldr r1, [pc, #36]	@ 000e76fe 0949
.org 0xe7700
	ldrb r2, [r4, #10]	@ 000e7700 a27a
.org 0xe7702
	lsrs r2, r2, #4	@ 000e7702 1209
.org 0xe7704
	ands r2, r5	@ 000e7704 2a40
.org 0xe7706
	adds r0, r6, #0	@ 000e7706 301c
.org 0xe7708
	bl 0xe70d4	@ 000e7708 fff7e4fc
.org 0xe770c
	adds r0, r4, #0	@ 000e770c 201c
.org 0xe770e
	bl 0xe7484	@ 000e770e fff7b9fe
.org 0xe7712
	add sp, #8	@ 000e7712 02b0
.org 0xe7714
	pop {r4, r5, r6}	@ 000e7714 70bc
.org 0xe7716
	pop {r0}	@ 000e7716 01bc
.org 0xe7718
	bx r0	@ 000e7718 0047
