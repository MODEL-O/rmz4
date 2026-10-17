@ FUN_080d629c  entry 0x080d629c  size 20
.thumb
.org 0xd629c
FUN_080d629c:
	push {lr}	@ 000d629c 00b5
.org 0xd629e
	ldr r2, [pc, #16]	@ 000d629e 044a
.org 0xd62a0
	ldrb r1, [r0, #16]	@ 000d62a0 017c
.org 0xd62a2
	lsls r1, r1, #2	@ 000d62a2 8900
.org 0xd62a4
	adds r1, r1, r2	@ 000d62a4 8918
.org 0xd62a6
	ldr r1, [r1, #0]	@ 000d62a6 0968
.org 0xd62a8
	bl 0x128f80	@ 000d62a8 52f06afe
.org 0xd62ac
	pop {r0}	@ 000d62ac 01bc
.org 0xd62ae
	bx r0	@ 000d62ae 0047
