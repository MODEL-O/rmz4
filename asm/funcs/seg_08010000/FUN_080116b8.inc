@ FUN_080116b8  entry 0x080116b8  size 32
.thumb
.org 0x116b8
FUN_080116b8:
	push {lr}	@ 000116b8 00b5
.org 0x116ba
	adds r0, #104	@ 000116ba 6830
.org 0x116bc
	ldrh r1, [r0, #0]	@ 000116bc 0188
.org 0x116be
	subs r1, #1	@ 000116be 0139
.org 0x116c0
	strh r1, [r0, #0]	@ 000116c0 0180
.org 0x116c2
	lsls r1, r1, #16	@ 000116c2 0904
.org 0x116c4
	cmp r1, #0	@ 000116c4 0029
.org 0x116c6
	bne.n 0x116d4	@ 000116c6 05d1
.org 0x116c8
	ldr r1, [pc, #12]	@ 000116c8 0349
.org 0x116ca
	ldr r0, [pc, #16]	@ 000116ca 0448
.org 0x116cc
	adds r1, r1, r0	@ 000116cc 0918
.org 0x116ce
	ldrb r0, [r1, #0]	@ 000116ce 0878
.org 0x116d0
	adds r0, #1	@ 000116d0 0130
.org 0x116d2
	strb r0, [r1, #0]	@ 000116d2 0870
.org 0x116d4
	pop {r0}	@ 000116d4 01bc
.org 0x116d6
	bx r0	@ 000116d6 0047
