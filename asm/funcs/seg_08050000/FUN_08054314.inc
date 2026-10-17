@ FUN_08054314  entry 0x08054314  size 20
.thumb
.org 0x54314
FUN_08054314:
	push {lr}	@ 00054314 00b5
.org 0x54316
	ldr r2, [pc, #16]	@ 00054316 044a
.org 0x54318
	ldrb r1, [r0, #14]	@ 00054318 817b
.org 0x5431a
	lsls r1, r1, #2	@ 0005431a 8900
.org 0x5431c
	adds r1, r1, r2	@ 0005431c 8918
.org 0x5431e
	ldr r1, [r1, #0]	@ 0005431e 0968
.org 0x54320
	bl 0x128f80	@ 00054320 d4f02efe
.org 0x54324
	pop {r0}	@ 00054324 01bc
.org 0x54326
	bx r0	@ 00054326 0047
