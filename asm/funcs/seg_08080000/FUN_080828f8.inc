@ FUN_080828f8  entry 0x080828f8  size 66
.thumb
.org 0x828f8
FUN_080828f8:
	push {r4, lr}	@ 000828f8 10b5
.org 0x828fa
	adds r4, r0, #0	@ 000828fa 041c
.org 0x828fc
	ldrb r0, [r4, #14]	@ 000828fc a07b
.org 0x828fe
	cmp r0, #0	@ 000828fe 0028
.org 0x82900
	beq.n 0x82908	@ 00082900 02d0
.org 0x82902
	cmp r0, #1	@ 00082902 0128
.org 0x82904
	beq.n 0x8291a	@ 00082904 09d0
.org 0x82906
	b.n 0x82934	@ 00082906 15e0
.org 0x82908
	ldr r1, [pc, #48]	@ 00082908 0c49
.org 0x8290a
	adds r0, r4, #0	@ 0008290a 201c
.org 0x8290c
	bl 0x1cf00	@ 0008290c 9af7f8fa
.org 0x82910
	movs r0, #12	@ 00082910 0c20
.org 0x82912
	strb r0, [r4, #18]	@ 00082912 a074
.org 0x82914
	ldrb r0, [r4, #14]	@ 00082914 a07b
.org 0x82916
	adds r0, #1	@ 00082916 0130
.org 0x82918
	strb r0, [r4, #14]	@ 00082918 a073
.org 0x8291a
	ldrb r0, [r4, #18]	@ 0008291a a07c
.org 0x8291c
	subs r0, #1	@ 0008291c 0138
.org 0x8291e
	strb r0, [r4, #18]	@ 0008291e a074
.org 0x82920
	lsls r0, r0, #24	@ 00082920 0006
.org 0x82922
	lsrs r1, r0, #24	@ 00082922 010e
.org 0x82924
	cmp r1, #0	@ 00082924 0029
.org 0x82926
	bne.n 0x8292e	@ 00082926 02d1
.org 0x82928
	movs r0, #1	@ 00082928 0120
.org 0x8292a
	strb r0, [r4, #13]	@ 0008292a 6073
.org 0x8292c
	strb r1, [r4, #14]	@ 0008292c a173
.org 0x8292e
	adds r0, r4, #0	@ 0008292e 201c
.org 0x82930
	bl 0x1cff0	@ 00082930 9af75efb
.org 0x82934
	pop {r4}	@ 00082934 10bc
.org 0x82936
	pop {r0}	@ 00082936 01bc
.org 0x82938
	bx r0	@ 00082938 0047
