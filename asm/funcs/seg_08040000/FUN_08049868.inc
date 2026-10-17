@ FUN_08049868  entry 0x08049868  size 82
.thumb
.org 0x49868
FUN_08049868:
	push {r4, r5, lr}	@ 00049868 30b5
.org 0x4986a
	adds r4, r0, #0	@ 0004986a 041c
.org 0x4986c
	ldr r1, [pc, #76]	@ 0004986c 1349
.org 0x4986e
	ldrb r0, [r4, #9]	@ 0004986e 607a
.org 0x49870
	lsls r0, r0, #2	@ 00049870 8000
.org 0x49872
	adds r0, r0, r1	@ 00049872 4018
.org 0x49874
	movs r1, #1	@ 00049874 0121
.org 0x49876
	str r1, [r4, #12]	@ 00049876 e160
.org 0x49878
	ldr r0, [r0, #0]	@ 00049878 0068
.org 0x4987a
	ldr r0, [r0, #4]	@ 0004987a 4068
.org 0x4987c
	str r0, [r4, #20]	@ 0004987c 6061
.org 0x4987e
	adds r0, r4, #0	@ 0004987e 201c
.org 0x49880
	bl 0x1cc9c	@ 00049880 d3f70cfa
.org 0x49884
	adds r0, r4, #0	@ 00049884 201c
.org 0x49886
	bl 0x1ceec	@ 00049886 d3f731fb
.org 0x4988a
	ldrb r1, [r4, #10]	@ 0004988a a17a
.org 0x4988c
	movs r0, #254	@ 0004988c fe20
.org 0x4988e
	ands r0, r1	@ 0004988e 0840
.org 0x49890
	movs r5, #0	@ 00049890 0025
.org 0x49892
	movs r1, #2	@ 00049892 0221
.org 0x49894
	orrs r0, r1	@ 00049894 0843
.org 0x49896
	strb r0, [r4, #10]	@ 00049896 a072
.org 0x49898
	ldr r1, [pc, #36]	@ 00049898 0949
.org 0x4989a
	adds r0, r4, #0	@ 0004989a 201c
.org 0x4989c
	bl 0x1cf00	@ 0004989c d3f730fb
.org 0x498a0
	movs r0, #8	@ 000498a0 0820
.org 0x498a2
	strb r0, [r4, #18]	@ 000498a2 a074
.org 0x498a4
	movs r0, #56	@ 000498a4 3820
.org 0x498a6
	strb r0, [r4, #19]	@ 000498a6 e074
.org 0x498a8
	adds r0, r4, #0	@ 000498a8 201c
.org 0x498aa
	adds r0, #189	@ 000498aa bd30
.org 0x498ac
	strb r5, [r0, #0]	@ 000498ac 0570
.org 0x498ae
	adds r0, r4, #0	@ 000498ae 201c
.org 0x498b0
	bl 0x497fc	@ 000498b0 fff7a4ff
.org 0x498b4
	pop {r4, r5}	@ 000498b4 30bc
.org 0x498b6
	pop {r0}	@ 000498b6 01bc
.org 0x498b8
	bx r0	@ 000498b8 0047
