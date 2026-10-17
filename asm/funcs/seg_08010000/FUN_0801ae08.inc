@ FUN_0801ae08  entry 0x0801ae08  size 30
.thumb
.org 0x1ae08
FUN_0801ae08:
	push {lr}	@ 0001ae08 00b5
.org 0x1ae0a
	adds r2, r0, #0	@ 0001ae0a 021c
.org 0x1ae0c
	ldrb r3, [r2, #14]	@ 0001ae0c 937b
.org 0x1ae0e
	adds r1, r3, #0	@ 0001ae0e 191c
.org 0x1ae10
	cmp r1, #0	@ 0001ae10 0029
.org 0x1ae12
	bne.n 0x1ae22	@ 0001ae12 06d1
.org 0x1ae14
	str r1, [r2, #76]	@ 0001ae14 d164
.org 0x1ae16
	movs r0, #160	@ 0001ae16 a020
.org 0x1ae18
	str r0, [r2, #80]	@ 0001ae18 1065
.org 0x1ae1a
	str r1, [r2, #68]	@ 0001ae1a 5164
.org 0x1ae1c
	str r1, [r2, #72]	@ 0001ae1c 9164
.org 0x1ae1e
	adds r0, r3, #1	@ 0001ae1e 581c
.org 0x1ae20
	strb r0, [r2, #14]	@ 0001ae20 9073
.org 0x1ae22
	pop {r0}	@ 0001ae22 01bc
.org 0x1ae24
	bx r0	@ 0001ae24 0047
