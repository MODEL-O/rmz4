@ FUN_080458c8  entry 0x080458c8  size 20
.thumb
.org 0x458c8
FUN_080458c8:
	push {lr}	@ 000458c8 00b5
.org 0x458ca
	ldr r2, [pc, #16]	@ 000458ca 044a
.org 0x458cc
	ldrb r1, [r0, #16]	@ 000458cc 017c
.org 0x458ce
	lsls r1, r1, #2	@ 000458ce 8900
.org 0x458d0
	adds r1, r1, r2	@ 000458d0 8918
.org 0x458d2
	ldr r1, [r1, #0]	@ 000458d2 0968
.org 0x458d4
	bl 0x128f80	@ 000458d4 e3f054fb
.org 0x458d8
	pop {r0}	@ 000458d8 01bc
.org 0x458da
	bx r0	@ 000458da 0047
