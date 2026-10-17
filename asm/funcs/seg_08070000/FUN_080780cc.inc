@ FUN_080780cc  entry 0x080780cc  size 20
.thumb
.org 0x780cc
FUN_080780cc:
	push {lr}	@ 000780cc 00b5
.org 0x780ce
	ldr r2, [pc, #16]	@ 000780ce 044a
.org 0x780d0
	ldrb r1, [r0, #14]	@ 000780d0 817b
.org 0x780d2
	lsls r1, r1, #2	@ 000780d2 8900
.org 0x780d4
	adds r1, r1, r2	@ 000780d4 8918
.org 0x780d6
	ldr r1, [r1, #0]	@ 000780d6 0968
.org 0x780d8
	bl 0x128f80	@ 000780d8 b0f052ff
.org 0x780dc
	pop {r0}	@ 000780dc 01bc
.org 0x780de
	bx r0	@ 000780de 0047
