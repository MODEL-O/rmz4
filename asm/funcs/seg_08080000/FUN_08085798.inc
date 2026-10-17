@ FUN_08085798  entry 0x08085798  size 20
.thumb
.org 0x85798
FUN_08085798:
	push {lr}	@ 00085798 00b5
.org 0x8579a
	ldr r2, [pc, #16]	@ 0008579a 044a
.org 0x8579c
	ldrb r1, [r0, #13]	@ 0008579c 417b
.org 0x8579e
	lsls r1, r1, #2	@ 0008579e 8900
.org 0x857a0
	adds r1, r1, r2	@ 000857a0 8918
.org 0x857a2
	ldr r1, [r1, #0]	@ 000857a2 0968
.org 0x857a4
	bl 0x128f80	@ 000857a4 a3f0ecfb
.org 0x857a8
	pop {r0}	@ 000857a8 01bc
.org 0x857aa
	bx r0	@ 000857aa 0047
