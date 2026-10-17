@ FUN_080af814  entry 0x080af814  size 50
.thumb
.org 0xaf814
FUN_080af814:
	push {r4, r5, lr}	@ 000af814 30b5
.org 0xaf816
	adds r4, r0, #0	@ 000af816 041c
.org 0xaf818
	adds r5, r4, #0	@ 000af818 251c
.org 0xaf81a
	adds r5, #192	@ 000af81a c035
.org 0xaf81c
	ldr r0, [r5, #0]	@ 000af81c 2868
.org 0xaf81e
	bl 0x2b3e4	@ 000af81e 7bf7e1fd
.org 0xaf822
	cmp r0, #0	@ 000af822 0028
.org 0xaf824
	beq.n 0xaf840	@ 000af824 0cd0
.org 0xaf826
	ldrb r0, [r4, #16]	@ 000af826 207c
.org 0xaf828
	cmp r0, #0	@ 000af828 0028
.org 0xaf82a
	bne.n 0xaf836	@ 000af82a 04d1
.org 0xaf82c
	adds r0, r4, #0	@ 000af82c 201c
.org 0xaf82e
	adds r0, #116	@ 000af82e 7430
.org 0xaf830
	ldr r1, [pc, #20]	@ 000af830 0549
.org 0xaf832
	bl 0x5784	@ 000af832 55f7a7ff
.org 0xaf836
	movs r1, #0	@ 000af836 0021
.org 0xaf838
	str r1, [r5, #0]	@ 000af838 2960
.org 0xaf83a
	movs r0, #1	@ 000af83a 0120
.org 0xaf83c
	strb r0, [r4, #13]	@ 000af83c 6073
.org 0xaf83e
	strb r1, [r4, #14]	@ 000af83e a173
.org 0xaf840
	pop {r4, r5}	@ 000af840 30bc
.org 0xaf842
	pop {r0}	@ 000af842 01bc
.org 0xaf844
	bx r0	@ 000af844 0047
