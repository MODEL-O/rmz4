@ FUN_080cbdf0  entry 0x080cbdf0  size 150
.thumb
.org 0xcbdf0
FUN_080cbdf0:
	push {r4, lr}	@ 000cbdf0 10b5
.org 0xcbdf2
	sub sp, #8	@ 000cbdf2 82b0
.org 0xcbdf4
	adds r4, r0, #0	@ 000cbdf4 041c
.org 0xcbdf6
	ldr r1, [pc, #144]	@ 000cbdf6 2449
.org 0xcbdf8
	mov r0, sp	@ 000cbdf8 6846
.org 0xcbdfa
	movs r2, #6	@ 000cbdfa 0622
.org 0xcbdfc
	bl 0x129258	@ 000cbdfc 5df02cfa
.org 0xcbe00
	ldrb r0, [r4, #15]	@ 000cbe00 e07b
.org 0xcbe02
	cmp r0, #0	@ 000cbe02 0028
.org 0xcbe04
	bne.n 0xcbe1a	@ 000cbe04 09d1
.org 0xcbe06
	ldr r0, [pc, #132]	@ 000cbe06 2148
.org 0xcbe08
	bl 0x2b10	@ 000cbe08 36f782fe
.org 0xcbe0c
	ldr r1, [pc, #128]	@ 000cbe0c 2049
.org 0xcbe0e
	adds r0, r4, #0	@ 000cbe0e 201c
.org 0xcbe10
	bl 0x1cf00	@ 000cbe10 51f776f8
.org 0xcbe14
	ldrb r0, [r4, #15]	@ 000cbe14 e07b
.org 0xcbe16
	adds r0, #1	@ 000cbe16 0130
.org 0xcbe18
	strb r0, [r4, #15]	@ 000cbe18 e073
.org 0xcbe1a
	adds r0, r4, #0	@ 000cbe1a 201c
.org 0xcbe1c
	bl 0x1cff0	@ 000cbe1c 51f7e8f8
.org 0xcbe20
	adds r0, r4, #0	@ 000cbe20 201c
.org 0xcbe22
	adds r0, #116	@ 000cbe22 7430
.org 0xcbe24
	adds r1, r4, #0	@ 000cbe24 211c
.org 0xcbe26
	adds r1, #113	@ 000cbe26 7131
.org 0xcbe28
	ldrb r1, [r1, #0]	@ 000cbe28 0978
.org 0xcbe2a
	lsls r1, r1, #24	@ 000cbe2a 0906
.org 0xcbe2c
	asrs r1, r1, #24	@ 000cbe2c 0916
.org 0xcbe2e
	add r1, sp	@ 000cbe2e 6944
.org 0xcbe30
	ldrb r2, [r1, #0]	@ 000cbe30 0a78
.org 0xcbe32
	lsls r1, r2, #1	@ 000cbe32 5100
.org 0xcbe34
	adds r1, r1, r2	@ 000cbe34 8918
.org 0xcbe36
	lsls r1, r1, #3	@ 000cbe36 c900
.org 0xcbe38
	ldr r2, [pc, #88]	@ 000cbe38 164a
.org 0xcbe3a
	adds r1, r1, r2	@ 000cbe3a 8918
.org 0xcbe3c
	bl 0x5784	@ 000cbe3c 39f7a2fc
.org 0xcbe40
	adds r0, r4, #0	@ 000cbe40 201c
.org 0xcbe42
	adds r0, #115	@ 000cbe42 7330
.org 0xcbe44
	ldrb r3, [r0, #0]	@ 000cbe44 0378
.org 0xcbe46
	cmp r3, #3	@ 000cbe46 032b
.org 0xcbe48
	bne.n 0xcbe7e	@ 000cbe48 19d1
.org 0xcbe4a
	ldrb r1, [r4, #10]	@ 000cbe4a a17a
.org 0xcbe4c
	movs r0, #254	@ 000cbe4c fe20
.org 0xcbe4e
	ands r0, r1	@ 000cbe4e 0840
.org 0xcbe50
	movs r2, #0	@ 000cbe50 0022
.org 0xcbe52
	movs r1, #253	@ 000cbe52 fd21
.org 0xcbe54
	ands r0, r1	@ 000cbe54 0840
.org 0xcbe56
	strb r0, [r4, #10]	@ 000cbe56 a072
.org 0xcbe58
	adds r0, r4, #0	@ 000cbe58 201c
.org 0xcbe5a
	adds r0, #140	@ 000cbe5a 8c30
.org 0xcbe5c
	str r2, [r0, #0]	@ 000cbe5c 0260
.org 0xcbe5e
	adds r0, #4	@ 000cbe5e 0430
.org 0xcbe60
	str r2, [r0, #0]	@ 000cbe60 0260
.org 0xcbe62
	adds r0, #4	@ 000cbe62 0430
.org 0xcbe64
	strb r2, [r0, #0]	@ 000cbe64 0270
.org 0xcbe66
	ldrb r1, [r4, #10]	@ 000cbe66 a17a
.org 0xcbe68
	movs r0, #251	@ 000cbe68 fb20
.org 0xcbe6a
	ands r0, r1	@ 000cbe6a 0840
.org 0xcbe6c
	strb r0, [r4, #10]	@ 000cbe6c a072
.org 0xcbe6e
	ldr r1, [pc, #40]	@ 000cbe6e 0a49
.org 0xcbe70
	ldrb r0, [r4, #9]	@ 000cbe70 607a
.org 0xcbe72
	lsls r0, r0, #2	@ 000cbe72 8000
.org 0xcbe74
	adds r0, r0, r1	@ 000cbe74 4018
.org 0xcbe76
	str r3, [r4, #12]	@ 000cbe76 e360
.org 0xcbe78
	ldr r0, [r0, #0]	@ 000cbe78 0068
.org 0xcbe7a
	ldr r0, [r0, #12]	@ 000cbe7a c068
.org 0xcbe7c
	str r0, [r4, #20]	@ 000cbe7c 6061
.org 0xcbe7e
	add sp, #8	@ 000cbe7e 02b0
.org 0xcbe80
	pop {r4}	@ 000cbe80 10bc
.org 0xcbe82
	pop {r0}	@ 000cbe82 01bc
.org 0xcbe84
	bx r0	@ 000cbe84 0047
