@ FUN_080cec00  entry 0x080cec00  size 24
.thumb
.org 0xcec00
FUN_080cec00:
	push {lr}	@ 000cec00 00b5
.org 0xcec02
	adds r1, r0, #0	@ 000cec02 011c
.org 0xcec04
	ldrb r0, [r1, #18]	@ 000cec04 887c
.org 0xcec06
	cmp r0, #0	@ 000cec06 0028
.org 0xcec08
	beq.n 0xcec12	@ 000cec08 03d0
.org 0xcec0a
	subs r0, #1	@ 000cec0a 0138
.org 0xcec0c
	strb r0, [r1, #18]	@ 000cec0c 8874
.org 0xcec0e
	movs r0, #0	@ 000cec0e 0020
.org 0xcec10
	b.n 0xcec14	@ 000cec10 00e0
.org 0xcec12
	movs r0, #1	@ 000cec12 0120
.org 0xcec14
	pop {r1}	@ 000cec14 02bc
.org 0xcec16
	bx r1	@ 000cec16 0847
