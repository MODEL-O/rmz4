@ FUN_080b690c  entry 0x080b690c  size 20
.thumb
.org 0xb690c
FUN_080b690c:
	push {lr}	@ 000b690c 00b5
.org 0xb690e
	ldr r2, [pc, #16]	@ 000b690e 044a
.org 0xb6910
	ldrb r1, [r0, #13]	@ 000b6910 417b
.org 0xb6912
	lsls r1, r1, #2	@ 000b6912 8900
.org 0xb6914
	adds r1, r1, r2	@ 000b6914 8918
.org 0xb6916
	ldr r1, [r1, #0]	@ 000b6916 0968
.org 0xb6918
	bl 0x128f80	@ 000b6918 72f032fb
.org 0xb691c
	pop {r0}	@ 000b691c 01bc
.org 0xb691e
	bx r0	@ 000b691e 0047
