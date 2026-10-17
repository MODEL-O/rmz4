@ FUN_08070550  entry 0x08070550  size 40
.thumb
.org 0x70550
FUN_08070550:
	push {lr}	@ 00070550 00b5
.org 0x70552
	adds r1, r0, #0	@ 00070552 011c
.org 0x70554
	adds r1, #180	@ 00070554 b431
.org 0x70556
	ldr r1, [r1, #0]	@ 00070556 0968
.org 0x70558
	adds r1, #180	@ 00070558 b431
.org 0x7055a
	movs r2, #0	@ 0007055a 0022
.org 0x7055c
	strb r2, [r1, #0]	@ 0007055c 0a70
.org 0x7055e
	ldrb r1, [r0, #14]	@ 0007055e 817b
.org 0x70560
	adds r1, #1	@ 00070560 0131
.org 0x70562
	strb r1, [r0, #14]	@ 00070562 8173
.org 0x70564
	strb r2, [r0, #15]	@ 00070564 c273
.org 0x70566
	ldr r2, [pc, #16]	@ 00070566 044a
.org 0x70568
	ldrb r1, [r0, #13]	@ 00070568 417b
.org 0x7056a
	lsls r1, r1, #2	@ 0007056a 8900
.org 0x7056c
	adds r1, r1, r2	@ 0007056c 8918
.org 0x7056e
	ldr r1, [r1, #0]	@ 0007056e 0968
.org 0x70570
	bl 0x128f80	@ 00070570 b8f006fd
.org 0x70574
	pop {r0}	@ 00070574 01bc
.org 0x70576
	bx r0	@ 00070576 0047
