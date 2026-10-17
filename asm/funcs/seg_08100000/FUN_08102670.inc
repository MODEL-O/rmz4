@ FUN_08102670  entry 0x08102670  size 32
.thumb
.org 0x102670
FUN_08102670:
	push {r4, lr}	@ 00102670 10b5
.org 0x102672
	adds r4, r0, #0	@ 00102672 041c
.org 0x102674
	ldr r1, [pc, #24]	@ 00102674 0649
.org 0x102676
	ldrb r0, [r4, #16]	@ 00102676 207c
.org 0x102678
	lsls r0, r0, #2	@ 00102678 8000
.org 0x10267a
	adds r0, r0, r1	@ 0010267a 4018
.org 0x10267c
	ldr r1, [r0, #0]	@ 0010267c 0168
.org 0x10267e
	adds r0, r4, #0	@ 0010267e 201c
.org 0x102680
	bl 0x128f80	@ 00102680 26f07efc
.org 0x102684
	movs r0, #0	@ 00102684 0020
.org 0x102686
	strb r0, [r4, #13]	@ 00102686 6073
.org 0x102688
	strb r0, [r4, #14]	@ 00102688 a073
.org 0x10268a
	pop {r4}	@ 0010268a 10bc
.org 0x10268c
	pop {r0}	@ 0010268c 01bc
.org 0x10268e
	bx r0	@ 0010268e 0047
