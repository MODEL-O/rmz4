@ FUN_080bfc44  entry 0x080bfc44  size 200
.thumb
.org 0xbfc44
FUN_080bfc44:
	push {r4, r5, r6, r7, lr}	@ 000bfc44 f0b5
.org 0xbfc46
	sub sp, #8	@ 000bfc46 82b0
.org 0xbfc48
	adds r4, r0, #0	@ 000bfc48 041c
.org 0xbfc4a
	ldr r6, [r4, #40]	@ 000bfc4a a66a
.org 0xbfc4c
	movs r7, #1	@ 000bfc4c 0127
.org 0xbfc4e
	ldrb r5, [r4, #15]	@ 000bfc4e e57b
.org 0xbfc50
	cmp r5, #0	@ 000bfc50 002d
.org 0xbfc52
	bne.n 0xbfc64	@ 000bfc52 07d1
.org 0xbfc54
	ldr r1, [pc, #44]	@ 000bfc54 0b49
.org 0xbfc56
	bl 0x1cf00	@ 000bfc56 5df753f9
.org 0xbfc5a
	str r5, [r4, #96]	@ 000bfc5a 2566
.org 0xbfc5c
	strb r5, [r4, #18]	@ 000bfc5c a574
.org 0xbfc5e
	ldrb r0, [r4, #15]	@ 000bfc5e e07b
.org 0xbfc60
	adds r0, #1	@ 000bfc60 0130
.org 0xbfc62
	strb r0, [r4, #15]	@ 000bfc62 e073
.org 0xbfc64
	ldrb r0, [r6, #12]	@ 000bfc64 307b
.org 0xbfc66
	cmp r0, #1	@ 000bfc66 0128
.org 0xbfc68
	bls.n 0xbfc8c	@ 000bfc68 10d9
.org 0xbfc6a
	ldr r1, [pc, #28]	@ 000bfc6a 0749
.org 0xbfc6c
	ldrb r0, [r4, #9]	@ 000bfc6c 607a
.org 0xbfc6e
	lsls r0, r0, #2	@ 000bfc6e 8000
.org 0xbfc70
	adds r0, r0, r1	@ 000bfc70 4018
.org 0xbfc72
	movs r1, #2	@ 000bfc72 0221
.org 0xbfc74
	str r1, [r4, #12]	@ 000bfc74 e160
.org 0xbfc76
	ldr r0, [r0, #0]	@ 000bfc76 0068
.org 0xbfc78
	ldr r0, [r0, #8]	@ 000bfc78 8068
.org 0xbfc7a
	str r0, [r4, #20]	@ 000bfc7a 6061
.org 0xbfc7c
	adds r0, r4, #0	@ 000bfc7c 201c
.org 0xbfc7e
	bl 0xbff80	@ 000bfc7e 00f07ff9
.org 0xbfc82
	b.n 0xbfd0c	@ 000bfc82 43e0
.org 0xbfc84
	.byte 0x02,0x2d,0x00,0x00	@ 000bfc84 data
.org 0xbfc88
	.byte 0xf4,0x49,0x86,0x08	@ 000bfc88 data
.org 0xbfc8c
	adds r0, r4, #0	@ 000bfc8c 201c
.org 0xbfc8e
	bl 0x1cff0	@ 000bfc8e 5df7aff9
.org 0xbfc92
	ldr r0, [r4, #96]	@ 000bfc92 206e
.org 0xbfc94
	ldr r1, [pc, #124]	@ 000bfc94 1f49
.org 0xbfc96
	cmp r0, r1	@ 000bfc96 8842
.org 0xbfc98
	ble.n 0xbfca6	@ 000bfc98 05dd
.org 0xbfc9a
	subs r0, #32	@ 000bfc9a 2038
.org 0xbfc9c
	str r0, [r4, #96]	@ 000bfc9c 2066
.org 0xbfc9e
	cmp r0, r1	@ 000bfc9e 8842
.org 0xbfca0
	bge.n 0xbfca4	@ 000bfca0 00da
.org 0xbfca2
	str r1, [r4, #96]	@ 000bfca2 2166
.org 0xbfca4
	movs r7, #0	@ 000bfca4 0027
.org 0xbfca6
	ldr r1, [r4, #88]	@ 000bfca6 a16d
.org 0xbfca8
	ldr r0, [r4, #96]	@ 000bfca8 206e
.org 0xbfcaa
	adds r2, r1, r0	@ 000bfcaa 0a18
.org 0xbfcac
	str r2, [r4, #88]	@ 000bfcac a265
.org 0xbfcae
	ldrb r0, [r4, #18]	@ 000bfcae a07c
.org 0xbfcb0
	adds r0, #1	@ 000bfcb0 0130
.org 0xbfcb2
	strb r0, [r4, #18]	@ 000bfcb2 a074
.org 0xbfcb4
	movs r1, #255	@ 000bfcb4 ff21
.org 0xbfcb6
	ands r0, r1	@ 000bfcb6 0840
.org 0xbfcb8
	movs r1, #3	@ 000bfcb8 0321
.org 0xbfcba
	ands r0, r1	@ 000bfcba 0840
.org 0xbfcbc
	cmp r0, #0	@ 000bfcbc 0028
.org 0xbfcbe
	bne.n 0xbfcf2	@ 000bfcbe 18d1
.org 0xbfcc0
	cmp r7, #0	@ 000bfcc0 002f
.org 0xbfcc2
	beq.n 0xbfcf2	@ 000bfcc2 16d0
.org 0xbfcc4
	ldr r0, [r4, #84]	@ 000bfcc4 606d
.org 0xbfcc6
	str r0, [sp, #0]	@ 000bfcc6 0090
.org 0xbfcc8
	movs r1, #224	@ 000bfcc8 e021
.org 0xbfcca
	lsls r1, r1, #5	@ 000bfcca 4901
.org 0xbfccc
	adds r0, r2, r1	@ 000bfccc 5018
.org 0xbfcce
	str r0, [sp, #4]	@ 000bfcce 0190
.org 0xbfcd0
	movs r0, #3	@ 000bfcd0 0320
.org 0xbfcd2
	mov r1, sp	@ 000bfcd2 6946
.org 0xbfcd4
	bl 0xd0c88	@ 000bfcd4 10f0d8ff
.org 0xbfcd8
	adds r2, r0, #0	@ 000bfcd8 021c
.org 0xbfcda
	cmp r2, #0	@ 000bfcda 002a
.org 0xbfcdc
	beq.n 0xbfcf2	@ 000bfcdc 09d0
.org 0xbfcde
	adds r3, r2, #0	@ 000bfcde 131c
.org 0xbfce0
	adds r3, #73	@ 000bfce0 4933
.org 0xbfce2
	ldrb r0, [r3, #0]	@ 000bfce2 1878
.org 0xbfce4
	movs r1, #12	@ 000bfce4 0c21
.org 0xbfce6
	orrs r0, r1	@ 000bfce6 0843
.org 0xbfce8
	strb r0, [r3, #0]	@ 000bfce8 1870
.org 0xbfcea
	adds r1, r2, #0	@ 000bfcea 111c
.org 0xbfcec
	adds r1, #37	@ 000bfcec 2531
.org 0xbfcee
	movs r0, #28	@ 000bfcee 1c20
.org 0xbfcf0
	strb r0, [r1, #0]	@ 000bfcf0 0870
.org 0xbfcf2
	adds r0, r4, #0	@ 000bfcf2 201c
.org 0xbfcf4
	adds r0, #180	@ 000bfcf4 b430
.org 0xbfcf6
	ldr r0, [r0, #0]	@ 000bfcf6 0068
.org 0xbfcf8
	ldr r1, [pc, #28]	@ 000bfcf8 0749
.org 0xbfcfa
	adds r0, r0, r1	@ 000bfcfa 4018
.org 0xbfcfc
	ldr r1, [r4, #88]	@ 000bfcfc a16d
.org 0xbfcfe
	cmp r1, r0	@ 000bfcfe 8142
.org 0xbfd00
	bge.n 0xbfd0c	@ 000bfd00 04da
.org 0xbfd02
	movs r1, #0	@ 000bfd02 0021
.org 0xbfd04
	movs r0, #1	@ 000bfd04 0120
.org 0xbfd06
	strb r0, [r4, #13]	@ 000bfd06 6073
.org 0xbfd08
	strb r1, [r4, #14]	@ 000bfd08 a173
.org 0xbfd0a
	strb r1, [r4, #15]	@ 000bfd0a e173
