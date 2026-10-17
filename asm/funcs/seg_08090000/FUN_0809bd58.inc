@ FUN_0809bd58  entry 0x0809bd58  size 20
.thumb
.org 0x9bd58
FUN_0809bd58:
	push {lr}	@ 0009bd58 00b5
.org 0x9bd5a
	ldr r2, [pc, #16]	@ 0009bd5a 044a
.org 0x9bd5c
	ldrb r1, [r0, #16]	@ 0009bd5c 017c
.org 0x9bd5e
	lsls r1, r1, #2	@ 0009bd5e 8900
.org 0x9bd60
	adds r1, r1, r2	@ 0009bd60 8918
.org 0x9bd62
	ldr r1, [r1, #0]	@ 0009bd62 0968
.org 0x9bd64
	bl 0x128f80	@ 0009bd64 8df00cf9
.org 0x9bd68
	pop {r0}	@ 0009bd68 01bc
.org 0x9bd6a
	bx r0	@ 0009bd6a 0047
