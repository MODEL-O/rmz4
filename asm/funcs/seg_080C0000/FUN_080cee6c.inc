@ FUN_080cee6c  entry 0x080cee6c  size 24
.thumb
.org 0xcee6c
FUN_080cee6c:
	push {lr}	@ 000cee6c 00b5
.org 0xcee6e
	adds r1, r0, #0	@ 000cee6e 011c
.org 0xcee70
	ldrb r0, [r1, #18]	@ 000cee70 887c
.org 0xcee72
	cmp r0, #0	@ 000cee72 0028
.org 0xcee74
	beq.n 0xcee7e	@ 000cee74 03d0
.org 0xcee76
	subs r0, #1	@ 000cee76 0138
.org 0xcee78
	strb r0, [r1, #18]	@ 000cee78 8874
.org 0xcee7a
	movs r0, #0	@ 000cee7a 0020
.org 0xcee7c
	b.n 0xcee80	@ 000cee7c 00e0
.org 0xcee7e
	movs r0, #1	@ 000cee7e 0120
.org 0xcee80
	pop {r1}	@ 000cee80 02bc
.org 0xcee82
	bx r1	@ 000cee82 0847
