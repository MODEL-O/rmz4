@ FUN_0803695c  entry 0x0803695c  size 78
.thumb
.org 0x3695c
FUN_0803695c:
	push {r4, r5, lr}	@ 0003695c 30b5
.org 0x3695e
	adds r5, r0, #0	@ 0003695e 051c
.org 0x36960
	ldr r4, [pc, #44]	@ 00036960 0b4c
.org 0x36962
	adds r1, r4, #0	@ 00036962 211c
.org 0x36964
	bl 0x3a3b0	@ 00036964 03f024fd
.org 0x36968
	adds r0, r5, #0	@ 00036968 281c
.org 0x3696a
	adds r1, r4, #0	@ 0003696a 211c
.org 0x3696c
	bl 0x3a3f0	@ 0003696c 03f040fd
.org 0x36970
	adds r0, r5, #0	@ 00036970 281c
.org 0x36972
	adds r0, #115	@ 00036972 7330
.org 0x36974
	ldrb r0, [r0, #0]	@ 00036974 0078
.org 0x36976
	cmp r0, #3	@ 00036976 0328
.org 0x36978
	bne.n 0x369ae	@ 00036978 19d1
.org 0x3697a
	ldrb r0, [r5, #14]	@ 0003697a a87b
.org 0x3697c
	cmp r0, #1	@ 0003697c 0128
.org 0x3697e
	bne.n 0x36998	@ 0003697e 0bd1
.org 0x36980
	ldr r1, [pc, #16]	@ 00036980 0449
.org 0x36982
	adds r0, r5, #0	@ 00036982 281c
.org 0x36984
	movs r2, #2	@ 00036984 0222
.org 0x36986
	movs r3, #1	@ 00036986 0123
.org 0x36988
	bl 0x1cfc8	@ 00036988 e6f71efb
.org 0x3698c
	b.n 0x369a4	@ 0003698c 0ae0
.org 0x3698e
	.byte 0x00	@ 0003698e data
.org 0x3698f
	.byte 0x00	@ 0003698f data
.org 0x36990
	.byte 0x01,0x22,0x00,0x00	@ 00036990 data
.org 0x36994
	.byte 0x03,0x04,0x00,0x00	@ 00036994 data
.org 0x36998
	ldr r1, [pc, #24]	@ 00036998 0649
.org 0x3699a
	adds r0, r5, #0	@ 0003699a 281c
.org 0x3699c
	movs r2, #2	@ 0003699c 0222
.org 0x3699e
	movs r3, #1	@ 0003699e 0123
.org 0x369a0
	bl 0x1cfc8	@ 000369a0 e6f712fb
.org 0x369a4
	movs r0, #128	@ 000369a4 8020
.org 0x369a6
	lsls r0, r0, #1	@ 000369a6 4000
.org 0x369a8
	adds r1, r5, r0	@ 000369a8 2918
