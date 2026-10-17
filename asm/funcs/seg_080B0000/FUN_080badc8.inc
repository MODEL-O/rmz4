@ FUN_080badc8  entry 0x080badc8  size 132
.thumb
.org 0xbadc8
FUN_080badc8:
	push {r4, r5, r6, r7, lr}	@ 000badc8 f0b5
.org 0xbadca
	mov r7, r8	@ 000badca 4746
.org 0xbadcc
	push {r7}	@ 000badcc 80b4
.org 0xbadce
	adds r4, r0, #0	@ 000badce 041c
.org 0xbadd0
	ldr r0, [r4, #40]	@ 000badd0 a06a
.org 0xbadd2
	ldr r6, [r0, #40]	@ 000badd2 866a
.org 0xbadd4
	ldrb r0, [r4, #10]	@ 000badd4 a07a
.org 0xbadd6
	lsrs r5, r0, #4	@ 000badd6 0509
.org 0xbadd8
	movs r0, #1	@ 000badd8 0120
.org 0xbadda
	mov r8, r0	@ 000badda 8046
.org 0xbaddc
	ands r5, r0	@ 000baddc 0540
.org 0xbadde
	adds r7, r5, #0	@ 000badde 2f1c
.org 0xbade0
	ldrb r0, [r4, #15]	@ 000bade0 e07b
.org 0xbade2
	cmp r0, #0	@ 000bade2 0028
.org 0xbade4
	bne.n 0xbae1c	@ 000bade4 1ad1
.org 0xbade6
	adds r0, r4, #0	@ 000bade6 201c
.org 0xbade8
	adds r0, #116	@ 000bade8 7430
.org 0xbadea
	ldr r1, [pc, #96]	@ 000badea 1849
.org 0xbadec
	bl 0x5784	@ 000badec 4af7cafc
.org 0xbadf0
	ldr r1, [pc, #92]	@ 000badf0 1749
.org 0xbadf2
	adds r0, r4, #0	@ 000badf2 201c
.org 0xbadf4
	bl 0x1cf00	@ 000badf4 62f784f8
.org 0xbadf8
	lsls r0, r5, #1	@ 000badf8 6800
.org 0xbadfa
	subs r0, #1	@ 000badfa 0138
.org 0xbadfc
	lsls r1, r0, #1	@ 000badfc 4100
.org 0xbadfe
	adds r1, r1, r0	@ 000badfe 0918
.org 0xbae00
	lsls r0, r1, #8	@ 000bae00 0802
.org 0xbae02
	str r0, [r4, #92]	@ 000bae02 e065
.org 0xbae04
	adds r0, r6, #0	@ 000bae04 301c
.org 0xbae06
	adds r0, #180	@ 000bae06 b430
.org 0xbae08
	lsls r1, r1, #13	@ 000bae08 4903
.org 0xbae0a
	movs r2, #240	@ 000bae0a f022
.org 0xbae0c
	lsls r2, r2, #7	@ 000bae0c d201
.org 0xbae0e
	adds r1, r1, r2	@ 000bae0e 8918
.org 0xbae10
	ldr r0, [r0, #0]	@ 000bae10 0068
.org 0xbae12
	adds r0, r0, r1	@ 000bae12 4018
.org 0xbae14
	str r0, [r4, #104]	@ 000bae14 a066
.org 0xbae16
	ldrb r0, [r4, #15]	@ 000bae16 e07b
.org 0xbae18
	adds r0, #1	@ 000bae18 0130
.org 0xbae1a
	strb r0, [r4, #15]	@ 000bae1a e073
.org 0xbae1c
	adds r0, r4, #0	@ 000bae1c 201c
.org 0xbae1e
	bl 0x1d134	@ 000bae1e 62f789f9
.org 0xbae22
	ldr r1, [r4, #84]	@ 000bae22 616d
.org 0xbae24
	ldr r0, [r4, #92]	@ 000bae24 e06d
.org 0xbae26
	adds r1, r1, r0	@ 000bae26 0918
.org 0xbae28
	str r1, [r4, #84]	@ 000bae28 6165
.org 0xbae2a
	ldr r0, [r4, #104]	@ 000bae2a a06e
.org 0xbae2c
	subs r1, r1, r0	@ 000bae2c 091a
.org 0xbae2e
	lsls r0, r7, #1	@ 000bae2e 7800
.org 0xbae30
	subs r0, #1	@ 000bae30 0138
.org 0xbae32
	muls r0, r1	@ 000bae32 4843
.org 0xbae34
	cmp r0, #0	@ 000bae34 0028
.org 0xbae36
	blt.n 0xbae42	@ 000bae36 04db
.org 0xbae38
	movs r0, #0	@ 000bae38 0020
.org 0xbae3a
	mov r1, r8	@ 000bae3a 4146
.org 0xbae3c
	strb r1, [r4, #13]	@ 000bae3c 6173
.org 0xbae3e
	strb r0, [r4, #14]	@ 000bae3e a073
.org 0xbae40
	strb r0, [r4, #15]	@ 000bae40 e073
.org 0xbae42
	pop {r3}	@ 000bae42 08bc
.org 0xbae44
	mov r8, r3	@ 000bae44 9846
.org 0xbae46
	pop {r4, r5, r6, r7}	@ 000bae46 f0bc
.org 0xbae48
	pop {r0}	@ 000bae48 01bc
.org 0xbae4a
	bx r0	@ 000bae4a 0047
