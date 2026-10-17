@ FUN_08056ce4  entry 0x08056ce4  size 64
.thumb
.org 0x56ce4
FUN_08056ce4:
	push {r4, lr}	@ 00056ce4 10b5
.org 0x56ce6
	adds r4, r0, #0	@ 00056ce6 041c
.org 0x56ce8
	ldrb r0, [r4, #15]	@ 00056ce8 e07b
.org 0x56cea
	cmp r0, #0	@ 00056cea 0028
.org 0x56cec
	bne.n 0x56d0a	@ 00056cec 0dd1
.org 0x56cee
	ldrb r1, [r4, #10]	@ 00056cee a17a
.org 0x56cf0
	movs r0, #254	@ 00056cf0 fe20
.org 0x56cf2
	ands r0, r1	@ 00056cf2 0840
.org 0x56cf4
	strb r0, [r4, #10]	@ 00056cf4 a072
.org 0x56cf6
	adds r0, r4, #0	@ 00056cf6 201c
.org 0x56cf8
	adds r0, #116	@ 00056cf8 7430
.org 0x56cfa
	ldr r1, [pc, #40]	@ 00056cfa 0a49
.org 0x56cfc
	bl 0x5784	@ 00056cfc aef742fd
.org 0x56d00
	movs r0, #48	@ 00056d00 3020
.org 0x56d02
	strb r0, [r4, #18]	@ 00056d02 a074
.org 0x56d04
	ldrb r0, [r4, #15]	@ 00056d04 e07b
.org 0x56d06
	adds r0, #1	@ 00056d06 0130
.org 0x56d08
	strb r0, [r4, #15]	@ 00056d08 e073
.org 0x56d0a
	ldrb r0, [r4, #18]	@ 00056d0a a07c
.org 0x56d0c
	subs r0, #1	@ 00056d0c 0138
.org 0x56d0e
	strb r0, [r4, #18]	@ 00056d0e a074
.org 0x56d10
	lsls r0, r0, #24	@ 00056d10 0006
.org 0x56d12
	lsrs r1, r0, #24	@ 00056d12 010e
.org 0x56d14
	cmp r1, #0	@ 00056d14 0029
.org 0x56d16
	bne.n 0x56d1e	@ 00056d16 02d1
.org 0x56d18
	movs r0, #6	@ 00056d18 0620
.org 0x56d1a
	strb r0, [r4, #14]	@ 00056d1a a073
.org 0x56d1c
	strb r1, [r4, #15]	@ 00056d1c e173
.org 0x56d1e
	pop {r4}	@ 00056d1e 10bc
.org 0x56d20
	pop {r0}	@ 00056d20 01bc
.org 0x56d22
	bx r0	@ 00056d22 0047
