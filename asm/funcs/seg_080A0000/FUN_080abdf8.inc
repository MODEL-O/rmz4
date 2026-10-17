@ FUN_080abdf8  entry 0x080abdf8  size 78
.thumb
.org 0xabdf8
FUN_080abdf8:
	push {r4, lr}	@ 000abdf8 10b5
.org 0xabdfa
	mov ip, r0	@ 000abdfa 8446
.org 0xabdfc
	ldr r0, [pc, #72]	@ 000abdfc 1248
.org 0xabdfe
	movs r4, #0	@ 000abdfe 0024
.org 0xabe00
	movs r2, #0	@ 000abe00 0022
.org 0xabe02
	strh r2, [r0, #0]	@ 000abe02 0280
.org 0xabe04
	ldr r3, [pc, #68]	@ 000abe04 114b
.org 0xabe06
	ldrh r1, [r3, #0]	@ 000abe06 1988
.org 0xabe08
	ldr r0, [pc, #68]	@ 000abe08 1148
.org 0xabe0a
	ands r0, r1	@ 000abe0a 0840
.org 0xabe0c
	strh r0, [r3, #0]	@ 000abe0c 1880
.org 0xabe0e
	mov r0, ip	@ 000abe0e 6046
.org 0xabe10
	adds r0, #140	@ 000abe10 8c30
.org 0xabe12
	str r2, [r0, #0]	@ 000abe12 0260
.org 0xabe14
	adds r0, #4	@ 000abe14 0430
.org 0xabe16
	str r2, [r0, #0]	@ 000abe16 0260
.org 0xabe18
	adds r0, #4	@ 000abe18 0430
.org 0xabe1a
	strb r4, [r0, #0]	@ 000abe1a 0470
.org 0xabe1c
	mov r0, ip	@ 000abe1c 6046
.org 0xabe1e
	ldrb r1, [r0, #10]	@ 000abe1e 817a
.org 0xabe20
	movs r0, #251	@ 000abe20 fb20
.org 0xabe22
	ands r0, r1	@ 000abe22 0840
.org 0xabe24
	movs r1, #254	@ 000abe24 fe21
.org 0xabe26
	ands r0, r1	@ 000abe26 0840
.org 0xabe28
	mov r1, ip	@ 000abe28 6146
.org 0xabe2a
	strb r0, [r1, #10]	@ 000abe2a 8872
.org 0xabe2c
	ldr r1, [pc, #36]	@ 000abe2c 0949
.org 0xabe2e
	mov r2, ip	@ 000abe2e 6246
.org 0xabe30
	ldrb r0, [r2, #9]	@ 000abe30 507a
.org 0xabe32
	lsls r0, r0, #2	@ 000abe32 8000
.org 0xabe34
	adds r0, r0, r1	@ 000abe34 4018
.org 0xabe36
	movs r1, #4	@ 000abe36 0421
.org 0xabe38
	str r1, [r2, #12]	@ 000abe38 d160
.org 0xabe3a
	ldr r0, [r0, #0]	@ 000abe3a 0068
.org 0xabe3c
	ldr r0, [r0, #16]	@ 000abe3c 0069
.org 0xabe3e
	str r0, [r2, #20]	@ 000abe3e 5061
.org 0xabe40
	pop {r4}	@ 000abe40 10bc
.org 0xabe42
	pop {r0}	@ 000abe42 01bc
.org 0xabe44
	bx r0	@ 000abe44 0047
