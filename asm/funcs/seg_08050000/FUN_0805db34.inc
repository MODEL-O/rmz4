@ FUN_0805db34  entry 0x0805db34  size 20
.thumb
.org 0x5db34
FUN_0805db34:
	push {lr}	@ 0005db34 00b5
.org 0x5db36
	ldr r2, [pc, #16]	@ 0005db36 044a
.org 0x5db38
	ldrb r1, [r0, #14]	@ 0005db38 817b
.org 0x5db3a
	lsls r1, r1, #2	@ 0005db3a 8900
.org 0x5db3c
	adds r1, r1, r2	@ 0005db3c 8918
.org 0x5db3e
	ldr r1, [r1, #0]	@ 0005db3e 0968
.org 0x5db40
	bl 0x128f80	@ 0005db40 cbf01efa
.org 0x5db44
	pop {r0}	@ 0005db44 01bc
.org 0x5db46
	bx r0	@ 0005db46 0047
