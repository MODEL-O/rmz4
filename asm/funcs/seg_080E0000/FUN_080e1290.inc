@ FUN_080e1290  entry 0x080e1290  size 40
.thumb
.org 0xe1290
FUN_080e1290:
	push {lr}	@ 000e1290 00b5
.org 0xe1292
	sub sp, #8	@ 000e1292 82b0
.org 0xe1294
	ldrb r3, [r0, #10]	@ 000e1294 837a
.org 0xe1296
	lsrs r3, r3, #4	@ 000e1296 1b09
.org 0xe1298
	movs r1, #1	@ 000e1298 0121
.org 0xe129a
	ands r3, r1	@ 000e129a 0b40
.org 0xe129c
	ldr r1, [r0, #84]	@ 000e129c 416d
.org 0xe129e
	str r1, [sp, #0]	@ 000e129e 0091
.org 0xe12a0
	ldr r0, [r0, #88]	@ 000e12a0 806d
.org 0xe12a2
	str r0, [sp, #4]	@ 000e12a2 0190
.org 0xe12a4
	ldr r1, [pc, #16]	@ 000e12a4 0449
.org 0xe12a6
	lsls r0, r3, #4	@ 000e12a6 1801
.org 0xe12a8
	orrs r3, r0	@ 000e12a8 0343
.org 0xe12aa
	mov r0, sp	@ 000e12aa 6846
.org 0xe12ac
	movs r2, #0	@ 000e12ac 0022
.org 0xe12ae
	bl 0xd4c8c	@ 000e12ae f3f7edfc
.org 0xe12b2
	add sp, #8	@ 000e12b2 02b0
.org 0xe12b4
	pop {r0}	@ 000e12b4 01bc
.org 0xe12b6
	bx r0	@ 000e12b6 0047
