@ FUN_08019dc8  entry 0x08019dc8  size 28
.thumb
.org 0x19dc8
FUN_08019dc8:
	push {lr}	@ 00019dc8 00b5
.org 0x19dca
	adds r1, r0, #0	@ 00019dca 011c
.org 0x19dcc
	ldrb r2, [r1, #14]	@ 00019dcc 8a7b
.org 0x19dce
	cmp r2, #0	@ 00019dce 002a
.org 0x19dd0
	bne.n 0x19de0	@ 00019dd0 06d1
.org 0x19dd2
	movs r0, #240	@ 00019dd2 f020
.org 0x19dd4
	lsls r0, r0, #2	@ 00019dd4 8000
.org 0x19dd6
	str r0, [r1, #80]	@ 00019dd6 0865
.org 0x19dd8
	movs r0, #128	@ 00019dd8 8020
.org 0x19dda
	str r0, [r1, #72]	@ 00019dda 8864
.org 0x19ddc
	adds r0, r2, #1	@ 00019ddc 501c
.org 0x19dde
	strb r0, [r1, #14]	@ 00019dde 8873
.org 0x19de0
	pop {r0}	@ 00019de0 01bc
.org 0x19de2
	bx r0	@ 00019de2 0047
