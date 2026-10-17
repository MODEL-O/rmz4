@ FUN_0806465c  entry 0x0806465c  size 130
.thumb
.org 0x6465c
FUN_0806465c:
	push {r4, r5, r6, lr}	@ 0006465c 70b5
.org 0x6465e
	adds r6, r0, #0	@ 0006465e 061c
.org 0x64660
	ldrb r0, [r6, #15]	@ 00064660 f07b
.org 0x64662
	cmp r0, #0	@ 00064662 0028
.org 0x64664
	bne.n 0x64674	@ 00064664 06d1
.org 0x64666
	adds r0, r6, #0	@ 00064666 301c
.org 0x64668
	movs r1, #19	@ 00064668 1321
.org 0x6466a
	bl 0x65a94	@ 0006466a 01f013fa
.org 0x6466e
	ldrb r0, [r6, #15]	@ 0006466e f07b
.org 0x64670
	adds r0, #1	@ 00064670 0130
.org 0x64672
	strb r0, [r6, #15]	@ 00064672 f073
.org 0x64674
	adds r0, r6, #0	@ 00064674 301c
.org 0x64676
	bl 0x1cff0	@ 00064676 b8f7bbfc
.org 0x6467a
	adds r0, r6, #0	@ 0006467a 301c
.org 0x6467c
	adds r0, #116	@ 0006467c 7430
.org 0x6467e
	ldr r4, [pc, #96]	@ 0006467e 184c
.org 0x64680
	ldr r3, [pc, #96]	@ 00064680 184b
.org 0x64682
	adds r1, r6, #0	@ 00064682 311c
.org 0x64684
	adds r1, #180	@ 00064684 b431
.org 0x64686
	ldrb r2, [r1, #0]	@ 00064686 0a78
.org 0x64688
	lsls r1, r2, #1	@ 00064688 5100
.org 0x6468a
	adds r1, r1, r3	@ 0006468a c918
.org 0x6468c
	ldrh r1, [r1, #0]	@ 0006468c 0988
.org 0x6468e
	lsls r1, r1, #2	@ 0006468e 8900
.org 0x64690
	adds r1, r1, r4	@ 00064690 0919
.org 0x64692
	adds r3, r6, #0	@ 00064692 331c
.org 0x64694
	adds r3, #113	@ 00064694 7133
.org 0x64696
	movs r5, #0	@ 00064696 0025
.org 0x64698
	ldrsb r5, [r3, r5]	@ 00064698 5d57
.org 0x6469a
	ldr r1, [r1, #0]	@ 0006469a 0968
.org 0x6469c
	lsls r3, r5, #2	@ 0006469c ab00
.org 0x6469e
	adds r3, r3, r1	@ 0006469e 5b18
.org 0x646a0
	ldr r4, [pc, #68]	@ 000646a0 114c
.org 0x646a2
	adds r1, r6, #0	@ 000646a2 311c
.org 0x646a4
	adds r1, #181	@ 000646a4 b531
.org 0x646a6
	ldrb r1, [r1, #0]	@ 000646a6 0978
.org 0x646a8
	lsls r1, r1, #2	@ 000646a8 8900
.org 0x646aa
	adds r1, r1, r4	@ 000646aa 0919
.org 0x646ac
	ldr r1, [r1, #0]	@ 000646ac 0968
.org 0x646ae
	lsls r2, r2, #2	@ 000646ae 9200
.org 0x646b0
	adds r2, r2, r1	@ 000646b0 5218
.org 0x646b2
	ldr r1, [r2, #0]	@ 000646b2 1168
.org 0x646b4
	adds r1, r1, r5	@ 000646b4 4919
.org 0x646b6
	ldrb r1, [r1, #0]	@ 000646b6 0978
.org 0x646b8
	lsls r2, r1, #1	@ 000646b8 4a00
.org 0x646ba
	adds r2, r2, r1	@ 000646ba 5218
.org 0x646bc
	lsls r2, r2, #3	@ 000646bc d200
.org 0x646be
	ldr r1, [r3, #0]	@ 000646be 1968
.org 0x646c0
	adds r1, r1, r2	@ 000646c0 8918
.org 0x646c2
	bl 0x5784	@ 000646c2 a1f75ff8
.org 0x646c6
	adds r0, r6, #0	@ 000646c6 301c
.org 0x646c8
	adds r0, #115	@ 000646c8 7330
.org 0x646ca
	ldrb r0, [r0, #0]	@ 000646ca 0078
.org 0x646cc
	cmp r0, #3	@ 000646cc 0328
.org 0x646ce
	bne.n 0x646d8	@ 000646ce 03d1
.org 0x646d0
	movs r1, #0	@ 000646d0 0021
.org 0x646d2
	movs r0, #2	@ 000646d2 0220
.org 0x646d4
	strb r0, [r6, #14]	@ 000646d4 b073
.org 0x646d6
	strb r1, [r6, #15]	@ 000646d6 f173
.org 0x646d8
	pop {r4, r5, r6}	@ 000646d8 70bc
.org 0x646da
	pop {r0}	@ 000646da 01bc
.org 0x646dc
	bx r0	@ 000646dc 0047
