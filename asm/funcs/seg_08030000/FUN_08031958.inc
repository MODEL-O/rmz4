@ FUN_08031958  entry 0x08031958  size 20
.thumb
.org 0x31958
FUN_08031958:
	push {lr}	@ 00031958 00b5
.org 0x3195a
	ldr r2, [pc, #16]	@ 0003195a 044a
.org 0x3195c
	ldrb r1, [r0, #15]	@ 0003195c c17b
.org 0x3195e
	lsls r1, r1, #2	@ 0003195e 8900
.org 0x31960
	adds r1, r1, r2	@ 00031960 8918
.org 0x31962
	ldr r1, [r1, #0]	@ 00031962 0968
.org 0x31964
	bl 0x128f80	@ 00031964 f7f00cfb
.org 0x31968
	pop {r0}	@ 00031968 01bc
.org 0x3196a
	bx r0	@ 0003196a 0047
