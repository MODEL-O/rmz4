@ FUN_080edbd0  entry 0x080edbd0  size 70
.thumb
.org 0xedbd0
FUN_080edbd0:
	push {r4, lr}	@ 000edbd0 10b5
.org 0xedbd2
	adds r4, r0, #0	@ 000edbd2 041c
.org 0xedbd4
	ldrb r1, [r4, #10]	@ 000edbd4 a17a
.org 0xedbd6
	movs r0, #1	@ 000edbd6 0120
.org 0xedbd8
	orrs r0, r1	@ 000edbd8 0843
.org 0xedbda
	movs r1, #2	@ 000edbda 0221
.org 0xedbdc
	orrs r0, r1	@ 000edbdc 0843
.org 0xedbde
	strb r0, [r4, #10]	@ 000edbde a072
.org 0xedbe0
	adds r0, r4, #0	@ 000edbe0 201c
.org 0xedbe2
	bl 0x1cc9c	@ 000edbe2 2ff75bf8
.org 0xedbe6
	ldrb r1, [r4, #11]	@ 000edbe6 e17a
.org 0xedbe8
	movs r0, #8	@ 000edbe8 0820
.org 0xedbea
	orrs r0, r1	@ 000edbea 0843
.org 0xedbec
	strb r0, [r4, #11]	@ 000edbec e072
.org 0xedbee
	ldr r0, [pc, #40]	@ 000edbee 0a48
.org 0xedbf0
	str r0, [r4, #48]	@ 000edbf0 2063
.org 0xedbf2
	movs r2, #1	@ 000edbf2 0122
.org 0xedbf4
	strh r2, [r4, #38]	@ 000edbf4 e284
.org 0xedbf6
	ldr r1, [pc, #36]	@ 000edbf6 0949
.org 0xedbf8
	ldrb r0, [r4, #9]	@ 000edbf8 607a
.org 0xedbfa
	lsls r0, r0, #2	@ 000edbfa 8000
.org 0xedbfc
	adds r0, r0, r1	@ 000edbfc 4018
.org 0xedbfe
	str r2, [r4, #12]	@ 000edbfe e260
.org 0xedc00
	ldr r0, [r0, #0]	@ 000edc00 0068
.org 0xedc02
	ldr r0, [r0, #4]	@ 000edc02 4068
.org 0xedc04
	str r0, [r4, #20]	@ 000edc04 6061
.org 0xedc06
	ldrb r0, [r4, #17]	@ 000edc06 607c
.org 0xedc08
	strb r0, [r4, #13]	@ 000edc08 6073
.org 0xedc0a
	adds r0, r4, #0	@ 000edc0a 201c
.org 0xedc0c
	bl 0xed7c8	@ 000edc0c fff7dcfd
.org 0xedc10
	pop {r4}	@ 000edc10 10bc
.org 0xedc12
	pop {r0}	@ 000edc12 01bc
.org 0xedc14
	bx r0	@ 000edc14 0047
