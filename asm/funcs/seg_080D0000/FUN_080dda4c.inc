@ FUN_080dda4c  entry 0x080dda4c  size 172
.thumb
.org 0xdda4c
FUN_080dda4c:
	push {r4, r5, lr}	@ 000dda4c 30b5
.org 0xdda4e
	adds r4, r0, #0	@ 000dda4e 041c
.org 0xdda50
	bl 0x1cc9c	@ 000dda50 3ff724f9
.org 0xdda54
	ldrb r1, [r4, #10]	@ 000dda54 a17a
.org 0xdda56
	movs r0, #1	@ 000dda56 0120
.org 0xdda58
	movs r5, #0	@ 000dda58 0025
.org 0xdda5a
	orrs r0, r1	@ 000dda5a 0843
.org 0xdda5c
	movs r1, #2	@ 000dda5c 0221
.org 0xdda5e
	orrs r0, r1	@ 000dda5e 0843
.org 0xdda60
	strb r0, [r4, #10]	@ 000dda60 a072
.org 0xdda62
	ldr r1, [pc, #60]	@ 000dda62 0f49
.org 0xdda64
	adds r0, r4, #0	@ 000dda64 201c
.org 0xdda66
	bl 0x1cf00	@ 000dda66 3ff74bfa
.org 0xdda6a
	adds r0, r4, #0	@ 000dda6a 201c
.org 0xdda6c
	bl 0x1cff0	@ 000dda6c 3ff7c0fa
.org 0xdda70
	ldrb r0, [r4, #17]	@ 000dda70 607c
.org 0xdda72
	cmp r0, #0	@ 000dda72 0028
.org 0xdda74
	beq.n 0xddaa4	@ 000dda74 16d0
.org 0xdda76
	ldr r0, [r4, #84]	@ 000dda76 606d
.org 0xdda78
	movs r1, #208	@ 000dda78 d021
.org 0xdda7a
	lsls r1, r1, #4	@ 000dda7a 0901
.org 0xdda7c
	adds r0, r0, r1	@ 000dda7c 4018
.org 0xdda7e
	str r0, [r4, #84]	@ 000dda7e 6065
.org 0xdda80
	movs r2, #0	@ 000dda80 0022
.org 0xdda82
	ldrb r1, [r4, #10]	@ 000dda82 a17a
.org 0xdda84
	movs r0, #239	@ 000dda84 ef20
.org 0xdda86
	ands r0, r1	@ 000dda86 0840
.org 0xdda88
	strb r0, [r4, #10]	@ 000dda88 a072
.org 0xdda8a
	adds r0, r4, #0	@ 000dda8a 201c
.org 0xdda8c
	adds r0, #76	@ 000dda8c 4c30
.org 0xdda8e
	strb r2, [r0, #0]	@ 000dda8e 0270
.org 0xdda90
	adds r2, r4, #0	@ 000dda90 221c
.org 0xdda92
	adds r2, #74	@ 000dda92 4a32
.org 0xdda94
	ldrb r1, [r2, #0]	@ 000dda94 1178
.org 0xdda96
	movs r0, #17	@ 000dda96 1120
.org 0xdda98
	negs r0, r0	@ 000dda98 4042
.org 0xdda9a
	ands r0, r1	@ 000dda9a 0840
.org 0xdda9c
	strb r0, [r2, #0]	@ 000dda9c 1070
.org 0xdda9e
	b.n 0xddace	@ 000dda9e 16e0
.org 0xddaa0
	.byte 0x0c,0x8c,0x00,0x00	@ 000ddaa0 data
.org 0xddaa4
	ldr r0, [r4, #84]	@ 000ddaa4 606d
.org 0xddaa6
	ldr r1, [pc, #84]	@ 000ddaa6 1549
.org 0xddaa8
	adds r0, r0, r1	@ 000ddaa8 4018
.org 0xddaaa
	str r0, [r4, #84]	@ 000ddaaa 6065
.org 0xddaac
	movs r2, #1	@ 000ddaac 0122
.org 0xddaae
	ldrb r0, [r4, #10]	@ 000ddaae a07a
.org 0xddab0
	movs r1, #16	@ 000ddab0 1021
.org 0xddab2
	orrs r0, r1	@ 000ddab2 0843
.org 0xddab4
	strb r0, [r4, #10]	@ 000ddab4 a072
.org 0xddab6
	adds r0, r4, #0	@ 000ddab6 201c
.org 0xddab8
	adds r0, #76	@ 000ddab8 4c30
.org 0xddaba
	strb r2, [r0, #0]	@ 000ddaba 0270
.org 0xddabc
	adds r3, r4, #0	@ 000ddabc 231c
.org 0xddabe
	adds r3, #74	@ 000ddabe 4a33
.org 0xddac0
	movs r2, #16	@ 000ddac0 1022
.org 0xddac2
	ldrb r1, [r3, #0]	@ 000ddac2 1978
.org 0xddac4
	movs r0, #17	@ 000ddac4 1120
.org 0xddac6
	negs r0, r0	@ 000ddac6 4042
.org 0xddac8
	ands r0, r1	@ 000ddac8 0840
.org 0xddaca
	orrs r0, r2	@ 000ddaca 1043
.org 0xddacc
	strb r0, [r3, #0]	@ 000ddacc 1870
.org 0xddace
	ldr r0, [r4, #88]	@ 000ddace a06d
.org 0xddad0
	movs r1, #176	@ 000ddad0 b021
.org 0xddad2
	lsls r1, r1, #5	@ 000ddad2 4901
.org 0xddad4
	adds r0, r0, r1	@ 000ddad4 4018
.org 0xddad6
	str r0, [r4, #88]	@ 000ddad6 a065
.org 0xddad8
	movs r0, #225	@ 000ddad8 e120
.org 0xddada
	lsls r0, r0, #2	@ 000ddada 8000
.org 0xddadc
	str r0, [r4, #100]	@ 000ddadc 6066
.org 0xddade
	ldr r1, [pc, #32]	@ 000ddade 0849
.org 0xddae0
	ldrb r0, [r4, #9]	@ 000ddae0 607a
.org 0xddae2
	lsls r0, r0, #2	@ 000ddae2 8000
.org 0xddae4
	adds r0, r0, r1	@ 000ddae4 4018
.org 0xddae6
	movs r1, #1	@ 000ddae6 0121
.org 0xddae8
	str r1, [r4, #12]	@ 000ddae8 e160
.org 0xddaea
	ldr r0, [r0, #0]	@ 000ddaea 0068
.org 0xddaec
	ldr r0, [r0, #4]	@ 000ddaec 4068
.org 0xddaee
	str r0, [r4, #20]	@ 000ddaee 6061
.org 0xddaf0
	adds r0, r4, #0	@ 000ddaf0 201c
.org 0xddaf2
	bl 0xdd6c8	@ 000ddaf2 fff7e9fd
.org 0xddaf6
	pop {r4, r5}	@ 000ddaf6 30bc
