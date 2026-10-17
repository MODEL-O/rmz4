@ FUN_0810000c  entry 0x0810000c  size 58
.thumb
.org 0x10000c
FUN_0810000c:
	push {r4, r5, lr}	@ 0010000c 30b5
.org 0x10000e
	adds r4, r0, #0	@ 0010000e 041c
.org 0x100010
	ldrb r5, [r4, #14]	@ 00100010 a57b
.org 0x100012
	cmp r5, #0	@ 00100012 002d
.org 0x100014
	bne.n 0x10003a	@ 00100014 11d1
.org 0x100016
	movs r1, #176	@ 00100016 b021
.org 0x100018
	lsls r1, r1, #8	@ 00100018 0902
.org 0x10001a
	bl 0x1cf00	@ 0010001a 1cf771ff
.org 0x10001e
	adds r0, r4, #0	@ 0010001e 201c
.org 0x100020
	adds r0, #140	@ 00100020 8c30
.org 0x100022
	str r5, [r0, #0]	@ 00100022 0560
.org 0x100024
	adds r0, #4	@ 00100024 0430
.org 0x100026
	str r5, [r0, #0]	@ 00100026 0560
.org 0x100028
	adds r0, #4	@ 00100028 0430
.org 0x10002a
	strb r5, [r0, #0]	@ 0010002a 0570
.org 0x10002c
	ldrb r1, [r4, #10]	@ 0010002c a17a
.org 0x10002e
	movs r0, #251	@ 0010002e fb20
.org 0x100030
	ands r0, r1	@ 00100030 0840
.org 0x100032
	strb r0, [r4, #10]	@ 00100032 a072
.org 0x100034
	ldrb r0, [r4, #14]	@ 00100034 a07b
.org 0x100036
	adds r0, #1	@ 00100036 0130
.org 0x100038
	strb r0, [r4, #14]	@ 00100038 a073
.org 0x10003a
	adds r0, r4, #0	@ 0010003a 201c
.org 0x10003c
	bl 0x1cff0	@ 0010003c 1cf7d8ff
.org 0x100040
	pop {r4, r5}	@ 00100040 30bc
.org 0x100042
	pop {r0}	@ 00100042 01bc
.org 0x100044
	bx r0	@ 00100044 0047
