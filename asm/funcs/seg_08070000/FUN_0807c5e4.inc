@ FUN_0807c5e4  entry 0x0807c5e4  size 30
.thumb
.org 0x7c5e4
FUN_0807c5e4:
	push {r4, lr}	@ 0007c5e4 10b5
.org 0x7c5e6
	adds r4, r0, #0	@ 0007c5e6 041c
.org 0x7c5e8
	bl 0x7e9b0	@ 0007c5e8 02f0e2f9
.org 0x7c5ec
	ldr r1, [pc, #20]	@ 0007c5ec 0549
.org 0x7c5ee
	ldrb r0, [r4, #13]	@ 0007c5ee 607b
.org 0x7c5f0
	lsls r0, r0, #2	@ 0007c5f0 8000
.org 0x7c5f2
	adds r0, r0, r1	@ 0007c5f2 4018
.org 0x7c5f4
	ldr r1, [r0, #0]	@ 0007c5f4 0168
.org 0x7c5f6
	adds r0, r4, #0	@ 0007c5f6 201c
.org 0x7c5f8
	bl 0x128f80	@ 0007c5f8 acf0c2fc
.org 0x7c5fc
	pop {r4}	@ 0007c5fc 10bc
.org 0x7c5fe
	pop {r0}	@ 0007c5fe 01bc
.org 0x7c600
	bx r0	@ 0007c600 0047
