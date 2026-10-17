@ FUN_080c2f2c  entry 0x080c2f2c  size 20
.thumb
.org 0xc2f2c
FUN_080c2f2c:
	push {lr}	@ 000c2f2c 00b5
.org 0xc2f2e
	ldr r2, [pc, #16]	@ 000c2f2e 044a
.org 0xc2f30
	ldrb r1, [r0, #16]	@ 000c2f30 017c
.org 0xc2f32
	lsls r1, r1, #2	@ 000c2f32 8900
.org 0xc2f34
	adds r1, r1, r2	@ 000c2f34 8918
.org 0xc2f36
	ldr r1, [r1, #0]	@ 000c2f36 0968
.org 0xc2f38
	bl 0x128f80	@ 000c2f38 66f022f8
.org 0xc2f3c
	pop {r0}	@ 000c2f3c 01bc
.org 0xc2f3e
	bx r0	@ 000c2f3e 0047
