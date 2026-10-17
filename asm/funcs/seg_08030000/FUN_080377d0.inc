@ FUN_080377d0  entry 0x080377d0  size 48
.thumb
.org 0x377d0
FUN_080377d0:
	push {r4, lr}	@ 000377d0 10b5
.org 0x377d2
	adds r4, r0, #0	@ 000377d2 041c
.org 0x377d4
	movs r1, #144	@ 000377d4 9021
.org 0x377d6
	lsls r1, r1, #6	@ 000377d6 8901
.org 0x377d8
	bl 0x1cf00	@ 000377d8 e5f792fb
.org 0x377dc
	adds r0, r4, #0	@ 000377dc 201c
.org 0x377de
	bl 0x3a308	@ 000377de 02f093fd
.org 0x377e2
	ldr r0, [pc, #28]	@ 000377e2 0748
.org 0x377e4
	adds r2, r4, r0	@ 000377e4 2218
.org 0x377e6
	movs r1, #0	@ 000377e6 0021
.org 0x377e8
	movs r0, #1	@ 000377e8 0120
.org 0x377ea
	strb r0, [r2, #0]	@ 000377ea 1070
.org 0x377ec
	movs r2, #129	@ 000377ec 8122
.org 0x377ee
	lsls r2, r2, #1	@ 000377ee 5200
.org 0x377f0
	adds r0, r4, r2	@ 000377f0 a018
.org 0x377f2
	strb r1, [r0, #0]	@ 000377f2 0170
.org 0x377f4
	adds r0, r4, #0	@ 000377f4 201c
.org 0x377f6
	bl 0x37804	@ 000377f6 00f005f8
.org 0x377fa
	pop {r4}	@ 000377fa 10bc
.org 0x377fc
	pop {r0}	@ 000377fc 01bc
.org 0x377fe
	bx r0	@ 000377fe 0047
