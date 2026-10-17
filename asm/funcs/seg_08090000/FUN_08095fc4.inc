@ FUN_08095fc4  entry 0x08095fc4  size 20
.thumb
.org 0x95fc4
FUN_08095fc4:
	push {lr}	@ 00095fc4 00b5
.org 0x95fc6
	ldr r2, [pc, #16]	@ 00095fc6 044a
.org 0x95fc8
	ldrb r1, [r0, #16]	@ 00095fc8 017c
.org 0x95fca
	lsls r1, r1, #2	@ 00095fca 8900
.org 0x95fcc
	adds r1, r1, r2	@ 00095fcc 8918
.org 0x95fce
	ldr r1, [r1, #0]	@ 00095fce 0968
.org 0x95fd0
	bl 0x128f80	@ 00095fd0 92f0d6ff
.org 0x95fd4
	pop {r0}	@ 00095fd4 01bc
.org 0x95fd6
	bx r0	@ 00095fd6 0047
