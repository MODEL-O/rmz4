@ FUN_08080978  entry 0x08080978  size 66
.thumb
.org 0x80978
FUN_08080978:
	push {r4, lr}	@ 00080978 10b5
.org 0x8097a
	adds r2, r0, #0	@ 0008097a 021c
.org 0x8097c
	ldr r0, [pc, #60]	@ 0008097c 0f48
.org 0x8097e
	ldr r4, [r0, #0]	@ 0008097e 0468
.org 0x80980
	ldr r0, [r4, #84]	@ 00080980 606d
.org 0x80982
	ldr r1, [r2, #84]	@ 00080982 516d
.org 0x80984
	subs r0, r0, r1	@ 00080984 401a
.org 0x80986
	movs r1, #192	@ 00080986 c021
.org 0x80988
	lsls r1, r1, #6	@ 00080988 8901
.org 0x8098a
	adds r0, r0, r1	@ 0008098a 4018
.org 0x8098c
	movs r1, #192	@ 0008098c c021
.org 0x8098e
	lsls r1, r1, #7	@ 0008098e c901
.org 0x80990
	cmp r0, r1	@ 00080990 8842
.org 0x80992
	bhi.n 0x809b4	@ 00080992 0fd8
.org 0x80994
	ldr r3, [r2, #88]	@ 00080994 936d
.org 0x80996
	ldr r1, [pc, #40]	@ 00080996 0a49
.org 0x80998
	adds r0, r3, r1	@ 00080998 5818
.org 0x8099a
	ldr r1, [r4, #88]	@ 0008099a a16d
.org 0x8099c
	cmp r1, r0	@ 0008099c 8142
.org 0x8099e
	ble.n 0x809b4	@ 0008099e 09dd
.org 0x809a0
	movs r4, #128	@ 000809a0 8024
.org 0x809a2
	lsls r4, r4, #5	@ 000809a2 6401
.org 0x809a4
	adds r0, r3, r4	@ 000809a4 1819
.org 0x809a6
	cmp r1, r0	@ 000809a6 8142
.org 0x809a8
	bge.n 0x809b4	@ 000809a8 04da
.org 0x809aa
	movs r1, #0	@ 000809aa 0021
.org 0x809ac
	movs r0, #1	@ 000809ac 0120
.org 0x809ae
	strb r0, [r2, #13]	@ 000809ae 5073
.org 0x809b0
	strb r1, [r2, #14]	@ 000809b0 9173
.org 0x809b2
	strb r1, [r2, #15]	@ 000809b2 d173
.org 0x809b4
	pop {r4}	@ 000809b4 10bc
.org 0x809b6
	pop {r0}	@ 000809b6 01bc
.org 0x809b8
	bx r0	@ 000809b8 0047
