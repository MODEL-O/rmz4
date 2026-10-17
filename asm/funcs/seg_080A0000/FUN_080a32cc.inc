@ FUN_080a32cc  entry 0x080a32cc  size 20
.thumb
.org 0xa32cc
FUN_080a32cc:
	push {lr}	@ 000a32cc 00b5
.org 0xa32ce
	ldr r2, [pc, #16]	@ 000a32ce 044a
.org 0xa32d0
	ldrb r1, [r0, #16]	@ 000a32d0 017c
.org 0xa32d2
	lsls r1, r1, #2	@ 000a32d2 8900
.org 0xa32d4
	adds r1, r1, r2	@ 000a32d4 8918
.org 0xa32d6
	ldr r1, [r1, #0]	@ 000a32d6 0968
.org 0xa32d8
	bl 0x128f80	@ 000a32d8 85f052fe
.org 0xa32dc
	pop {r0}	@ 000a32dc 01bc
.org 0xa32de
	bx r0	@ 000a32de 0047
