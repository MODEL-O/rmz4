@ FUN_080145d8  entry 0x080145d8  size 32
.thumb
.org 0x145d8
FUN_080145d8:
	push {lr}	@ 000145d8 00b5
.org 0x145da
	adds r1, r0, #0	@ 000145da 011c
.org 0x145dc
	ldrb r2, [r1, #14]	@ 000145dc 8a7b
.org 0x145de
	cmp r2, #0	@ 000145de 002a
.org 0x145e0
	bne.n 0x145f4	@ 000145e0 08d1
.org 0x145e2
	movs r0, #225	@ 000145e2 e120
.org 0x145e4
	lsls r0, r0, #2	@ 000145e4 8000
.org 0x145e6
	str r0, [r1, #76]	@ 000145e6 c864
.org 0x145e8
	movs r0, #192	@ 000145e8 c020
.org 0x145ea
	str r0, [r1, #68]	@ 000145ea 4864
.org 0x145ec
	adds r0, #64	@ 000145ec 4030
.org 0x145ee
	str r0, [r1, #72]	@ 000145ee 8864
.org 0x145f0
	adds r0, r2, #1	@ 000145f0 501c
.org 0x145f2
	strb r0, [r1, #14]	@ 000145f2 8873
.org 0x145f4
	pop {r0}	@ 000145f4 01bc
.org 0x145f6
	bx r0	@ 000145f6 0047
