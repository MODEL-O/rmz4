@ FUN_080353a0  entry 0x080353a0  size 26
.thumb
.org 0x353a0
FUN_080353a0:
	push {lr}	@ 000353a0 00b5
.org 0x353a2
	ldr r2, [pc, #24]	@ 000353a2 064a
.org 0x353a4
	movs r3, #162	@ 000353a4 a223
.org 0x353a6
	lsls r3, r3, #1	@ 000353a6 5b00
.org 0x353a8
	adds r1, r0, r3	@ 000353a8 c118
.org 0x353aa
	ldrb r1, [r1, #0]	@ 000353aa 0978
.org 0x353ac
	lsls r1, r1, #2	@ 000353ac 8900
.org 0x353ae
	adds r1, r1, r2	@ 000353ae 8918
.org 0x353b0
	ldr r1, [r1, #0]	@ 000353b0 0968
.org 0x353b2
	bl 0x128f80	@ 000353b2 f3f0e5fd
.org 0x353b6
	pop {r0}	@ 000353b6 01bc
.org 0x353b8
	bx r0	@ 000353b8 0047
