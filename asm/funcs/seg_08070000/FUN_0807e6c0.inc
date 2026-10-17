@ FUN_0807e6c0  entry 0x0807e6c0  size 30
.thumb
.org 0x7e6c0
FUN_0807e6c0:
	push {r4, lr}	@ 0007e6c0 10b5
.org 0x7e6c2
	adds r4, r0, #0	@ 0007e6c2 041c
.org 0x7e6c4
	bl 0x7e9b0	@ 0007e6c4 00f074f9
.org 0x7e6c8
	ldr r1, [pc, #20]	@ 0007e6c8 0549
.org 0x7e6ca
	ldrb r0, [r4, #13]	@ 0007e6ca 607b
.org 0x7e6cc
	lsls r0, r0, #2	@ 0007e6cc 8000
.org 0x7e6ce
	adds r0, r0, r1	@ 0007e6ce 4018
.org 0x7e6d0
	ldr r1, [r0, #0]	@ 0007e6d0 0168
.org 0x7e6d2
	adds r0, r4, #0	@ 0007e6d2 201c
.org 0x7e6d4
	bl 0x128f80	@ 0007e6d4 aaf054fc
.org 0x7e6d8
	pop {r4}	@ 0007e6d8 10bc
.org 0x7e6da
	pop {r0}	@ 0007e6da 01bc
.org 0x7e6dc
	bx r0	@ 0007e6dc 0047
