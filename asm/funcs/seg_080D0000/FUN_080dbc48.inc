@ FUN_080dbc48  entry 0x080dbc48  size 76
.thumb
.org 0xdbc48
FUN_080dbc48:
	push {r4, r5, r6, r7, lr}	@ 000dbc48 f0b5
.org 0xdbc4a
	sub sp, #8	@ 000dbc4a 82b0
.org 0xdbc4c
	ldrb r3, [r0, #10]	@ 000dbc4c 837a
.org 0xdbc4e
	lsrs r3, r3, #4	@ 000dbc4e 1b09
.org 0xdbc50
	movs r1, #1	@ 000dbc50 0121
.org 0xdbc52
	ands r3, r1	@ 000dbc52 0b40
.org 0xdbc54
	lsls r1, r3, #1	@ 000dbc54 5900
.org 0xdbc56
	subs r1, #1	@ 000dbc56 0139
.org 0xdbc58
	lsls r2, r1, #1	@ 000dbc58 4a00
.org 0xdbc5a
	adds r2, r2, r1	@ 000dbc5a 5218
.org 0xdbc5c
	lsls r2, r2, #10	@ 000dbc5c 9202
.org 0xdbc5e
	ldr r1, [r0, #84]	@ 000dbc5e 416d
.org 0xdbc60
	subs r1, r1, r2	@ 000dbc60 891a
.org 0xdbc62
	str r1, [sp, #0]	@ 000dbc62 0091
.org 0xdbc64
	ldr r0, [r0, #88]	@ 000dbc64 806d
.org 0xdbc66
	ldr r1, [pc, #44]	@ 000dbc66 0b49
.org 0xdbc68
	adds r0, r0, r1	@ 000dbc68 4018
.org 0xdbc6a
	str r0, [sp, #4]	@ 000dbc6a 0190
.org 0xdbc6c
	lsls r0, r3, #4	@ 000dbc6c 1801
.org 0xdbc6e
	orrs r3, r0	@ 000dbc6e 0343
.org 0xdbc70
	lsls r6, r3, #24	@ 000dbc70 1e06
.org 0xdbc72
	movs r5, #0	@ 000dbc72 0025
.org 0xdbc74
	ldr r7, [pc, #32]	@ 000dbc74 084f
.org 0xdbc76
	movs r4, #1	@ 000dbc76 0124
.org 0xdbc78
	adds r1, r5, r7	@ 000dbc78 e919
.org 0xdbc7a
	mov r0, sp	@ 000dbc7a 6846
.org 0xdbc7c
	movs r2, #0	@ 000dbc7c 0022
.org 0xdbc7e
	lsrs r3, r6, #24	@ 000dbc7e 330e
.org 0xdbc80
	bl 0xd4c8c	@ 000dbc80 f9f704f8
.org 0xdbc84
	adds r5, #28	@ 000dbc84 1c35
.org 0xdbc86
	subs r4, #1	@ 000dbc86 013c
.org 0xdbc88
	cmp r4, #0	@ 000dbc88 002c
.org 0xdbc8a
	bge.n 0xdbc78	@ 000dbc8a f5da
.org 0xdbc8c
	add sp, #8	@ 000dbc8c 02b0
.org 0xdbc8e
	pop {r4, r5, r6, r7}	@ 000dbc8e f0bc
.org 0xdbc90
	pop {r0}	@ 000dbc90 01bc
.org 0xdbc92
	bx r0	@ 000dbc92 0047
