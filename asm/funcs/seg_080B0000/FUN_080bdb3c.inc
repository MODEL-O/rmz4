@ FUN_080bdb3c  entry 0x080bdb3c  size 292
.thumb
.org 0xbdb3c
FUN_080bdb3c:
	push {r4, r5, r6, r7, lr}	@ 000bdb3c f0b5
.org 0xbdb3e
	mov r7, sl	@ 000bdb3e 5746
.org 0xbdb40
	mov r6, r9	@ 000bdb40 4e46
.org 0xbdb42
	mov r5, r8	@ 000bdb42 4546
.org 0xbdb44
	push {r5, r6, r7}	@ 000bdb44 e0b4
.org 0xbdb46
	sub sp, #40	@ 000bdb46 8ab0
.org 0xbdb48
	adds r6, r0, #0	@ 000bdb48 061c
.org 0xbdb4a
	mov r1, sp	@ 000bdb4a 6946
.org 0xbdb4c
	ldr r0, [pc, #156]	@ 000bdb4c 2748
.org 0xbdb4e
	ldmia r0!, {r2, r3, r4}	@ 000bdb4e 1cc8
.org 0xbdb50
	stmia r1!, {r2, r3, r4}	@ 000bdb50 1cc1
.org 0xbdb52
	ldmia r0!, {r2, r3, r5}	@ 000bdb52 2cc8
.org 0xbdb54
	stmia r1!, {r2, r3, r5}	@ 000bdb54 2cc1
.org 0xbdb56
	add r4, sp, #24	@ 000bdb56 06ac
.org 0xbdb58
	mov sl, r4	@ 000bdb58 a246
.org 0xbdb5a
	ldr r1, [pc, #148]	@ 000bdb5a 2549
.org 0xbdb5c
	mov r0, sl	@ 000bdb5c 5046
.org 0xbdb5e
	movs r2, #6	@ 000bdb5e 0622
.org 0xbdb60
	bl 0x129258	@ 000bdb60 6bf07afb
.org 0xbdb64
	add r4, sp, #32	@ 000bdb64 08ac
.org 0xbdb66
	ldr r1, [pc, #140]	@ 000bdb66 2349
.org 0xbdb68
	adds r0, r4, #0	@ 000bdb68 201c
.org 0xbdb6a
	movs r2, #6	@ 000bdb6a 0622
.org 0xbdb6c
	bl 0x129258	@ 000bdb6c 6bf074fb
.org 0xbdb70
	ldrb r7, [r6, #17]	@ 000bdb70 777c
.org 0xbdb72
	ldr r1, [pc, #132]	@ 000bdb72 2149
.org 0xbdb74
	ldrb r0, [r6, #9]	@ 000bdb74 707a
.org 0xbdb76
	lsls r0, r0, #2	@ 000bdb76 8000
.org 0xbdb78
	adds r0, r0, r1	@ 000bdb78 4018
.org 0xbdb7a
	movs r1, #1	@ 000bdb7a 0121
.org 0xbdb7c
	str r1, [r6, #12]	@ 000bdb7c f160
.org 0xbdb7e
	ldr r0, [r0, #0]	@ 000bdb7e 0068
.org 0xbdb80
	ldr r0, [r0, #4]	@ 000bdb80 4068
.org 0xbdb82
	str r0, [r6, #20]	@ 000bdb82 7061
.org 0xbdb84
	ldrb r1, [r6, #10]	@ 000bdb84 b17a
.org 0xbdb86
	movs r0, #1	@ 000bdb86 0120
.org 0xbdb88
	movs r5, #0	@ 000bdb88 0025
.org 0xbdb8a
	mov r8, r5	@ 000bdb8a a846
.org 0xbdb8c
	orrs r0, r1	@ 000bdb8c 0843
.org 0xbdb8e
	movs r1, #2	@ 000bdb8e 0221
.org 0xbdb90
	orrs r0, r1	@ 000bdb90 0843
.org 0xbdb92
	strb r0, [r6, #10]	@ 000bdb92 b072
.org 0xbdb94
	ldr r0, [pc, #100]	@ 000bdb94 1948
.org 0xbdb96
	adds r0, r7, r0	@ 000bdb96 3818
.org 0xbdb98
	ldrb r0, [r0, #0]	@ 000bdb98 0078
.org 0xbdb9a
	adds r2, r0, #0	@ 000bdb9a 021c
.org 0xbdb9c
	ldr r3, [pc, #96]	@ 000bdb9c 184b
.org 0xbdb9e
	adds r0, #64	@ 000bdb9e 4030
.org 0xbdba0
	lsls r0, r0, #24	@ 000bdba0 0006
.org 0xbdba2
	lsrs r0, r0, #23	@ 000bdba2 c00d
.org 0xbdba4
	adds r0, r0, r3	@ 000bdba4 c018
.org 0xbdba6
	movs r5, #0	@ 000bdba6 0025
.org 0xbdba8
	ldrsh r1, [r0, r5]	@ 000bdba8 415f
.org 0xbdbaa
	lsls r0, r1, #3	@ 000bdbaa c800
.org 0xbdbac
	subs r0, r0, r1	@ 000bdbac 401a
.org 0xbdbae
	lsls r0, r0, #7	@ 000bdbae c001
.org 0xbdbb0
	mov r9, r4	@ 000bdbb0 a146
.org 0xbdbb2
	cmp r0, #0	@ 000bdbb2 0028
.org 0xbdbb4
	bge.n 0xbdbb8	@ 000bdbb4 00da
.org 0xbdbb6
	adds r0, #255	@ 000bdbb6 ff30
.org 0xbdbb8
	asrs r0, r0, #8	@ 000bdbb8 0012
.org 0xbdbba
	str r0, [r6, #92]	@ 000bdbba f065
.org 0xbdbbc
	lsls r0, r2, #1	@ 000bdbbc 5000
.org 0xbdbbe
	adds r0, r0, r3	@ 000bdbbe c018
.org 0xbdbc0
	movs r2, #0	@ 000bdbc0 0022
.org 0xbdbc2
	ldrsh r1, [r0, r2]	@ 000bdbc2 815e
.org 0xbdbc4
	lsls r0, r1, #3	@ 000bdbc4 c800
.org 0xbdbc6
	subs r0, r0, r1	@ 000bdbc6 401a
.org 0xbdbc8
	lsls r0, r0, #7	@ 000bdbc8 c001
.org 0xbdbca
	cmp r0, #0	@ 000bdbca 0028
.org 0xbdbcc
	bge.n 0xbdbd0	@ 000bdbcc 00da
.org 0xbdbce
	adds r0, #255	@ 000bdbce ff30
.org 0xbdbd0
	asrs r0, r0, #8	@ 000bdbd0 0012
.org 0xbdbd2
	str r0, [r6, #96]	@ 000bdbd2 3066
.org 0xbdbd4
	adds r0, r6, #0	@ 000bdbd4 301c
.org 0xbdbd6
	bl 0x1cc9c	@ 000bdbd6 5ff761f8
.org 0xbdbda
	mov r3, sl	@ 000bdbda 5346
.org 0xbdbdc
	adds r0, r3, r7	@ 000bdbdc d819
.org 0xbdbde
	ldrb r2, [r0, #0]	@ 000bdbde 0278
.org 0xbdbe0
	cmp r2, #0	@ 000bdbe0 002a
.org 0xbdbe2
	beq.n 0xbdc04	@ 000bdbe2 0fd0
.org 0xbdbe4
	ldrb r0, [r6, #10]	@ 000bdbe4 b07a
.org 0xbdbe6
	movs r1, #16	@ 000bdbe6 1021
.org 0xbdbe8
	orrs r0, r1	@ 000bdbe8 0843
.org 0xbdbea
	b.n 0xbdc0a	@ 000bdbea 0ee0
.org 0xbdbec
	.byte 0x88,0xa0,0x12,0x08	@ 000bdbec data
.org 0xbdbf0
	.byte 0xa0,0xa0,0x12,0x08	@ 000bdbf0 data
.org 0xbdbf4
	.byte 0xa6,0xa0,0x12,0x08	@ 000bdbf4 data
.org 0xbdbf8
	.byte 0xf4,0x49,0x86,0x08	@ 000bdbf8 data
.org 0xbdbfc
	.byte 0xdc,0x4c,0x86,0x08	@ 000bdbfc data
.org 0xbdc00
	.byte 0x0c,0x93,0x12,0x08	@ 000bdc00 data
.org 0xbdc04
	ldrb r1, [r6, #10]	@ 000bdc04 b17a
.org 0xbdc06
	movs r0, #239	@ 000bdc06 ef20
.org 0xbdc08
	ands r0, r1	@ 000bdc08 0840
.org 0xbdc0a
	strb r0, [r6, #10]	@ 000bdc0a b072
.org 0xbdc0c
	movs r1, #1	@ 000bdc0c 0121
.org 0xbdc0e
	ands r1, r2	@ 000bdc0e 1140
.org 0xbdc10
	adds r0, r6, #0	@ 000bdc10 301c
.org 0xbdc12
	adds r0, #76	@ 000bdc12 4c30
.org 0xbdc14
	movs r5, #0	@ 000bdc14 0025
.org 0xbdc16
	strb r1, [r0, #0]	@ 000bdc16 0170
.org 0xbdc18
	adds r3, r6, #0	@ 000bdc18 331c
.org 0xbdc1a
	adds r3, #74	@ 000bdc1a 4a33
.org 0xbdc1c
	lsls r1, r1, #4	@ 000bdc1c 0901
.org 0xbdc1e
	ldrb r2, [r3, #0]	@ 000bdc1e 1a78
.org 0xbdc20
	movs r0, #17	@ 000bdc20 1120
.org 0xbdc22
	negs r0, r0	@ 000bdc22 4042
.org 0xbdc24
	ands r0, r2	@ 000bdc24 1040
.org 0xbdc26
	orrs r0, r1	@ 000bdc26 0843
.org 0xbdc28
	strb r0, [r3, #0]	@ 000bdc28 1870
.org 0xbdc2a
	lsls r0, r7, #2	@ 000bdc2a b800
.org 0xbdc2c
	add r0, sp	@ 000bdc2c 6844
.org 0xbdc2e
	ldrh r1, [r0, #0]	@ 000bdc2e 0188
.org 0xbdc30
	adds r0, r6, #0	@ 000bdc30 301c
.org 0xbdc32
	bl 0x1cf00	@ 000bdc32 5ff765f9
.org 0xbdc36
	ldrb r1, [r6, #10]	@ 000bdc36 b17a
.org 0xbdc38
	movs r0, #4	@ 000bdc38 0420
.org 0xbdc3a
	orrs r0, r1	@ 000bdc3a 0843
.org 0xbdc3c
	strb r0, [r6, #10]	@ 000bdc3c b072
.org 0xbdc3e
	adds r4, r6, #0	@ 000bdc3e 341c
.org 0xbdc40
	adds r4, #116	@ 000bdc40 7434
.org 0xbdc42
	mov r1, r9	@ 000bdc42 4946
.org 0xbdc44
	adds r0, r1, r7	@ 000bdc44 c819
.org 0xbdc46
	ldrb r0, [r0, #0]	@ 000bdc46 0078
.org 0xbdc48
	lsls r1, r0, #1	@ 000bdc48 4100
.org 0xbdc4a
	adds r1, r1, r0	@ 000bdc4a 0918
.org 0xbdc4c
	lsls r1, r1, #3	@ 000bdc4c c900
.org 0xbdc4e
	ldr r0, [pc, #40]	@ 000bdc4e 0a48
.org 0xbdc50
	adds r1, r1, r0	@ 000bdc50 0918
.org 0xbdc52
	adds r2, r6, #0	@ 000bdc52 321c
.org 0xbdc54
	adds r2, #84	@ 000bdc54 5432
.org 0xbdc56
	adds r0, r4, #0	@ 000bdc56 201c
.org 0xbdc58
	movs r3, #64	@ 000bdc58 4023
.org 0xbdc5a
	bl 0x5760	@ 000bdc5a 47f781fd
.org 0xbdc5e
	str r6, [r4, #44]	@ 000bdc5e e662
