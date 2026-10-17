@ FUN_080e34e4  entry 0x080e34e4  size 84
.thumb
.org 0xe34e4
FUN_080e34e4:
	push {r4, lr}	@ 000e34e4 10b5
.org 0xe34e6
	sub sp, #8	@ 000e34e6 82b0
.org 0xe34e8
	adds r4, r0, #0	@ 000e34e8 041c
.org 0xe34ea
	ldr r0, [r4, #84]	@ 000e34ea 606d
.org 0xe34ec
	str r0, [sp, #0]	@ 000e34ec 0090
.org 0xe34ee
	ldr r0, [r4, #88]	@ 000e34ee a06d
.org 0xe34f0
	ldr r1, [pc, #68]	@ 000e34f0 1149
.org 0xe34f2
	adds r0, r0, r1	@ 000e34f2 4018
.org 0xe34f4
	str r0, [sp, #4]	@ 000e34f4 0190
.org 0xe34f6
	movs r0, #1	@ 000e34f6 0120
.org 0xe34f8
	mov r1, sp	@ 000e34f8 6946
.org 0xe34fa
	bl 0xd0c88	@ 000e34fa edf7c5fb
.org 0xe34fe
	movs r0, #42	@ 000e34fe 2a20
.org 0xe3500
	bl 0x2b10	@ 000e3500 1ff706fb
.org 0xe3504
	ldr r0, [r4, #88]	@ 000e3504 a06d
.org 0xe3506
	ldr r1, [pc, #52]	@ 000e3506 0d49
.org 0xe3508
	adds r0, r0, r1	@ 000e3508 4018
.org 0xe350a
	str r0, [sp, #4]	@ 000e350a 0190
.org 0xe350c
	movs r0, #1	@ 000e350c 0120
.org 0xe350e
	mov r1, sp	@ 000e350e 6946
.org 0xe3510
	bl 0xd0c88	@ 000e3510 edf7bafb
.org 0xe3514
	movs r0, #42	@ 000e3514 2a20
.org 0xe3516
	bl 0x2b10	@ 000e3516 1ff7fbfa
.org 0xe351a
	adds r0, r4, #0	@ 000e351a 201c
.org 0xe351c
	adds r0, #84	@ 000e351c 5430
.org 0xe351e
	movs r1, #1	@ 000e351e 0121
.org 0xe3520
	movs r2, #3	@ 000e3520 0322
.org 0xe3522
	bl 0xe3110	@ 000e3522 fff7f5fd
.org 0xe3526
	movs r0, #2	@ 000e3526 0220
.org 0xe3528
	strb r0, [r4, #17]	@ 000e3528 6074
.org 0xe352a
	adds r0, r4, #0	@ 000e352a 201c
.org 0xe352c
	bl 0xe3370	@ 000e352c fff720ff
.org 0xe3530
	add sp, #8	@ 000e3530 02b0
.org 0xe3532
	pop {r4}	@ 000e3532 10bc
.org 0xe3534
	pop {r0}	@ 000e3534 01bc
.org 0xe3536
	bx r0	@ 000e3536 0047
