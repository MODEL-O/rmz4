@ FUN_080cce64  entry 0x080cce64  size 188
.thumb
.org 0xcce64
FUN_080cce64:
	push {r4, r5, r6, r7, lr}	@ 000cce64 f0b5
.org 0xcce66
	mov r7, r8	@ 000cce66 4746
.org 0xcce68
	push {r7}	@ 000cce68 80b4
.org 0xcce6a
	adds r6, r0, #0	@ 000cce6a 061c
.org 0xcce6c
	bl 0x1cff0	@ 000cce6c 50f7c0f8
.org 0xcce70
	ldrb r7, [r6, #13]	@ 000cce70 777b
.org 0xcce72
	cmp r7, #0	@ 000cce72 002f
.org 0xcce74
	bne.n 0xccf08	@ 000cce74 48d1
.org 0xcce76
	movs r0, #140	@ 000cce76 8c20
.org 0xcce78
	adds r0, r0, r6	@ 000cce78 8019
.org 0xcce7a
	mov r8, r0	@ 000cce7a 8046
.org 0xcce7c
	ldr r0, [r0, #0]	@ 000cce7c 0068
.org 0xcce7e
	movs r1, #1	@ 000cce7e 0121
.org 0xcce80
	mov ip, r1	@ 000cce80 8c46
.org 0xcce82
	ands r0, r1	@ 000cce82 0840
.org 0xcce84
	cmp r0, #0	@ 000cce84 0028
.org 0xcce86
	beq.n 0xccf26	@ 000cce86 4ed0
.org 0xcce88
	ldr r3, [pc, #108]	@ 000cce88 1b4b
.org 0xcce8a
	ldr r5, [pc, #112]	@ 000cce8a 1c4d
.org 0xcce8c
	ldrb r0, [r6, #16]	@ 000cce8c 307c
.org 0xcce8e
	lsls r0, r0, #2	@ 000cce8e 8000
.org 0xcce90
	adds r0, r0, r5	@ 000cce90 4019
.org 0xcce92
	ldr r1, [r0, #0]	@ 000cce92 0168
.org 0xcce94
	lsrs r2, r1, #3	@ 000cce94 ca08
.org 0xcce96
	adds r3, #4	@ 000cce96 0433
.org 0xcce98
	adds r2, r2, r3	@ 000cce98 d218
.org 0xcce9a
	movs r4, #7	@ 000cce9a 0724
.org 0xcce9c
	ands r1, r4	@ 000cce9c 2140
.org 0xcce9e
	mov r0, ip	@ 000cce9e 6046
.org 0xccea0
	lsls r0, r1	@ 000ccea0 8840
.org 0xccea2
	ldrb r1, [r2, #0]	@ 000ccea2 1178
.org 0xccea4
	orrs r0, r1	@ 000ccea4 0843
.org 0xccea6
	strb r0, [r2, #0]	@ 000ccea6 1070
.org 0xccea8
	ldr r3, [pc, #84]	@ 000ccea8 154b
.org 0xcceaa
	ldrb r0, [r6, #16]	@ 000cceaa 307c
.org 0xcceac
	lsls r0, r0, #2	@ 000cceac 8000
.org 0xcceae
	adds r0, r0, r5	@ 000cceae 4019
.org 0xcceb0
	ldr r1, [r0, #0]	@ 000cceb0 0168
.org 0xcceb2
	lsrs r2, r1, #3	@ 000cceb2 ca08
.org 0xcceb4
	adds r2, r2, r3	@ 000cceb4 d218
.org 0xcceb6
	ands r1, r4	@ 000cceb6 2140
.org 0xcceb8
	mov r0, ip	@ 000cceb8 6046
.org 0xcceba
	lsls r0, r1	@ 000cceba 8840
.org 0xccebc
	ldrb r1, [r2, #0]	@ 000ccebc 1178
.org 0xccebe
	orrs r0, r1	@ 000ccebe 0843
.org 0xccec0
	strb r0, [r2, #0]	@ 000ccec0 1070
.org 0xccec2
	ldr r1, [pc, #64]	@ 000ccec2 1049
.org 0xccec4
	adds r0, r6, #0	@ 000ccec4 301c
.org 0xccec6
	bl 0x1cf00	@ 000ccec6 50f71bf8
.org 0xcceca
	mov r0, r8	@ 000cceca 4046
.org 0xccecc
	str r7, [r0, #0]	@ 000ccecc 0760
.org 0xccece
	adds r0, r6, #0	@ 000ccece 301c
.org 0xcced0
	adds r0, #144	@ 000cced0 9030
.org 0xcced2
	str r7, [r0, #0]	@ 000cced2 0760
.org 0xcced4
	adds r0, #4	@ 000cced4 0430
.org 0xcced6
	strb r7, [r0, #0]	@ 000cced6 0770
.org 0xcced8
	ldrb r1, [r6, #10]	@ 000cced8 b17a
.org 0xcceda
	movs r0, #251	@ 000cceda fb20
.org 0xccedc
	ands r0, r1	@ 000ccedc 0840
.org 0xccede
	movs r1, #254	@ 000ccede fe21
.org 0xccee0
	ands r0, r1	@ 000ccee0 0840
.org 0xccee2
	strb r0, [r6, #10]	@ 000ccee2 b072
.org 0xccee4
	movs r0, #150	@ 000ccee4 9620
.org 0xccee6
	lsls r0, r0, #1	@ 000ccee6 4000
.org 0xccee8
	str r0, [r6, #100]	@ 000ccee8 7066
.org 0xcceea
	adds r0, #5	@ 000cceea 0530
.org 0xcceec
	bl 0x2b10	@ 000cceec 35f710fe
.org 0xccef0
	ldrb r0, [r6, #13]	@ 000ccef0 707b
.org 0xccef2
	adds r0, #1	@ 000ccef2 0130
.org 0xccef4
	strb r0, [r6, #13]	@ 000ccef4 7073
.org 0xccef6
	b.n 0xccf26	@ 000ccef6 16e0
.org 0xccef8
	.byte 0xb0,0xe8,0x02,0x02	@ 000ccef8 data
.org 0xccefc
	.byte 0x9c,0x68,0x86,0x08	@ 000ccefc data
.org 0xccf00
	.byte 0x80,0x58,0x03,0x02	@ 000ccf00 data
.org 0xccf04
	.byte 0x01,0xbd,0x00,0x00	@ 000ccf04 data
.org 0xccf08
	ldr r0, [r6, #100]	@ 000ccf08 706e
.org 0xccf0a
	movs r1, #7	@ 000ccf0a 0721
.org 0xccf0c
	ands r0, r1	@ 000ccf0c 0840
.org 0xccf0e
	cmp r0, #0	@ 000ccf0e 0028
.org 0xccf10
	bne.n 0xccf20	@ 000ccf10 06d1
.org 0xccf12
	adds r0, r6, #0	@ 000ccf12 301c
.org 0xccf14
	adds r0, #84	@ 000ccf14 5430
.org 0xccf16
	ldr r1, [pc, #24]	@ 000ccf16 0649
.org 0xccf18
	movs r2, #0	@ 000ccf18 0022
.org 0xccf1a
	movs r3, #0	@ 000ccf1a 0023
.org 0xccf1c
	bl 0xd4c8c	@ 000ccf1c 07f0b6fe
