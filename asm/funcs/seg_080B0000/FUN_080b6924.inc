@ FUN_080b6924  entry 0x080b6924  size 114
.thumb
.org 0xb6924
FUN_080b6924:
	push {r4, r5, r6, lr}	@ 000b6924 70b5
.org 0xb6926
	adds r4, r0, #0	@ 000b6926 041c
.org 0xb6928
	ldr r6, [r4, #40]	@ 000b6928 a66a
.org 0xb692a
	ldrb r5, [r4, #15]	@ 000b692a e57b
.org 0xb692c
	cmp r5, #0	@ 000b692c 002d
.org 0xb692e
	bne.n 0xb6960	@ 000b692e 17d1
.org 0xb6930
	movs r0, #168	@ 000b6930 a820
.org 0xb6932
	bl 0x2b10	@ 000b6932 4cf7edf8
.org 0xb6936
	adds r0, r4, #0	@ 000b6936 201c
.org 0xb6938
	bl 0xb6a38	@ 000b6938 00f07ef8
.org 0xb693c
	adds r0, r4, #0	@ 000b693c 201c
.org 0xb693e
	adds r0, #140	@ 000b693e 8c30
.org 0xb6940
	str r5, [r0, #0]	@ 000b6940 0560
.org 0xb6942
	adds r0, #4	@ 000b6942 0430
.org 0xb6944
	str r5, [r0, #0]	@ 000b6944 0560
.org 0xb6946
	adds r0, #4	@ 000b6946 0430
.org 0xb6948
	strb r5, [r0, #0]	@ 000b6948 0570
.org 0xb694a
	ldrb r1, [r4, #10]	@ 000b694a a17a
.org 0xb694c
	movs r0, #251	@ 000b694c fb20
.org 0xb694e
	ands r0, r1	@ 000b694e 0840
.org 0xb6950
	movs r1, #254	@ 000b6950 fe21
.org 0xb6952
	ands r0, r1	@ 000b6952 0840
.org 0xb6954
	strb r0, [r4, #10]	@ 000b6954 a072
.org 0xb6956
	movs r0, #64	@ 000b6956 4020
.org 0xb6958
	strb r0, [r4, #18]	@ 000b6958 a074
.org 0xb695a
	ldrb r0, [r4, #15]	@ 000b695a e07b
.org 0xb695c
	adds r0, #1	@ 000b695c 0130
.org 0xb695e
	strb r0, [r4, #15]	@ 000b695e e073
.org 0xb6960
	ldrb r0, [r4, #18]	@ 000b6960 a07c
.org 0xb6962
	subs r0, #1	@ 000b6962 0138
.org 0xb6964
	strb r0, [r4, #18]	@ 000b6964 a074
.org 0xb6966
	lsls r0, r0, #24	@ 000b6966 0006
.org 0xb6968
	cmp r0, #0	@ 000b6968 0028
.org 0xb696a
	bne.n 0xb6990	@ 000b696a 11d1
.org 0xb696c
	adds r1, r6, #0	@ 000b696c 311c
.org 0xb696e
	adds r1, #204	@ 000b696e cc31
.org 0xb6970
	ldrh r2, [r1, #0]	@ 000b6970 0a88
.org 0xb6972
	movs r3, #0	@ 000b6972 0023
.org 0xb6974
	ldrsh r0, [r1, r3]	@ 000b6974 c85e
.org 0xb6976
	cmp r0, #0	@ 000b6976 0028
.org 0xb6978
	beq.n 0xb697e	@ 000b6978 01d0
.org 0xb697a
	subs r0, r2, #1	@ 000b697a 501e
.org 0xb697c
	strh r0, [r1, #0]	@ 000b697c 0880
.org 0xb697e
	ldr r1, [pc, #24]	@ 000b697e 0649
.org 0xb6980
	ldrb r0, [r4, #9]	@ 000b6980 607a
.org 0xb6982
	lsls r0, r0, #2	@ 000b6982 8000
.org 0xb6984
	adds r0, r0, r1	@ 000b6984 4018
.org 0xb6986
	movs r1, #4	@ 000b6986 0421
.org 0xb6988
	str r1, [r4, #12]	@ 000b6988 e160
.org 0xb698a
	ldr r0, [r0, #0]	@ 000b698a 0068
.org 0xb698c
	ldr r0, [r0, #16]	@ 000b698c 0069
.org 0xb698e
	str r0, [r4, #20]	@ 000b698e 6061
.org 0xb6990
	pop {r4, r5, r6}	@ 000b6990 70bc
.org 0xb6992
	pop {r0}	@ 000b6992 01bc
.org 0xb6994
	bx r0	@ 000b6994 0047
