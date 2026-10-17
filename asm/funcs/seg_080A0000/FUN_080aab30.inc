@ FUN_080aab30  entry 0x080aab30  size 24
.thumb
.org 0xaab30
FUN_080aab30:
	push {lr}	@ 000aab30 00b5
.org 0xaab32
	adds r1, r0, #0	@ 000aab32 011c
.org 0xaab34
	ldrb r0, [r1, #19]	@ 000aab34 c87c
.org 0xaab36
	cmp r0, #0	@ 000aab36 0028
.org 0xaab38
	beq.n 0xaab42	@ 000aab38 03d0
.org 0xaab3a
	subs r0, #1	@ 000aab3a 0138
.org 0xaab3c
	strb r0, [r1, #19]	@ 000aab3c c874
.org 0xaab3e
	movs r0, #0	@ 000aab3e 0020
.org 0xaab40
	b.n 0xaab44	@ 000aab40 00e0
.org 0xaab42
	movs r0, #1	@ 000aab42 0120
.org 0xaab44
	pop {r1}	@ 000aab44 02bc
.org 0xaab46
	bx r1	@ 000aab46 0847
