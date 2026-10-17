@ FUN_080b5858  entry 0x080b5858  size 70
.thumb
.org 0xb5858
FUN_080b5858:
	push {lr}	@ 000b5858 00b5
.org 0xb585a
	adds r2, r0, #0	@ 000b585a 021c
.org 0xb585c
	adds r0, #140	@ 000b585c 8c30
.org 0xb585e
	ldr r0, [r0, #0]	@ 000b585e 0068
.org 0xb5860
	movs r3, #1	@ 000b5860 0123
.org 0xb5862
	ands r0, r3	@ 000b5862 1840
.org 0xb5864
	cmp r0, #0	@ 000b5864 0028
.org 0xb5866
	beq.n 0xb588a	@ 000b5866 10d0
.org 0xb5868
	adds r0, r2, #0	@ 000b5868 101c
.org 0xb586a
	adds r0, #151	@ 000b586a 9730
.org 0xb586c
	ldrb r1, [r0, #0]	@ 000b586c 0178
.org 0xb586e
	movs r0, #240	@ 000b586e f020
.org 0xb5870
	ands r0, r1	@ 000b5870 0840
.org 0xb5872
	cmp r0, #48	@ 000b5872 3028
.org 0xb5874
	bne.n 0xb588a	@ 000b5874 09d1
.org 0xb5876
	adds r0, r2, #0	@ 000b5876 101c
.org 0xb5878
	adds r0, #180	@ 000b5878 b430
.org 0xb587a
	ldrb r1, [r0, #0]	@ 000b587a 0178
.org 0xb587c
	cmp r1, #0	@ 000b587c 0029
.org 0xb587e
	bne.n 0xb588a	@ 000b587e 04d1
.org 0xb5880
	strb r3, [r0, #0]	@ 000b5880 0370
.org 0xb5882
	movs r0, #3	@ 000b5882 0320
.org 0xb5884
	strb r0, [r2, #13]	@ 000b5884 5073
.org 0xb5886
	strb r1, [r2, #14]	@ 000b5886 9173
.org 0xb5888
	strb r1, [r2, #15]	@ 000b5888 d173
.org 0xb588a
	ldr r0, [pc, #20]	@ 000b588a 0548
.org 0xb588c
	ldrb r1, [r2, #13]	@ 000b588c 517b
.org 0xb588e
	lsls r1, r1, #2	@ 000b588e 8900
.org 0xb5890
	adds r1, r1, r0	@ 000b5890 0918
.org 0xb5892
	ldr r1, [r1, #0]	@ 000b5892 0968
.org 0xb5894
	adds r0, r2, #0	@ 000b5894 101c
.org 0xb5896
	bl 0x128f80	@ 000b5896 73f073fb
.org 0xb589a
	pop {r0}	@ 000b589a 01bc
.org 0xb589c
	bx r0	@ 000b589c 0047
