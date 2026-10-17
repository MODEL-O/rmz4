@ FUN_08093cc8  entry 0x08093cc8  size 20
.thumb
.org 0x93cc8
FUN_08093cc8:
	push {lr}	@ 00093cc8 00b5
.org 0x93cca
	ldr r2, [pc, #16]	@ 00093cca 044a
.org 0x93ccc
	ldrb r1, [r0, #14]	@ 00093ccc 817b
.org 0x93cce
	lsls r1, r1, #2	@ 00093cce 8900
.org 0x93cd0
	adds r1, r1, r2	@ 00093cd0 8918
.org 0x93cd2
	ldr r1, [r1, #0]	@ 00093cd2 0968
.org 0x93cd4
	bl 0x128f80	@ 00093cd4 95f054f9
.org 0x93cd8
	pop {r0}	@ 00093cd8 01bc
.org 0x93cda
	bx r0	@ 00093cda 0047
