@ FUN_0808771c  entry 0x0808771c  size 66
.thumb
.org 0x8771c
FUN_0808771c:
	push {r4, lr}	@ 0008771c 10b5
.org 0x8771e
	adds r4, r0, #0	@ 0008771e 041c
.org 0x87720
	ldrb r0, [r4, #15]	@ 00087720 e07b
.org 0x87722
	cmp r0, #0	@ 00087722 0028
.org 0x87724
	bne.n 0x8773e	@ 00087724 0bd1
.org 0x87726
	adds r0, r4, #0	@ 00087726 201c
.org 0x87728
	adds r0, #116	@ 00087728 7430
.org 0x8772a
	ldr r1, [pc, #52]	@ 0008772a 0d49
.org 0x8772c
	bl 0x5784	@ 0008772c 7ef72af8
.org 0x87730
	ldr r1, [pc, #48]	@ 00087730 0c49
.org 0x87732
	adds r0, r4, #0	@ 00087732 201c
.org 0x87734
	bl 0x1cf00	@ 00087734 95f7e4fb
.org 0x87738
	ldrb r0, [r4, #15]	@ 00087738 e07b
.org 0x8773a
	adds r0, #1	@ 0008773a 0130
.org 0x8773c
	strb r0, [r4, #15]	@ 0008773c e073
.org 0x8773e
	adds r0, r4, #0	@ 0008773e 201c
.org 0x87740
	bl 0x1cff0	@ 00087740 95f756fc
.org 0x87744
	adds r0, r4, #0	@ 00087744 201c
.org 0x87746
	adds r0, #115	@ 00087746 7330
.org 0x87748
	ldrb r0, [r0, #0]	@ 00087748 0078
.org 0x8774a
	cmp r0, #3	@ 0008774a 0328
.org 0x8774c
	bne.n 0x87758	@ 0008774c 04d1
.org 0x8774e
	movs r1, #0	@ 0008774e 0021
.org 0x87750
	movs r0, #1	@ 00087750 0120
.org 0x87752
	strb r0, [r4, #13]	@ 00087752 6073
.org 0x87754
	strb r1, [r4, #14]	@ 00087754 a173
.org 0x87756
	strb r1, [r4, #15]	@ 00087756 e173
.org 0x87758
	pop {r4}	@ 00087758 10bc
.org 0x8775a
	pop {r0}	@ 0008775a 01bc
.org 0x8775c
	bx r0	@ 0008775c 0047
