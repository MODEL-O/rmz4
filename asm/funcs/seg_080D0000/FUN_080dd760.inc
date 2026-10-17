@ FUN_080dd760  entry 0x080dd760  size 92
.thumb
.org 0xdd760
FUN_080dd760:
	push {r4, lr}	@ 000dd760 10b5
.org 0xdd762
	adds r4, r0, #0	@ 000dd762 041c
.org 0xdd764
	bl 0x1cc9c	@ 000dd764 3ff79afa
.org 0xdd768
	ldrb r1, [r4, #10]	@ 000dd768 a17a
.org 0xdd76a
	movs r0, #1	@ 000dd76a 0120
.org 0xdd76c
	orrs r0, r1	@ 000dd76c 0843
.org 0xdd76e
	movs r1, #2	@ 000dd76e 0221
.org 0xdd770
	orrs r0, r1	@ 000dd770 0843
.org 0xdd772
	strb r0, [r4, #10]	@ 000dd772 a072
.org 0xdd774
	ldr r1, [pc, #24]	@ 000dd774 0649
.org 0xdd776
	adds r0, r4, #0	@ 000dd776 201c
.org 0xdd778
	bl 0x1cf00	@ 000dd778 3ff7c2fb
.org 0xdd77c
	adds r0, r4, #0	@ 000dd77c 201c
.org 0xdd77e
	bl 0x1cff0	@ 000dd77e 3ff737fc
.org 0xdd782
	ldrb r1, [r4, #10]	@ 000dd782 a17a
.org 0xdd784
	movs r0, #16	@ 000dd784 1020
.org 0xdd786
	ands r0, r1	@ 000dd786 0840
.org 0xdd788
	cmp r0, #0	@ 000dd788 0028
.org 0xdd78a
	beq.n 0xdd798	@ 000dd78a 05d0
.org 0xdd78c
	ldr r0, [pc, #4]	@ 000dd78c 0148
.org 0xdd78e
	b.n 0xdd79c	@ 000dd78e 05e0
.org 0xdd790
	.byte 0x06,0x68,0x00,0x00	@ 000dd790 data
.org 0xdd794
	.byte 0x40,0xfe,0xff,0xff	@ 000dd794 data
.org 0xdd798
	movs r0, #224	@ 000dd798 e020
.org 0xdd79a
	lsls r0, r0, #1	@ 000dd79a 4000
.org 0xdd79c
	str r0, [r4, #92]	@ 000dd79c e065
.org 0xdd79e
	ldr r0, [pc, #36]	@ 000dd79e 0948
.org 0xdd7a0
	str r0, [r4, #96]	@ 000dd7a0 2066
.org 0xdd7a2
	movs r0, #20	@ 000dd7a2 1420
.org 0xdd7a4
	strb r0, [r4, #18]	@ 000dd7a4 a074
.org 0xdd7a6
	ldr r1, [pc, #32]	@ 000dd7a6 0849
.org 0xdd7a8
	ldrb r0, [r4, #9]	@ 000dd7a8 607a
.org 0xdd7aa
	lsls r0, r0, #2	@ 000dd7aa 8000
.org 0xdd7ac
	adds r0, r0, r1	@ 000dd7ac 4018
.org 0xdd7ae
	movs r1, #1	@ 000dd7ae 0121
.org 0xdd7b0
	str r1, [r4, #12]	@ 000dd7b0 e160
.org 0xdd7b2
	ldr r0, [r0, #0]	@ 000dd7b2 0068
.org 0xdd7b4
	ldr r0, [r0, #4]	@ 000dd7b4 4068
.org 0xdd7b6
	str r0, [r4, #20]	@ 000dd7b6 6061
.org 0xdd7b8
	adds r0, r4, #0	@ 000dd7b8 201c
.org 0xdd7ba
	bl 0xdd6c8	@ 000dd7ba fff785ff
