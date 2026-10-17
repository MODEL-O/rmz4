@ FUN_080bde54  entry 0x080bde54  size 94
.thumb
.org 0xbde54
FUN_080bde54:
	push {r4, lr}	@ 000bde54 10b5
.org 0xbde56
	adds r4, r0, #0	@ 000bde56 041c
.org 0xbde58
	bl 0x1cff0	@ 000bde58 5ff7caf8
.org 0xbde5c
	ldr r0, [r4, #84]	@ 000bde5c 606d
.org 0xbde5e
	ldr r1, [r4, #92]	@ 000bde5e e16d
.org 0xbde60
	adds r0, r0, r1	@ 000bde60 4018
.org 0xbde62
	str r0, [r4, #84]	@ 000bde62 6065
.org 0xbde64
	ldr r1, [r4, #88]	@ 000bde64 a16d
.org 0xbde66
	ldr r2, [r4, #96]	@ 000bde66 226e
.org 0xbde68
	adds r1, r1, r2	@ 000bde68 8918
.org 0xbde6a
	str r1, [r4, #88]	@ 000bde6a a165
.org 0xbde6c
	bl 0x7c7c	@ 000bde6c 49f706ff
.org 0xbde70
	lsls r0, r0, #16	@ 000bde70 0004
.org 0xbde72
	cmp r0, #0	@ 000bde72 0028
.org 0xbde74
	beq.n 0xbdeac	@ 000bde74 1ad0
.org 0xbde76
	ldrb r1, [r4, #10]	@ 000bde76 a17a
.org 0xbde78
	movs r0, #254	@ 000bde78 fe20
.org 0xbde7a
	ands r0, r1	@ 000bde7a 0840
.org 0xbde7c
	movs r2, #0	@ 000bde7c 0022
.org 0xbde7e
	movs r1, #253	@ 000bde7e fd21
.org 0xbde80
	ands r0, r1	@ 000bde80 0840
.org 0xbde82
	strb r0, [r4, #10]	@ 000bde82 a072
.org 0xbde84
	adds r0, r4, #0	@ 000bde84 201c
.org 0xbde86
	adds r0, #140	@ 000bde86 8c30
.org 0xbde88
	str r2, [r0, #0]	@ 000bde88 0260
.org 0xbde8a
	adds r0, #4	@ 000bde8a 0430
.org 0xbde8c
	str r2, [r0, #0]	@ 000bde8c 0260
.org 0xbde8e
	adds r0, #4	@ 000bde8e 0430
.org 0xbde90
	strb r2, [r0, #0]	@ 000bde90 0270
.org 0xbde92
	ldrb r1, [r4, #10]	@ 000bde92 a17a
.org 0xbde94
	movs r0, #251	@ 000bde94 fb20
.org 0xbde96
	ands r0, r1	@ 000bde96 0840
.org 0xbde98
	strb r0, [r4, #10]	@ 000bde98 a072
.org 0xbde9a
	ldr r1, [pc, #24]	@ 000bde9a 0649
.org 0xbde9c
	ldrb r0, [r4, #9]	@ 000bde9c 607a
.org 0xbde9e
	lsls r0, r0, #2	@ 000bde9e 8000
.org 0xbdea0
	adds r0, r0, r1	@ 000bdea0 4018
.org 0xbdea2
	movs r1, #3	@ 000bdea2 0321
.org 0xbdea4
	str r1, [r4, #12]	@ 000bdea4 e160
.org 0xbdea6
	ldr r0, [r0, #0]	@ 000bdea6 0068
.org 0xbdea8
	ldr r0, [r0, #12]	@ 000bdea8 c068
.org 0xbdeaa
	str r0, [r4, #20]	@ 000bdeaa 6061
.org 0xbdeac
	pop {r4}	@ 000bdeac 10bc
.org 0xbdeae
	pop {r0}	@ 000bdeae 01bc
.org 0xbdeb0
	bx r0	@ 000bdeb0 0047
