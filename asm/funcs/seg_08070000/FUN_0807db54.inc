@ FUN_0807db54  entry 0x0807db54  size 30
.thumb
.org 0x7db54
FUN_0807db54:
	push {r4, lr}	@ 0007db54 10b5
.org 0x7db56
	adds r4, r0, #0	@ 0007db56 041c
.org 0x7db58
	bl 0x7e9b0	@ 0007db58 00f02aff
.org 0x7db5c
	ldr r1, [pc, #20]	@ 0007db5c 0549
.org 0x7db5e
	ldrb r0, [r4, #13]	@ 0007db5e 607b
.org 0x7db60
	lsls r0, r0, #2	@ 0007db60 8000
.org 0x7db62
	adds r0, r0, r1	@ 0007db62 4018
.org 0x7db64
	ldr r1, [r0, #0]	@ 0007db64 0168
.org 0x7db66
	adds r0, r4, #0	@ 0007db66 201c
.org 0x7db68
	bl 0x128f80	@ 0007db68 abf00afa
.org 0x7db6c
	pop {r4}	@ 0007db6c 10bc
.org 0x7db6e
	pop {r0}	@ 0007db6e 01bc
.org 0x7db70
	bx r0	@ 0007db70 0047
