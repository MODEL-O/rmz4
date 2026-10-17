@ FUN_081009f8  entry 0x081009f8  size 42
.thumb
.org 0x1009f8
FUN_081009f8:
	push {lr}	@ 001009f8 00b5
.org 0x1009fa
	adds r2, r0, #0	@ 001009fa 021c
.org 0x1009fc
	ldr r0, [r2, #20]	@ 001009fc 5069
.org 0x1009fe
	movs r1, #4	@ 001009fe 0421
.org 0x100a00
	ands r0, r1	@ 00100a00 0840
.org 0x100a02
	cmp r0, #0	@ 00100a02 0028
.org 0x100a04
	beq.n 0x100a1e	@ 00100a04 0bd0
.org 0x100a06
	ldr r0, [r2, #12]	@ 00100a06 d068
.org 0x100a08
	ldr r1, [r0, #44]	@ 00100a08 c16a
.org 0x100a0a
	ldr r2, [r2, #44]	@ 00100a0a d26a
.org 0x100a0c
	movs r0, #8	@ 00100a0c 0820
.org 0x100a0e
	ldrsb r0, [r1, r0]	@ 00100a0e 0856
.org 0x100a10
	cmp r0, #0	@ 00100a10 0028
.org 0x100a12
	bne.n 0x100a1e	@ 00100a12 04d1
.org 0x100a14
	ldrb r0, [r1, #9]	@ 00100a14 487a
.org 0x100a16
	cmp r0, #0	@ 00100a16 0028
.org 0x100a18
	bne.n 0x100a1e	@ 00100a18 01d1
.org 0x100a1a
	movs r0, #1	@ 00100a1a 0120
.org 0x100a1c
	strb r0, [r2, #13]	@ 00100a1c 5073
.org 0x100a1e
	pop {r0}	@ 00100a1e 01bc
.org 0x100a20
	bx r0	@ 00100a20 0047
