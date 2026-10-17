@ FUN_0808961c  entry 0x0808961c  size 106
.thumb
.org 0x8961c
FUN_0808961c:
	push {r4, r5, r6, lr}	@ 0008961c 70b5
.org 0x8961e
	adds r5, r0, #0	@ 0008961e 051c
.org 0x89620
	ldrb r6, [r5, #14]	@ 00089620 ae7b
.org 0x89622
	cmp r6, #0	@ 00089622 002e
.org 0x89624
	beq.n 0x8962c	@ 00089624 02d0
.org 0x89626
	cmp r6, #1	@ 00089626 012e
.org 0x89628
	beq.n 0x8966a	@ 00089628 1fd0
.org 0x8962a
	b.n 0x89680	@ 0008962a 29e0
.org 0x8962c
	adds r4, r5, #0	@ 0008962c 2c1c
.org 0x8962e
	adds r4, #192	@ 0008962e c034
.org 0x89630
	ldrb r1, [r4, #0]	@ 00089630 2178
.org 0x89632
	movs r2, #248	@ 00089632 f822
.org 0x89634
	lsls r2, r2, #5	@ 00089634 5201
.org 0x89636
	adds r0, r2, #0	@ 00089636 101c
.org 0x89638
	orrs r1, r0	@ 00089638 0143
.org 0x8963a
	adds r0, r5, #0	@ 0008963a 281c
.org 0x8963c
	bl 0x1cf00	@ 0008963c 93f760fc
.org 0x89640
	adds r0, r5, #0	@ 00089640 281c
.org 0x89642
	adds r0, #116	@ 00089642 7430
.org 0x89644
	ldr r2, [pc, #64]	@ 00089644 104a
.org 0x89646
	ldrb r1, [r4, #0]	@ 00089646 2178
.org 0x89648
	adds r1, r1, r2	@ 00089648 8918
.org 0x8964a
	ldrb r2, [r1, #0]	@ 0008964a 0a78
.org 0x8964c
	lsls r1, r2, #1	@ 0008964c 5100
.org 0x8964e
	adds r1, r1, r2	@ 0008964e 8918
.org 0x89650
	lsls r1, r1, #3	@ 00089650 c900
.org 0x89652
	ldr r2, [pc, #56]	@ 00089652 0e4a
.org 0x89654
	adds r1, r1, r2	@ 00089654 8918
.org 0x89656
	bl 0x5784	@ 00089656 7cf795f8
.org 0x8965a
	strb r6, [r5, #18]	@ 0008965a ae74
.org 0x8965c
	movs r0, #158	@ 0008965c 9e20
.org 0x8965e
	lsls r0, r0, #1	@ 0008965e 4000
.org 0x89660
	bl 0x2b10	@ 00089660 79f756fa
.org 0x89664
	ldrb r0, [r5, #14]	@ 00089664 a87b
.org 0x89666
	adds r0, #1	@ 00089666 0130
.org 0x89668
	strb r0, [r5, #14]	@ 00089668 a873
.org 0x8966a
	adds r0, r5, #0	@ 0008966a 281c
.org 0x8966c
	bl 0x1cff0	@ 0008966c 93f7c0fc
.org 0x89670
	adds r0, r5, #0	@ 00089670 281c
.org 0x89672
	adds r0, #115	@ 00089672 7330
.org 0x89674
	ldrb r1, [r0, #0]	@ 00089674 0178
.org 0x89676
	cmp r1, #3	@ 00089676 0329
.org 0x89678
	bne.n 0x89680	@ 00089678 02d1
.org 0x8967a
	movs r0, #0	@ 0008967a 0020
.org 0x8967c
	strb r1, [r5, #13]	@ 0008967c 6973
.org 0x8967e
	strb r0, [r5, #14]	@ 0008967e a873
.org 0x89680
	pop {r4, r5, r6}	@ 00089680 70bc
.org 0x89682
	pop {r0}	@ 00089682 01bc
.org 0x89684
	bx r0	@ 00089684 0047
