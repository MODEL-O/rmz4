@ FUN_0810b75c  entry 0x0810b75c  size 20
.thumb
.org 0x10b75c
FUN_0810b75c:
	push {lr}	@ 0010b75c 00b5
.org 0x10b75e
	ldr r2, [pc, #16]	@ 0010b75e 044a
.org 0x10b760
	ldrb r1, [r0, #16]	@ 0010b760 017c
.org 0x10b762
	lsls r1, r1, #2	@ 0010b762 8900
.org 0x10b764
	adds r1, r1, r2	@ 0010b764 8918
.org 0x10b766
	ldr r1, [r1, #0]	@ 0010b766 0968
.org 0x10b768
	bl 0x128f80	@ 0010b768 1df00afc
.org 0x10b76c
	pop {r0}	@ 0010b76c 01bc
.org 0x10b76e
	bx r0	@ 0010b76e 0047
