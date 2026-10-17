@ FUN_0807c620  entry 0x0807c620  size 64
.thumb
.org 0x7c620
FUN_0807c620:
	push {lr}	@ 0007c620 00b5
.org 0x7c622
	adds r3, r0, #0	@ 0007c622 031c
.org 0x7c624
	adds r0, #206	@ 0007c624 ce30
.org 0x7c626
	movs r2, #0	@ 0007c626 0022
.org 0x7c628
	strb r2, [r0, #0]	@ 0007c628 0270
.org 0x7c62a
	adds r0, #1	@ 0007c62a 0130
.org 0x7c62c
	strb r2, [r0, #0]	@ 0007c62c 0270
.org 0x7c62e
	movs r0, #191	@ 0007c62e bf20
.org 0x7c630
	adds r0, r0, r3	@ 0007c630 c018
.org 0x7c632
	mov ip, r0	@ 0007c632 8446
.org 0x7c634
	ldrb r1, [r0, #0]	@ 0007c634 0178
.org 0x7c636
	movs r0, #254	@ 0007c636 fe20
.org 0x7c638
	ands r0, r1	@ 0007c638 0840
.org 0x7c63a
	mov r1, ip	@ 0007c63a 6146
.org 0x7c63c
	strb r0, [r1, #0]	@ 0007c63c 0870
.org 0x7c63e
	adds r0, r3, #0	@ 0007c63e 181c
.org 0x7c640
	adds r0, #212	@ 0007c640 d430
.org 0x7c642
	strb r2, [r0, #0]	@ 0007c642 0270
.org 0x7c644
	ldrb r0, [r3, #14]	@ 0007c644 987b
.org 0x7c646
	adds r0, #1	@ 0007c646 0130
.org 0x7c648
	strb r0, [r3, #14]	@ 0007c648 9873
.org 0x7c64a
	strb r2, [r3, #15]	@ 0007c64a da73
.org 0x7c64c
	ldr r1, [pc, #16]	@ 0007c64c 0449
.org 0x7c64e
	ldrb r0, [r3, #13]	@ 0007c64e 587b
.org 0x7c650
	lsls r0, r0, #2	@ 0007c650 8000
.org 0x7c652
	adds r0, r0, r1	@ 0007c652 4018
.org 0x7c654
	ldr r1, [r0, #0]	@ 0007c654 0168
.org 0x7c656
	adds r0, r3, #0	@ 0007c656 181c
.org 0x7c658
	bl 0x128f80	@ 0007c658 acf092fc
.org 0x7c65c
	pop {r0}	@ 0007c65c 01bc
.org 0x7c65e
	bx r0	@ 0007c65e 0047
