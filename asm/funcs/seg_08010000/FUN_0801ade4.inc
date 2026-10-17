@ FUN_0801ade4  entry 0x0801ade4  size 36
.thumb
.org 0x1ade4
FUN_0801ade4:
	push {lr}	@ 0001ade4 00b5
.org 0x1ade6
	adds r1, r0, #0	@ 0001ade6 011c
.org 0x1ade8
	ldrb r3, [r1, #14]	@ 0001ade8 8b7b
.org 0x1adea
	adds r2, r3, #0	@ 0001adea 1a1c
.org 0x1adec
	cmp r2, #0	@ 0001adec 002a
.org 0x1adee
	bne.n 0x1ae04	@ 0001adee 09d1
.org 0x1adf0
	movs r0, #240	@ 0001adf0 f020
.org 0x1adf2
	lsls r0, r0, #2	@ 0001adf2 8000
.org 0x1adf4
	str r0, [r1, #76]	@ 0001adf4 c864
.org 0x1adf6
	movs r0, #160	@ 0001adf6 a020
.org 0x1adf8
	lsls r0, r0, #1	@ 0001adf8 4000
.org 0x1adfa
	str r0, [r1, #80]	@ 0001adfa 0865
.org 0x1adfc
	str r2, [r1, #68]	@ 0001adfc 4a64
.org 0x1adfe
	str r2, [r1, #72]	@ 0001adfe 8a64
.org 0x1ae00
	adds r0, r3, #1	@ 0001ae00 581c
.org 0x1ae02
	strb r0, [r1, #14]	@ 0001ae02 8873
.org 0x1ae04
	pop {r0}	@ 0001ae04 01bc
.org 0x1ae06
	bx r0	@ 0001ae06 0047
