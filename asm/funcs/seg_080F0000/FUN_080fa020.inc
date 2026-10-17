@ FUN_080fa020  entry 0x080fa020  size 20
.thumb
.org 0xfa020
FUN_080fa020:
	push {lr}	@ 000fa020 00b5
.org 0xfa022
	ldr r2, [pc, #16]	@ 000fa022 044a
.org 0xfa024
	ldrb r1, [r0, #16]	@ 000fa024 017c
.org 0xfa026
	lsls r1, r1, #2	@ 000fa026 8900
.org 0xfa028
	adds r1, r1, r2	@ 000fa028 8918
.org 0xfa02a
	ldr r1, [r1, #0]	@ 000fa02a 0968
.org 0xfa02c
	bl 0x128f80	@ 000fa02c 2ef0a8ff
.org 0xfa030
	pop {r0}	@ 000fa030 01bc
.org 0xfa032
	bx r0	@ 000fa032 0047
