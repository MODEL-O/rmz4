@ FUN_0801159c  entry 0x0801159c  size 34
.thumb
.org 0x1159c
FUN_0801159c:
	push {lr}	@ 0001159c 00b5
.org 0x1159e
	ldr r0, [pc, #32]	@ 0001159e 0848
.org 0x115a0
	ldr r1, [pc, #32]	@ 000115a0 0849
.org 0x115a2
	adds r0, r0, r1	@ 000115a2 4018
.org 0x115a4
	ldrb r1, [r0, #0]	@ 000115a4 0178
.org 0x115a6
	movs r0, #15	@ 000115a6 0f20
.org 0x115a8
	ands r0, r1	@ 000115a8 0840
.org 0x115aa
	cmp r0, #3	@ 000115aa 0328
.org 0x115ac
	bne.n 0x115ba	@ 000115ac 05d1
.org 0x115ae
	movs r0, #118	@ 000115ae 7620
.org 0x115b0
	bl 0x2b5c	@ 000115b0 f1f7d4fa
.org 0x115b4
	ldr r1, [pc, #16]	@ 000115b4 0449
.org 0x115b6
	movs r0, #0	@ 000115b6 0020
.org 0x115b8
	strh r0, [r1, #0]	@ 000115b8 0880
.org 0x115ba
	pop {r0}	@ 000115ba 01bc
.org 0x115bc
	bx r0	@ 000115bc 0047
