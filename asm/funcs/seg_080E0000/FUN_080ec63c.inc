@ FUN_080ec63c  entry 0x080ec63c  size 70
.thumb
.org 0xec63c
FUN_080ec63c:
	push {r4, lr}	@ 000ec63c 10b5
.org 0xec63e
	adds r4, r0, #0	@ 000ec63e 041c
.org 0xec640
	ldrb r0, [r4, #15]	@ 000ec640 e07b
.org 0xec642
	cmp r0, #0	@ 000ec642 0028
.org 0xec644
	bne.n 0xec656	@ 000ec644 07d1
.org 0xec646
	movs r1, #176	@ 000ec646 b021
.org 0xec648
	lsls r1, r1, #2	@ 000ec648 8900
.org 0xec64a
	movs r0, #5	@ 000ec64a 0520
.org 0xec64c
	bl 0x249c	@ 000ec64c 15f726ff
.org 0xec650
	ldrb r0, [r4, #15]	@ 000ec650 e07b
.org 0xec652
	adds r0, #1	@ 000ec652 0130
.org 0xec654
	strb r0, [r4, #15]	@ 000ec654 e073
.org 0xec656
	movs r0, #6	@ 000ec656 0620
.org 0xec658
	bl 0x25d8	@ 000ec658 15f7beff
.org 0xec65c
	adds r0, r4, #0	@ 000ec65c 201c
.org 0xec65e
	bl 0x1cff0	@ 000ec65e 30f7c7fc
.org 0xec662
	adds r0, r4, #0	@ 000ec662 201c
.org 0xec664
	adds r0, #180	@ 000ec664 b430
.org 0xec666
	ldrb r0, [r0, #0]	@ 000ec666 0078
.org 0xec668
	cmp r0, #0	@ 000ec668 0028
.org 0xec66a
	beq.n 0xec67c	@ 000ec66a 07d0
.org 0xec66c
	movs r0, #5	@ 000ec66c 0520
.org 0xec66e
	bl 0x2624	@ 000ec66e 15f7d9ff
.org 0xec672
	movs r1, #0	@ 000ec672 0021
.org 0xec674
	movs r0, #1	@ 000ec674 0120
.org 0xec676
	strb r0, [r4, #13]	@ 000ec676 6073
.org 0xec678
	strb r1, [r4, #14]	@ 000ec678 a173
.org 0xec67a
	strb r1, [r4, #15]	@ 000ec67a e173
.org 0xec67c
	pop {r4}	@ 000ec67c 10bc
.org 0xec67e
	pop {r0}	@ 000ec67e 01bc
.org 0xec680
	bx r0	@ 000ec680 0047
