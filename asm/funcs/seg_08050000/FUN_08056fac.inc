@ FUN_08056fac  entry 0x08056fac  size 120
.thumb
.org 0x56fac
FUN_08056fac:
	push {r4, lr}	@ 00056fac 10b5
.org 0x56fae
	adds r4, r0, #0	@ 00056fae 041c
.org 0x56fb0
	ldrb r0, [r4, #15]	@ 00056fb0 e07b
.org 0x56fb2
	cmp r0, #0	@ 00056fb2 0028
.org 0x56fb4
	bne.n 0x56fc8	@ 00056fb4 08d1
.org 0x56fb6
	ldr r1, [pc, #108]	@ 00056fb6 1b49
.org 0x56fb8
	adds r0, r4, #0	@ 00056fb8 201c
.org 0x56fba
	bl 0x1cf00	@ 00056fba c5f7a1ff
.org 0x56fbe
	movs r0, #16	@ 00056fbe 1020
.org 0x56fc0
	strb r0, [r4, #18]	@ 00056fc0 a074
.org 0x56fc2
	ldrb r0, [r4, #15]	@ 00056fc2 e07b
.org 0x56fc4
	adds r0, #1	@ 00056fc4 0130
.org 0x56fc6
	strb r0, [r4, #15]	@ 00056fc6 e073
.org 0x56fc8
	adds r0, r4, #0	@ 00056fc8 201c
.org 0x56fca
	bl 0x1cff0	@ 00056fca c6f711f8
.org 0x56fce
	adds r0, r4, #0	@ 00056fce 201c
.org 0x56fd0
	adds r0, #116	@ 00056fd0 7430
.org 0x56fd2
	ldr r3, [pc, #84]	@ 00056fd2 154b
.org 0x56fd4
	ldrb r1, [r4, #30]	@ 00056fd4 a17f
.org 0x56fd6
	lsls r1, r1, #8	@ 00056fd6 0902
.org 0x56fd8
	adds r2, r4, #0	@ 00056fd8 221c
.org 0x56fda
	adds r2, #112	@ 00056fda 7032
.org 0x56fdc
	ldrb r2, [r2, #0]	@ 00056fdc 1278
.org 0x56fde
	orrs r1, r2	@ 00056fde 1143
.org 0x56fe0
	ldr r2, [pc, #72]	@ 00056fe0 124a
.org 0x56fe2
	adds r1, r1, r2	@ 00056fe2 8918
.org 0x56fe4
	lsls r1, r1, #2	@ 00056fe4 8900
.org 0x56fe6
	adds r1, r1, r3	@ 00056fe6 c918
.org 0x56fe8
	adds r2, r4, #0	@ 00056fe8 221c
.org 0x56fea
	adds r2, #113	@ 00056fea 7132
.org 0x56fec
	ldrb r2, [r2, #0]	@ 00056fec 1278
.org 0x56fee
	lsls r2, r2, #24	@ 00056fee 1206
.org 0x56ff0
	asrs r2, r2, #24	@ 00056ff0 1216
.org 0x56ff2
	ldr r1, [r1, #0]	@ 00056ff2 0968
.org 0x56ff4
	lsls r2, r2, #2	@ 00056ff4 9200
.org 0x56ff6
	adds r2, r2, r1	@ 00056ff6 5218
.org 0x56ff8
	ldr r1, [r2, #0]	@ 00056ff8 1168
.org 0x56ffa
	ldrb r2, [r1, #0]	@ 00056ffa 0a78
.org 0x56ffc
	lsls r1, r2, #1	@ 00056ffc 5100
.org 0x56ffe
	adds r1, r1, r2	@ 00056ffe 8918
.org 0x57000
	lsls r1, r1, #3	@ 00057000 c900
.org 0x57002
	ldr r2, [pc, #44]	@ 00057002 0b4a
.org 0x57004
	adds r1, r1, r2	@ 00057004 8918
.org 0x57006
	bl 0x5784	@ 00057006 aef7bdfb
.org 0x5700a
	ldrb r0, [r4, #18]	@ 0005700a a07c
.org 0x5700c
	subs r0, #1	@ 0005700c 0138
.org 0x5700e
	strb r0, [r4, #18]	@ 0005700e a074
.org 0x57010
	lsls r0, r0, #24	@ 00057010 0006
.org 0x57012
	lsrs r1, r0, #24	@ 00057012 010e
.org 0x57014
	cmp r1, #0	@ 00057014 0029
.org 0x57016
	bne.n 0x5701e	@ 00057016 02d1
.org 0x57018
	movs r0, #2	@ 00057018 0220
.org 0x5701a
	strb r0, [r4, #14]	@ 0005701a a073
.org 0x5701c
	strb r1, [r4, #15]	@ 0005701c e173
.org 0x5701e
	pop {r4}	@ 0005701e 10bc
.org 0x57020
	pop {r0}	@ 00057020 01bc
.org 0x57022
	bx r0	@ 00057022 0047
