@ FUN_0808784c  entry 0x0808784c  size 116
.thumb
.org 0x8784c
FUN_0808784c:
	push {r4, r5, lr}	@ 0008784c 30b5
.org 0x8784e
	sub sp, #8	@ 0008784e 82b0
.org 0x87850
	adds r4, r0, #0	@ 00087850 041c
.org 0x87852
	ldrb r5, [r4, #15]	@ 00087852 e57b
.org 0x87854
	cmp r5, #0	@ 00087854 002d
.org 0x87856
	bne.n 0x8788c	@ 00087856 19d1
.org 0x87858
	ldr r0, [pc, #88]	@ 00087858 1648
.org 0x8785a
	bl 0x2b10	@ 0008785a 7bf759f9
.org 0x8785e
	movs r0, #128	@ 0008785e 8020
.org 0x87860
	lsls r0, r0, #4	@ 00087860 0001
.org 0x87862
	str r0, [sp, #0]	@ 00087862 0090
.org 0x87864
	str r5, [sp, #4]	@ 00087864 0195
.org 0x87866
	adds r0, r4, #0	@ 00087866 201c
.org 0x87868
	adds r0, #84	@ 00087868 5430
.org 0x8786a
	mov r1, sp	@ 0008786a 6946
.org 0x8786c
	movs r2, #0	@ 0008786c 0022
.org 0x8786e
	movs r3, #2	@ 0008786e 0223
.org 0x87870
	bl 0x88ff0	@ 00087870 01f0befb
.org 0x87874
	adds r0, r4, #0	@ 00087874 201c
.org 0x87876
	adds r0, #116	@ 00087876 7430
.org 0x87878
	ldr r1, [pc, #60]	@ 00087878 0f49
.org 0x8787a
	bl 0x5784	@ 0008787a 7df783ff
.org 0x8787e
	ldr r1, [pc, #60]	@ 0008787e 0f49
.org 0x87880
	adds r0, r4, #0	@ 00087880 201c
.org 0x87882
	bl 0x1cf00	@ 00087882 95f73dfb
.org 0x87886
	ldrb r0, [r4, #15]	@ 00087886 e07b
.org 0x87888
	adds r0, #1	@ 00087888 0130
.org 0x8788a
	strb r0, [r4, #15]	@ 0008788a e073
.org 0x8788c
	adds r0, r4, #0	@ 0008788c 201c
.org 0x8788e
	bl 0x1cff0	@ 0008788e 95f7affb
.org 0x87892
	adds r0, r4, #0	@ 00087892 201c
.org 0x87894
	adds r0, #115	@ 00087894 7330
.org 0x87896
	ldrb r0, [r0, #0]	@ 00087896 0078
.org 0x87898
	cmp r0, #3	@ 00087898 0328
.org 0x8789a
	bne.n 0x878c6	@ 0008789a 14d1
.org 0x8789c
	adds r1, r4, #0	@ 0008789c 211c
.org 0x8789e
	adds r1, #180	@ 0008789e b431
.org 0x878a0
	ldrb r0, [r1, #0]	@ 000878a0 0878
.org 0x878a2
	subs r0, #1	@ 000878a2 0138
.org 0x878a4
	movs r2, #0	@ 000878a4 0022
.org 0x878a6
	strb r0, [r1, #0]	@ 000878a6 0870
.org 0x878a8
	lsls r0, r0, #24	@ 000878a8 0006
.org 0x878aa
	cmp r0, #0	@ 000878aa 0028
.org 0x878ac
	bne.n 0x878c0	@ 000878ac 08d1
.org 0x878ae
	movs r0, #4	@ 000878ae 0420
.org 0x878b0
	b.n 0x878c2	@ 000878b0 07e0
.org 0x878b2
	.byte 0x00	@ 000878b2 data
.org 0x878b3
	.byte 0x00	@ 000878b3 data
.org 0x878b4
	.byte 0x37,0x01,0x00,0x00	@ 000878b4 data
.org 0x878b8
	.byte 0x04,0xf0,0x85,0x08	@ 000878b8 data
.org 0x878bc
	.byte 0x06,0x1d,0x00,0x00	@ 000878bc data
