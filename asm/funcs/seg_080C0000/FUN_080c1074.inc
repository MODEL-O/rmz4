@ FUN_080c1074  entry 0x080c1074  size 66
.thumb
.org 0xc1074
FUN_080c1074:
	push {r4, lr}	@ 000c1074 10b5
.org 0xc1076
	adds r4, r0, #0	@ 000c1076 041c
.org 0xc1078
	ldrb r0, [r4, #15]	@ 000c1078 e07b
.org 0xc107a
	cmp r0, #0	@ 000c107a 0028
.org 0xc107c
	bne.n 0xc1096	@ 000c107c 0bd1
.org 0xc107e
	adds r0, r4, #0	@ 000c107e 201c
.org 0xc1080
	adds r0, #116	@ 000c1080 7430
.org 0xc1082
	ldr r1, [pc, #52]	@ 000c1082 0d49
.org 0xc1084
	bl 0x5784	@ 000c1084 44f77efb
.org 0xc1088
	ldr r1, [pc, #48]	@ 000c1088 0c49
.org 0xc108a
	adds r0, r4, #0	@ 000c108a 201c
.org 0xc108c
	bl 0x1cf00	@ 000c108c 5bf738ff
.org 0xc1090
	ldrb r0, [r4, #15]	@ 000c1090 e07b
.org 0xc1092
	adds r0, #1	@ 000c1092 0130
.org 0xc1094
	strb r0, [r4, #15]	@ 000c1094 e073
.org 0xc1096
	adds r0, r4, #0	@ 000c1096 201c
.org 0xc1098
	bl 0x1cff0	@ 000c1098 5bf7aaff
.org 0xc109c
	adds r0, r4, #0	@ 000c109c 201c
.org 0xc109e
	adds r0, #115	@ 000c109e 7330
.org 0xc10a0
	ldrb r0, [r0, #0]	@ 000c10a0 0078
.org 0xc10a2
	cmp r0, #3	@ 000c10a2 0328
.org 0xc10a4
	bne.n 0xc10b0	@ 000c10a4 04d1
.org 0xc10a6
	movs r1, #0	@ 000c10a6 0021
.org 0xc10a8
	movs r0, #2	@ 000c10a8 0220
.org 0xc10aa
	strb r0, [r4, #13]	@ 000c10aa 6073
.org 0xc10ac
	strb r1, [r4, #14]	@ 000c10ac a173
.org 0xc10ae
	strb r1, [r4, #15]	@ 000c10ae e173
.org 0xc10b0
	pop {r4}	@ 000c10b0 10bc
.org 0xc10b2
	pop {r0}	@ 000c10b2 01bc
.org 0xc10b4
	bx r0	@ 000c10b4 0047
