@ FUN_0801c204  entry 0x0801c204  size 32
.thumb
.org 0x1c204
FUN_0801c204:
	push {lr}	@ 0001c204 00b5
.org 0x1c206
	adds r0, #104	@ 0001c206 6830
.org 0x1c208
	ldrh r1, [r0, #0]	@ 0001c208 0188
.org 0x1c20a
	subs r1, #1	@ 0001c20a 0139
.org 0x1c20c
	strh r1, [r0, #0]	@ 0001c20c 0180
.org 0x1c20e
	lsls r1, r1, #16	@ 0001c20e 0904
.org 0x1c210
	cmp r1, #0	@ 0001c210 0029
.org 0x1c212
	bne.n 0x1c220	@ 0001c212 05d1
.org 0x1c214
	ldr r1, [pc, #12]	@ 0001c214 0349
.org 0x1c216
	ldr r0, [pc, #16]	@ 0001c216 0448
.org 0x1c218
	adds r1, r1, r0	@ 0001c218 0918
.org 0x1c21a
	ldrb r0, [r1, #0]	@ 0001c21a 0878
.org 0x1c21c
	adds r0, #1	@ 0001c21c 0130
.org 0x1c21e
	strb r0, [r1, #0]	@ 0001c21e 0870
.org 0x1c220
	pop {r0}	@ 0001c220 01bc
.org 0x1c222
	bx r0	@ 0001c222 0047
