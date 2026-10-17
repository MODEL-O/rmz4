@ FUN_080d1f98  entry 0x080d1f98  size 98
.thumb
.org 0xd1f98
FUN_080d1f98:
	push {r4, lr}	@ 000d1f98 10b5
.org 0xd1f9a
	adds r4, r0, #0	@ 000d1f9a 041c
.org 0xd1f9c
	bl 0x1cdbc	@ 000d1f9c 4af70eff
.org 0xd1fa0
	ldrb r1, [r4, #10]	@ 000d1fa0 a17a
.org 0xd1fa2
	movs r0, #1	@ 000d1fa2 0120
.org 0xd1fa4
	orrs r0, r1	@ 000d1fa4 0843
.org 0xd1fa6
	movs r1, #2	@ 000d1fa6 0221
.org 0xd1fa8
	orrs r0, r1	@ 000d1fa8 0843
.org 0xd1faa
	strb r0, [r4, #10]	@ 000d1faa a072
.org 0xd1fac
	adds r0, r4, #0	@ 000d1fac 201c
.org 0xd1fae
	movs r1, #11	@ 000d1fae 0b21
.org 0xd1fb0
	bl 0x1cf00	@ 000d1fb0 4af7a6ff
.org 0xd1fb4
	adds r0, r4, #0	@ 000d1fb4 201c
.org 0xd1fb6
	adds r0, #80	@ 000d1fb6 5030
.org 0xd1fb8
	movs r1, #136	@ 000d1fb8 8821
.org 0xd1fba
	lsls r1, r1, #1	@ 000d1fba 4900
.org 0xd1fbc
	strh r1, [r0, #0]	@ 000d1fbc 0180
.org 0xd1fbe
	adds r0, #2	@ 000d1fbe 0230
.org 0xd1fc0
	strh r1, [r0, #0]	@ 000d1fc0 0180
.org 0xd1fc2
	ldrb r1, [r4, #10]	@ 000d1fc2 a17a
.org 0xd1fc4
	movs r0, #16	@ 000d1fc4 1020
.org 0xd1fc6
	ands r0, r1	@ 000d1fc6 0840
.org 0xd1fc8
	cmp r0, #0	@ 000d1fc8 0028
.org 0xd1fca
	beq.n 0xd1fd8	@ 000d1fca 05d0
.org 0xd1fcc
	ldr r0, [r4, #84]	@ 000d1fcc 606d
.org 0xd1fce
	ldr r1, [pc, #4]	@ 000d1fce 0149
.org 0xd1fd0
	b.n 0xd1fde	@ 000d1fd0 05e0
.org 0xd1fd2
	.byte 0x00	@ 000d1fd2 data
.org 0xd1fd3
	.byte 0x00	@ 000d1fd3 data
.org 0xd1fd4
	.byte 0x00,0xf9,0xff,0xff	@ 000d1fd4 data
.org 0xd1fd8
	ldr r0, [r4, #84]	@ 000d1fd8 606d
.org 0xd1fda
	movs r1, #224	@ 000d1fda e021
.org 0xd1fdc
	lsls r1, r1, #3	@ 000d1fdc c900
.org 0xd1fde
	adds r0, r0, r1	@ 000d1fde 4018
.org 0xd1fe0
	str r0, [r4, #84]	@ 000d1fe0 6065
.org 0xd1fe2
	ldr r1, [pc, #28]	@ 000d1fe2 0749
.org 0xd1fe4
	ldrb r0, [r4, #9]	@ 000d1fe4 607a
.org 0xd1fe6
	lsls r0, r0, #2	@ 000d1fe6 8000
.org 0xd1fe8
	adds r0, r0, r1	@ 000d1fe8 4018
.org 0xd1fea
	movs r1, #1	@ 000d1fea 0121
.org 0xd1fec
	str r1, [r4, #12]	@ 000d1fec e160
.org 0xd1fee
	ldr r0, [r0, #0]	@ 000d1fee 0068
.org 0xd1ff0
	ldr r0, [r0, #4]	@ 000d1ff0 4068
.org 0xd1ff2
	str r0, [r4, #20]	@ 000d1ff2 6061
.org 0xd1ff4
	adds r0, r4, #0	@ 000d1ff4 201c
.org 0xd1ff6
	bl 0xd1dd0	@ 000d1ff6 fff7ebfe
