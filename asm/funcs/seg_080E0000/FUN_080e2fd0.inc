@ FUN_080e2fd0  entry 0x080e2fd0  size 120
.thumb
.org 0xe2fd0
FUN_080e2fd0:
	push {r4, r5, lr}	@ 000e2fd0 30b5
.org 0xe2fd2
	adds r4, r0, #0	@ 000e2fd2 041c
.org 0xe2fd4
	bl 0x1cc9c	@ 000e2fd4 39f762fe
.org 0xe2fd8
	ldrb r1, [r4, #10]	@ 000e2fd8 a17a
.org 0xe2fda
	movs r0, #1	@ 000e2fda 0120
.org 0xe2fdc
	movs r5, #0	@ 000e2fdc 0025
.org 0xe2fde
	orrs r0, r1	@ 000e2fde 0843
.org 0xe2fe0
	movs r1, #2	@ 000e2fe0 0221
.org 0xe2fe2
	orrs r0, r1	@ 000e2fe2 0843
.org 0xe2fe4
	strb r0, [r4, #10]	@ 000e2fe4 a072
.org 0xe2fe6
	ldr r1, [pc, #28]	@ 000e2fe6 0749
.org 0xe2fe8
	adds r0, r4, #0	@ 000e2fe8 201c
.org 0xe2fea
	bl 0x1cf00	@ 000e2fea 39f789ff
.org 0xe2fee
	adds r0, r4, #0	@ 000e2fee 201c
.org 0xe2ff0
	bl 0x1cff0	@ 000e2ff0 39f7feff
.org 0xe2ff4
	ldrb r2, [r4, #17]	@ 000e2ff4 627c
.org 0xe2ff6
	cmp r2, #0	@ 000e2ff6 002a
.org 0xe2ff8
	beq.n 0xe3008	@ 000e2ff8 06d0
.org 0xe2ffa
	ldrb r0, [r4, #10]	@ 000e2ffa a07a
.org 0xe2ffc
	movs r1, #16	@ 000e2ffc 1021
.org 0xe2ffe
	orrs r0, r1	@ 000e2ffe 0843
.org 0xe3000
	b.n 0xe300e	@ 000e3000 05e0
.org 0xe3002
	.byte 0x00	@ 000e3002 data
.org 0xe3003
	.byte 0x00	@ 000e3003 data
.org 0xe3004
	.byte 0x07,0x95,0x00,0x00	@ 000e3004 data
.org 0xe3008
	ldrb r1, [r4, #10]	@ 000e3008 a17a
.org 0xe300a
	movs r0, #239	@ 000e300a ef20
.org 0xe300c
	ands r0, r1	@ 000e300c 0840
.org 0xe300e
	strb r0, [r4, #10]	@ 000e300e a072
.org 0xe3010
	movs r3, #1	@ 000e3010 0123
.org 0xe3012
	adds r1, r3, #0	@ 000e3012 191c
.org 0xe3014
	ands r1, r2	@ 000e3014 1140
.org 0xe3016
	adds r0, r4, #0	@ 000e3016 201c
.org 0xe3018
	adds r0, #76	@ 000e3018 4c30
.org 0xe301a
	strb r1, [r0, #0]	@ 000e301a 0170
.org 0xe301c
	movs r0, #74	@ 000e301c 4a20
.org 0xe301e
	adds r0, r0, r4	@ 000e301e 0019
.org 0xe3020
	mov ip, r0	@ 000e3020 8446
.org 0xe3022
	lsls r1, r1, #4	@ 000e3022 0901
.org 0xe3024
	ldrb r2, [r0, #0]	@ 000e3024 0278
.org 0xe3026
	movs r0, #17	@ 000e3026 1120
.org 0xe3028
	negs r0, r0	@ 000e3028 4042
.org 0xe302a
	ands r0, r2	@ 000e302a 1040
.org 0xe302c
	orrs r0, r1	@ 000e302c 0843
.org 0xe302e
	mov r1, ip	@ 000e302e 6146
.org 0xe3030
	strb r0, [r1, #0]	@ 000e3030 0870
.org 0xe3032
	ldr r1, [pc, #28]	@ 000e3032 0749
.org 0xe3034
	ldrb r0, [r4, #9]	@ 000e3034 607a
.org 0xe3036
	lsls r0, r0, #2	@ 000e3036 8000
.org 0xe3038
	adds r0, r0, r1	@ 000e3038 4018
.org 0xe303a
	str r3, [r4, #12]	@ 000e303a e360
.org 0xe303c
	ldr r0, [r0, #0]	@ 000e303c 0068
.org 0xe303e
	ldr r0, [r0, #4]	@ 000e303e 4068
.org 0xe3040
	str r0, [r4, #20]	@ 000e3040 6061
.org 0xe3042
	adds r0, r4, #0	@ 000e3042 201c
.org 0xe3044
	bl 0xe2efc	@ 000e3044 fff75aff
