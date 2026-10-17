@ FUN_080ecd6c  entry 0x080ecd6c  size 20
.thumb
.org 0xecd6c
FUN_080ecd6c:
	push {lr}	@ 000ecd6c 00b5
.org 0xecd6e
	ldr r2, [pc, #16]	@ 000ecd6e 044a
.org 0xecd70
	ldrb r1, [r0, #16]	@ 000ecd70 017c
.org 0xecd72
	lsls r1, r1, #2	@ 000ecd72 8900
.org 0xecd74
	adds r1, r1, r2	@ 000ecd74 8918
.org 0xecd76
	ldr r1, [r1, #0]	@ 000ecd76 0968
.org 0xecd78
	bl 0x128f80	@ 000ecd78 3cf002f9
.org 0xecd7c
	pop {r0}	@ 000ecd7c 01bc
.org 0xecd7e
	bx r0	@ 000ecd7e 0047
