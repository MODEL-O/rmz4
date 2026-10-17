@ FUN_0808f5f4  entry 0x0808f5f4  size 114
.thumb
.org 0x8f5f4
FUN_0808f5f4:
	push {r4, lr}	@ 0008f5f4 10b5
.org 0x8f5f6
	adds r4, r0, #0	@ 0008f5f6 041c
.org 0x8f5f8
	ldrb r0, [r4, #15]	@ 0008f5f8 e07b
.org 0x8f5fa
	cmp r0, #0	@ 0008f5fa 0028
.org 0x8f5fc
	bne.n 0x8f60c	@ 0008f5fc 06d1
.org 0x8f5fe
	ldr r1, [pc, #104]	@ 0008f5fe 1a49
.org 0x8f600
	adds r0, r4, #0	@ 0008f600 201c
.org 0x8f602
	bl 0x1cf00	@ 0008f602 8df77dfc
.org 0x8f606
	ldrb r0, [r4, #15]	@ 0008f606 e07b
.org 0x8f608
	adds r0, #1	@ 0008f608 0130
.org 0x8f60a
	strb r0, [r4, #15]	@ 0008f60a e073
.org 0x8f60c
	adds r0, r4, #0	@ 0008f60c 201c
.org 0x8f60e
	bl 0x1cff0	@ 0008f60e 8df7effc
.org 0x8f612
	adds r0, r4, #0	@ 0008f612 201c
.org 0x8f614
	adds r0, #116	@ 0008f614 7430
.org 0x8f616
	ldr r3, [pc, #84]	@ 0008f616 154b
.org 0x8f618
	ldrb r1, [r4, #30]	@ 0008f618 a17f
.org 0x8f61a
	lsls r1, r1, #8	@ 0008f61a 0902
.org 0x8f61c
	adds r2, r4, #0	@ 0008f61c 221c
.org 0x8f61e
	adds r2, #112	@ 0008f61e 7032
.org 0x8f620
	ldrb r2, [r2, #0]	@ 0008f620 1278
.org 0x8f622
	orrs r1, r2	@ 0008f622 1143
.org 0x8f624
	ldr r2, [pc, #72]	@ 0008f624 124a
.org 0x8f626
	adds r1, r1, r2	@ 0008f626 8918
.org 0x8f628
	lsls r1, r1, #2	@ 0008f628 8900
.org 0x8f62a
	adds r1, r1, r3	@ 0008f62a c918
.org 0x8f62c
	adds r2, r4, #0	@ 0008f62c 221c
.org 0x8f62e
	adds r2, #113	@ 0008f62e 7132
.org 0x8f630
	ldrb r2, [r2, #0]	@ 0008f630 1278
.org 0x8f632
	lsls r2, r2, #24	@ 0008f632 1206
.org 0x8f634
	asrs r2, r2, #24	@ 0008f634 1216
.org 0x8f636
	ldr r1, [r1, #0]	@ 0008f636 0968
.org 0x8f638
	lsls r2, r2, #2	@ 0008f638 9200
.org 0x8f63a
	adds r2, r2, r1	@ 0008f63a 5218
.org 0x8f63c
	ldr r1, [r2, #0]	@ 0008f63c 1168
.org 0x8f63e
	ldrb r2, [r1, #0]	@ 0008f63e 0a78
.org 0x8f640
	lsls r1, r2, #1	@ 0008f640 5100
.org 0x8f642
	adds r1, r1, r2	@ 0008f642 8918
.org 0x8f644
	lsls r1, r1, #3	@ 0008f644 c900
.org 0x8f646
	ldr r2, [pc, #44]	@ 0008f646 0b4a
.org 0x8f648
	adds r1, r1, r2	@ 0008f648 8918
.org 0x8f64a
	bl 0x5784	@ 0008f64a 76f79bf8
.org 0x8f64e
	adds r0, r4, #0	@ 0008f64e 201c
.org 0x8f650
	adds r0, #115	@ 0008f650 7330
.org 0x8f652
	ldrb r0, [r0, #0]	@ 0008f652 0078
.org 0x8f654
	cmp r0, #3	@ 0008f654 0328
.org 0x8f656
	bne.n 0x8f660	@ 0008f656 03d1
.org 0x8f658
	movs r0, #0	@ 0008f658 0020
.org 0x8f65a
	strb r0, [r4, #13]	@ 0008f65a 6073
.org 0x8f65c
	strb r0, [r4, #14]	@ 0008f65c a073
.org 0x8f65e
	strb r0, [r4, #15]	@ 0008f65e e073
.org 0x8f660
	pop {r4}	@ 0008f660 10bc
.org 0x8f662
	pop {r0}	@ 0008f662 01bc
.org 0x8f664
	bx r0	@ 0008f664 0047
