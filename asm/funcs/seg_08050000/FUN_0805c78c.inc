@ FUN_0805c78c  entry 0x0805c78c  size 20
.thumb
.org 0x5c78c
FUN_0805c78c:
	push {lr}	@ 0005c78c 00b5
.org 0x5c78e
	ldr r2, [pc, #16]	@ 0005c78e 044a
.org 0x5c790
	ldrb r1, [r0, #14]	@ 0005c790 817b
.org 0x5c792
	lsls r1, r1, #2	@ 0005c792 8900
.org 0x5c794
	adds r1, r1, r2	@ 0005c794 8918
.org 0x5c796
	ldr r1, [r1, #0]	@ 0005c796 0968
.org 0x5c798
	bl 0x128f80	@ 0005c798 ccf0f2fb
.org 0x5c79c
	pop {r0}	@ 0005c79c 01bc
.org 0x5c79e
	bx r0	@ 0005c79e 0047
