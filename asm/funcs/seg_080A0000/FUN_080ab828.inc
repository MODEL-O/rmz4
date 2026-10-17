@ FUN_080ab828  entry 0x080ab828  size 28
.thumb
.org 0xab828
FUN_080ab828:
	ldrb r2, [r0, #10]	@ 000ab828 827a
.org 0xab82a
	movs r1, #254	@ 000ab82a fe21
.org 0xab82c
	ands r1, r2	@ 000ab82c 1140
.org 0xab82e
	strb r1, [r0, #10]	@ 000ab82e 8172
.org 0xab830
	ldr r2, [pc, #16]	@ 000ab830 044a
.org 0xab832
	ldrb r1, [r0, #9]	@ 000ab832 417a
.org 0xab834
	lsls r1, r1, #2	@ 000ab834 8900
.org 0xab836
	adds r1, r1, r2	@ 000ab836 8918
.org 0xab838
	movs r2, #4	@ 000ab838 0422
.org 0xab83a
	str r2, [r0, #12]	@ 000ab83a c260
.org 0xab83c
	ldr r1, [r1, #0]	@ 000ab83c 0968
.org 0xab83e
	ldr r1, [r1, #16]	@ 000ab83e 0969
.org 0xab840
	str r1, [r0, #20]	@ 000ab840 4161
.org 0xab842
	bx lr	@ 000ab842 7047
