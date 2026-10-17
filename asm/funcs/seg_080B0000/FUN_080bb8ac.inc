@ FUN_080bb8ac  entry 0x080bb8ac  size 20
.thumb
.org 0xbb8ac
FUN_080bb8ac:
	push {lr}	@ 000bb8ac 00b5
.org 0xbb8ae
	ldr r2, [pc, #16]	@ 000bb8ae 044a
.org 0xbb8b0
	ldrb r1, [r0, #13]	@ 000bb8b0 417b
.org 0xbb8b2
	lsls r1, r1, #2	@ 000bb8b2 8900
.org 0xbb8b4
	adds r1, r1, r2	@ 000bb8b4 8918
.org 0xbb8b6
	ldr r1, [r1, #0]	@ 000bb8b6 0968
.org 0xbb8b8
	bl 0x128f80	@ 000bb8b8 6df062fb
.org 0xbb8bc
	pop {r0}	@ 000bb8bc 01bc
.org 0xbb8be
	bx r0	@ 000bb8be 0047
