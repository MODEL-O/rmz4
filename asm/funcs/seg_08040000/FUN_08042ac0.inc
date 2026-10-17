@ FUN_08042ac0  entry 0x08042ac0  size 20
.thumb
.org 0x42ac0
FUN_08042ac0:
	push {lr}	@ 00042ac0 00b5
.org 0x42ac2
	ldr r2, [pc, #16]	@ 00042ac2 044a
.org 0x42ac4
	ldrb r1, [r0, #16]	@ 00042ac4 017c
.org 0x42ac6
	lsls r1, r1, #2	@ 00042ac6 8900
.org 0x42ac8
	adds r1, r1, r2	@ 00042ac8 8918
.org 0x42aca
	ldr r1, [r1, #0]	@ 00042aca 0968
.org 0x42acc
	bl 0x128f80	@ 00042acc e6f058fa
.org 0x42ad0
	pop {r0}	@ 00042ad0 01bc
.org 0x42ad2
	bx r0	@ 00042ad2 0047
