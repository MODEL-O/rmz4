@ FUN_08058fd8  entry 0x08058fd8  size 114
.thumb
.org 0x58fd8
FUN_08058fd8:
	push {r4, lr}	@ 00058fd8 10b5
.org 0x58fda
	adds r4, r0, #0	@ 00058fda 041c
.org 0x58fdc
	ldrb r0, [r4, #15]	@ 00058fdc e07b
.org 0x58fde
	cmp r0, #0	@ 00058fde 0028
.org 0x58fe0
	bne.n 0x58ff0	@ 00058fe0 06d1
.org 0x58fe2
	ldr r1, [pc, #104]	@ 00058fe2 1a49
.org 0x58fe4
	adds r0, r4, #0	@ 00058fe4 201c
.org 0x58fe6
	bl 0x1cf00	@ 00058fe6 c3f78bff
.org 0x58fea
	ldrb r0, [r4, #15]	@ 00058fea e07b
.org 0x58fec
	adds r0, #1	@ 00058fec 0130
.org 0x58fee
	strb r0, [r4, #15]	@ 00058fee e073
.org 0x58ff0
	adds r0, r4, #0	@ 00058ff0 201c
.org 0x58ff2
	bl 0x1cff0	@ 00058ff2 c3f7fdff
.org 0x58ff6
	adds r0, r4, #0	@ 00058ff6 201c
.org 0x58ff8
	adds r0, #116	@ 00058ff8 7430
.org 0x58ffa
	ldr r3, [pc, #84]	@ 00058ffa 154b
.org 0x58ffc
	ldrb r1, [r4, #30]	@ 00058ffc a17f
.org 0x58ffe
	lsls r1, r1, #8	@ 00058ffe 0902
.org 0x59000
	adds r2, r4, #0	@ 00059000 221c
.org 0x59002
	adds r2, #112	@ 00059002 7032
.org 0x59004
	ldrb r2, [r2, #0]	@ 00059004 1278
.org 0x59006
	orrs r1, r2	@ 00059006 1143
.org 0x59008
	ldr r2, [pc, #72]	@ 00059008 124a
.org 0x5900a
	adds r1, r1, r2	@ 0005900a 8918
.org 0x5900c
	lsls r1, r1, #2	@ 0005900c 8900
.org 0x5900e
	adds r1, r1, r3	@ 0005900e c918
.org 0x59010
	adds r2, r4, #0	@ 00059010 221c
.org 0x59012
	adds r2, #113	@ 00059012 7132
.org 0x59014
	ldrb r2, [r2, #0]	@ 00059014 1278
.org 0x59016
	lsls r2, r2, #24	@ 00059016 1206
.org 0x59018
	asrs r2, r2, #24	@ 00059018 1216
.org 0x5901a
	ldr r1, [r1, #0]	@ 0005901a 0968
.org 0x5901c
	lsls r2, r2, #2	@ 0005901c 9200
.org 0x5901e
	adds r2, r2, r1	@ 0005901e 5218
.org 0x59020
	ldr r1, [r2, #0]	@ 00059020 1168
.org 0x59022
	ldrb r2, [r1, #0]	@ 00059022 0a78
.org 0x59024
	lsls r1, r2, #1	@ 00059024 5100
.org 0x59026
	adds r1, r1, r2	@ 00059026 8918
.org 0x59028
	lsls r1, r1, #3	@ 00059028 c900
.org 0x5902a
	ldr r2, [pc, #44]	@ 0005902a 0b4a
.org 0x5902c
	adds r1, r1, r2	@ 0005902c 8918
.org 0x5902e
	bl 0x5784	@ 0005902e acf7a9fb
.org 0x59032
	adds r0, r4, #0	@ 00059032 201c
.org 0x59034
	adds r0, #115	@ 00059034 7330
.org 0x59036
	ldrb r0, [r0, #0]	@ 00059036 0078
.org 0x59038
	cmp r0, #3	@ 00059038 0328
.org 0x5903a
	bne.n 0x59044	@ 0005903a 03d1
.org 0x5903c
	movs r1, #0	@ 0005903c 0021
.org 0x5903e
	movs r0, #2	@ 0005903e 0220
.org 0x59040
	strb r0, [r4, #14]	@ 00059040 a073
.org 0x59042
	strb r1, [r4, #15]	@ 00059042 e173
.org 0x59044
	pop {r4}	@ 00059044 10bc
.org 0x59046
	pop {r0}	@ 00059046 01bc
.org 0x59048
	bx r0	@ 00059048 0047
