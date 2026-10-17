@ FUN_080f68e0  entry 0x080f68e0  size 156
.thumb
.org 0xf68e0
FUN_080f68e0:
	push {r4, lr}	@ 000f68e0 10b5
.org 0xf68e2
	adds r4, r0, #0	@ 000f68e2 041c
.org 0xf68e4
	ldrb r0, [r4, #14]	@ 000f68e4 a07b
.org 0xf68e6
	cmp r0, #1	@ 000f68e6 0128
.org 0xf68e8
	beq.n 0xf690a	@ 000f68e8 0fd0
.org 0xf68ea
	cmp r0, #1	@ 000f68ea 0128
.org 0xf68ec
	bgt.n 0xf68f4	@ 000f68ec 02dc
.org 0xf68ee
	cmp r0, #0	@ 000f68ee 0028
.org 0xf68f0
	beq.n 0xf68fe	@ 000f68f0 05d0
.org 0xf68f2
	b.n 0xf6976	@ 000f68f2 40e0
.org 0xf68f4
	cmp r0, #2	@ 000f68f4 0228
.org 0xf68f6
	beq.n 0xf691e	@ 000f68f6 12d0
.org 0xf68f8
	cmp r0, #3	@ 000f68f8 0328
.org 0xf68fa
	beq.n 0xf692c	@ 000f68fa 17d0
.org 0xf68fc
	b.n 0xf6976	@ 000f68fc 3be0
.org 0xf68fe
	str r0, [r4, #92]	@ 000f68fe e065
.org 0xf6900
	movs r0, #60	@ 000f6900 3c20
.org 0xf6902
	strb r0, [r4, #18]	@ 000f6902 a074
.org 0xf6904
	ldrb r0, [r4, #14]	@ 000f6904 a07b
.org 0xf6906
	adds r0, #1	@ 000f6906 0130
.org 0xf6908
	strb r0, [r4, #14]	@ 000f6908 a073
.org 0xf690a
	ldrb r0, [r4, #18]	@ 000f690a a07c
.org 0xf690c
	subs r0, #1	@ 000f690c 0138
.org 0xf690e
	strb r0, [r4, #18]	@ 000f690e a074
.org 0xf6910
	lsls r0, r0, #24	@ 000f6910 0006
.org 0xf6912
	cmp r0, #0	@ 000f6912 0028
.org 0xf6914
	bne.n 0xf6976	@ 000f6914 2fd1
.org 0xf6916
	ldrb r0, [r4, #14]	@ 000f6916 a07b
.org 0xf6918
	adds r0, #1	@ 000f6918 0130
.org 0xf691a
	strb r0, [r4, #14]	@ 000f691a a073
.org 0xf691c
	b.n 0xf6976	@ 000f691c 2be0
.org 0xf691e
	movs r0, #0	@ 000f691e 0020
.org 0xf6920
	str r0, [r4, #92]	@ 000f6920 e065
.org 0xf6922
	subs r0, #16	@ 000f6922 1038
.org 0xf6924
	str r0, [r4, #100]	@ 000f6924 6066
.org 0xf6926
	ldrb r0, [r4, #14]	@ 000f6926 a07b
.org 0xf6928
	adds r0, #1	@ 000f6928 0130
.org 0xf692a
	strb r0, [r4, #14]	@ 000f692a a073
.org 0xf692c
	ldr r0, [r4, #92]	@ 000f692c e06d
.org 0xf692e
	ldr r1, [r4, #100]	@ 000f692e 616e
.org 0xf6930
	adds r0, r0, r1	@ 000f6930 4018
.org 0xf6932
	str r0, [r4, #92]	@ 000f6932 e065
.org 0xf6934
	ldr r1, [pc, #68]	@ 000f6934 1149
.org 0xf6936
	cmp r0, r1	@ 000f6936 8842
.org 0xf6938
	bge.n 0xf693c	@ 000f6938 00da
.org 0xf693a
	str r1, [r4, #92]	@ 000f693a e165
.org 0xf693c
	ldr r0, [r4, #84]	@ 000f693c 606d
.org 0xf693e
	ldr r1, [r4, #92]	@ 000f693e e16d
.org 0xf6940
	adds r0, r0, r1	@ 000f6940 4018
.org 0xf6942
	str r0, [r4, #84]	@ 000f6942 6065
.org 0xf6944
	ldr r1, [pc, #56]	@ 000f6944 0e49
.org 0xf6946
	adds r0, r0, r1	@ 000f6946 4018
.org 0xf6948
	ldr r1, [r4, #88]	@ 000f6948 a16d
.org 0xf694a
	movs r2, #128	@ 000f694a 8022
.org 0xf694c
	lsls r2, r2, #5	@ 000f694c 5201
.org 0xf694e
	adds r1, r1, r2	@ 000f694e 8918
.org 0xf6950
	bl 0x816c	@ 000f6950 11f70cfc
.org 0xf6954
	cmp r0, #0	@ 000f6954 0028
.org 0xf6956
	beq.n 0xf6976	@ 000f6956 0ed0
.org 0xf6958
	ldr r0, [r4, #84]	@ 000f6958 606d
.org 0xf695a
	ldr r1, [r4, #88]	@ 000f695a a16d
.org 0xf695c
	movs r2, #128	@ 000f695c 8022
.org 0xf695e
	lsls r2, r2, #5	@ 000f695e 5201
.org 0xf6960
	adds r1, r1, r2	@ 000f6960 8918
.org 0xf6962
	bl 0x8988	@ 000f6962 12f711f8
.org 0xf6966
	movs r1, #128	@ 000f6966 8021
.org 0xf6968
	lsls r1, r1, #5	@ 000f6968 4901
.org 0xf696a
	adds r0, r0, r1	@ 000f696a 4018
.org 0xf696c
	str r0, [r4, #84]	@ 000f696c 6065
.org 0xf696e
	movs r1, #0	@ 000f696e 0021
.org 0xf6970
	movs r0, #3	@ 000f6970 0320
.org 0xf6972
	strb r0, [r4, #13]	@ 000f6972 6073
.org 0xf6974
	strb r1, [r4, #14]	@ 000f6974 a173
.org 0xf6976
	pop {r4}	@ 000f6976 10bc
.org 0xf6978
	pop {r0}	@ 000f6978 01bc
.org 0xf697a
	bx r0	@ 000f697a 0047
