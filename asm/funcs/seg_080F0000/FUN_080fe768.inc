@ FUN_080fe768  entry 0x080fe768  size 80
.thumb
.org 0xfe768
FUN_080fe768:
	push {r4, lr}	@ 000fe768 10b5
.org 0xfe76a
	ldrb r2, [r0, #10]	@ 000fe76a 827a
.org 0xfe76c
	movs r1, #2	@ 000fe76c 0221
.org 0xfe76e
	orrs r1, r2	@ 000fe76e 1143
.org 0xfe770
	movs r3, #0	@ 000fe770 0023
.org 0xfe772
	movs r2, #239	@ 000fe772 ef22
.org 0xfe774
	ands r1, r2	@ 000fe774 1140
.org 0xfe776
	strb r1, [r0, #10]	@ 000fe776 8172
.org 0xfe778
	movs r4, #1	@ 000fe778 0124
.org 0xfe77a
	adds r1, r0, #0	@ 000fe77a 011c
.org 0xfe77c
	adds r1, #76	@ 000fe77c 4c31
.org 0xfe77e
	strb r3, [r1, #0]	@ 000fe77e 0b70
.org 0xfe780
	adds r3, r0, #0	@ 000fe780 031c
.org 0xfe782
	adds r3, #74	@ 000fe782 4a33
.org 0xfe784
	ldrb r2, [r3, #0]	@ 000fe784 1a78
.org 0xfe786
	movs r1, #17	@ 000fe786 1121
.org 0xfe788
	negs r1, r1	@ 000fe788 4942
.org 0xfe78a
	ands r1, r2	@ 000fe78a 1140
.org 0xfe78c
	strb r1, [r3, #0]	@ 000fe78c 1970
.org 0xfe78e
	ldrb r2, [r0, #11]	@ 000fe78e c27a
.org 0xfe790
	movs r1, #8	@ 000fe790 0821
.org 0xfe792
	orrs r1, r2	@ 000fe792 1143
.org 0xfe794
	strb r1, [r0, #11]	@ 000fe794 c172
.org 0xfe796
	ldr r1, [pc, #32]	@ 000fe796 0849
.org 0xfe798
	str r1, [r0, #48]	@ 000fe798 0163
.org 0xfe79a
	movs r1, #15	@ 000fe79a 0f21
.org 0xfe79c
	strh r1, [r0, #38]	@ 000fe79c c184
.org 0xfe79e
	ldr r2, [pc, #28]	@ 000fe79e 074a
.org 0xfe7a0
	ldrb r1, [r0, #9]	@ 000fe7a0 417a
.org 0xfe7a2
	lsls r1, r1, #2	@ 000fe7a2 8900
.org 0xfe7a4
	adds r1, r1, r2	@ 000fe7a4 8918
.org 0xfe7a6
	str r4, [r0, #12]	@ 000fe7a6 c460
.org 0xfe7a8
	ldr r1, [r1, #0]	@ 000fe7a8 0968
.org 0xfe7aa
	ldr r1, [r1, #4]	@ 000fe7aa 4968
.org 0xfe7ac
	str r1, [r0, #20]	@ 000fe7ac 4161
.org 0xfe7ae
	bl 0xfe730	@ 000fe7ae fff7bfff
.org 0xfe7b2
	pop {r4}	@ 000fe7b2 10bc
.org 0xfe7b4
	pop {r0}	@ 000fe7b4 01bc
.org 0xfe7b6
	bx r0	@ 000fe7b6 0047
