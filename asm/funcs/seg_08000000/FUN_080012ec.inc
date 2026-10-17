@ FUN_080012ec  entry 0x080012ec  size 50
.thumb
.org 0x12ec
FUN_080012ec:
	push {lr}	@ 000012ec 00b5
.org 0x12ee
	adds r3, r0, #0	@ 000012ee 031c
.org 0x12f0
	ldr r2, [pc, #44]	@ 000012f0 0b4a
.org 0x12f2
	ldr r1, [pc, #48]	@ 000012f2 0c49
.org 0x12f4
	adds r0, r2, r1	@ 000012f4 5018
.org 0x12f6
	ldr r1, [r0, #0]	@ 000012f6 0168
.org 0x12f8
	lsls r0, r1, #1	@ 000012f8 4800
.org 0x12fa
	adds r0, r0, r1	@ 000012fa 4018
.org 0x12fc
	lsls r0, r0, #3	@ 000012fc c000
.org 0x12fe
	ldr r1, [pc, #40]	@ 000012fe 0a49
.org 0x1300
	adds r2, r2, r1	@ 00001300 5218
.org 0x1302
	adds r1, r0, r2	@ 00001302 8118
.org 0x1304
	cmp r3, #0	@ 00001304 002b
.org 0x1306
	beq.n 0x131a	@ 00001306 08d0
.org 0x1308
	strh r3, [r1, #2]	@ 00001308 4b80
.org 0x130a
	movs r0, #4	@ 0000130a 0420
.org 0x130c
	strb r0, [r1, #0]	@ 0000130c 0870
.org 0x130e
	adds r0, r1, #4	@ 0000130e 081d
.org 0x1310
	adds r1, #8	@ 00001310 0831
.org 0x1312
	ldr r2, [pc, #24]	@ 00001312 064a
.org 0x1314
	ldr r2, [r2, #0]	@ 00001314 1268
.org 0x1316
	bl 0x300	@ 00001316 fef7f3ff
.org 0x131a
	pop {r0}	@ 0000131a 01bc
.org 0x131c
	bx r0	@ 0000131c 0047
