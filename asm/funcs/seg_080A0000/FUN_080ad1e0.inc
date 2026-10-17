@ FUN_080ad1e0  entry 0x080ad1e0  size 20
.thumb
.org 0xad1e0
FUN_080ad1e0:
	push {lr}	@ 000ad1e0 00b5
.org 0xad1e2
	ldr r2, [pc, #16]	@ 000ad1e2 044a
.org 0xad1e4
	ldrb r1, [r0, #14]	@ 000ad1e4 817b
.org 0xad1e6
	lsls r1, r1, #2	@ 000ad1e6 8900
.org 0xad1e8
	adds r1, r1, r2	@ 000ad1e8 8918
.org 0xad1ea
	ldr r1, [r1, #0]	@ 000ad1ea 0968
.org 0xad1ec
	bl 0x128f80	@ 000ad1ec 7bf0c8fe
.org 0xad1f0
	pop {r0}	@ 000ad1f0 01bc
.org 0xad1f2
	bx r0	@ 000ad1f2 0047
