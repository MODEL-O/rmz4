@ FUN_08115ba8  entry 0x08115ba8  size 28
.thumb
.org 0x115ba8
FUN_08115ba8:
	push {r4, r5, r6, r7, lr}	@ 00115ba8 f0b5
.org 0x115baa
	adds r4, r0, #0	@ 00115baa 041c
.org 0x115bac
	ldrb r0, [r4, #3]	@ 00115bac e078
.org 0x115bae
	cmp r0, #20	@ 00115bae 1428
.org 0x115bb0
	bls.n 0x115bb4	@ 00115bb0 00d9
.org 0x115bb2
	b.n 0x115dc8	@ 00115bb2 09e1
.org 0x115bb4
	lsls r0, r0, #2	@ 00115bb4 8000
.org 0x115bb6
	ldr r1, [pc, #8]	@ 00115bb6 0249
.org 0x115bb8
	adds r0, r0, r1	@ 00115bb8 4018
.org 0x115bba
	ldr r0, [r0, #0]	@ 00115bba 0068
.org 0x115bbc
	mov pc, r0	@ 00115bbc 8746
.org 0x115bbe
	.byte 0x00	@ 00115bbe data
.org 0x115bbf
	.byte 0x00	@ 00115bbf data
.org 0x115bc0
	.byte 0xc4,0x5b,0x11,0x08	@ 00115bc0 data
