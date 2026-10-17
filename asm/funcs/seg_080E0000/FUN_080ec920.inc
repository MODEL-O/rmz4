@ FUN_080ec920  entry 0x080ec920  size 20
.thumb
.org 0xec920
FUN_080ec920:
	push {lr}	@ 000ec920 00b5
.org 0xec922
	ldr r2, [pc, #16]	@ 000ec922 044a
.org 0xec924
	ldrb r1, [r0, #16]	@ 000ec924 017c
.org 0xec926
	lsls r1, r1, #2	@ 000ec926 8900
.org 0xec928
	adds r1, r1, r2	@ 000ec928 8918
.org 0xec92a
	ldr r1, [r1, #0]	@ 000ec92a 0968
.org 0xec92c
	bl 0x128f80	@ 000ec92c 3cf028fb
.org 0xec930
	pop {r0}	@ 000ec930 01bc
.org 0xec932
	bx r0	@ 000ec932 0047
