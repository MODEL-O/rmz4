@ FUN_080acca8  entry 0x080acca8  size 106
.thumb
.org 0xacca8
FUN_080acca8:
	push {r4, lr}	@ 000acca8 10b5
.org 0xaccaa
	mov ip, r0	@ 000accaa 8446
.org 0xaccac
	ldr r3, [r0, #40]	@ 000accac 836a
.org 0xaccae
	ldr r1, [pc, #100]	@ 000accae 1949
.org 0xaccb0
	ldrb r0, [r0, #9]	@ 000accb0 407a
.org 0xaccb2
	lsls r0, r0, #2	@ 000accb2 8000
.org 0xaccb4
	adds r0, r0, r1	@ 000accb4 4018
.org 0xaccb6
	movs r4, #1	@ 000accb6 0124
.org 0xaccb8
	mov r1, ip	@ 000accb8 6146
.org 0xaccba
	str r4, [r1, #12]	@ 000accba cc60
.org 0xaccbc
	ldr r0, [r0, #0]	@ 000accbc 0068
.org 0xaccbe
	ldr r0, [r0, #4]	@ 000accbe 4068
.org 0xaccc0
	str r0, [r1, #20]	@ 000accc0 4861
.org 0xaccc2
	ldrb r1, [r1, #10]	@ 000accc2 897a
.org 0xaccc4
	movs r0, #254	@ 000accc4 fe20
.org 0xaccc6
	ands r0, r1	@ 000accc6 0840
.org 0xaccc8
	movs r2, #0	@ 000accc8 0022
.org 0xaccca
	movs r1, #2	@ 000accca 0221
.org 0xacccc
	orrs r0, r1	@ 000acccc 0843
.org 0xaccce
	mov r1, ip	@ 000accce 6146
.org 0xaccd0
	strb r0, [r1, #10]	@ 000accd0 8872
.org 0xaccd2
	adds r0, r3, #0	@ 000accd2 181c
.org 0xaccd4
	adds r0, #184	@ 000accd4 b830
.org 0xaccd6
	ldr r0, [r0, #0]	@ 000accd6 0068
.org 0xaccd8
	movs r1, #240	@ 000accd8 f021
.org 0xaccda
	lsls r1, r1, #7	@ 000accda c901
.org 0xaccdc
	adds r0, r0, r1	@ 000accdc 4018
.org 0xaccde
	mov r1, ip	@ 000accde 6146
.org 0xacce0
	str r0, [r1, #84]	@ 000acce0 4865
.org 0xacce2
	adds r3, #188	@ 000acce2 bc33
.org 0xacce4
	ldr r0, [r3, #0]	@ 000acce4 1868
.org 0xacce6
	movs r1, #160	@ 000acce6 a021
.org 0xacce8
	lsls r1, r1, #7	@ 000acce8 c901
.org 0xaccea
	adds r0, r0, r1	@ 000accea 4018
.org 0xaccec
	mov r1, ip	@ 000accec 6146
.org 0xaccee
	str r0, [r1, #88]	@ 000accee 8865
.org 0xaccf0
	mov r0, ip	@ 000accf0 6046
.org 0xaccf2
	adds r0, #180	@ 000accf2 b430
.org 0xaccf4
	strb r2, [r0, #0]	@ 000accf4 0270
.org 0xaccf6
	adds r0, #1	@ 000accf6 0130
.org 0xaccf8
	strb r2, [r0, #0]	@ 000accf8 0270
.org 0xaccfa
	adds r0, #5	@ 000accfa 0530
.org 0xaccfc
	strb r2, [r0, #0]	@ 000accfc 0270
.org 0xaccfe
	adds r0, #1	@ 000accfe 0130
.org 0xacd00
	strb r2, [r0, #0]	@ 000acd00 0270
.org 0xacd02
	subs r0, #4	@ 000acd02 0438
.org 0xacd04
	strb r4, [r0, #0]	@ 000acd04 0470
.org 0xacd06
	mov r0, ip	@ 000acd06 6046
.org 0xacd08
	bl 0xacda0	@ 000acd08 00f04af8
.org 0xacd0c
	pop {r4}	@ 000acd0c 10bc
.org 0xacd0e
	pop {r0}	@ 000acd0e 01bc
.org 0xacd10
	bx r0	@ 000acd10 0047
