@ FUN_08056938  entry 0x08056938  size 118
.thumb
.org 0x56938
FUN_08056938:
	push {r4, lr}	@ 00056938 10b5
.org 0x5693a
	adds r4, r0, #0	@ 0005693a 041c
.org 0x5693c
	ldrb r0, [r4, #15]	@ 0005693c e07b
.org 0x5693e
	cmp r0, #0	@ 0005693e 0028
.org 0x56940
	bne.n 0x56956	@ 00056940 09d1
.org 0x56942
	movs r0, #249	@ 00056942 f920
.org 0x56944
	bl 0x2b10	@ 00056944 acf7e4f8
.org 0x56948
	ldr r1, [pc, #100]	@ 00056948 1949
.org 0x5694a
	adds r0, r4, #0	@ 0005694a 201c
.org 0x5694c
	bl 0x1cf00	@ 0005694c c6f7d8fa
.org 0x56950
	ldrb r0, [r4, #15]	@ 00056950 e07b
.org 0x56952
	adds r0, #1	@ 00056952 0130
.org 0x56954
	strb r0, [r4, #15]	@ 00056954 e073
.org 0x56956
	adds r0, r4, #0	@ 00056956 201c
.org 0x56958
	bl 0x1cff0	@ 00056958 c6f74afb
.org 0x5695c
	adds r0, r4, #0	@ 0005695c 201c
.org 0x5695e
	adds r0, #116	@ 0005695e 7430
.org 0x56960
	ldr r3, [pc, #80]	@ 00056960 144b
.org 0x56962
	ldrb r1, [r4, #30]	@ 00056962 a17f
.org 0x56964
	lsls r1, r1, #8	@ 00056964 0902
.org 0x56966
	adds r2, r4, #0	@ 00056966 221c
.org 0x56968
	adds r2, #112	@ 00056968 7032
.org 0x5696a
	ldrb r2, [r2, #0]	@ 0005696a 1278
.org 0x5696c
	orrs r1, r2	@ 0005696c 1143
.org 0x5696e
	ldr r2, [pc, #72]	@ 0005696e 124a
.org 0x56970
	adds r1, r1, r2	@ 00056970 8918
.org 0x56972
	lsls r1, r1, #2	@ 00056972 8900
.org 0x56974
	adds r1, r1, r3	@ 00056974 c918
.org 0x56976
	adds r2, r4, #0	@ 00056976 221c
.org 0x56978
	adds r2, #113	@ 00056978 7132
.org 0x5697a
	ldrb r2, [r2, #0]	@ 0005697a 1278
.org 0x5697c
	lsls r2, r2, #24	@ 0005697c 1206
.org 0x5697e
	asrs r2, r2, #24	@ 0005697e 1216
.org 0x56980
	ldr r1, [r1, #0]	@ 00056980 0968
.org 0x56982
	lsls r2, r2, #2	@ 00056982 9200
.org 0x56984
	adds r2, r2, r1	@ 00056984 5218
.org 0x56986
	ldr r1, [r2, #0]	@ 00056986 1168
.org 0x56988
	ldrb r2, [r1, #0]	@ 00056988 0a78
.org 0x5698a
	lsls r1, r2, #1	@ 0005698a 5100
.org 0x5698c
	adds r1, r1, r2	@ 0005698c 8918
.org 0x5698e
	lsls r1, r1, #3	@ 0005698e c900
.org 0x56990
	ldr r2, [pc, #40]	@ 00056990 0a4a
.org 0x56992
	adds r1, r1, r2	@ 00056992 8918
.org 0x56994
	bl 0x5784	@ 00056994 aef7f6fe
.org 0x56998
	adds r0, r4, #0	@ 00056998 201c
.org 0x5699a
	adds r0, #115	@ 0005699a 7330
.org 0x5699c
	ldrb r1, [r0, #0]	@ 0005699c 0178
.org 0x5699e
	cmp r1, #3	@ 0005699e 0329
.org 0x569a0
	bne.n 0x569a8	@ 000569a0 02d1
.org 0x569a2
	movs r0, #0	@ 000569a2 0020
.org 0x569a4
	strb r1, [r4, #14]	@ 000569a4 a173
.org 0x569a6
	strb r0, [r4, #15]	@ 000569a6 e073
.org 0x569a8
	pop {r4}	@ 000569a8 10bc
.org 0x569aa
	pop {r0}	@ 000569aa 01bc
.org 0x569ac
	bx r0	@ 000569ac 0047
