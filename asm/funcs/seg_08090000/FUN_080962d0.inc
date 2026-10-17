@ FUN_080962d0  entry 0x080962d0  size 30
.thumb
.org 0x962d0
FUN_080962d0:
	push {lr}	@ 000962d0 00b5
.org 0x962d2
	adds r2, r0, #0	@ 000962d2 021c
.org 0x962d4
	ldr r1, [r2, #40]	@ 000962d4 916a
.org 0x962d6
	ldrb r0, [r1, #12]	@ 000962d6 087b
.org 0x962d8
	cmp r0, #1	@ 000962d8 0128
.org 0x962da
	bhi.n 0x962e4	@ 000962da 03d8
.org 0x962dc
	adds r1, #180	@ 000962dc b431
.org 0x962de
	ldrb r0, [r1, #0]	@ 000962de 0878
.org 0x962e0
	subs r0, #1	@ 000962e0 0138
.org 0x962e2
	strb r0, [r1, #0]	@ 000962e2 0870
.org 0x962e4
	adds r0, r2, #0	@ 000962e4 101c
.org 0x962e6
	bl 0x7f8ec	@ 000962e6 e9f701fb
.org 0x962ea
	pop {r0}	@ 000962ea 01bc
.org 0x962ec
	bx r0	@ 000962ec 0047
