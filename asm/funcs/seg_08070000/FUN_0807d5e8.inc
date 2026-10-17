@ FUN_0807d5e8  entry 0x0807d5e8  size 30
.thumb
.org 0x7d5e8
FUN_0807d5e8:
	push {r4, lr}	@ 0007d5e8 10b5
.org 0x7d5ea
	adds r4, r0, #0	@ 0007d5ea 041c
.org 0x7d5ec
	bl 0x7e9b0	@ 0007d5ec 01f0e0f9
.org 0x7d5f0
	ldr r1, [pc, #20]	@ 0007d5f0 0549
.org 0x7d5f2
	ldrb r0, [r4, #13]	@ 0007d5f2 607b
.org 0x7d5f4
	lsls r0, r0, #2	@ 0007d5f4 8000
.org 0x7d5f6
	adds r0, r0, r1	@ 0007d5f6 4018
.org 0x7d5f8
	ldr r1, [r0, #0]	@ 0007d5f8 0168
.org 0x7d5fa
	adds r0, r4, #0	@ 0007d5fa 201c
.org 0x7d5fc
	bl 0x128f80	@ 0007d5fc abf0c0fc
.org 0x7d600
	pop {r4}	@ 0007d600 10bc
.org 0x7d602
	pop {r0}	@ 0007d602 01bc
.org 0x7d604
	bx r0	@ 0007d604 0047
