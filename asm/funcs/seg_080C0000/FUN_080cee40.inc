@ FUN_080cee40  entry 0x080cee40  size 38
.thumb
.org 0xcee40
FUN_080cee40:
	push {r4, lr}	@ 000cee40 10b5
.org 0xcee42
	adds r4, r0, #0	@ 000cee42 041c
.org 0xcee44
	adds r1, r4, #0	@ 000cee44 211c
.org 0xcee46
	adds r1, #84	@ 000cee46 5431
.org 0xcee48
	movs r0, #3	@ 000cee48 0320
.org 0xcee4a
	bl 0xd0c88	@ 000cee4a 01f01dff
.org 0xcee4e
	ldr r1, [pc, #24]	@ 000cee4e 0649
.org 0xcee50
	ldrb r0, [r4, #9]	@ 000cee50 607a
.org 0xcee52
	lsls r0, r0, #2	@ 000cee52 8000
.org 0xcee54
	adds r0, r0, r1	@ 000cee54 4018
.org 0xcee56
	movs r1, #4	@ 000cee56 0421
.org 0xcee58
	str r1, [r4, #12]	@ 000cee58 e160
.org 0xcee5a
	ldr r0, [r0, #0]	@ 000cee5a 0068
.org 0xcee5c
	ldr r0, [r0, #16]	@ 000cee5c 0069
.org 0xcee5e
	str r0, [r4, #20]	@ 000cee5e 6061
.org 0xcee60
	pop {r4}	@ 000cee60 10bc
.org 0xcee62
	pop {r0}	@ 000cee62 01bc
.org 0xcee64
	bx r0	@ 000cee64 0047
