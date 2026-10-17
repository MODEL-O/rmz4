@ FUN_080aeb54  entry 0x080aeb54  size 82
.thumb
.org 0xaeb54
FUN_080aeb54:
	push {lr}	@ 000aeb54 00b5
.org 0xaeb56
	adds r2, r0, #0	@ 000aeb56 021c
.org 0xaeb58
	ldr r0, [r2, #40]	@ 000aeb58 906a
.org 0xaeb5a
	adds r0, #215	@ 000aeb5a d730
.org 0xaeb5c
	ldrb r1, [r0, #0]	@ 000aeb5c 0178
.org 0xaeb5e
	adds r1, #1	@ 000aeb5e 0131
.org 0xaeb60
	strb r1, [r0, #0]	@ 000aeb60 0170
.org 0xaeb62
	ldrb r0, [r2, #13]	@ 000aeb62 507b
.org 0xaeb64
	cmp r0, #0	@ 000aeb64 0028
.org 0xaeb66
	beq.n 0xaeb98	@ 000aeb66 17d0
.org 0xaeb68
	adds r0, r2, #0	@ 000aeb68 101c
.org 0xaeb6a
	adds r0, #140	@ 000aeb6a 8c30
.org 0xaeb6c
	ldr r0, [r0, #0]	@ 000aeb6c 0068
.org 0xaeb6e
	movs r1, #128	@ 000aeb6e 8021
.org 0xaeb70
	lsls r1, r1, #2	@ 000aeb70 8900
.org 0xaeb72
	ands r0, r1	@ 000aeb72 0840
.org 0xaeb74
	cmp r0, #0	@ 000aeb74 0028
.org 0xaeb76
	beq.n 0xaeb98	@ 000aeb76 0fd0
.org 0xaeb78
	ldr r1, [pc, #24]	@ 000aeb78 0649
.org 0xaeb7a
	ldrb r0, [r2, #9]	@ 000aeb7a 507a
.org 0xaeb7c
	lsls r0, r0, #2	@ 000aeb7c 8000
.org 0xaeb7e
	adds r0, r0, r1	@ 000aeb7e 4018
.org 0xaeb80
	movs r1, #2	@ 000aeb80 0221
.org 0xaeb82
	str r1, [r2, #12]	@ 000aeb82 d160
.org 0xaeb84
	ldr r0, [r0, #0]	@ 000aeb84 0068
.org 0xaeb86
	ldr r0, [r0, #8]	@ 000aeb86 8068
.org 0xaeb88
	str r0, [r2, #20]	@ 000aeb88 5061
.org 0xaeb8a
	adds r0, r2, #0	@ 000aeb8a 101c
.org 0xaeb8c
	bl 0xaebb0	@ 000aeb8c 00f010f8
.org 0xaeb90
	b.n 0xaeba8	@ 000aeb90 0ae0
.org 0xaeb92
	.byte 0x00	@ 000aeb92 data
.org 0xaeb93
	.byte 0x00	@ 000aeb93 data
.org 0xaeb94
	.byte 0x40,0xdb,0x85,0x08	@ 000aeb94 data
.org 0xaeb98
	ldr r0, [pc, #16]	@ 000aeb98 0448
.org 0xaeb9a
	ldrb r1, [r2, #13]	@ 000aeb9a 517b
.org 0xaeb9c
	lsls r1, r1, #2	@ 000aeb9c 8900
.org 0xaeb9e
	adds r1, r1, r0	@ 000aeb9e 0918
.org 0xaeba0
	ldr r1, [r1, #0]	@ 000aeba0 0968
.org 0xaeba2
	adds r0, r2, #0	@ 000aeba2 101c
.org 0xaeba4
	bl 0x128f80	@ 000aeba4 7af0ecf9
