@ FUN_0803090c  entry 0x0803090c  size 80
.thumb
.org 0x3090c
FUN_0803090c:
	push {r4, lr}	@ 0003090c 10b5
.org 0x3090e
	adds r4, r0, #0	@ 0003090e 041c
.org 0x30910
	ldr r1, [pc, #20]	@ 00030910 0549
.org 0x30912
	adds r0, r4, r1	@ 00030912 6018
.org 0x30914
	ldrb r0, [r0, #0]	@ 00030914 0078
.org 0x30916
	cmp r0, #1	@ 00030916 0128
.org 0x30918
	beq.n 0x3091e	@ 00030918 01d0
.org 0x3091a
	cmp r0, #3	@ 0003091a 0328
.org 0x3091c
	bne.n 0x30930	@ 0003091c 08d1
.org 0x3091e
	ldr r1, [pc, #12]	@ 0003091e 0349
.org 0x30920
	adds r0, r4, #0	@ 00030920 201c
.org 0x30922
	bl 0x1cf00	@ 00030922 ecf7edfa
.org 0x30926
	b.n 0x30942	@ 00030926 0ce0
.org 0x30928
	.byte 0x75,0x01,0x00,0x00	@ 00030928 data
.org 0x3092c
	.byte 0x01,0x03,0x00,0x00	@ 0003092c data
.org 0x30930
	adds r0, r4, #0	@ 00030930 201c
.org 0x30932
	bl 0x2b7d8	@ 00030932 faf751ff
.org 0x30936
	adds r1, r0, #0	@ 00030936 011c
.org 0x30938
	lsls r1, r1, #16	@ 00030938 0904
.org 0x3093a
	lsrs r1, r1, #16	@ 0003093a 090c
.org 0x3093c
	adds r0, r4, #0	@ 0003093c 201c
.org 0x3093e
	bl 0x1cf00	@ 0003093e ecf7dffa
.org 0x30942
	adds r3, r4, #0	@ 00030942 231c
.org 0x30944
	adds r3, #180	@ 00030944 b433
.org 0x30946
	ldr r2, [r3, #84]	@ 00030946 5a6d
.org 0x30948
	cmp r2, #0	@ 00030948 002a
.org 0x3094a
	beq.n 0x30954	@ 0003094a 03d0
.org 0x3094c
	movs r1, #0	@ 0003094c 0021
.org 0x3094e
	movs r0, #1	@ 0003094e 0120
.org 0x30950
	strb r0, [r2, #17]	@ 00030950 5074
.org 0x30952
	str r1, [r3, #84]	@ 00030952 5965
.org 0x30954
	movs r0, #1	@ 00030954 0120
.org 0x30956
	strb r0, [r4, #15]	@ 00030956 e073
.org 0x30958
	adds r0, r4, #0	@ 00030958 201c
.org 0x3095a
	bl 0x30964	@ 0003095a 00f003f8
