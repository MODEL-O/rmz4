@ FUN_08033d8c  entry 0x08033d8c  size 122
.thumb
.org 0x33d8c
FUN_08033d8c:
	push {r4, r5, lr}	@ 00033d8c 30b5
.org 0x33d8e
	adds r4, r0, #0	@ 00033d8e 041c
.org 0x33d90
	movs r0, #129	@ 00033d90 8120
.org 0x33d92
	lsls r0, r0, #1	@ 00033d92 4000
.org 0x33d94
	adds r5, r4, r0	@ 00033d94 2518
.org 0x33d96
	ldrb r0, [r5, #0]	@ 00033d96 2878
.org 0x33d98
	cmp r0, #0	@ 00033d98 0028
.org 0x33d9a
	bne.n 0x33daa	@ 00033d9a 06d1
.org 0x33d9c
	ldr r1, [pc, #104]	@ 00033d9c 1a49
.org 0x33d9e
	adds r0, r4, #0	@ 00033d9e 201c
.org 0x33da0
	bl 0x1cf00	@ 00033da0 e9f7aef8
.org 0x33da4
	ldrb r0, [r5, #0]	@ 00033da4 2878
.org 0x33da6
	adds r0, #1	@ 00033da6 0130
.org 0x33da8
	strb r0, [r5, #0]	@ 00033da8 2870
.org 0x33daa
	ldr r5, [pc, #92]	@ 00033daa 174d
.org 0x33dac
	adds r0, r4, #0	@ 00033dac 201c
.org 0x33dae
	adds r1, r5, #0	@ 00033dae 291c
.org 0x33db0
	bl 0x3a3b0	@ 00033db0 06f0fefa
.org 0x33db4
	ldrb r0, [r4, #30]	@ 00033db4 a07f
.org 0x33db6
	lsls r0, r0, #8	@ 00033db6 0002
.org 0x33db8
	adds r1, r4, #0	@ 00033db8 211c
.org 0x33dba
	adds r1, #112	@ 00033dba 7031
.org 0x33dbc
	ldrb r1, [r1, #0]	@ 00033dbc 0978
.org 0x33dbe
	orrs r1, r0	@ 00033dbe 0143
.org 0x33dc0
	cmp r1, r5	@ 00033dc0 a942
.org 0x33dc2
	beq.n 0x33dda	@ 00033dc2 0ad0
.org 0x33dc4
	movs r1, #183	@ 00033dc4 b721
.org 0x33dc6
	lsls r1, r1, #1	@ 00033dc6 4900
.org 0x33dc8
	adds r0, r4, r1	@ 00033dc8 6018
.org 0x33dca
	ldrb r2, [r0, #0]	@ 00033dca 0278
.org 0x33dcc
	adds r1, #1	@ 00033dcc 0131
.org 0x33dce
	adds r0, r4, r1	@ 00033dce 6018
.org 0x33dd0
	ldrb r3, [r0, #0]	@ 00033dd0 0378
.org 0x33dd2
	adds r0, r4, #0	@ 00033dd2 201c
.org 0x33dd4
	adds r1, r5, #0	@ 00033dd4 291c
.org 0x33dd6
	bl 0x1cfc8	@ 00033dd6 e9f7f7f8
.org 0x33dda
	adds r0, r4, #0	@ 00033dda 201c
.org 0x33ddc
	adds r0, #115	@ 00033ddc 7330
.org 0x33dde
	ldrb r0, [r0, #0]	@ 00033dde 0078
.org 0x33de0
	cmp r0, #3	@ 00033de0 0328
.org 0x33de2
	bne.n 0x33e00	@ 00033de2 0dd1
.org 0x33de4
	movs r0, #128	@ 00033de4 8020
.org 0x33de6
	lsls r0, r0, #1	@ 00033de6 4000
.org 0x33de8
	adds r1, r4, r0	@ 00033de8 2118
.org 0x33dea
	movs r0, #0	@ 00033dea 0020
.org 0x33dec
	strb r0, [r1, #0]	@ 00033dec 0870
.org 0x33dee
	adds r0, r4, #0	@ 00033dee 201c
.org 0x33df0
	bl 0x2b7d8	@ 00033df0 f7f7f2fc
.org 0x33df4
	adds r1, r0, #0	@ 00033df4 011c
.org 0x33df6
	lsls r1, r1, #16	@ 00033df6 0904
.org 0x33df8
	lsrs r1, r1, #16	@ 00033df8 090c
.org 0x33dfa
	adds r0, r4, #0	@ 00033dfa 201c
.org 0x33dfc
	bl 0x1cf00	@ 00033dfc e9f780f8
.org 0x33e00
	pop {r4, r5}	@ 00033e00 30bc
.org 0x33e02
	pop {r0}	@ 00033e02 01bc
.org 0x33e04
	bx r0	@ 00033e04 0047
