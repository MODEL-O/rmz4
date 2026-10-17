@ FUN_080aed78  entry 0x080aed78  size 166
.thumb
.org 0xaed78
FUN_080aed78:
	push {r4, r5, lr}	@ 000aed78 30b5
.org 0xaed7a
	adds r4, r0, #0	@ 000aed7a 041c
.org 0xaed7c
	ldrb r5, [r4, #14]	@ 000aed7c a57b
.org 0xaed7e
	cmp r5, #0	@ 000aed7e 002d
.org 0xaed80
	bne.n 0xaeda6	@ 000aed80 11d1
.org 0xaed82
	ldr r1, [pc, #80]	@ 000aed82 1449
.org 0xaed84
	bl 0x1cf00	@ 000aed84 6ef7bcf8
.org 0xaed88
	adds r0, r4, #0	@ 000aed88 201c
.org 0xaed8a
	adds r0, #140	@ 000aed8a 8c30
.org 0xaed8c
	str r5, [r0, #0]	@ 000aed8c 0560
.org 0xaed8e
	adds r0, #4	@ 000aed8e 0430
.org 0xaed90
	str r5, [r0, #0]	@ 000aed90 0560
.org 0xaed92
	adds r0, #4	@ 000aed92 0430
.org 0xaed94
	strb r5, [r0, #0]	@ 000aed94 0570
.org 0xaed96
	ldrb r1, [r4, #10]	@ 000aed96 a17a
.org 0xaed98
	movs r0, #251	@ 000aed98 fb20
.org 0xaed9a
	ands r0, r1	@ 000aed9a 0840
.org 0xaed9c
	strb r0, [r4, #10]	@ 000aed9c a072
.org 0xaed9e
	strb r5, [r4, #18]	@ 000aed9e a574
.org 0xaeda0
	ldrb r0, [r4, #14]	@ 000aeda0 a07b
.org 0xaeda2
	adds r0, #1	@ 000aeda2 0130
.org 0xaeda4
	strb r0, [r4, #14]	@ 000aeda4 a073
.org 0xaeda6
	adds r0, r4, #0	@ 000aeda6 201c
.org 0xaeda8
	bl 0x1cff0	@ 000aeda8 6ef722f9
.org 0xaedac
	ldr r0, [r4, #84]	@ 000aedac 606d
.org 0xaedae
	ldr r1, [r4, #92]	@ 000aedae e16d
.org 0xaedb0
	adds r0, r0, r1	@ 000aedb0 4018
.org 0xaedb2
	str r0, [r4, #84]	@ 000aedb2 6065
.org 0xaedb4
	ldr r0, [r4, #88]	@ 000aedb4 a06d
.org 0xaedb6
	ldr r1, [r4, #96]	@ 000aedb6 216e
.org 0xaedb8
	adds r0, r0, r1	@ 000aedb8 4018
.org 0xaedba
	str r0, [r4, #88]	@ 000aedba a065
.org 0xaedbc
	ldrb r1, [r4, #18]	@ 000aedbc a17c
.org 0xaedbe
	adds r0, r1, #1	@ 000aedbe 481c
.org 0xaedc0
	strb r0, [r4, #18]	@ 000aedc0 a074
.org 0xaedc2
	movs r0, #1	@ 000aedc2 0120
.org 0xaedc4
	ands r0, r1	@ 000aedc4 0840
.org 0xaedc6
	cmp r0, #0	@ 000aedc6 0028
.org 0xaedc8
	beq.n 0xaedd8	@ 000aedc8 06d0
.org 0xaedca
	ldrb r1, [r4, #10]	@ 000aedca a17a
.org 0xaedcc
	movs r0, #1	@ 000aedcc 0120
.org 0xaedce
	orrs r0, r1	@ 000aedce 0843
.org 0xaedd0
	b.n 0xaedde	@ 000aedd0 05e0
.org 0xaedd2
	.byte 0x00	@ 000aedd2 data
.org 0xaedd3
	.byte 0x00	@ 000aedd3 data
.org 0xaedd4
	.byte 0x01,0xd6,0x00,0x00	@ 000aedd4 data
.org 0xaedd8
	ldrb r1, [r4, #10]	@ 000aedd8 a17a
.org 0xaedda
	movs r0, #254	@ 000aedda fe20
.org 0xaeddc
	ands r0, r1	@ 000aeddc 0840
.org 0xaedde
	strb r0, [r4, #10]	@ 000aedde a072
.org 0xaede0
	adds r0, r4, #0	@ 000aede0 201c
.org 0xaede2
	adds r0, #115	@ 000aede2 7330
.org 0xaede4
	ldrb r3, [r0, #0]	@ 000aede4 0378
.org 0xaede6
	cmp r3, #3	@ 000aede6 032b
.org 0xaede8
	bne.n 0xaee1e	@ 000aede8 19d1
.org 0xaedea
	ldrb r1, [r4, #10]	@ 000aedea a17a
.org 0xaedec
	movs r0, #254	@ 000aedec fe20
.org 0xaedee
	ands r0, r1	@ 000aedee 0840
.org 0xaedf0
	movs r2, #0	@ 000aedf0 0022
.org 0xaedf2
	movs r1, #253	@ 000aedf2 fd21
.org 0xaedf4
	ands r0, r1	@ 000aedf4 0840
.org 0xaedf6
	strb r0, [r4, #10]	@ 000aedf6 a072
.org 0xaedf8
	adds r0, r4, #0	@ 000aedf8 201c
.org 0xaedfa
	adds r0, #140	@ 000aedfa 8c30
.org 0xaedfc
	str r2, [r0, #0]	@ 000aedfc 0260
.org 0xaedfe
	adds r0, #4	@ 000aedfe 0430
.org 0xaee00
	str r2, [r0, #0]	@ 000aee00 0260
.org 0xaee02
	adds r0, #4	@ 000aee02 0430
.org 0xaee04
	strb r2, [r0, #0]	@ 000aee04 0270
.org 0xaee06
	ldrb r1, [r4, #10]	@ 000aee06 a17a
.org 0xaee08
	movs r0, #251	@ 000aee08 fb20
.org 0xaee0a
	ands r0, r1	@ 000aee0a 0840
.org 0xaee0c
	strb r0, [r4, #10]	@ 000aee0c a072
.org 0xaee0e
	ldr r1, [pc, #20]	@ 000aee0e 0549
.org 0xaee10
	ldrb r0, [r4, #9]	@ 000aee10 607a
.org 0xaee12
	lsls r0, r0, #2	@ 000aee12 8000
.org 0xaee14
	adds r0, r0, r1	@ 000aee14 4018
.org 0xaee16
	str r3, [r4, #12]	@ 000aee16 e360
.org 0xaee18
	ldr r0, [r0, #0]	@ 000aee18 0068
.org 0xaee1a
	ldr r0, [r0, #12]	@ 000aee1a c068
.org 0xaee1c
	str r0, [r4, #20]	@ 000aee1c 6061
