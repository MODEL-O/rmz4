@ FUN_0808b53c  entry 0x0808b53c  size 48
.thumb
.org 0x8b53c
FUN_0808b53c:
	push {r4, r5, lr}	@ 0008b53c 30b5
.org 0x8b53e
	adds r4, r0, #0	@ 0008b53e 041c
.org 0x8b540
	adds r1, r4, #0	@ 0008b540 211c
.org 0x8b542
	adds r1, #185	@ 0008b542 b931
.org 0x8b544
	movs r5, #0	@ 0008b544 0025
.org 0x8b546
	movs r0, #96	@ 0008b546 6020
.org 0x8b548
	strb r0, [r1, #0]	@ 0008b548 0870
.org 0x8b54a
	adds r0, r4, #0	@ 0008b54a 201c
.org 0x8b54c
	adds r0, #184	@ 0008b54c b830
.org 0x8b54e
	ldrb r1, [r0, #0]	@ 0008b54e 0178
.org 0x8b550
	adds r0, r4, #0	@ 0008b550 201c
.org 0x8b552
	bl 0x8bbc0	@ 0008b552 00f035fb
.org 0x8b556
	movs r0, #1	@ 0008b556 0120
.org 0x8b558
	strb r0, [r4, #14]	@ 0008b558 a073
.org 0x8b55a
	strb r5, [r4, #15]	@ 0008b55a e573
.org 0x8b55c
	ldr r0, [pc, #12]	@ 0008b55c 0348
.org 0x8b55e
	ldr r1, [r0, #4]	@ 0008b55e 4168
.org 0x8b560
	adds r0, r4, #0	@ 0008b560 201c
.org 0x8b562
	bl 0x128f80	@ 0008b562 9df00dfd
.org 0x8b566
	pop {r4, r5}	@ 0008b566 30bc
.org 0x8b568
	pop {r0}	@ 0008b568 01bc
.org 0x8b56a
	bx r0	@ 0008b56a 0047
