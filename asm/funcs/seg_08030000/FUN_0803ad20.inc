@ FUN_0803ad20  entry 0x0803ad20  size 86
.thumb
.org 0x3ad20
FUN_0803ad20:
	push {lr}	@ 0003ad20 00b5
.org 0x3ad22
	adds r3, r0, #0	@ 0003ad22 031c
.org 0x3ad24
	ldr r0, [pc, #80]	@ 0003ad24 1448
.org 0x3ad26
	ldr r1, [pc, #84]	@ 0003ad26 1549
.org 0x3ad28
	adds r0, r0, r1	@ 0003ad28 4018
.org 0x3ad2a
	ldr r0, [r0, #0]	@ 0003ad2a 0068
.org 0x3ad2c
	movs r1, #173	@ 0003ad2c ad21
.org 0x3ad2e
	lsls r1, r1, #1	@ 0003ad2e 4900
.org 0x3ad30
	adds r0, r0, r1	@ 0003ad30 4018
.org 0x3ad32
	ldrh r1, [r0, #0]	@ 0003ad32 0188
.org 0x3ad34
	movs r0, #128	@ 0003ad34 8020
.org 0x3ad36
	ands r0, r1	@ 0003ad36 0840
.org 0x3ad38
	cmp r0, #0	@ 0003ad38 0028
.org 0x3ad3a
	beq.n 0x3ad72	@ 0003ad3a 1ad0
.org 0x3ad3c
	ldrb r1, [r3, #10]	@ 0003ad3c 997a
.org 0x3ad3e
	movs r0, #254	@ 0003ad3e fe20
.org 0x3ad40
	ands r0, r1	@ 0003ad40 0840
.org 0x3ad42
	movs r2, #0	@ 0003ad42 0022
.org 0x3ad44
	movs r1, #253	@ 0003ad44 fd21
.org 0x3ad46
	ands r0, r1	@ 0003ad46 0840
.org 0x3ad48
	strb r0, [r3, #10]	@ 0003ad48 9872
.org 0x3ad4a
	adds r0, r3, #0	@ 0003ad4a 181c
.org 0x3ad4c
	adds r0, #140	@ 0003ad4c 8c30
.org 0x3ad4e
	str r2, [r0, #0]	@ 0003ad4e 0260
.org 0x3ad50
	adds r0, #4	@ 0003ad50 0430
.org 0x3ad52
	str r2, [r0, #0]	@ 0003ad52 0260
.org 0x3ad54
	adds r0, #4	@ 0003ad54 0430
.org 0x3ad56
	strb r2, [r0, #0]	@ 0003ad56 0270
.org 0x3ad58
	ldrb r1, [r3, #10]	@ 0003ad58 997a
.org 0x3ad5a
	movs r0, #251	@ 0003ad5a fb20
.org 0x3ad5c
	ands r0, r1	@ 0003ad5c 0840
.org 0x3ad5e
	strb r0, [r3, #10]	@ 0003ad5e 9872
.org 0x3ad60
	ldr r1, [pc, #28]	@ 0003ad60 0749
.org 0x3ad62
	ldrb r0, [r3, #9]	@ 0003ad62 587a
.org 0x3ad64
	lsls r0, r0, #2	@ 0003ad64 8000
.org 0x3ad66
	adds r0, r0, r1	@ 0003ad66 4018
.org 0x3ad68
	movs r1, #3	@ 0003ad68 0321
.org 0x3ad6a
	str r1, [r3, #12]	@ 0003ad6a d960
.org 0x3ad6c
	ldr r0, [r0, #0]	@ 0003ad6c 0068
.org 0x3ad6e
	ldr r0, [r0, #12]	@ 0003ad6e c068
.org 0x3ad70
	str r0, [r3, #20]	@ 0003ad70 5861
.org 0x3ad72
	pop {r0}	@ 0003ad72 01bc
.org 0x3ad74
	bx r0	@ 0003ad74 0047
