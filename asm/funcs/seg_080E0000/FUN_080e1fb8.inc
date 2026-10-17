@ FUN_080e1fb8  entry 0x080e1fb8  size 124
.thumb
.org 0xe1fb8
FUN_080e1fb8:
	push {r4, r5, r6, lr}	@ 000e1fb8 70b5
.org 0xe1fba
	adds r4, r0, #0	@ 000e1fba 041c
.org 0xe1fbc
	adds r6, r4, #0	@ 000e1fbc 261c
.org 0xe1fbe
	adds r6, #84	@ 000e1fbe 5436
.org 0xe1fc0
	ldr r2, [pc, #60]	@ 000e1fc0 0f4a
.org 0xe1fc2
	ldr r1, [r2, #0]	@ 000e1fc2 1168
.org 0xe1fc4
	ldr r0, [pc, #60]	@ 000e1fc4 0f48
.org 0xe1fc6
	muls r0, r1	@ 000e1fc6 4843
.org 0xe1fc8
	ldr r1, [pc, #60]	@ 000e1fc8 0f49
.org 0xe1fca
	adds r0, r0, r1	@ 000e1fca 4018
.org 0xe1fcc
	lsls r0, r0, #1	@ 000e1fcc 4000
.org 0xe1fce
	lsrs r1, r0, #1	@ 000e1fce 4108
.org 0xe1fd0
	str r1, [r2, #0]	@ 000e1fd0 1160
.org 0xe1fd2
	lsrs r0, r0, #17	@ 000e1fd2 400c
.org 0xe1fd4
	movs r3, #1	@ 000e1fd4 0123
.org 0xe1fd6
	ands r0, r3	@ 000e1fd6 1840
.org 0xe1fd8
	lsls r1, r0, #3	@ 000e1fd8 c100
.org 0xe1fda
	subs r1, r1, r0	@ 000e1fda 091a
.org 0xe1fdc
	lsls r1, r1, #2	@ 000e1fdc 8900
.org 0xe1fde
	ldr r0, [pc, #44]	@ 000e1fde 0b48
.org 0xe1fe0
	adds r5, r1, r0	@ 000e1fe0 0d18
.org 0xe1fe2
	ldrb r1, [r4, #10]	@ 000e1fe2 a17a
.org 0xe1fe4
	movs r2, #16	@ 000e1fe4 1022
.org 0xe1fe6
	adds r0, r2, #0	@ 000e1fe6 101c
.org 0xe1fe8
	ands r0, r1	@ 000e1fe8 0840
.org 0xe1fea
	lsls r0, r0, #24	@ 000e1fea 0006
.org 0xe1fec
	lsrs r0, r0, #24	@ 000e1fec 000e
.org 0xe1fee
	negs r0, r0	@ 000e1fee 4042
.org 0xe1ff0
	asrs r1, r0, #31	@ 000e1ff0 c117
.org 0xe1ff2
	ands r1, r2	@ 000e1ff2 1140
.org 0xe1ff4
	ldr r0, [r4, #92]	@ 000e1ff4 e06d
.org 0xe1ff6
	cmp r0, #0	@ 000e1ff6 0028
.org 0xe1ff8
	ble.n 0xe2010	@ 000e1ff8 0add
.org 0xe1ffa
	orrs r3, r1	@ 000e1ffa 0b43
.org 0xe1ffc
	b.n 0xe2014	@ 000e1ffc 0ae0
.org 0xe1ffe
	.byte 0x00	@ 000e1ffe data
.org 0xe1fff
	.byte 0x00	@ 000e1fff data
.org 0xe2000
	.byte 0x38,0xdc,0x02,0x02	@ 000e2000 data
.org 0xe2004
	.byte 0xfd,0x43,0x03,0x00	@ 000e2004 data
.org 0xe2008
	.byte 0xc3,0x9e,0x26,0x00	@ 000e2008 data
.org 0xe200c
	.byte 0x6c,0x1f,0x86,0x08	@ 000e200c data
.org 0xe2010
	lsls r0, r1, #24	@ 000e2010 0806
.org 0xe2012
	lsrs r3, r0, #24	@ 000e2012 030e
.org 0xe2014
	adds r0, r6, #0	@ 000e2014 301c
.org 0xe2016
	adds r1, r5, #0	@ 000e2016 291c
.org 0xe2018
	movs r2, #0	@ 000e2018 0022
.org 0xe201a
	bl 0xd4c8c	@ 000e201a f2f737fe
.org 0xe201e
	adds r1, r4, #0	@ 000e201e 211c
.org 0xe2020
	adds r1, #84	@ 000e2020 5431
.org 0xe2022
	movs r0, #1	@ 000e2022 0120
.org 0xe2024
	bl 0xd0c88	@ 000e2024 eef730fe
.org 0xe2028
	movs r0, #42	@ 000e2028 2a20
.org 0xe202a
	bl 0x2b10	@ 000e202a 20f771fd
.org 0xe202e
	ldr r1, [pc, #24]	@ 000e202e 0649
.org 0xe2030
	ldrb r0, [r4, #9]	@ 000e2030 607a
.org 0xe2032
	lsls r0, r0, #2	@ 000e2032 8000
