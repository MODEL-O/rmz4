@ FUN_080bcca4  entry 0x080bcca4  size 140
.thumb
.org 0xbcca4
FUN_080bcca4:
	push {r4, lr}	@ 000bcca4 10b5
.org 0xbcca6
	adds r1, r0, #0	@ 000bcca6 011c
.org 0xbcca8
	ldr r2, [r1, #20]	@ 000bcca8 4a69
.org 0xbccaa
	movs r4, #1	@ 000bccaa 0124
.org 0xbccac
	adds r0, r2, #0	@ 000bccac 101c
.org 0xbccae
	ands r0, r4	@ 000bccae 2040
.org 0xbccb0
	cmp r0, #0	@ 000bccb0 0028
.org 0xbccb2
	beq.n 0xbcd2a	@ 000bccb2 3ad0
.org 0xbccb4
	ldr r3, [r1, #44]	@ 000bccb4 cb6a
.org 0xbccb6
	movs r0, #128	@ 000bccb6 8020
.org 0xbccb8
	lsls r0, r0, #10	@ 000bccb8 8002
.org 0xbccba
	ands r2, r0	@ 000bccba 0240
.org 0xbccbc
	cmp r2, #0	@ 000bccbc 002a
.org 0xbccbe
	beq.n 0xbcd2a	@ 000bccbe 34d0
.org 0xbccc0
	ldr r2, [pc, #108]	@ 000bccc0 1b4a
.org 0xbccc2
	ldr r1, [r2, #0]	@ 000bccc2 1168
.org 0xbccc4
	ldr r0, [pc, #108]	@ 000bccc4 1b48
.org 0xbccc6
	muls r0, r1	@ 000bccc6 4843
.org 0xbccc8
	ldr r1, [pc, #108]	@ 000bccc8 1b49
.org 0xbccca
	adds r0, r0, r1	@ 000bccca 4018
.org 0xbcccc
	lsls r0, r0, #1	@ 000bcccc 4000
.org 0xbccce
	lsrs r1, r0, #1	@ 000bccce 4108
.org 0xbccd0
	str r1, [r2, #0]	@ 000bccd0 1160
.org 0xbccd2
	lsrs r0, r0, #17	@ 000bccd2 400c
.org 0xbccd4
	movs r1, #15	@ 000bccd4 0f21
.org 0xbccd6
	ands r0, r1	@ 000bccd6 0840
.org 0xbccd8
	movs r2, #80	@ 000bccd8 5022
.org 0xbccda
	adds r1, r3, #0	@ 000bccda 191c
.org 0xbccdc
	adds r1, #184	@ 000bccdc b831
.org 0xbccde
	strb r4, [r1, #0]	@ 000bccde 0c70
.org 0xbcce0
	ldr r1, [pc, #88]	@ 000bcce0 1649
.org 0xbcce2
	orrs r0, r2	@ 000bcce2 1043
.org 0xbcce4
	lsls r0, r0, #1	@ 000bcce4 4000
.org 0xbcce6
	adds r0, r0, r1	@ 000bcce6 4018
.org 0xbcce8
	movs r2, #0	@ 000bcce8 0022
.org 0xbccea
	ldrsh r1, [r0, r2]	@ 000bccea 815e
.org 0xbccec
	lsls r0, r1, #1	@ 000bccec 4800
.org 0xbccee
	adds r0, r0, r1	@ 000bccee 4018
.org 0xbccf0
	str r0, [r3, #92]	@ 000bccf0 d865
.org 0xbccf2
	str r0, [r3, #96]	@ 000bccf2 1866
.org 0xbccf4
	lsls r0, r0, #8	@ 000bccf4 0002
.org 0xbccf6
	negs r2, r0	@ 000bccf6 4242
.org 0xbccf8
	adds r0, r2, #0	@ 000bccf8 101c
.org 0xbccfa
	cmp r2, #0	@ 000bccfa 002a
.org 0xbccfc
	bge.n 0xbcd00	@ 000bccfc 00da
.org 0xbccfe
	adds r0, #255	@ 000bccfe ff30
.org 0xbcd00
	asrs r4, r0, #8	@ 000bcd00 0412
.org 0xbcd02
	str r4, [r3, #96]	@ 000bcd02 1c66
.org 0xbcd04
	ldrb r1, [r3, #10]	@ 000bcd04 997a
.org 0xbcd06
	movs r0, #16	@ 000bcd06 1020
.org 0xbcd08
	ands r0, r1	@ 000bcd08 0840
.org 0xbcd0a
	cmp r0, #0	@ 000bcd0a 0028
.org 0xbcd0c
	bne.n 0xbcd10	@ 000bcd0c 00d1
.org 0xbcd0e
	str r4, [r3, #92]	@ 000bcd0e dc65
.org 0xbcd10
	ldr r0, [r3, #40]	@ 000bcd10 986a
.org 0xbcd12
	ldr r2, [pc, #44]	@ 000bcd12 0b4a
.org 0xbcd14
	adds r1, r0, r2	@ 000bcd14 8118
.org 0xbcd16
	ldr r0, [r1, #60]	@ 000bcd16 c86b
.org 0xbcd18
	cmp r0, #1	@ 000bcd18 0128
.org 0xbcd1a
	bne.n 0xbcd2a	@ 000bcd1a 06d1
.org 0xbcd1c
	ldr r0, [r1, #8]	@ 000bcd1c 8868
.org 0xbcd1e
	adds r0, #10	@ 000bcd1e 0a30
.org 0xbcd20
	str r0, [r1, #8]	@ 000bcd20 8860
.org 0xbcd22
	movs r0, #210	@ 000bcd22 d220
.org 0xbcd24
	lsls r0, r0, #1	@ 000bcd24 4000
.org 0xbcd26
	bl 0x2b10	@ 000bcd26 45f7f3fe
.org 0xbcd2a
	pop {r4}	@ 000bcd2a 10bc
.org 0xbcd2c
	pop {r0}	@ 000bcd2c 01bc
.org 0xbcd2e
	bx r0	@ 000bcd2e 0047
