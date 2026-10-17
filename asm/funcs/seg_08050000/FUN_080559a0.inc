@ FUN_080559a0  entry 0x080559a0  size 114
.thumb
.org 0x559a0
FUN_080559a0:
	push {r4, lr}	@ 000559a0 10b5
.org 0x559a2
	adds r4, r0, #0	@ 000559a2 041c
.org 0x559a4
	ldrb r0, [r4, #15]	@ 000559a4 e07b
.org 0x559a6
	cmp r0, #0	@ 000559a6 0028
.org 0x559a8
	bne.n 0x559b8	@ 000559a8 06d1
.org 0x559aa
	ldr r1, [pc, #104]	@ 000559aa 1a49
.org 0x559ac
	adds r0, r4, #0	@ 000559ac 201c
.org 0x559ae
	bl 0x1cf00	@ 000559ae c7f7a7fa
.org 0x559b2
	ldrb r0, [r4, #15]	@ 000559b2 e07b
.org 0x559b4
	adds r0, #1	@ 000559b4 0130
.org 0x559b6
	strb r0, [r4, #15]	@ 000559b6 e073
.org 0x559b8
	adds r0, r4, #0	@ 000559b8 201c
.org 0x559ba
	bl 0x1cff0	@ 000559ba c7f719fb
.org 0x559be
	adds r0, r4, #0	@ 000559be 201c
.org 0x559c0
	adds r0, #116	@ 000559c0 7430
.org 0x559c2
	ldr r3, [pc, #84]	@ 000559c2 154b
.org 0x559c4
	ldrb r1, [r4, #30]	@ 000559c4 a17f
.org 0x559c6
	lsls r1, r1, #8	@ 000559c6 0902
.org 0x559c8
	adds r2, r4, #0	@ 000559c8 221c
.org 0x559ca
	adds r2, #112	@ 000559ca 7032
.org 0x559cc
	ldrb r2, [r2, #0]	@ 000559cc 1278
.org 0x559ce
	orrs r1, r2	@ 000559ce 1143
.org 0x559d0
	ldr r2, [pc, #72]	@ 000559d0 124a
.org 0x559d2
	adds r1, r1, r2	@ 000559d2 8918
.org 0x559d4
	lsls r1, r1, #2	@ 000559d4 8900
.org 0x559d6
	adds r1, r1, r3	@ 000559d6 c918
.org 0x559d8
	adds r2, r4, #0	@ 000559d8 221c
.org 0x559da
	adds r2, #113	@ 000559da 7132
.org 0x559dc
	ldrb r2, [r2, #0]	@ 000559dc 1278
.org 0x559de
	lsls r2, r2, #24	@ 000559de 1206
.org 0x559e0
	asrs r2, r2, #24	@ 000559e0 1216
.org 0x559e2
	ldr r1, [r1, #0]	@ 000559e2 0968
.org 0x559e4
	lsls r2, r2, #2	@ 000559e4 9200
.org 0x559e6
	adds r2, r2, r1	@ 000559e6 5218
.org 0x559e8
	ldr r1, [r2, #0]	@ 000559e8 1168
.org 0x559ea
	ldrb r2, [r1, #0]	@ 000559ea 0a78
.org 0x559ec
	lsls r1, r2, #1	@ 000559ec 5100
.org 0x559ee
	adds r1, r1, r2	@ 000559ee 8918
.org 0x559f0
	lsls r1, r1, #3	@ 000559f0 c900
.org 0x559f2
	ldr r2, [pc, #44]	@ 000559f2 0b4a
.org 0x559f4
	adds r1, r1, r2	@ 000559f4 8918
.org 0x559f6
	bl 0x5784	@ 000559f6 aff7c5fe
.org 0x559fa
	ldr r0, [pc, #40]	@ 000559fa 0a48
.org 0x559fc
	ldrb r1, [r0, #18]	@ 000559fc 817c
.org 0x559fe
	movs r0, #1	@ 000559fe 0120
.org 0x55a00
	ands r0, r1	@ 00055a00 0840
.org 0x55a02
	cmp r0, #0	@ 00055a02 0028
.org 0x55a04
	bne.n 0x55a0c	@ 00055a04 02d1
.org 0x55a06
	adds r0, r4, #0	@ 00055a06 201c
.org 0x55a08
	bl 0x59548	@ 00055a08 03f09efd
.org 0x55a0c
	pop {r4}	@ 00055a0c 10bc
.org 0x55a0e
	pop {r0}	@ 00055a0e 01bc
.org 0x55a10
	bx r0	@ 00055a10 0047
