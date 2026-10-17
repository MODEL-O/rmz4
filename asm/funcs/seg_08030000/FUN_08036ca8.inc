@ FUN_08036ca8  entry 0x08036ca8  size 24
.thumb
.org 0x36ca8
FUN_08036ca8:
	push {lr}	@ 00036ca8 00b5
.org 0x36caa
	ldr r2, [pc, #20]	@ 00036caa 054a
.org 0x36cac
	ldr r3, [pc, #20]	@ 00036cac 054b
.org 0x36cae
	adds r1, r0, r3	@ 00036cae c118
.org 0x36cb0
	ldrb r1, [r1, #0]	@ 00036cb0 0978
.org 0x36cb2
	lsls r1, r1, #2	@ 00036cb2 8900
.org 0x36cb4
	adds r1, r1, r2	@ 00036cb4 8918
.org 0x36cb6
	ldr r1, [r1, #0]	@ 00036cb6 0968
.org 0x36cb8
	bl 0x128f80	@ 00036cb8 f2f062f9
.org 0x36cbc
	pop {r0}	@ 00036cbc 01bc
.org 0x36cbe
	bx r0	@ 00036cbe 0047
