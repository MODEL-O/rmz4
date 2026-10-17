@ FUN_080635c4  entry 0x080635c4  size 146
.thumb
.org 0x635c4
FUN_080635c4:
	push {r4, r5, r6, lr}	@ 000635c4 70b5
.org 0x635c6
	adds r6, r0, #0	@ 000635c6 061c
.org 0x635c8
	ldrb r0, [r6, #15]	@ 000635c8 f07b
.org 0x635ca
	cmp r0, #0	@ 000635ca 0028
.org 0x635cc
	bne.n 0x635ee	@ 000635cc 0fd1
.org 0x635ce
	adds r0, r6, #0	@ 000635ce 301c
.org 0x635d0
	adds r0, #196	@ 000635d0 c430
.org 0x635d2
	ldr r0, [r0, #0]	@ 000635d2 0068
.org 0x635d4
	cmp r0, #0	@ 000635d4 0028
.org 0x635d6
	beq.n 0x635e0	@ 000635d6 03d0
.org 0x635d8
	adds r1, r0, #0	@ 000635d8 011c
.org 0x635da
	adds r1, #180	@ 000635da b431
.org 0x635dc
	movs r0, #1	@ 000635dc 0120
.org 0x635de
	strb r0, [r1, #0]	@ 000635de 0870
.org 0x635e0
	adds r0, r6, #0	@ 000635e0 301c
.org 0x635e2
	movs r1, #25	@ 000635e2 1921
.org 0x635e4
	bl 0x65a94	@ 000635e4 02f056fa
.org 0x635e8
	ldrb r0, [r6, #15]	@ 000635e8 f07b
.org 0x635ea
	adds r0, #1	@ 000635ea 0130
.org 0x635ec
	strb r0, [r6, #15]	@ 000635ec f073
.org 0x635ee
	adds r0, r6, #0	@ 000635ee 301c
.org 0x635f0
	bl 0x1cff0	@ 000635f0 b9f7fefc
.org 0x635f4
	adds r0, r6, #0	@ 000635f4 301c
.org 0x635f6
	adds r0, #116	@ 000635f6 7430
.org 0x635f8
	ldr r4, [pc, #92]	@ 000635f8 174c
.org 0x635fa
	ldr r3, [pc, #96]	@ 000635fa 184b
.org 0x635fc
	adds r1, r6, #0	@ 000635fc 311c
.org 0x635fe
	adds r1, #180	@ 000635fe b431
.org 0x63600
	ldrb r2, [r1, #0]	@ 00063600 0a78
.org 0x63602
	lsls r1, r2, #1	@ 00063602 5100
.org 0x63604
	adds r1, r1, r3	@ 00063604 c918
.org 0x63606
	ldrh r1, [r1, #0]	@ 00063606 0988
.org 0x63608
	lsls r1, r1, #2	@ 00063608 8900
.org 0x6360a
	adds r1, r1, r4	@ 0006360a 0919
.org 0x6360c
	adds r3, r6, #0	@ 0006360c 331c
.org 0x6360e
	adds r3, #113	@ 0006360e 7133
.org 0x63610
	movs r5, #0	@ 00063610 0025
.org 0x63612
	ldrsb r5, [r3, r5]	@ 00063612 5d57
.org 0x63614
	ldr r1, [r1, #0]	@ 00063614 0968
.org 0x63616
	lsls r3, r5, #2	@ 00063616 ab00
.org 0x63618
	adds r3, r3, r1	@ 00063618 5b18
.org 0x6361a
	ldr r4, [pc, #68]	@ 0006361a 114c
.org 0x6361c
	adds r1, r6, #0	@ 0006361c 311c
.org 0x6361e
	adds r1, #181	@ 0006361e b531
.org 0x63620
	ldrb r1, [r1, #0]	@ 00063620 0978
.org 0x63622
	lsls r1, r1, #2	@ 00063622 8900
.org 0x63624
	adds r1, r1, r4	@ 00063624 0919
.org 0x63626
	ldr r1, [r1, #0]	@ 00063626 0968
.org 0x63628
	lsls r2, r2, #2	@ 00063628 9200
.org 0x6362a
	adds r2, r2, r1	@ 0006362a 5218
.org 0x6362c
	ldr r1, [r2, #0]	@ 0006362c 1168
.org 0x6362e
	adds r1, r1, r5	@ 0006362e 4919
.org 0x63630
	ldrb r1, [r1, #0]	@ 00063630 0978
.org 0x63632
	lsls r2, r1, #1	@ 00063632 4a00
.org 0x63634
	adds r2, r2, r1	@ 00063634 5218
.org 0x63636
	lsls r2, r2, #3	@ 00063636 d200
.org 0x63638
	ldr r1, [r3, #0]	@ 00063638 1968
.org 0x6363a
	adds r1, r1, r2	@ 0006363a 8918
.org 0x6363c
	bl 0x5784	@ 0006363c a2f7a2f8
.org 0x63640
	adds r0, r6, #0	@ 00063640 301c
.org 0x63642
	adds r0, #196	@ 00063642 c430
.org 0x63644
	ldr r0, [r0, #0]	@ 00063644 0068
.org 0x63646
	cmp r0, #0	@ 00063646 0028
.org 0x63648
	bne.n 0x63650	@ 00063648 02d1
.org 0x6364a
	adds r0, r6, #0	@ 0006364a 301c
.org 0x6364c
	bl 0x65cb0	@ 0006364c 02f030fb
.org 0x63650
	pop {r4, r5, r6}	@ 00063650 70bc
.org 0x63652
	pop {r0}	@ 00063652 01bc
.org 0x63654
	bx r0	@ 00063654 0047
