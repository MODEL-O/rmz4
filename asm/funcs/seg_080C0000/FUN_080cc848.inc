@ FUN_080cc848  entry 0x080cc848  size 112
.thumb
.org 0xcc848
FUN_080cc848:
	push {r4, lr}	@ 000cc848 10b5
.org 0xcc84a
	adds r4, r0, #0	@ 000cc84a 041c
.org 0xcc84c
	ldrb r0, [r4, #14]	@ 000cc84c a07b
.org 0xcc84e
	cmp r0, #0	@ 000cc84e 0028
.org 0xcc850
	bne.n 0xcc88e	@ 000cc850 1dd1
.org 0xcc852
	ldrb r0, [r4, #17]	@ 000cc852 607c
.org 0xcc854
	cmp r0, #1	@ 000cc854 0128
.org 0xcc856
	bne.n 0xcc868	@ 000cc856 07d1
.org 0xcc858
	ldr r1, [pc, #8]	@ 000cc858 0249
.org 0xcc85a
	adds r0, r4, #0	@ 000cc85a 201c
.org 0xcc85c
	bl 0x1cf00	@ 000cc85c 50f750fb
.org 0xcc860
	b.n 0xcc870	@ 000cc860 06e0
.org 0xcc862
	.byte 0x00	@ 000cc862 data
.org 0xcc863
	.byte 0x00	@ 000cc863 data
.org 0xcc864
	.byte 0x03,0x95,0x00,0x00	@ 000cc864 data
.org 0xcc868
	ldr r1, [pc, #84]	@ 000cc868 1549
.org 0xcc86a
	adds r0, r4, #0	@ 000cc86a 201c
.org 0xcc86c
	bl 0x1cf00	@ 000cc86c 50f748fb
.org 0xcc870
	adds r0, r4, #0	@ 000cc870 201c
.org 0xcc872
	adds r0, #140	@ 000cc872 8c30
.org 0xcc874
	movs r1, #0	@ 000cc874 0021
.org 0xcc876
	str r1, [r0, #0]	@ 000cc876 0160
.org 0xcc878
	adds r0, #4	@ 000cc878 0430
.org 0xcc87a
	str r1, [r0, #0]	@ 000cc87a 0160
.org 0xcc87c
	adds r0, #4	@ 000cc87c 0430
.org 0xcc87e
	strb r1, [r0, #0]	@ 000cc87e 0170
.org 0xcc880
	ldrb r1, [r4, #10]	@ 000cc880 a17a
.org 0xcc882
	movs r0, #251	@ 000cc882 fb20
.org 0xcc884
	ands r0, r1	@ 000cc884 0840
.org 0xcc886
	strb r0, [r4, #10]	@ 000cc886 a072
.org 0xcc888
	ldrb r0, [r4, #14]	@ 000cc888 a07b
.org 0xcc88a
	adds r0, #1	@ 000cc88a 0130
.org 0xcc88c
	strb r0, [r4, #14]	@ 000cc88c a073
.org 0xcc88e
	adds r0, r4, #0	@ 000cc88e 201c
.org 0xcc890
	bl 0x1cff0	@ 000cc890 50f7aefb
.org 0xcc894
	adds r0, r4, #0	@ 000cc894 201c
.org 0xcc896
	adds r0, #115	@ 000cc896 7330
.org 0xcc898
	ldrb r0, [r0, #0]	@ 000cc898 0078
.org 0xcc89a
	cmp r0, #3	@ 000cc89a 0328
.org 0xcc89c
	bne.n 0xcc8b8	@ 000cc89c 0cd1
.org 0xcc89e
	ldrb r1, [r4, #10]	@ 000cc89e a17a
.org 0xcc8a0
	movs r0, #254	@ 000cc8a0 fe20
.org 0xcc8a2
	ands r0, r1	@ 000cc8a2 0840
.org 0xcc8a4
	strb r0, [r4, #10]	@ 000cc8a4 a072
.org 0xcc8a6
	ldr r1, [pc, #28]	@ 000cc8a6 0749
.org 0xcc8a8
	ldrb r0, [r4, #9]	@ 000cc8a8 607a
.org 0xcc8aa
	lsls r0, r0, #2	@ 000cc8aa 8000
.org 0xcc8ac
	adds r0, r0, r1	@ 000cc8ac 4018
.org 0xcc8ae
	movs r1, #4	@ 000cc8ae 0421
.org 0xcc8b0
	str r1, [r4, #12]	@ 000cc8b0 e160
.org 0xcc8b2
	ldr r0, [r0, #0]	@ 000cc8b2 0068
.org 0xcc8b4
	ldr r0, [r0, #16]	@ 000cc8b4 0069
.org 0xcc8b6
	str r0, [r4, #20]	@ 000cc8b6 6061
