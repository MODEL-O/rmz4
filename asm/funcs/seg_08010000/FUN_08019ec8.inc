@ FUN_08019ec8  entry 0x08019ec8  size 26
.thumb
.org 0x19ec8
FUN_08019ec8:
	push {lr}	@ 00019ec8 00b5
.org 0x19eca
	adds r1, r0, #0	@ 00019eca 011c
.org 0x19ecc
	ldrb r2, [r1, #14]	@ 00019ecc 8a7b
.org 0x19ece
	cmp r2, #0	@ 00019ece 002a
.org 0x19ed0
	bne.n 0x19ede	@ 00019ed0 05d1
.org 0x19ed2
	movs r0, #240	@ 00019ed2 f020
.org 0x19ed4
	str r0, [r1, #80]	@ 00019ed4 0865
.org 0x19ed6
	movs r0, #128	@ 00019ed6 8020
.org 0x19ed8
	str r0, [r1, #72]	@ 00019ed8 8864
.org 0x19eda
	adds r0, r2, #1	@ 00019eda 501c
.org 0x19edc
	strb r0, [r1, #14]	@ 00019edc 8873
.org 0x19ede
	pop {r0}	@ 00019ede 01bc
.org 0x19ee0
	bx r0	@ 00019ee0 0047
