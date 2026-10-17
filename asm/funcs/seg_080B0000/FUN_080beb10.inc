@ FUN_080beb10  entry 0x080beb10  size 196
.thumb
.org 0xbeb10
FUN_080beb10:
	push {r4, r5, r6, r7, lr}	@ 000beb10 f0b5
.org 0xbeb12
	mov r7, r8	@ 000beb12 4746
.org 0xbeb14
	push {r7}	@ 000beb14 80b4
.org 0xbeb16
	adds r4, r0, #0	@ 000beb16 041c
.org 0xbeb18
	adds r0, #180	@ 000beb18 b430
.org 0xbeb1a
	ldr r6, [r0, #0]	@ 000beb1a 0668
.org 0xbeb1c
	ldr r0, [pc, #120]	@ 000beb1c 1e48
.org 0xbeb1e
	mov r8, r0	@ 000beb1e 8046
.org 0xbeb20
	ldr r5, [r0, #0]	@ 000beb20 0568
.org 0xbeb22
	movs r7, #0	@ 000beb22 0027
.org 0xbeb24
	ldrb r0, [r4, #15]	@ 000beb24 e07b
.org 0xbeb26
	cmp r0, #0	@ 000beb26 0028
.org 0xbeb28
	bne.n 0xbeb44	@ 000beb28 0cd1
.org 0xbeb2a
	ldr r0, [pc, #112]	@ 000beb2a 1c48
.org 0xbeb2c
	bl 0x2b10	@ 000beb2c 43f7f0ff
.org 0xbeb30
	adds r0, r4, #0	@ 000beb30 201c
.org 0xbeb32
	adds r0, #116	@ 000beb32 7430
.org 0xbeb34
	ldr r1, [pc, #104]	@ 000beb34 1a49
.org 0xbeb36
	bl 0x5784	@ 000beb36 46f725fe
.org 0xbeb3a
	movs r0, #255	@ 000beb3a ff20
.org 0xbeb3c
	str r0, [r4, #100]	@ 000beb3c 6066
.org 0xbeb3e
	ldrb r0, [r4, #15]	@ 000beb3e e07b
.org 0xbeb40
	adds r0, #1	@ 000beb40 0130
.org 0xbeb42
	strb r0, [r4, #15]	@ 000beb42 e073
.org 0xbeb44
	ldr r0, [r4, #100]	@ 000beb44 606e
.org 0xbeb46
	subs r1, r0, #1	@ 000beb46 411e
.org 0xbeb48
	str r1, [r4, #100]	@ 000beb48 6166
.org 0xbeb4a
	ldrb r0, [r6, #12]	@ 000beb4a 307b
.org 0xbeb4c
	cmp r0, #1	@ 000beb4c 0128
.org 0xbeb4e
	bhi.n 0xbeb7c	@ 000beb4e 15d8
.org 0xbeb50
	cmp r1, #0	@ 000beb50 0029
.org 0xbeb52
	ble.n 0xbeb7c	@ 000beb52 13dd
.org 0xbeb54
	adds r0, r4, #0	@ 000beb54 201c
.org 0xbeb56
	adds r0, #140	@ 000beb56 8c30
.org 0xbeb58
	ldr r0, [r0, #0]	@ 000beb58 0068
.org 0xbeb5a
	movs r1, #128	@ 000beb5a 8021
.org 0xbeb5c
	lsls r1, r1, #4	@ 000beb5c 0901
.org 0xbeb5e
	ands r0, r1	@ 000beb5e 0840
.org 0xbeb60
	cmp r0, #0	@ 000beb60 0028
.org 0xbeb62
	beq.n 0xbeb7c	@ 000beb62 0bd0
.org 0xbeb64
	cmp r5, #0	@ 000beb64 002d
.org 0xbeb66
	beq.n 0xbeb7c	@ 000beb66 09d0
.org 0xbeb68
	adds r0, r5, #0	@ 000beb68 281c
.org 0xbeb6a
	adds r0, #140	@ 000beb6a 8c30
.org 0xbeb6c
	ldr r0, [r0, #0]	@ 000beb6c 0068
.org 0xbeb6e
	movs r2, #1	@ 000beb6e 0122
.org 0xbeb70
	ands r0, r2	@ 000beb70 1040
.org 0xbeb72
	cmp r0, #0	@ 000beb72 0028
.org 0xbeb74
	beq.n 0xbeb78	@ 000beb74 00d0
.org 0xbeb76
	movs r7, #1	@ 000beb76 0127
.org 0xbeb78
	cmp r7, #0	@ 000beb78 002f
.org 0xbeb7a
	beq.n 0xbeba8	@ 000beb7a 15d0
.org 0xbeb7c
	ldr r1, [pc, #36]	@ 000beb7c 0949
.org 0xbeb7e
	ldrb r0, [r4, #9]	@ 000beb7e 607a
.org 0xbeb80
	lsls r0, r0, #2	@ 000beb80 8000
.org 0xbeb82
	adds r0, r0, r1	@ 000beb82 4018
.org 0xbeb84
	movs r1, #2	@ 000beb84 0221
.org 0xbeb86
	str r1, [r4, #12]	@ 000beb86 e160
.org 0xbeb88
	ldr r0, [r0, #0]	@ 000beb88 0068
.org 0xbeb8a
	ldr r0, [r0, #8]	@ 000beb8a 8068
.org 0xbeb8c
	str r0, [r4, #20]	@ 000beb8c 6061
.org 0xbeb8e
	adds r0, r4, #0	@ 000beb8e 201c
.org 0xbeb90
	bl 0xbebf0	@ 000beb90 00f02ef8
.org 0xbeb94
	b.n 0xbebe2	@ 000beb94 25e0
.org 0xbeb96
	.byte 0x00	@ 000beb96 data
.org 0xbeb97
	.byte 0x00	@ 000beb97 data
.org 0xbeb98
	.byte 0xf0,0xdb,0x02,0x02	@ 000beb98 data
.org 0xbeb9c
	.byte 0x73,0x01,0x00,0x00	@ 000beb9c data
.org 0xbeba0
	.byte 0x6c,0x4e,0x86,0x08	@ 000beba0 data
.org 0xbeba4
	.byte 0xf4,0x49,0x86,0x08	@ 000beba4 data
.org 0xbeba8
	mov r1, r8	@ 000beba8 4146
.org 0xbebaa
	ldr r0, [r1, #0]	@ 000bebaa 0868
.org 0xbebac
	ldr r1, [r0, #84]	@ 000bebac 416d
.org 0xbebae
	str r1, [r4, #84]	@ 000bebae 6165
.org 0xbebb0
	ldr r0, [r0, #88]	@ 000bebb0 806d
.org 0xbebb2
	str r0, [r4, #88]	@ 000bebb2 a065
.org 0xbebb4
	ldr r1, [pc, #24]	@ 000bebb4 0649
.org 0xbebb6
	adds r0, r5, r1	@ 000bebb6 6818
.org 0xbebb8
	strb r2, [r0, #0]	@ 000bebb8 0270
.org 0xbebba
	adds r1, #1	@ 000bebba 0131
.org 0xbebbc
	adds r0, r5, r1	@ 000bebbc 6818
.org 0xbebbe
	strb r7, [r0, #0]	@ 000bebbe 0770
.org 0xbebc0
	ldr r1, [r4, #100]	@ 000bebc0 616e
.org 0xbebc2
	cmp r1, #59	@ 000bebc2 3b29
.org 0xbebc4
	bgt.n 0xbebdc	@ 000bebc4 0adc
.org 0xbebc6
	cmp r1, #29	@ 000bebc6 1d29
.org 0xbebc8
	ble.n 0xbebd4	@ 000bebc8 04dd
.org 0xbebca
	movs r0, #3	@ 000bebca 0320
.org 0xbebcc
	b.n 0xbebd6	@ 000bebcc 03e0
.org 0xbebce
	.byte 0x00	@ 000bebce data
.org 0xbebcf
	.byte 0x00	@ 000bebcf data
.org 0xbebd0
	.byte 0x71,0x01,0x00,0x00	@ 000bebd0 data
