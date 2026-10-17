@ FUN_08091908  entry 0x08091908  size 120
.thumb
.org 0x91908
FUN_08091908:
	push {r4, lr}	@ 00091908 10b5
.org 0x9190a
	adds r4, r0, #0	@ 0009190a 041c
.org 0x9190c
	ldrb r0, [r4, #14]	@ 0009190c a07b
.org 0x9190e
	cmp r0, #0	@ 0009190e 0028
.org 0x91910
	bne.n 0x91954	@ 00091910 20d1
.org 0x91912
	adds r0, r4, #0	@ 00091912 201c
.org 0x91914
	bl 0x1cc9c	@ 00091914 8bf7c2f9
.org 0x91918
	ldrb r1, [r4, #10]	@ 00091918 a17a
.org 0x9191a
	movs r0, #1	@ 0009191a 0120
.org 0x9191c
	orrs r0, r1	@ 0009191c 0843
.org 0x9191e
	movs r1, #2	@ 0009191e 0221
.org 0x91920
	orrs r0, r1	@ 00091920 0843
.org 0x91922
	strb r0, [r4, #10]	@ 00091922 a072
.org 0x91924
	movs r1, #240	@ 00091924 f021
.org 0x91926
	lsls r1, r1, #6	@ 00091926 8901
.org 0x91928
	adds r0, r4, #0	@ 00091928 201c
.org 0x9192a
	bl 0x1cf00	@ 0009192a 8bf7e9fa
.org 0x9192e
	adds r0, r4, #0	@ 0009192e 201c
.org 0x91930
	adds r0, #116	@ 00091930 7430
.org 0x91932
	ldr r1, [pc, #16]	@ 00091932 0449
.org 0x91934
	bl 0x5784	@ 00091934 73f726ff
.org 0x91938
	ldr r0, [r4, #40]	@ 00091938 a06a
.org 0x9193a
	ldrb r0, [r0, #17]	@ 0009193a 407c
.org 0x9193c
	cmp r0, #0	@ 0009193c 0028
.org 0x9193e
	beq.n 0x91948	@ 0009193e 03d0
.org 0x91940
	movs r0, #160	@ 00091940 a020
.org 0x91942
	b.n 0x9194a	@ 00091942 02e0
.org 0x91944
	.byte 0x3c,0x03,0x86,0x08	@ 00091944 data
.org 0x91948
	movs r0, #240	@ 00091948 f020
.org 0x9194a
	strb r0, [r4, #18]	@ 0009194a a074
.org 0x9194c
	ldrb r0, [r4, #14]	@ 0009194c a07b
.org 0x9194e
	adds r0, #1	@ 0009194e 0130
.org 0x91950
	strb r0, [r4, #14]	@ 00091950 a073
.org 0x91952
	b.n 0x91962	@ 00091952 06e0
.org 0x91954
	ldrb r0, [r4, #18]	@ 00091954 a07c
.org 0x91956
	cmp r0, #32	@ 00091956 2028
.org 0x91958
	bne.n 0x91962	@ 00091958 03d1
.org 0x9195a
	ldr r1, [pc, #40]	@ 0009195a 0a49
.org 0x9195c
	adds r0, r4, #0	@ 0009195c 201c
.org 0x9195e
	bl 0x1cf00	@ 0009195e 8bf7cffa
.org 0x91962
	adds r0, r4, #0	@ 00091962 201c
.org 0x91964
	bl 0x1cff0	@ 00091964 8bf744fb
.org 0x91968
	ldrb r0, [r4, #18]	@ 00091968 a07c
.org 0x9196a
	subs r0, #1	@ 0009196a 0138
.org 0x9196c
	strb r0, [r4, #18]	@ 0009196c a074
.org 0x9196e
	lsls r0, r0, #24	@ 0009196e 0006
.org 0x91970
	lsrs r0, r0, #24	@ 00091970 000e
.org 0x91972
	cmp r0, #255	@ 00091972 ff28
.org 0x91974
	bne.n 0x9197e	@ 00091974 03d1
.org 0x91976
	movs r0, #2	@ 00091976 0220
.org 0x91978
	strb r0, [r4, #13]	@ 00091978 6073
.org 0x9197a
	movs r0, #0	@ 0009197a 0020
.org 0x9197c
	strb r0, [r4, #14]	@ 0009197c a073
.org 0x9197e
	pop {r4}	@ 0009197e 10bc
