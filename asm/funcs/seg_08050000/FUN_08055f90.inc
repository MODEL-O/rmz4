@ FUN_08055f90  entry 0x08055f90  size 120
.thumb
.org 0x55f90
FUN_08055f90:
	push {r4, lr}	@ 00055f90 10b5
.org 0x55f92
	adds r4, r0, #0	@ 00055f92 041c
.org 0x55f94
	ldrb r0, [r4, #15]	@ 00055f94 e07b
.org 0x55f96
	cmp r0, #0	@ 00055f96 0028
.org 0x55f98
	bne.n 0x55fac	@ 00055f98 08d1
.org 0x55f9a
	ldr r1, [pc, #108]	@ 00055f9a 1b49
.org 0x55f9c
	adds r0, r4, #0	@ 00055f9c 201c
.org 0x55f9e
	bl 0x1cf00	@ 00055f9e c6f7afff
.org 0x55fa2
	movs r0, #16	@ 00055fa2 1020
.org 0x55fa4
	strb r0, [r4, #18]	@ 00055fa4 a074
.org 0x55fa6
	ldrb r0, [r4, #15]	@ 00055fa6 e07b
.org 0x55fa8
	adds r0, #1	@ 00055fa8 0130
.org 0x55faa
	strb r0, [r4, #15]	@ 00055faa e073
.org 0x55fac
	adds r0, r4, #0	@ 00055fac 201c
.org 0x55fae
	bl 0x1cff0	@ 00055fae c7f71ff8
.org 0x55fb2
	adds r0, r4, #0	@ 00055fb2 201c
.org 0x55fb4
	adds r0, #116	@ 00055fb4 7430
.org 0x55fb6
	ldr r3, [pc, #84]	@ 00055fb6 154b
.org 0x55fb8
	ldrb r1, [r4, #30]	@ 00055fb8 a17f
.org 0x55fba
	lsls r1, r1, #8	@ 00055fba 0902
.org 0x55fbc
	adds r2, r4, #0	@ 00055fbc 221c
.org 0x55fbe
	adds r2, #112	@ 00055fbe 7032
.org 0x55fc0
	ldrb r2, [r2, #0]	@ 00055fc0 1278
.org 0x55fc2
	orrs r1, r2	@ 00055fc2 1143
.org 0x55fc4
	ldr r2, [pc, #72]	@ 00055fc4 124a
.org 0x55fc6
	adds r1, r1, r2	@ 00055fc6 8918
.org 0x55fc8
	lsls r1, r1, #2	@ 00055fc8 8900
.org 0x55fca
	adds r1, r1, r3	@ 00055fca c918
.org 0x55fcc
	adds r2, r4, #0	@ 00055fcc 221c
.org 0x55fce
	adds r2, #113	@ 00055fce 7132
.org 0x55fd0
	ldrb r2, [r2, #0]	@ 00055fd0 1278
.org 0x55fd2
	lsls r2, r2, #24	@ 00055fd2 1206
.org 0x55fd4
	asrs r2, r2, #24	@ 00055fd4 1216
.org 0x55fd6
	ldr r1, [r1, #0]	@ 00055fd6 0968
.org 0x55fd8
	lsls r2, r2, #2	@ 00055fd8 9200
.org 0x55fda
	adds r2, r2, r1	@ 00055fda 5218
.org 0x55fdc
	ldr r1, [r2, #0]	@ 00055fdc 1168
.org 0x55fde
	ldrb r2, [r1, #0]	@ 00055fde 0a78
.org 0x55fe0
	lsls r1, r2, #1	@ 00055fe0 5100
.org 0x55fe2
	adds r1, r1, r2	@ 00055fe2 8918
.org 0x55fe4
	lsls r1, r1, #3	@ 00055fe4 c900
.org 0x55fe6
	ldr r2, [pc, #44]	@ 00055fe6 0b4a
.org 0x55fe8
	adds r1, r1, r2	@ 00055fe8 8918
.org 0x55fea
	bl 0x5784	@ 00055fea aff7cbfb
.org 0x55fee
	ldrb r0, [r4, #18]	@ 00055fee a07c
.org 0x55ff0
	subs r0, #1	@ 00055ff0 0138
.org 0x55ff2
	strb r0, [r4, #18]	@ 00055ff2 a074
.org 0x55ff4
	lsls r0, r0, #24	@ 00055ff4 0006
.org 0x55ff6
	lsrs r1, r0, #24	@ 00055ff6 010e
.org 0x55ff8
	cmp r1, #0	@ 00055ff8 0029
.org 0x55ffa
	bne.n 0x56002	@ 00055ffa 02d1
.org 0x55ffc
	movs r0, #2	@ 00055ffc 0220
.org 0x55ffe
	strb r0, [r4, #14]	@ 00055ffe a073
.org 0x56000
	strb r1, [r4, #15]	@ 00056000 e173
.org 0x56002
	pop {r4}	@ 00056002 10bc
.org 0x56004
	pop {r0}	@ 00056004 01bc
.org 0x56006
	bx r0	@ 00056006 0047
