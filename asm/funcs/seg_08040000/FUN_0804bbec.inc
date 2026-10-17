@ FUN_0804bbec  entry 0x0804bbec  size 42
.thumb
.org 0x4bbec
FUN_0804bbec:
	push {lr}	@ 0004bbec 00b5
.org 0x4bbee
	adds r2, r0, #0	@ 0004bbee 021c
.org 0x4bbf0
	ldr r0, [r2, #20]	@ 0004bbf0 5069
.org 0x4bbf2
	movs r1, #1	@ 0004bbf2 0121
.org 0x4bbf4
	ands r0, r1	@ 0004bbf4 0840
.org 0x4bbf6
	cmp r0, #0	@ 0004bbf6 0028
.org 0x4bbf8
	beq.n 0x4bc12	@ 0004bbf8 0bd0
.org 0x4bbfa
	ldr r0, [r2, #12]	@ 0004bbfa d068
.org 0x4bbfc
	ldr r0, [r0, #44]	@ 0004bbfc c06a
.org 0x4bbfe
	ldr r2, [r2, #44]	@ 0004bbfe d26a
.org 0x4bc00
	movs r3, #0	@ 0004bc00 0023
.org 0x4bc02
	ldr r1, [r0, #84]	@ 0004bc02 416d
.org 0x4bc04
	ldr r0, [r2, #84]	@ 0004bc04 506d
.org 0x4bc06
	cmp r1, r0	@ 0004bc06 8142
.org 0x4bc08
	ble.n 0x4bc0c	@ 0004bc08 00dd
.org 0x4bc0a
	movs r3, #1	@ 0004bc0a 0123
.org 0x4bc0c
	adds r0, r2, #0	@ 0004bc0c 101c
.org 0x4bc0e
	adds r0, #188	@ 0004bc0e bc30
.org 0x4bc10
	strb r3, [r0, #0]	@ 0004bc10 0370
.org 0x4bc12
	pop {r0}	@ 0004bc12 01bc
.org 0x4bc14
	bx r0	@ 0004bc14 0047
