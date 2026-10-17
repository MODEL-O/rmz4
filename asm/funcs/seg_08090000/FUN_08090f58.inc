@ FUN_08090f58  entry 0x08090f58  size 20
.thumb
.org 0x90f58
FUN_08090f58:
	push {lr}	@ 00090f58 00b5
.org 0x90f5a
	ldr r2, [pc, #16]	@ 00090f5a 044a
.org 0x90f5c
	ldrb r1, [r0, #16]	@ 00090f5c 017c
.org 0x90f5e
	lsls r1, r1, #2	@ 00090f5e 8900
.org 0x90f60
	adds r1, r1, r2	@ 00090f60 8918
.org 0x90f62
	ldr r1, [r1, #0]	@ 00090f62 0968
.org 0x90f64
	bl 0x128f80	@ 00090f64 98f00cf8
.org 0x90f68
	pop {r0}	@ 00090f68 01bc
.org 0x90f6a
	bx r0	@ 00090f6a 0047
