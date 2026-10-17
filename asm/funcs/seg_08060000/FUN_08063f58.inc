@ FUN_08063f58  entry 0x08063f58  size 20
.thumb
.org 0x63f58
FUN_08063f58:
	push {lr}	@ 00063f58 00b5
.org 0x63f5a
	ldr r2, [pc, #16]	@ 00063f5a 044a
.org 0x63f5c
	ldrb r1, [r0, #14]	@ 00063f5c 817b
.org 0x63f5e
	lsls r1, r1, #2	@ 00063f5e 8900
.org 0x63f60
	adds r1, r1, r2	@ 00063f60 8918
.org 0x63f62
	ldr r1, [r1, #0]	@ 00063f62 0968
.org 0x63f64
	bl 0x128f80	@ 00063f64 c5f00cf8
.org 0x63f68
	pop {r0}	@ 00063f68 01bc
.org 0x63f6a
	bx r0	@ 00063f6a 0047
