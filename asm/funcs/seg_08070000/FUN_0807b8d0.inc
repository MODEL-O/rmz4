@ FUN_0807b8d0  entry 0x0807b8d0  size 30
.thumb
.org 0x7b8d0
FUN_0807b8d0:
	push {r4, lr}	@ 0007b8d0 10b5
.org 0x7b8d2
	adds r4, r0, #0	@ 0007b8d2 041c
.org 0x7b8d4
	bl 0x7e9b0	@ 0007b8d4 03f06cf8
.org 0x7b8d8
	ldr r1, [pc, #20]	@ 0007b8d8 0549
.org 0x7b8da
	ldrb r0, [r4, #13]	@ 0007b8da 607b
.org 0x7b8dc
	lsls r0, r0, #2	@ 0007b8dc 8000
.org 0x7b8de
	adds r0, r0, r1	@ 0007b8de 4018
.org 0x7b8e0
	ldr r1, [r0, #0]	@ 0007b8e0 0168
.org 0x7b8e2
	adds r0, r4, #0	@ 0007b8e2 201c
.org 0x7b8e4
	bl 0x128f80	@ 0007b8e4 adf04cfb
.org 0x7b8e8
	pop {r4}	@ 0007b8e8 10bc
.org 0x7b8ea
	pop {r0}	@ 0007b8ea 01bc
.org 0x7b8ec
	bx r0	@ 0007b8ec 0047
