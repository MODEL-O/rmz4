@ FUN_08035a94  entry 0x08035a94  size 26
.thumb
.org 0x35a94
FUN_08035a94:
	push {lr}	@ 00035a94 00b5
.org 0x35a96
	ldr r2, [pc, #24]	@ 00035a96 064a
.org 0x35a98
	movs r3, #128	@ 00035a98 8023
.org 0x35a9a
	lsls r3, r3, #1	@ 00035a9a 5b00
.org 0x35a9c
	adds r1, r0, r3	@ 00035a9c c118
.org 0x35a9e
	ldrb r1, [r1, #0]	@ 00035a9e 0978
.org 0x35aa0
	lsls r1, r1, #2	@ 00035aa0 8900
.org 0x35aa2
	adds r1, r1, r2	@ 00035aa2 8918
.org 0x35aa4
	ldr r1, [r1, #0]	@ 00035aa4 0968
.org 0x35aa6
	bl 0x128f80	@ 00035aa6 f3f06bfa
.org 0x35aaa
	pop {r0}	@ 00035aaa 01bc
.org 0x35aac
	bx r0	@ 00035aac 0047
